//牛客，NC226514，【模板】01背包
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 1010;
//int n, V;
//int f[N][N];//前i个物品，最大容积为j的最大价值， 前i个物品，容积为j的最大价值
//int w[N], v[N];
//
//int main()
//{
//	cin >> n >> V;
//	for(int i = 1; i <= n; i++)
//		cin >> v[i] >> w[i];
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 0; j <= V; j++)
//		{
//			f[i][j] = f[i-1][j]; 
//			if(j >= v[i])
//			{
//				f[i][j] = max(f[i-1][j], f[i-1][j-v[i]] + w[i]);
//			}
//		}
//	}
//	cout << f[n][V] << endl;
//	
//	memset(f, -0x3f, sizeof(f));
//	f[0][0] = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 0; j <= V; j++)
//		{
//			f[i][j] = f[i-1][j]; 
//			if(j >= v[i])
//			{
//				f[i][j] = max(f[i-1][j], f[i-1][j-v[i]] + w[i]);
//			}
//		}
//	}
//	if (f[n][V] >= 0)
//		cout << f[n][V] << endl;
//	else cout << 0 << endl;
//	return 0;
//}


//P1048 [NOIP 2005 普及组] 采药
//#include <iostream> 
//using namespace std;
//const int N = 1010;
//
//int T, M;
//int t[N], v[N];
//int f[N][N];//1~i个物品，时间最长为j的最多草药价值 
//
//int main()
//{
//	cin >> T >> M;
//	for(int i = 1; i <= M; i++)	cin >> t[i] >> v[i];
//	for(int i = 1; i <= M; i++)
//	{
//		for(int j = 0; j <= T; j++)
//		{
//			f[i][j] = f[i-1][j];
//			if(j >= t[i])
//				f[i][j] = max(f[i][j], f[i-1][j-t[i]] + v[i]);
//		}
//	}
//	cout << f[M][T] << endl;
//	return 0;
//}


//P1164 小A点菜
#include <iostream>
using namespace std;
const int N = 110, M = 1e4+10;
int n, m;
int a[N];//菜价 
int f[N][M];//1~i个菜中，花了j元的方案数 
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)		cin >> a[i];
	f[0][0] = 1;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			f[i][j] = f[i-1][j];
			if(j >= a[i])
				f[i][j] += f[i-1][j-a[i]]; 
		}
	}
	cout << f[n][m] << endl;
	return 0;
}



