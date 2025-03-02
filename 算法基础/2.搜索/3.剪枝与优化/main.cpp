//P1025 [NOIP 2001 �����] ���Ļ���
//#include <iostream>
//using namespace std;
//
//int n, k;
//int ret, sum;
//
//
//void dfs(int pos, int begin)
//{
//	if(pos == k)
//	{
//		if(sum == n)
//			ret++;
//		return;
//	}
//	for(int i = begin; i <= n; i++)
//	{
//		if(sum + i*(k-pos) > n)	return;	
//		sum += i;
//		
//		dfs(pos+1,i);
//		
//		sum-=i;
//		
//	}
//}
//
//int main()
//{
//	scanf("%d%d", &n, &k);
//	dfs(0, 1);
//	printf("%d", ret);
//	return 0;
// } 


//P10483 Сè��ɽ
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 20;

int n, w;
int c[N];

int cnt = 0;//��ǰ���ٳ�
int s[N];//��ǰÿ���������� 
int ret = N;//��Ҫ���ٳ� 

bool cmp(int a, int b)
{
	return a > b;
}

void dfs(int pos)//����ڼ�ֻè 
{
	if(cnt >= ret)	return;
	
	if(pos > n)
	{
		ret = cnt;
		return ;
	} 
	
	for(int i = 1; i <= cnt; i++)
	{
		if(s[i] + c[pos] > w)	continue;
		s[i] += c[pos];
		dfs(pos+1);
		s[i] -= c[pos];
	}
	
	//�³�
	cnt++;
	s[cnt] += c[pos];
	dfs(pos+1);
	s[cnt] = 0;
	cnt--; 
}

int main()
{
	cin >> n >> w;
	for(int i = 1; i <= n; i++)	cin >> c[i]; 
	sort(c+1, c+n+1, cmp);
	
	dfs(1);
	cout << ret;
	return 0;
} 
