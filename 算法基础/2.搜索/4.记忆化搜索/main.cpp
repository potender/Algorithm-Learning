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
#include <iostream>
using namespace std;

int T, p;
int x, y;

int main()
{
	cin >> T >> p;
	while(T--)
	{
		cin >> x >> y;
		int cnt = 1;
		while(x != 0  && y != 0)
		{
			if(cnt > 100000)	break;
			if(cnt%2)
				x = (x+y)%p;
			else
				y = (x+y)%p;
			cnt++;
		}
		if(x==0)	cout << 1 << endl;
		else if(y == 0)	cout << 2 << endl;
		else cout << "error" << endl;
	}
	return 0;
}
