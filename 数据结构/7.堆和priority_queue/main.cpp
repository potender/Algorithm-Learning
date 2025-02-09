//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
////1.�Ѵ��� 
//int n;
//int heap[N];
//
////2.�ѵĲ��� 
//void up(int child)
//{
//	int parent = child/2;
//	while(parent >= 1 && heap[parent] < heap[child])
//	{
//		swap(heap[parent], heap[child]);
//		
//		child = parent;
//		parent = child/2;
//	}
//}
//
//void push(int x)
//{
//	heap[++n] = x;
//	up(n);	
//} 
// 
// //3.�ѵ�ɾ�� 
//void down(int parent)
//{
//	int child = parent * 2;
//	while(child <= n)
//	{
//		if(child + 1 <= n && heap[child+1] > heap[child])		child++;
//		if(heap[child] <= heap[parent])	return;
//		swap(heap[child], heap[parent]);
//		
//		parent = child;
//		child = parent * 2;	
//	}	
//}
//void pop()
//{
//	swap(heap[1], heap[n]);
//	n--;
//	down(1);
// } 
//
////4.�ѵĴ�С
//int size()
//{
//	return n;
// } 
//
////5.�Ѷ�Ԫ�� 
//int top()
//{
//	return heap[1];
// } 
//
//int main()
//{
//	//���Զ�
//	int a[10] = {1, 41, 23, 10, 11, 2, -1, 99, 14, 0};
//	
//	for(int i = 0; i < 10; i++)
//	{
//		push(a[i]);
//	}
//	while(size())
//	{
//		cout << top() << ' ';
//		pop();
//	}
//	return 0;
//}

//priority_queue ���� 
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//priority_queue<int> heap1;
//priority_queue<int, vector<int>, less<int>> heap2;//�����
//priority_queue<int, vector<int>, greater<int>> heap3;//С����
//
//int a[10] = {1, 41, 23, 10, 11, 2, -1, 99, 14, 0};
//
//void test()
//{
//	for(auto x : a)
//	{
//		heap1.push(x);
//		heap2.push(x);
//		heap3.push(x);
//	}
//	
//	while(heap1.size())
//	{
//		int x = heap1.top();
//		heap1.pop();
//		cout << x << ' ';
//	}
//	cout << endl;
//	
//	while(heap2.size())
//	{
//		int x = heap2.top();
//		heap2.pop();
//		cout << x << ' ';
//	}
//	cout << endl;
//	
//	while(heap3.size())
//	{
//		int x = heap3.top();
//		heap3.pop();
//		cout << x << ' ';
//	}
//	cout << endl;
//	
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//priority_queue �ṹ��
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//struct node
//{
//	int a, b, c;
//	
//	bool operator < (const node& x) const//����� 
//	{
//		return b < x.b;
//	}
//};
//
//void test()
//{
//	priority_queue<node> heap;
//	for(int i = 1; i <= 5; i++)
//	{
//		heap.push({i, i*7%9, i*i});
//	}
//	while(heap.size())
//	{
//		node x = heap.top();	heap.pop();
//		cout << x.a << ' ' << x.b << " " << x.c << ' ';
//		cout << endl;
//	}
//	
//	
//}
//
//int main()
//{
//	test();
//	return 0;
//}
 


//P3378 ��ģ�塿��
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int n;
//priority_queue<int, vector<int>, greater<int>> heap;
//
//int main()
//{
//	cin >> n;
//	while(n--)
//	{
//		int op;		cin >> op;
//		if(op == 1)
//		{
//			int num;	 cin >> num;
//			heap.push(num);
//		}
//		else if(op == 2)
//		{
//			cout << heap.top() << endl;
//		}
//		else
//			heap.pop();
//	}
//	
//	return 0;
//}

//ţ��NC214362������kС 
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int n, m, k;
//priority_queue<int> heap;//����� 
//
//int main()
//{
//	cin >> n >> m >> k;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		int x;	cin >> x;
//		heap.push(x);
//		if(heap.size() > k)
//			heap.pop();
//			
//	}
//	while(m--)
//	{
//		int op;	 cin >> op;
//		if(op == 1)
//		{
//			int num; 	cin >> num;
//			heap.push(num);
//			if(heap.size() > k)
//				heap.pop();			
//		}
//		else
//		{
//			if(heap.size() > k)		cout << -1 << endl;
//			else
//				cout << heap.top() << endl;
//		}
//	}
//	return 0;
//}


//NC213140������2��
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int n, k;
//long long ret;
//
//int main()
//{
//	priority_queue<int> heap;
//	cin >> n >> k;
//	while(n--)
//	{
//		int x; 	cin >> x;
//		if(x % 2 == 0)
//			heap.push(x);
//		ret += x;
//	}
//	while(k-- && heap.size())
//	{
//		int top = heap.top() / 2;
//		heap.pop();
//		ret -= top;
//		if(top%2 == 0)
//			heap.push(top);	
//	} 
//	cout << ret << endl;
//	return 0;
// } 


//P2085 ��С����ֵ
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int n, m;
//priority_queue<int, vector<int>, greater<int>> heap;
//int abc[N][5];
//int count[N];//1,2,3,4,5...
//
//int Fun(int a, int b, int c, int x)
//{
//	return a*x*x + b*x + c;
//}
//
//int main()
//{
//	
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> abc[i][1] >> abc[i][2] >> abc[i][3];
//		count[i] = 1;
//	}
//	
//	while(heap.size() != m)//��m���� 
//	{
//		int min = 1e9;
//		int i = 1;
//		int idx = -1;
//		
//		for(; i <= n; i++)//�ҵ�Ŀǰcount��С���� 
//		{
//			int ret = Fun(abc[i][1], abc[i][2], abc[i][3], count[i]);
//			if(ret < min)
//			{
//				min = ret;
//				idx = i;
//			 } 
//		}
//		heap.push(min);
//		count[idx]++;
//	}
//	
//	while(heap.size())
//	{
//		cout << heap.top() << " ";
//		heap.pop();
//	} 
//	return 0;
//}


//P1631 ���кϲ�
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;


int n;
priority_queue<LL, vector<LL>, greater<LL>>;
LL arr1[N], arr2[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> arr1[i];
	}
	for(int i = 1; i <= n; i++)
	{
		cin >> arr2[i];
	}
	
	return 0;
}
















