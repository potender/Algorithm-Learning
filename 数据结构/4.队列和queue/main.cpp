//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
////创建
//int q[N], h, t;
//
////添加
//void push(int x)
//{
//	q[++t] = x;
//}
//
////删除
//void pop()
//{
//	h++;
// } 
// 
////队头
//int head()
//{
//	return q[h+1];
// } 
// 
////队尾
//int tail()
//{
//	return q[t];
// } 
// 
////判空
//bool empty()
//{
//	return h == t;
// } 
// 
////元素个数
//int size()
//{
//	return t - h;
// } 
// 
// 
//int main()
//{
//	for(int i = 1; i <= 5; i++)
//	{
//		push(i);
//	}
//	
//	for(int i = 1; i <= 5; i++)
//	{
//		cout << head() << ' ' << tail() << endl;
//		pop(); 
//	}
//	return 0;
// } 


//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//int main()
//{
//	queue<PII> q;
//	for(int i = 1; i <= 10; i++)
//	{
//		q.push({i, i*i});
//	}
//	for(int i = 1; i <= 10; i++)
//	{
//		auto t = q.front();
//		cout <<'(' << t.first << ',' << t.second << ')' << endl;
//		q.pop();
//	}
//	return 0;
//}


//模板 
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int q[N], h, t; //h队头的下一个，t是队尾 
//
//int main()
//{
//	int n; 	cin >> n;
//	while(n--)
//	{
//		int opt; 	cin >> opt;
//		if(opt == 1)
//		{
//			int x; 	cin >> x;
//			q[++t] = x; 
//		}
//		else if(opt == 2)
//		{
//			if(h==t)
//				cout << "ERR_CANNOT_POP" << endl;
//			else
//				h++;
//		}
//		else if(opt == 3)
//		{
//			if(h==t)
//				cout << "ERR_CANNOT_QUERY" << endl;	
//			else
//				cout << q[h+1] << endl;
//		}
//		else
//			cout << t-h << endl;
//	}
//	return 0;
// } 
 
 
 //机器翻译 
// #include <iostream>
// #include <queue>
// 
//using namespace std;
//const int N = 1010;
//
//bool boo[N];
// 
//int main()
//{
//	queue<int> q;
//	int m, n; 	cin >> m >> n;
//	int count = 0;
//	while(n--)
//	{
//		int x; 	cin >> x;
//		if(boo[x] == 1)
//		{
//			continue;
//		}
//		else
//		{
//			count++;
//			boo[x] = 1;
//			if(q.size() == m)
//			{
//				boo[q.front()] = 0;
//				q.pop();
//				
//			}
//			q.push(x);
//		}
//	}
//	cout << count << endl;
//	
//	return 0;
//}
 
//海港
// #include <iostream>
// #include <queue>
// using namespace std;
// 
//const int N = 1e5 + 10;//国籍 
//int boo[N];
//
//typedef struct
//{
//	int t;//到达时间 
//	int sum;//国籍数 
//	
//}Ship;
// 
// queue<Ship> q;
//  
//int ret = 0;//所有船的国籍 
//
// int main()
// {
// 	int n; 	cin >> n;
// 	while(n--)
// 	{
// 		Ship ship; 
// 		int k; 
// 		cin >> ship.t >> k;
// 		if(q.size() && ship.t - q.front().t >= 86400)
// 		{
// 			q.pop();
// 			ret -= q.front().sum;
//		 }
// 		//计算
// 		
//		while(k--)
//		{
//			int x; 	cin >> x;
//			if(boo[x] == 1)
//				continue;
//			else
//			{
//				ship.sum++;
//				boo[x] = 1;
//			}
//		} 
//		q.push(ship);
// 		ret += ship.sum;
//		cout << ret << endl; 
//	 }
// 	return 0;
// }
 
////双端队列deque 
//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//struct node
//{
//	int x, y, z;
//};
//int main()
//{
//	deque<node> q;
//	for(int i = 1; i <= 3; i++)
//	{
//		q.push_front({i, i*i, i*i*i});
//	}
//	
//	for(int i = 1; i <= 3; i++)
//	{
//		auto a = q.front();
//		cout << a.x << ' ' << a.y << ' ' << a.z << endl;
//		q.pop_front();
//	}
//
//}









 
 
