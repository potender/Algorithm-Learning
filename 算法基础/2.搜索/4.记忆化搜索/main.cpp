//力扣，509. 斐波那契数
//class Solution 
//{
//public:
//    int f[40];
//    int dfs(int n) 
//	{
//		if(n == 0 || n == 1)	return n;
//        if(f[n] != -1)  return f[n];
//        f[n] = dfs(n-1) + dfs(n-2);
//        return f[n];
//    }
//    int fib(int n)
//    {
//        memset(f, -1, sizeof(f));
//        return dfs(n);
//    }
//};


//P1464 Function
//#include <iostream>
//using namespace std;
//typedef long long LL;
//const int N = 30;
//LL f[N][N][N];
//
//LL dfs(LL a, LL b, LL c)
//{
//	if(a <= 0 || b <= 0 || c <= 0)	return 1;
//	if(a > 20 || b > 20 || c > 20)	return dfs(20, 20, 20);
//	
//	if(f[a][b][c])	return f[a][b][c];
//	
//	if(a < b && b < c)
//	{
//		f[a][b][c] = dfs(a, b, c-1) + dfs(a, b-1, c-1) - dfs(a, b-1, c);
//		return f[a][b][c];
//	}
//	else
//	{
//		f[a][b][c] = dfs(a-1, b, c) + dfs(a-1, b-1, c) + dfs(a-1, b, c-1) - dfs(a-1, b-1, c-1);
//		return f[a][b][c];
//	} 	
//	 
//	
//}
//
//int main()
//{
//	LL a, b, c;
//	scanf("%lld%lld%lld", &a, &b, &c);
//	while(!(a==-1 && b == -1 && c == -1))
//	{
//		printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, dfs(a, b, c));
//		scanf("%lld%lld%lld", &a, &b, &c);
//	}
//	return 0;
// } 



//P5635 【CSGRound1】天下第一
//#include <iostream>
//using namespace std;
//
//int T, p;
//int x, y;
//
//int main()
//{
//	cin >> T >> p;
//	while(T--)
//	{
//		cin >> x >> y;
//		int cnt = 1;
//		while(x != 0  && y != 0)
//		{
//			if(cnt > 100000)	break;
//			if(cnt%2)
//				x = (x+y)%p;
//			else
//				y = (x+y)%p;
//			cnt++;
//		}
//		if(x==0)	cout << 1 << endl;
//		else if(y == 0)	cout << 2 << endl;
//		else cout << "error" << endl;
//	}
//	return 0;
//}


//P1434 [SHOI2002] 滑雪
#include <iostream>
using namespace std;
const int N = 110;

int arr[N][N];
int mem[N][N];
int r, c;


int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};

int dfs(int x, int y)//(x, y)为起点最远的距离 
{
	if(mem[x][y])	return mem[x][y];
	int len = 1;
	
	for(int i = 0; i < 4; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if(nx < 1 || nx > r || ny < 1 || ny > c)	continue;
		if(arr[nx][ny] >= arr[x][y])	continue;
		
		
		len = max(dfs(nx, ny)+1, len);
	}
	
	return mem[x][y] = len; 
}

int main()
{
	cin >> r >> c;
	int ret = 1;
	
	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j <= c; j++)
		{
			cin >> arr[i][j];
		}
	}
	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j <= c; j++)
		{
			ret = max(dfs(i, j), ret); 
		}
	}
	cout << ret << endl;
	return 0;
} 

