//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//
////1.���� 
//int stk[N],n;
//
////2.��ջ
//void push(int x)
//{
//	stk[++n] = x;
// } 
// 
////3.��ջ
//void pop()
//{
//	n--;
//} 
//
////4.����ջ��
//int top()
//{
//	return stk[n]; 
//}
//
////5.�п�
//int empty()
//{
//	return n==0;
// } 
// 
// //6.��С 
//int size()
//{
//	return n;
//} 
//
//int main()
//{
//	for(int i = 1; i <= 10; i++)
//	{
//		push(i);
//		cout << top() << ' ';
//	} 
//	 cout << endl;
//	while(!empty())
//	{
//		cout << top() << endl;
//		pop();
//	}
//	return 0;
//}


//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main()
//{	
//	stack<int> st;
//	
//	for(int i = 1; i <= 10; i++)
//	{
//		st.push(i);
//		cout << st.top() << ' ';
//	}
//	cout << endl;
//	while(!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//	return 0;
//}



//ģ�� 
//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//typedef unsigned long long ull;
//
//ull stk[N], n;
//
////2.��ջ
//void push(ull x)
//{
//	stk[++n] = x;
// } 
// 
////5.�п�
//int empty()
//{
//	return n==0;
// } 
// 
// 
////3.��ջ
//void pop()
//{
//	if(empty())
//	{
//		cout << "Empty" << endl;
//	}
//	else
//		n--;
//} 
//
////4.����ջ��
//void query()
//{
//	if(empty())
//	{
//		cout << "Anguei!" << endl;
//	}
//	else
//		cout << stk[n] << endl; 
//}
//
//
// 
// //6.��С 
//int size()
//{
//	return n;
//} 
//
//int main()
//{
//	int t;	cin >>t;
//	while(t--)
//	{
//		int m;	cin >> m;
//		n = 0;
//		while(m--)
//		{
//			
//			string op;	cin >> op;
//			if(op == "push")
//			{
//				ull x; cin >> x;
//				push(x);
//			}
//			else if(op == "pop")
//				pop();
//			else if(op == "query")
//				query();
//			else
//				cout << size() << endl;
//		}
//	}
//	return 0;
//}


//��Ч������
//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Solution 
//{
//public:
//    bool isValid(string s) 
//	{
//        stack<char> st;
//        for(int i = 0; i < s.size(); i++)
//        {
//        	char ch = s[i];
//        	if(ch == '(' || ch == '{' || ch == '[')//������������ 
//        		st.push(ch);
//        	else//������������ 
//        	{
//        		if(st.empty())
//        			return false;
//				else
//				{
//				    char chtop = st.top();
//	        		if(ch == ')' && chtop == '(' || ch == ']' && chtop == '[' || ch == '}' && chtop == '{')
//	        		{
//	        			st.pop();
//					}
//					else
//						return false;
//					}
//			}
//		}
//		return st.empty();
//    }
//};
//
//int main()
//{
//	Solution sol;
//	cout <<  sol.isValid("{}{}") << endl;
//}


//#include <iostream>
//#include <stack>
//
//const int N = 1e5 + 10;
//
//using namespace std;
//
//int pushed[N], poped[N];
//
//int main()
//{
//	int q; 	cin >> q;
//	
//	while(q--)
//	{
//		stack<int> st;
//		
//		int n; cin >> n;
//		for(int i = 1; i <= n; i++)			cin >> pushed[i];
//		for(int i = 1; i <= n; i++)			cin >> poped[i];
//		int j = 1;//����poped
//		
//		for(int i = 1; i <= n; i++)//����pushed 
//		{
//			st.push(pushed[i]);
//			while(st.size() && st.top() == poped[j] && j <= n)
//			{
//				st.pop();
//				j++;
//			}
//		}
//		if(st.empty())	cout << "Yes" << endl;
//		else	cout << "No" << endl;
//	}
//	return 0;
//} 

//#include <iostream>
//#include <stack>
//using namespace std;
//int main()
//{
//	stack<int> st;
//	char ch;
//	int num = 0;
//	while(cin >> ch)
//	{
//		if(ch == '@')	break;
//		else if(ch >= '0' && ch <= '9')
//		{
//			num = num*10 + (ch - '0');
//		}
//		else if(ch == '.')
//		{
//			st.push(num);
//			num = 0;
//		}
//		else//����� 
//		{
//			int a = st.top();
//			st.pop();
//			int b = st.top();
//			st.pop();
//			if(ch == '+')
//				st.push(a+b);
//			else if(ch == '-')
//				st.push(b-a);
//			else if(ch == '*')
//				st.push(b*a);
//			else if(ch == '/')
//				st.push(b/a);
//		}
//	}
//	cout << st.top() << endl;
//	return 0;
//}

//P1241 ��������
#include <iostream>
#include <stack>
using namespace std;

bool bo[110];

int main()
{
	string str; 	cin >> str;
	stack<int> st;
	for(int i = 0; i <str.size(); i++)//��bo,�ҳ���ƥ����ַ� 
	{
		char ch = str[i];
		if(ch == '[' || ch == '(')
			st.push(i);
		else//ch������ 
		{
			if(st.empty())	continue;
			int top = st.top();
			char topch = str[top];
			if(ch == ']' && topch == '[' || ch == ')' && topch == '(' )//ƥ�� 
			{
				bo[top] = bo[i] = 1; 
				st.pop();
			}
		}
		
	}
	
	for(int i = 0; i < str.size(); i++)
	{
		if(bo[i] == 1)	cout << str[i];
		else 
		{
			if(str[i] == '[' || str[i] == ']')
				cout << "[]";
			else if(str[i] == '(' || str[i] == ')')
				cout << "()";
		}
	 } 
	return 0;
}
