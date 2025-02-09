//线性探测法 
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 23, INF = 0x3f3f3f3f;
//
//int h[N];
//
//void init()
//{
//	memset(h, INF, sizeof(h));
//}
//
//int f(int x)
//{
//	int id = (x % N + N) % N;//固定：模加模 
//	
//	if(h[id] != INF && h[id] != x)//如果1：不是空位，2：不是自己（存起来的不用在存了），线性探测 
//	{
//		id++;
//		if(id == N)	id = 0;
//	}
//	return id;
//}
//
//void insert(int x)
//{
//	h[f(x)] = x;
//}
//
//bool find(int x)
//{
//	return h[f(x)] == x;
//}
//
//int main()
//{
//	init();
//	int n; 	cin >> n;
//	while(n--)
//	{
//		int op, num;	cin >> op >> num;
//		if(op == 1)
//		{
//			insert(num);
//		}
//		else
//		{
//			if(find(num))	cout << "yes" << endl;
//			else	cout << "no" << endl;
//		}
//	}
//	return 0;
// } 
 
//12
//1 1
//1 2
//1 3
//1 4
//1 5
//2 2
//1 6
//2 5
//1 7
//2 8
//2 4
//2 25

//拉链法 
//#include <iostream>
//
//using namespace std;
//
//const int N = 23;
//
//int h[N], e[N], ne[N], id;
//
//int f(int x)
//{
//	return (x % N + N) % N;
//}
//
//void insert(int x)
//{
//	int idx = f(x);
//	id++;
//	e[id] = x;
//	ne[id] = h[idx];
//	h[idx] = id; 
//}
//
//bool find(int x)
//{
//	int idx = f(x);
//	for(int i = h[idx]; i; i = ne[i])
//	{
//		if(e[i] = x)	return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int n; 	cin >> n;
//	while(n--)
//	{
//		int op, num; 	cin >> op >> num;
//		if(op == 1)	insert(num);
//		else
//		{
//			if(find(num)) cout << "yes" << endl;
//			else
//				cout << "no" << endl; 
//		}
//	}
//	return 0;
//}

//P5266 【深基17.例6】学籍管理
//#include <iostream> 
//#include <unordered_map>
//
//using namespace std;
//
//int n;
//unordered_map<string, int> mp;
//
//int main()
//{
//	cin >> n;
//	while(n--)
//	{
//		int op;	cin >> op;
//		if(op == 4)
//		{
//			cout << mp.size() << endl;
//		}
//		else
//		{
//			string s;	cin >> s;
//			if(op == 1)
//			{
//				int score;	cin >> score;
//				mp[s] = score;
//				cout << "OK" << endl;
//			}
//			else if(op == 2)
//			{
//				if(mp.count(s))
//					cout << mp[s] << endl;
//				else
//					cout << "Not found" << endl;
//			}
//			else if(op == 3)
//			{
//				if(mp.count(s))
//				{
//					mp.erase(s);
//					cout << "Deleted successfully" << endl;
//				}
//				else
//					cout << "Not found" << endl;
//			}
//			
//		}
//	}
//	return 0;
//} 

//P4305 [JLOI2011] 不重复数字
//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//int t, n; 
//
//
//int main()
//{
//	scanf("%d", &t);
//	while(t--)
//	{
//		unordered_set<int> mp;
//		scanf("%d", &n);
//		while(n--)
//		{
//			int x; 	scanf("%d", &x);
//			if(!mp.count(x))
//			{
//				printf("%d ", x);
//				mp.insert(x);
//			}
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}


//P3879 [TJOI2010] 阅读理解
//#include <iostream>
//#include <set>
//#include <unordered_map>
//
//using namespace std;
//
//int n, m;
//unordered_map<string, set<int>> mp;//每个字符串有哪个文章有 
//
//int main()
//{
//	cin >> n; 
//	for(int i = 1; i <= n; i++)
//	{
//		int l;	scanf("%d", &l);
//		while(l--)
//		{
//			string str;	cin >> str;
//			mp[str].insert(i); 
//			
//		}
//	}
//	cin >> m;
//	while(m--)
//	{
//		string input;	cin >> input;
//		for(auto x : mp[input])
//			cout << x << " ";
//		cout << endl;
//	}
//	return 0;
// } 


//P1102 A-B 数对
#include <iostream>
#include <unordered_map>

using namespace std;

const int N = 2e5 + 10;

int n, c;
unordered_map<int, int> mp;
long long ret;
int temp[N], count[N];

int main()
{
	cin >> n >> c;
	for(int i = 1; i <= n; i++)
	{
		cin >> temp[i];
		mp[temp[i]] ++;
	}
	for(int i = 1; i <= n; i++)
	{
		ret += mp[temp[i] + c];
	}
	cout << ret << endl;
	return 0;
}








