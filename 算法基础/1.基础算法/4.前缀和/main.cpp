//牛客NC226282 前缀和模板 
//#include <iostream> 
//
//using namespace std;
//
//typedef long long LL;
//const int N = 1e5 + 10;
//
//int n, q;
//LL front[N];
//int l, r;
//
//int main()
//{
//	cin >> n >> q;
//	for(int i = 1; i <= n; i++)
//	{
//		int num;	cin >> num;
//		front[i] = num + front[i-1]; 
//	}
//	while(q--)
//	{
//		cin >> l >> r;
//		cout << front[r] - front[l-1] << endl;
//	}
//	return  0;
//}


//P1115 最大子段和
//#include <iostream>
//using namespace std;
//
//const int N = 2e5 + 10;
//typedef long long LL;
//
//LL f[N];
//int n;
//LL maxnum = -1e9, premin = 0;
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		int num; 	cin >> num;
//		f[i] = f[i-1] + num;
//	}
//		
//	for(int i = 1; i <= n; i++)
//	{
//		maxnum = max(maxnum, f[i] - premin);
//		premin = min(premin, f[i]);
//	}
//	cout << maxnum;
//	return 0;
//} 

//牛客，NC226333 【模板】二维前缀和 
//#include <iostream>
//using namespace std;
//
//const int N = 1010;
//typedef long long LL;
//
//int n, m, q; 
//int x1, x2, y1, y2;
//LL f[N][N];
//int main()
//{
//	cin >> n >> m >> q;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= m; j++)
//		{
//			int num; 	cin >> num;
//			f[i][j] = f[i][j-1] + f[i-1][j] - f[i-1][j-1] + num;
//		}
//	}
//	while(q--)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		cout << f[x2][y2] - f[x1-1][y2] - f[x2][y1-1] + f[x1-1][y1-1] << endl;
//	}
//	return 0;
//}


//P2280 [HNOI2003] 激光炸弹
#include <iostream>
using namespace std;

const int N = 5e3 + 10;

int n, m;
int f[N][N], a[N][N];
int ret;

int main()
{
	cin >> n >> m;
	//输入 
	while(n--)
	{
		int x, y, v;	cin >> x >> y >> v;
		x++;	y++; 
		a[x][y] += v;
	}
	//前缀和 
	for(int i = 1; i < N; i++)
	{
		for(int j = 1; j < N; j++)
		{
			f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + a[i][j];
		}
	}
	//遍历
	m = max(m, N);//m比边界还要大，就执行一次，轰炸区右下角是地图右下角 
	for(int i = m; i <= N; i++)//(i, j)右下角 
	{
		for(int j = m; j <= N; j++)
		{
			ret = max(ret, f[i][j] - f[i-m][j] - f[i][j-m] + f[i-m][j-m]);
		}
	 } 
	 cout << ret << endl;
	return 0;
}



















