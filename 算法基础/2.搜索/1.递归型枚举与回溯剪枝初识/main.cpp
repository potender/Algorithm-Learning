//B3622 ö���Ӽ����ݹ�ʵ��ָ����ö�٣� 
//#include <iostream>
//
//using namespace std;
//
//int n;
//string str; 
//
//void dfs(int pos)//�����posλ 
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



//P10448 �����ö��
//#include <iostream>
//using namespace std;
//const int N = 30;
//
//int n, m;//1-nѡm��
//int a[N];
//
//void dfs(int pos)//����posλ 
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
//void dfs(int begin)//β���������begin��ʼ��
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


//B3623 ö�����У��ݹ�ʵ��������ö�٣�
//#include <iostream>
//#include <vector> 
//using namespace std;
//const int N = 20;
//
//int n, k;
//vector<int> path;
//bool st[N];//��Щѡ���� 
//
//void dfs()//�����sizeλ 
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



//P1706 ȫ��������
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



