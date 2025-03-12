//P10250 [GESP样题 六级] 下楼梯
//#include <iostream>
//using namespace std;
//typedef long long LL; 
//const int N = 65;
//
//int n;
//LL f[N];//第i个台阶下楼有几种方案
// 
//int main()
//{
//	cin >> n;
//	f[1] = 1, f[2] = 2, f[3] = 4;
//	for(int i = 4; i <= n; i++)
//	{
//		f[i] = f[i-1] + f[i-2] + f[i-3];
//	}
//	cout << f[n];
//	return 0;
//}


//P1216 [IOI 1994] 数字三角形 Number Triangles
//#include <iostream>
//using namespace std;
//
//const int N = 1010;
//int r, ret;
//int arr[N][N];
//int f[N][N];//从（1，1）走到（i，j）最大值 
//
//int main()
//{
//	cin >> r;
//	for(int i = 1; i <= r; i++)
//	{
//		for(int j = 1; j <= i; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	
//	f[1][1] = arr[1][1];
//	
//	for(int i = 1; i <= r; i++)
//	{
//		for(int j = 1; j <= i; j++)
//		{
//			f[i][j] = max(f[i-1][j-1], f[i-1][j]) + arr[i][j];
//			if(i == r && f[i][j] > ret)	ret = f[i][j];
//		}
//	}
//	
//	cout << ret;
//
//	return 0;
//}

#include <iostream>
using namespace std;

const int N = 1010;
int r, ret;
int arr[N][N];
int f[N];//空间优化 

int main()
{
	cin >> r;
	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cin >> arr[i][j];
		}
	}
		
	for(int i = 1; i <= r; i++)
	{
		for(int j = i; j >= 1; j--)
		{
			f[j] = max(f[j-1], f[j]) + arr[i][j];
			if(i == r && f[j] > ret)	ret = f[j];
		}
	}
	
	cout << ret;

	return 0;
}




