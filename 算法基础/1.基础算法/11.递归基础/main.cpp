//信息学奥赛一本通，1205：汉诺塔问题
//#include <iostream>
//
//using namespace std;
// 
//void fun(int x, char a, char b, char c)//将x个盘子从a通过c，移动到b 
//{
//	if(x==1)
//	{
//		printf("%c->%d->%c\n", a, x, b); 
//		return ;
//	}
//	fun(x-1, a, c, b);
//
//	printf("%c->%d->%c\n", a, x, b); 
//	fun(x-1, c, b, a);
//}
//
//int main()
//{
//	int x;
//	char a, b, c;
//	cin >> x >> a >> b >> c;
//	fun(x, a, b, c); 
//	return 0;
//} 



//P10457 占卜DIY
//#include <iostream>
//using namespace std;
//
//int a[15][5];
//int cnt[15];//x从4向前走 
//int ret = 0;
//
//void dfs(int x)//从(x, cnt[x])进入 ,统计个数
//{
//	if(x == 13) return; 
//	dfs(a[x][cnt[x]--]);
//}
//
//int main()
//{
//	for(int i = 1; i <= 13; i++)
//	{
//		cnt[i] = 4;
//		for(int j = 1; j <= 4; j++)
//		{
//			char ch;		cin >> ch;  
//			if(ch >= '2' && ch <= '9')	a[i][j] = ch - '0';
//			else if(ch == 'A')	a[i][j] = 1;
//			else if(ch == '0')	a[i][j] = 10;
//			else if(ch == 'J')	a[i][j] = 11;
//			else if(ch == 'Q')	a[i][j] = 12;
//			else 	a[i][j] = 13;
//		}
//	}
//	
//	for(int i = 1; i <= 4; i++)
//	{
//		dfs(a[13][i]); 
//	}
//	
//	for(int i = 1; i <= 13; i++)
//	{
//		if(cnt[i] == 0)	ret++;
//	}
//	cout << ret;
//	return 0;
//} 



//P1087 [NOIP 2004 普及组] FBI 树
#include <iostream>
#include <cmath>
using namespace std;

string str; 	
int n;

char Out(int l, int r)
{
	bool j1 = 0, j0 = 0;
	for(int i = l; i <= r; i++)
	{
		if(str[i] == '1')	j1 = 1;
		else	j0 = 1;
	}
	if(j1 == 1 && j0 == 1)	return 'F';
	else if(j1 == 1 && j0 == 0)	return 'I';
	else	return 'B';
}

void dfs(int l, int r)//处理l-r 
{
	if(l >= r)
	{
		cout << Out(l, r);
		return;
	}

	int mid = (l+r) / 2;
	
	dfs(l, mid);
	dfs(mid+1, r);
	cout << Out(l, r);
}

int main()
{
	cin >> n >> str;
	dfs(0, pow(2, n)-1);
	return 0;
} 














