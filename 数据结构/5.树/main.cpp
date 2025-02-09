//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n; 
//vector<int> edge[N];
//bool st_dfs[N];
//bool st_bfs[N];
//
//void dfs(int u)
//{
//	cout << u << ' ';
//	st_dfs[u] = 1;
//	for(auto v: edge[u])
//	{
//		if(!st_dfs[v])	dfs(v);
//	}
//}
//
//void bfs()
//{
//	queue <int> q;
//	q.push(1);
//	st_bfs[1] = 1;
//	
//	while(q.size())
//	{
//		int u = q.front(); 	q.pop();
//		cout << u << ' ';
//		for(auto v : edge[u])
//		{
//			if(!st_bfs[v])
//			{
//				q.push(v);
//				st_bfs[v] = 1;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	for(int i = 1; i < n; i++)
//	{
//		int a, b;	cin >> a >> b;
//		edge[a].push_back(b);
//		edge[b].push_back(a);
//	}
//	cout << endl << "dfs:";
//	dfs(1);
//	cout << endl << "bfs:";
//	bfs();
//	return 0;
//} 




//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n, h[N], e[N*2], ne[N*2], id;
//bool st_dfs[N], st_bfs[N];
//
////a∫Û «b 
//void add(int a, int b)
//{
//	id++;
//	e[id] = b;
//	ne[id] = h[a];
//	h[a] = id;
//}
//
//void dfs(int u)
//{
//	cout << u << ' ';
//	st_dfs[u] = 1;
//	
//	for(int i = h[u]; i; i = ne[i])
//	{
//		int v = e[i];
//		if(!st_dfs[v])	dfs(v);
//	}
//}
//
//void bfs()
//{
//	queue <int> q;
//	q.push(1);
//	st_bfs[1] = 1;
//	
//	while(q.size())
//	{
//		int v = q.front(); 	q.pop();
//		cout << v << ' ';
//		
//		for(int i = h[v]; i; i = ne[i])
//		{
//			int v = e[i];
//			if(!st_bfs[v])
//			{
//				q.push(v);
//				st_bfs[v] = 1;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	for(int i = 1; i < n; i++)
//	{
//		int a, b;	cin >> a >> b;
//		add(a, b); 	add(b, a);
//	}
//	cout << endl << "dfs: ";
//	dfs(1);
//	cout << endl << "bfs: ";
//	bfs();
//	return 0;
//} 

//11
// 1 3
// 7 3
// 3 10
// 1 5
// 4 5
// 2 1
// 11 2
// 6 11
// 11 8
// 11 9

//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n;
//vector<int> edges[N];
//bool st1[N], st2[N];
//
//void dfs(int u)
//{
//	cout << u << ' ';
//	st1[u] = true;
//	
//	for(auto v : edges[u])
//	{
//		if(st1[v] == 0)	
//			dfs(v);
//	}
//}
//
//void bfs()
//{
//	queue<int> q;
//	q.push(1);
//	st2[1] = true;
//	
//	while(q.size())
//	{
//		int u = q.front(); 	q.pop();
//		cout << u << ' ';
//		for(auto v : edges[u])
//		{
//			if(!st2[v])
//			{
//				q.push(v);
//				st2[v] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i < n; i++)
//	{
//		int a, b; 	cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//	//±È¿˙
//	cout << endl << "dfs:";
//	dfs(1); 
//	cout << endl << "bfs:";
//	bfs();
//	return 0;
//}

#include <iostream>
#include <queue>

using namespace std;

const int N = 1e5 + 10;
int n;
int id, h[N], e[2*N], ne[2*N];
int st1[N], st2[N];

void add(int a, int b)
{
	id++;
	e[id] = b;
	ne[id] = h[a];
	h[a] = id;
}

void dfs(int u)
{
	cout << u << ' ';
	st1[u] = true;
	
	for(int i = h[u]; i; i = ne[i])
	{
		int v = e[i];
		if(!st1[v])
		{
			dfs(v);
		}
	}
}

void bfs()
{
	queue<int> q;
	q.push(1);
	st2[1] = true;
	while(q.size())
	{
		int u = q.front(); 	q.pop();
		
		cout << u << ' ';
		for(int i = h[u]; i; i = ne[i])
		{
			int v = e[i];
			if(!st2[v])
			{
				q.push(v);
				st2[v] = true;
			}
		}
	}
}

int main()
{
	cin >> n;
	for(int i = 1; i < n ; i++)
	{
		int a, b; 	cin >> a >> b;
		add(a, b); 	add(b, a);
	}
	
	cout << endl << "dfs:";
	dfs(1);
	cout << endl << "bfs:";
	bfs();
	return 0;
}















