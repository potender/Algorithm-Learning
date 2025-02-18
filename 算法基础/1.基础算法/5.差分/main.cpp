//NC226303 【模板】差分
//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long LL;
// 
//int n, m;
//LL f[N];
//
//int main()
//{
//	cin >> n >> m;
//	//构建差分 
//	for(int i = 1; i <= n; i++)
//	{
//		LL x; 	cin >> x;
//		f[i] += x;
//		f[i+1] -= x;	
//	}
//	//加上k
//	while(m--)
//	{
//		LL l, r, k;	cin >> l >> r >> k;
//		 
//		f[l] += k;	f[r+1] -= k;	 
//	} 
//	//前缀和得数组 
//	for(int i = 1; i <= n; i++)
//	{
//		f[i] = f[i-1] + f[i];
//		cout << f[i] << " ";
//	}
//	
//	return 0;
// } 


//P3406 海底高铁
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//typedef long long LL;
//
//LL f[N], ret;
//int n, m;
//
//int main()
//{
//	cin >> n >> m;
//	
//	int st;	cin >> st;
//	for(int i = 2; i <= m; i++)
//	{
//		int x;	cin >> x;
//		if(st < x)
//		{
//			f[st]++;		f[x]--;
//		}
//		else//st > x
//		{
//			f[st]--;		f[x]++;
//		 } 
//		st = x;
//	}
//	//前缀和
//	for(int i = 1; i <= n; i++)		f[i] += f[i-1];
//	
//	for(int i = 1; i < n; i++)
//	{
//		int a, b, c; 	cin >> a >> b >> c;
//		ret += min(a*f[i], b*f[i]+c);
//	}
//	cout << ret << endl;
//	return 0;
//}


//牛客  NC226337 【模板】二维差分
//#include <iostream>
//using namespace std;
//
//typedef long long LL;
//const int N = 1010;
//
//LL f[N][N];
//int n, m, q;
//
//void insert(int x1, int y1, int x2, int y2, LL a)
//{
//	f[x1][y1] += a;
//	f[x1][y2+1] -= a;
//	f[x2+1][y1] -= a;
//	f[x2+1][y2+1] += a;
//}
//
//int main()
//{
//	cin >> n >> m >> q;
//	//初始化差分 
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= m; j++)
//		{
//			LL x;	cin >> x;
//			insert(i, j, i, j, x);
//		}
//	}
//	//加k 
//	while(q--)
//	{
//		LL x1, y1, x2, y2, k;
//		cin >> x1 >> y1 >> x2 >> y2 >> k;
//		insert(x1, y1, x2, y2, k);
//	}
//	//前缀和
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= m; j++)
//		{
//			f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + f[i][j];
//			cout << f[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
// } 


//P3397 地毯
#include <iostream>
using namespace std;

typedef long long LL;
const int N = 1010;
int n, m;
LL f[N][N];

void insert(int x1, int y1, int x2, int y2, LL k)
{
	f[x1][y1] += k;
	f[x1][y2+1] -= k;
	f[x2+1][y1] -= k;
	f[x2+1][y2+1] += k; 
}

int main()
{
	cin >> n >> m;
	while(m--)
	{
		LL x1, y1, x2, y2, k;
		cin >> x1 >> y1 >> x2 >> y2;
		insert(x1, y1, x2, y2, 1);
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + f[i][j];
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
