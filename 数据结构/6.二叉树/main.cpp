//7
// 2 3
// 0 4
// 5 6
// 0 0
// 0 0
// 7 0
// 0 0

////dfs二叉树遍历 
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n;
//int l[N], r[N];
//
//void dfs1(int x)
//{
//	cout << x << ' ';
//	if(l[x])	dfs1(l[x]);
//	if(r[x])	dfs1(r[x]);
//}
//
//void dfs2(int x)
//{
//
//	if(l[x])	dfs2(l[x]);
//	cout << x << ' ';
//	if(r[x])	dfs2(r[x]);
//}
//
//void dfs3(int x)
//{
//	if(l[x])	dfs3(l[x]);
//	if(r[x])	dfs3(r[x]);
//	cout << x << ' ';
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i < n; i++)
//	{
//		cin >> l[i] >> r[i]; 
//	}
//	
//	dfs1(1);
//	cout << endl;
//	
//	dfs2(1);
//	cout << endl;
//	
//	dfs3(1);
//	cout << endl;
//	return 0;
// } 
 

////bfs链式 
//#include <iostream>
//#include <queue> 
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n;
//int r[N], l[N];
//
//void bfs()
//{
//	queue<int> q;
//	q.push(1);
//	
//	while(q.size())
//	{
//		int u = q.front(); 	q.pop();
//		cout << u << ' ';
//		if(l[u])	q.push(l[u]);
//		if(r[u])	q.push(r[u]);
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	
//	bfs();
//	return 0;
//}



//P1305 新二叉树
//
//#include <iostream>
//
//using namespace std;
//
//const int N = 300;
//
//int n;
//char root;
//char l[N], r[N];
//
//void dfs(char root)
//{
//	if(root == '*')	return ;
//	
//	cout << root;
//	dfs(l[root]);
//	dfs(r[root]);
//}
//
//int main()
//{
//	cin >> n;
//	
//	cin >> root;
//	cin >> l[root] >> r[root];
//	
//	for(int i = 2; i <= n; i++)
//	{
//		char a; 	cin >> a;
//		cin >> l[a] >> r[a];
//	}
//
//	dfs(root);
//	return 0;
// } 


//B3642 二叉树的遍历
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n;
//int l[N], r[N];
//
//void dfs1(int u)
//{
//	cout << u << ' ';
//	if(l[u])	dfs1(l[u]);
//	if(r[u])	dfs1(r[u]);
//}
//
//void dfs2(int u)
//{
//	if(l[u])	dfs2(l[u]);
//	cout << u << ' ';
//	if(r[u])	dfs2(r[u]);
//}
//
//void dfs3(int u)
//{
//	if(l[u])	dfs3(l[u]);
//	if(r[u])	dfs3(r[u]);
//	cout << u << ' ';
//}
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	dfs1(1);
//	cout << endl; 
//	dfs2(1);
//	cout << endl; 
//	dfs3(1);
//	cout << endl; 
//	return 0;
// } 

//P4913 【深基16.例3】二叉树深度
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n; 
//int l[N], r[N];
//
//int maxdeep(int root)
//{
//	if(!root)	return 0;
//	else return max(maxdeep(l[root]), maxdeep(r[root])) + 1;
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	cout << maxdeep(1);
//	return 0;
// } 




//P1030 [NOIP2001 普及组] 求先序排列
//#include <iostream>
//
//using namespace std;
//
//string a, b;
//
//void dfs(int l1, int r1, int l2, int r2)//1:中序，2：后序 
//{
//	if(l1 > r1)	return;
//	cout << b[r2];
//	int p = l1;
//	while(a[p] != b[r2])	p++;
//	dfs(l1, p-1, l2, l2+p-l1-1);
//	dfs(p+1, r1, l2+p-l1, r2-1);
//}
//
//int main()
//{
//
//	cin >> a >> b;
//	dfs(0, a.size()-1, 0, b.size()-1);
//	return 0;
// } 


//P1827 [USACO3.4] 美国血统 American Heritage
//#include <iostream>
//
//using namespace std;
//
//string a, b;
//
//void dfs(int l1, int r1, int l2, int r2)//1：中序， 2：先序 
//{
//	if(l1 > r1)	return;
//	int p = l1;
//	while(a[p] != b[l2]) 	p++;
//	dfs(l1, p-1, l2+1, l2+p-l1);
//	dfs(p+1, r1, l2+1+p-l1, r2);
//	cout << b[l2];
//}
//
//
//
//int main()
//{
//	cin >> a >> b;
//	dfs(0, a.size()-1, 0, b.size()-1);	
//	return 0;
//}


//P3884 [JLOI2009] 二叉树问题
#include <iostream>
#include <queue>

using namespace std;

const int N = 110;

int n;
int l[N], r[N];
int num[N];//每层的宽度
int maxwidth;

int maxdeep(int root)
{
	if(root == 0) return 0;
	
	else return max(maxdeep(r[root]), maxdeep(l[root])) + 1;
}

int maxwide()
{
	queue<int> q;
	q.push(1);
	int storey = 1;
	while(q.size())
	{
		int t = num[storey++];
		while(t--)
		{
			int u = q.front();	q.pop();
			if(r[u])
			{
				q.push(r[u]);
				num[storey]++;
			}
			if(l[u])	
			{
				q.push(l[u]);
				num[storey]++;
			}
		}
		if(num[storey] > maxwidth)
			maxwidth = num[storey];
	}
	return maxwidth;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n-1; i++)
	{
		int a, b; 	cin >> a >> b;
		if(l[a] == 0)	l[a] = b;
		else	r[a] = b;
	}
	cout << maxdeep(1) << endl;
	cout << maxwide() << endl;
	return 0;
}














