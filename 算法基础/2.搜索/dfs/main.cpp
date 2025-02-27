//P1036 [NOIP 2002 普及组] 选数
//#include <iostream>
//#include <vector>
//using namespace std;
//typedef long long LL;
//
//const int N = 5e6 + 10;
//int n, k;
//vector<int> path;
//int arr[N];
//int cnt;
//
//bool issu(LL in)
//{
//	if(in==1)	return false; 
//	for(int i = 2; i <= in/i; i++)
//	{
//		if(in % i == 0)	return  false;
//	}
//	return true;
//}
//
//void dfs(int begin)
//{
//	if(path.size() == k)
//	{
//		LL sum = 0;
//		for(auto x: path)	sum += x;
//		if(issu(sum))	cnt++;
//		return;
//	}
//	for(int i = begin; i <= n; i++)
//	{
//		path.push_back(arr[i]);
//		dfs(i+1);
//		path.pop_back();
//	}
//}
//
//int main()
//{
//	cin >> n >> k;
//	for(int i = 1; i <= n; i++)		cin >> arr[i];
//	dfs(1);
//	cout << cnt;
//	return 0;
//} 


//P9241 [蓝桥杯 2023 省 B] 飞机降落
#include <iostream>
#include <cstring>
using namespace std;
const int N = 12;

int T, n, t[N], d[N], l[N];

bool st[N];

bool dfs(int pos, int end)//处理第pos位数
{
	if(pos > n)
	{
		return true;
	}
	for(int i = 1; i <= n; i++)
	{
		if(st[i])	continue;
		if(end > t[i] + d[i])	continue;
		
		int ne_end = max(end, t[i]) + l[i];
		st[i] = true;
		if(dfs(pos+1, ne_end)) 	return true;
		st[i] = false;
	}
	return false;
}

int main()
{
	cin >> T;
	while(T--)
	{
		memset(st, 0, sizeof(st));
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cin >> t[i] >> d[i] >> l[i];
		}
		
		if(dfs(1, 0))	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
	return 0;
}


