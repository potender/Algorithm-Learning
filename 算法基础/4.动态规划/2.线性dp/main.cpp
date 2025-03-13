//P1192 台阶问题
//#include <iostream>
//using namespace std;
//
////typedef long long LL;
//const int N = 1e5 + 10, MOD = 1e5 + 3;
//int n, k;
//int f[N];//到达第i个台阶有多少种方式 
//
//int main()
//{
//	cin >> n >> k;
//	f[0] = 1;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= k && i >= j; j++)
//		{
//			f[i] = (f[i] + f[i-j]) % MOD; 
//		}
//	}
//	cout << f[n] % MOD << endl;
//	return 0;
//}


//P1115 最大子段和
//#include <iostream>
//using namespace std;
//const int N = 2e5 + 10;
//
//int n, ret = -1e9;
//int f[N];//第i个数为结尾的子数组最大值 
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		int x;	cin >> x;
//		f[i] = max(f[i-1] + x, x);
//		ret = max(ret, f[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}


//P1057 [NOIP 2008 普及组] 传球游戏
#include <iostream>
using namespace std;
const int N = 35;

int n, m;
int arr[N][N];//传递i次后第j个人的方案数 

int main()
{
	cin >> n >> m;
	arr[0][1] = 1;
	for(int i = 1; i <= m; i++)
	{
		arr[i][1] = arr[i-1][2] + arr[i-1][n];
		for(int j = 2; j < n; j++)
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j+1];
		arr[i][n] = arr[i-1][n-1] + arr[i-1][1]; 
	}
	cout << arr[m][1] << endl;
	return 0;
} 










