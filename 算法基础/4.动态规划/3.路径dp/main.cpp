//牛客，DP11 矩阵的最小路径和
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 550;
//int n, m;
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
////	memset(f, 0x3f3f3f3f, sizeof(f));
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= m; j++)
//		{
//			int x;		cin >> x;
//			if(i == 1)		f[i][j] = f[i][j-1] + x;
//			else if(j == 1)		f[i][j] = f[i-1][j] + x;
//			else	f[i][j] = min(f[i-1][j], f[i][j-1]) + x;
//		}
//	}
//	cout << f[n][m] << endl;
//	return 0;
//} 

//牛客，NC53675「木」迷雾森林
//#include <iostream>
//using namespace std;
//const int N = 3010;
//const int MOD = 2333;
//
//template<class T>inline void read(T &res)
//{
//	char c;T flag=1;
//	while((c=getchar())<'0'||c>'9')if(c=='-')flag=-1;res=c-'0';
//	while((c=getchar())>='0'&&c<='9')res=res*10+c-'0';res*=flag;
//}
//
//int m, n;
//int a[N][N], f[N][N];
//
//int main()
//{
//	read(m),read(n);
//	for(int i = 1; i <= m; i++)
//		for(int j = 1; j <= n; j++)
//			read(a[i][j]);
//	
//	f[m+1][1] = 1;
//	
//	for(int i = m; i >= 1; i--)
//	{
//		for(int j = 1; j <= n; j++)
//		{
//			if(a[i][j] == 1)	continue;
//			f[i][j] = (f[i][j-1] + f[i+1][j]) % MOD;	
//		}
//	}
//	cout << f[1][n] << endl;
//	return 0;
//} 


//P1002 [NOIP 2002 普及组] 过河卒
#include <iostream>
using namespace std;
typedef long long LL;
const int N = 25;
int mx, my, bx, by;
LL f[N][N];

bool check(int i, int j)
{
	return (i==mx&&j==my) || i!=mx&&j!=my&&(abs(mx-i) + abs(my-j)==3);
}

int main()
{
	cin >> bx >> by >> mx >> my;
	mx++, my++, bx++, by++;
	f[1][0] = 1;
	for(int i = 1; i <= bx; i++)
	{
		for(int j = 1; j <= by; j++)
		{
			if(check(i,j)) continue;
			f[i][j] = f[i-1][j] + f[i][j-1];
		}
	}
	cout << f[bx][by] << endl;
	return 0;
} 




















