//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
////����
//int q[N], h, t;
//
////���
//void push(int x)
//{
//	q[++t] = x;
//}
//
////ɾ��
//void pop()
//{
//	h++;
// } 
// 
////��ͷ
//int head()
//{
//	return q[h+1];
// } 
// 
////��β
//int tail()
//{
//	return q[t];
// } 
// 
////�п�
//bool empty()
//{
//	return h == t;
// } 
// 
////Ԫ�ظ���
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


//ģ�� 
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int q[N], h, t; //h��ͷ����һ����t�Ƕ�β 
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
 
 
 //�������� 
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
 
//����
// #include <iostream>
// #include <queue>
// using namespace std;
// 
//const int N = 1e5 + 10;//���� 
//int boo[N];
//
//typedef struct
//{
//	int t;//����ʱ�� 
//	int sum;//������ 
//	
//}Ship;
// 
// queue<Ship> q;
//  
//int ret = 0;//���д��Ĺ��� 
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
// 		//����
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
 
////˫�˶���deque 
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









 
 
