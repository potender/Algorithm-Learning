//B3637 最长上升子序列
//#include <iostream>
//using namespace std;
//const int N = 5010;
//
//int a[N],f[N];
//int n;
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)	cin >> a[i];
//	
//	int ret = 0; 
//	for(int i = 1; i <= n; i++)
//	{
//		f[i] = 1;
//		for(int j = 1; j < i; j++)
//		{
//			if(a[j] < a[i])
//				f[i] = max(f[i], f[j] + 1);
//		}
//		ret = max(ret, f[i]);
//	}
//	
//	cout << ret;
//	return 0;
//} 
 

////P1091 [NOIP 2004 提高组] 合唱队形
//#include <iostream> 
//using namespace std;
//const int N = 110;
//int n;
//int a[N];
//int f[N], g[N];//左面最长上升子序列，右边最长上升子序列 
//int main()
//{
//	cin >> n;
//	 
//	for(int i = 1; i <= n; i++)	cin >> a[i];
//	for(int i = 1; i <= n; i++)//以i为中心 
//	{
//		g[i] = 1, f[i] = 1;
//		for(int j = 1; j < i; j++)
//		{
//			if(a[j] < a[i])	f[i] = max(f[i], f[j]+1);
//		}	
//		 
//	}
//	for(int i = n; i >= 1; i--)
//	{
//		g[i] = 1;
//		for(int j = n; j > i; j--)
//		{
//			if(a[j] < a[i])		g[i] = max(g[i], g[j]+1);
//		} 
//	} 
//	int ret = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		ret = max(ret, f[i]+g[i]-1);
//	}
//	 cout << n-ret << endl;;
//	return 0;
//}




//牛客，NC235624， 牛可乐和最长公共子序列
#include <iostream>
using namespace std;
const int N = 5050;
string s,t;
int f[N][N];//字符s，1到i 和字符t，1到j的最长公共子序列 
int main()
{
	while(cin >> s >> t)
	{
		int ss = s.size(), tt = t.size(); 
		memset(f, 0, sizeof(f));
		for(int i = 1; i <= ss; i++)
		{
			for(int j = 1; j <= tt; j++)
			{
				if(s[i-1] == t[j-1])	f[i][j] = f[i-1][j-1] + 1;
				else 				f[i][j] = max(f[i-1][j], f[i][j-1]);	
			}
		} 
		
		cout << f[ss][tt] << endl;
	}
	return 0;
} 

