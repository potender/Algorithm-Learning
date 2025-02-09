//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
////1.������
//int e[N], ne[N], h, id; 
//int mp[N];
//
////2.ͷ��
//void push_back(int x)
//{
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	ne[id] = ne[h];
//	ne[h] = id;
//} 
//
////3.����
//void print()
//{
//	for(int i = ne[h]; i; i = ne[i])
//	{
//		cout << e[i] << ' ';
//	}
//	cout << endl << endl;
// } 
// 
////4.��ֵ����
//int find1(int x)
//{
//	for(int i = ne[h]; i; i = ne[i])
//	{
//		if(e[i] == x)
//			return i;
//	}
//	return 0;
// } 
// 
//int find2(int x)
//{
//	return mp[x];
//}
//
////5.����λ�� p ֮�����Ԫ��
//void insert(int p, int x)
//{
//	id++;
//	e[id] = x;
//	ne[id] = ne[p];
//	ne[p] = id;
//}
//
////6.ɾ������λ�� p ֮���Ԫ��
//void erase(int p)
//{
//	if(ne[p])
//	{
//		mp[e[ne[p]]] = 0;
//		ne[p] = ne[ne[p]];
//	}
//}
//
//int main()
//{
//	for(int i = 6; i <= 10; i++)
//	{
//		push_back(i);
////		print();
//	}
//
//	
////	cout << find1(2) << endl;
////	cout << find1(7) << endl; 
//	
////	cout << find2(2) << endl;
////	cout << find2(7) << endl; 
//
//	insert(2, 10);
//	print();
////	insert(5, 100);
////	print();
//	
////	erase(2);
////	print();
////	erase(4);
////	print();
//	return 0;
//}


////˫������
//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//
////1.����
//int e[N], pre[N], ne[N], h, id;
//int mp[N];
//
////2.ͷ��
//void push_front(int x)
//{
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	
//	pre[id] =  h;
//	ne[id] = ne[h];
//	pre[ne[h]] = id;
//	ne[h] = id;
//} 
//
//
////3.����
//void print()
//{
//	for(int i = ne[h]; i; i = ne[i])
//	{
//		cout << e[i] << ' ';
//	 } 
//	 cout << endl << endl;
//}
// 
// 
////4.����
//int find(int x)
//{
//	return mp[x];
// } 
// 
////5.������λ�� p ֮�����
//void insert_back(int p, int x)
//{
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	
//	pre[id] = p;
//	ne[id] = ne[p];
//	pre[ne[p]] = id;
//	ne[p] = id;
//} 
//
////6.������λ�� p ֮ǰ���� 
//void insert_front(int p, int x)
//{
//	id++;
//	e[id] = x;
//	mp[x] = id;
//	
//	pre[id] = pre[p];
//	ne[id] = p;
//	ne[pre[p]] = id;
//	pre[p] = id;
//}
//
////7.ɾ�� p λ�õ�Ԫ��
//void erase(int p)
//{
//	pre[ne[p]] = pre[p];
//	ne[pre[p]] = ne[p];
//} 
//
//int main()
//{
//	for(int i = 1; i <= 5; i++)
//	{
//		push_front(i);
//		print();
//	}
//	
////	cout << find(2) << endl;
////	cout << find(7) << endl;
//	
////	insert_front(2, 111);
////	print();
////	insert_front(4, 222);
////	print();
//	
//	erase(2);
//	print();
//	erase(4);
//	print();
//	
//	return 0;
// } 


////B3630�Ŷ�˳��
//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
//
//int ne[N];
//
//int main()
//{
//	int n;	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> ne[i];
//	 } 
//	int h; cin >> h;
//	for(int i = h; i ; i = ne[i])
//		cout << i << ' ';
//	return 0;
// } 


//B3631��������
//#include <iostream>
//using namespace std;
// 
//const int N = 1e5 + 10;
//const int M = 1e6 + 10;
//int e[N], ne[N], id;
//int mp[M];  
//
//int main()
//{
//	e[1] = 1;
//	mp[1] = 1;
//	id = 1;
//	
//	int n; 	cin >> n;
//	while(n--)
//	{
//		int op, x;		cin >> op >> x;
//		int p = mp[x];	//x��λ�� 
//		if(op == 1)//���� 
//		{
//			int y;	cin >> y;
//			id++;
//			e[id] = y;
//			mp[y] = id;
//			ne[id] = ne[p];
//			
//			ne[p] = id;
//			
//		}
//		else if(op == 2)
//		{
//			cout << e[ne[p]] << endl;
//		}
//		else if(op == 3)
//		{
//			ne[p] = ne[ne[p]];
//		}
//	}
//	return 0;
//} 

//P1160 ���а���
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int e[N], ne[N], pre[N],id;
int mp[N];

int main()
{
	id++;
	e[id] = 1;
	mp[1] = id;
	
	int n; 	cin >> n;
	for(int i = 2; i <= n; i++) 
	{
		int k, p;	cin >> k >> p;
		int q = mp[k];
		id++;
		e[id] = i;
		mp[i] = id;
		
		if(p == 1)//���ұ� 
		{
			pre[id] = q;
			ne[id] = ne[p];
			
			pre[ne[q]] = id;
			pre[q] = id;
		}
		else if(p == 0)//�����
		{
			pre[id] = pre[q];
			ne[id] = q;
			
			ne[pre[q]] = id;
			pre[q] = id;
			
		} 
	}
	
	int m;	cin >> m;
	while(m--)
	{
		int x;	cin >> x;
		int q = mp[x];
		if(q)
		{
			pre[ne[q]] = pre[q];
			ne[pre[q]] = ne[q];
		}
	}
	
	for(int i = ne[0]; i; i = ne[i])
	{
		cout << e[i] << ' ';
	}
	return 0;
}
