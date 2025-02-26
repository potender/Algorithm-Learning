//B3622 枚举子集（递归实现指数型枚举） 
//#include <iostream>
//
//using namespace std;
//
//int n;
//string str; 
//
//void dfs(int pos)//处理第pos位 
//{
//	if(pos > n)
//	{
//		cout << str << endl;
//		return; 
//	}
//	str += "N";
//	dfs(pos+1);
//	str.pop_back();
//	
//	str += "Y";
//	dfs(pos+1);
//	str.pop_back();
//	
//}
//
//int main()
//{
//	 cin >> n;
//	dfs(1); 
//	return 0;
// } 



//P10448 组合型枚举
//#include <iostream>
//using namespace std;
//const int N = 30;
//
//int n, m;//1-n选m个
//int a[N];
//
//void dfs(int pos)//处理pos位 
//{
//	if(pos > m)
//	{
//		for(int i = 1; i <= m; i++)		printf("%d ", a[i]);
//		printf("\n");
//		return ;
//	}
//	for(int i = a[pos-1]+1; i <= n; i++)
//	{
//		a[pos] = i;
//		dfs(pos+1); 
//	}
//	return ;
//}
//
//int main()
//{
//	cin >> n >> m;
//	dfs(1);
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> v;
//int n, m;
//
//void dfs(int begin)//尾部这个数从begin开始填
//{
//	if(m == v.size())
//	{
//		for(auto x : v)		printf("%d ", x);
//		printf("\n");
//		return;
//	}
//	for(int i = begin; i <= n; i++)
//	{
//		v.push_back(i);
//		dfs(i+1);
//		v.pop_back();
//	}
//	return ;
//} 
//
//int main()
//{
//	cin >> n >> m;
//	dfs(1);
//	return 0;
//} 


//B3623 枚举排列（递归实现排列型枚举）
//#include <iostream>
//#include <vector> 
//using namespace std;
//const int N = 20;
//
//int n, k;
//vector<int> path;
//bool st[N];//哪些选过了 
//
//void dfs()//处理第size位 
//{
//	if(path.size() == k)
//	{
//		for(auto x : path)
//			printf("%d ", x);
//		printf("\n");
//		return ;
//	}
//	
//	for(int i = 1; i <= n; i++)
//	{
//		if(st[i])	continue;
//		path.push_back(i);
//		st[i] = true;
//		dfs();
//		path.pop_back();
//		st[i] = false;
//	}
//	return ;
//}
//
//int main()
//{
//	cin >> n >> k;
//	dfs();
//	return 0;
//}



//P1706 全排列问题
#include <iostream>
#include <vector>
using namespace std;

const int N = 10;
int n;
vector<int> path;
bool st[N];

void dfs()
{
	if(path.size() == n)
	{
		for(auto x : path)
		{
			printf("%5d", x);
		}
		printf("\n");
		return;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(st[i])	continue;
		path.push_back(i);
		st[i] = true;
		dfs();
		st[i] = false;
		path.pop_back();
	}
}

int main()
{
	cin >> n;
	dfs();
	return 0;
 } 



