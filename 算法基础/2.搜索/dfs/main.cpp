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
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 12;
//
//int T, n, t[N], d[N], l[N];
//
//bool st[N];
//
//bool dfs(int pos, int end)//处理第pos位数
//{
//	if(pos > n)
//	{
//		return true;
//	}
//	for(int i = 1; i <= n; i++)
//	{
//		if(st[i])	continue;
//		if(end > t[i] + d[i])	continue;
//		
//		int ne_end = max(end, t[i]) + l[i];
//		st[i] = true;
//		if(dfs(pos+1, ne_end)) 	return true;
//		st[i] = false;
//	}
//	return false;
//}
//
//int main()
//{
//	cin >> T;
//	while(T--)
//	{
//		memset(st, 0, sizeof(st));
//		cin >> n;
//		for(int i = 1; i <= n; i++)
//		{
//			cin >> t[i] >> d[i] >> l[i];
//		}
//		
//		if(dfs(1, 0))	cout << "YES" << endl;
//		else	cout << "NO" << endl;
//	}
//	return 0;
//}



//P1219 [USACO1.5] 八皇后 Checker Challenge
//#include <iostream>
//#include <vector>
//using namespace std;
//const int N = 15;
// 
//int n,ret;
//bool col[N], dui1[N*2], dui2[N*2];
//
//vector<int> path;
//
//void dfs(int line)//处理第line行 
//{
//	if(line > n)
//	{
//		ret++;
////		cout << ret << endl;
//		if(ret <= 3)
//		{
//			for(auto x : path)	cout << x << " ";
//			cout << endl;
//		}
//	
//		return ;
//	} 
//	
//	for(int i = 1; i <= n; i++)//列 
//	{
//		if(col[i]==true)	continue; 
//		if(dui2[line+i]==true)	continue;
//		if(dui1[line-i+n]==true)	continue;
//		
//		col[i] = true;
//		dui2[line+i]=true;
//		dui1[line-i+n]=true;
//		path.push_back(i);
//		
//		dfs(line+1);
//		
//		col[i] = false;
//		dui2[line+i]=false;
//		dui1[line-i+n]=false;
//		path.pop_back();
//	}
//}
//
//int main()
//{
//	cin >> n;
//	dfs(1); 
//	cout << ret;
//	return 0;
//} 


//P1784 数独
//#include <iostream>
//using namespace std;
//const int N = 10;
//
//int a[N][N];
//bool col[N][N], row[N][N], st[N][N][N];
//int n = 9;
//
//bool dfs(int x, int y)//将x，y这里填上数
//{
//	if(y == n)
//	{
//		x++;
//		y = 0;
//	}
//
//	if(a[x][y] != 0)	return dfs(x, y+1);
//	if(x == n)	return true;
//	
//
//	for(int j = 1; j <= n; j++)//填什么 
//	{
//		if(col[y][j] || row[x][j] || st[x/3][y/3][j])	continue;
//		
//		a[x][y] = j;
//		col[y][j] = true;
//		row[x][j] = true;
//		st[x/3][y/3][j] = true;
//		
//		if(dfs(x, y+1))		return true;//找到一个就返回 
//		
//		a[x][y] = 0;
//		col[y][j] = false;
//		row[x][j] = false;
//		st[x/3][y/3][j] = false;
//	}
//	return false;
//}
//
//int main()
//{
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			int x;	scanf("%d", &x); 
//			a[i][j] = x;
//			if(x != 0)
//			{
//				row[i][x] = true;
//				col[j][x] = true;
//				st[i/3][j/3][x] = true;
//			}
//		}
//	}
//	dfs(0, 0);
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

