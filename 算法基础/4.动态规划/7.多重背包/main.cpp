//牛客，NC235950，多重背包
//#include <iostream>
//using namespace std;
//const int N = 110;
//int n, m;
//int w[N], v[N], x[N];
//int f[N];//1~i物品，最大体积为j，最大价值 
//
//int main() 
//{
// 	cin >> n >> m;
// 	for(int i = 1; i <= n; i++)	cin >> x[i] >> w[i] >> v[i];
// 	for(int i = 1; i <= n; i++)
// 	{
// 		for(int j = m; j >= 1; j--)
//		{
//		 	for(int k = 1; k <= x[i] && j >= k*w[i]; k++)
//			{
//				f[j] = max(f[j], f[j - k*w[i]] + k*v[i]);
//			}
//		}
//	}
//	cout << f[m] << endl;
//	return 0;
//}

//P1077 [NOIP 2012 普及组] 摆花
#include <iostream> 
using namespace std;
const int N = 110;
const int MOD = 1e6 + 7; 
int n, m;
int a[N];
int f[N][N];//1~i个花，最多j个盆的方案数
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)	cin >> a[i];
	f[0][0] = 1; 
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			for(int k = 0; k <= min(j, a[i]); k++)
			{
				f[i][j] = (f[i][j] + f[i-1][j-k]) % MOD;
			}
		}
	}
	cout << f[n][m] << endl;
	return 0;
}
