//P1601 A+B Problem（高精）
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//string x, y;
//int a[N], b[N], c[N];
//int la, lb, lc; 
//
//void add(int c[], int a[], int b[])
//{
//	for(int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] + b[i];
//		c[i+1] = c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//}
//
//int main()
//{
//	cin >> x >> y;
//	la = x.size(), lb = y.size(), lc = max(la, lb);
//	for(int i = 0; i < la; i++)		a[la-i-1] = x[i] - '0';
//	for(int i = 0; i < lb; i++)		b[lb-i-1] = y[i] - '0';
//	
//	add(c, a, b);//c = a + b
//	
//	if(c[lc])	lc++; 
//	
//	for(int i = lc-1; i >= 0; i--)
//	{
//		cout << c[i];
//	}
//	return 0;
//}


//P2142 高精度减法
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//string x, y;
//int a[N], b[N], c[N];
//int la, lb, lc;
//bool jug = 1;//0负，1正 
//
//bool cmp(string& a, string& b)
//{
//	if(a.size() != b.size())	return a.size() > b.size();
//	else	return a >= b;
//} 
//
//void sub(int c[], int a[], int b[])
//{
//	for(int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] - b[i];
//		if(c[i] < 0)
//		{
//			c[i+1] = -1;
//			c[i] += 10;
//			 
//		}
//	}
//}
//
//int main()
//{
//	cin >> x >> y;
//
//	if(!cmp(x, y))
//	{
//		cout << '-';
//		swap(x, y);
//	}
//	
//	la = x.size(), lb = y.size(), lc = max(la, lb);
//	
//	for(int i = 0; i < la; i++)		a[i] = x[la-i-1] - '0';
//	for(int i = 0; i < lb; i++)		b[i] = y[lb-i-1] - '0';	
//	sub(c, a, b);//c = a - b
//	
//	while(lc > 1 && c[lc-1] == 0)	lc--;
//	
//	for(int i = lc-1; i >= 0; i--)
//		cout << c[i];
//	return 0;
//}


//P1303 A*B Problem
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//string x, y;
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void mult(int c[], int a[], int b[])
//{
//	for(int i = 0; i < la; i++)
//	{
//		for(int j = 0; j < lb; j++)
//		{
//			c[i+j] += a[i] * b[j];
//		}
//	}
//	for(int i = 0; i < lc; i++)
//	{
//		c[i+1] += c[i]/10;
//		c[i] %= 10;
//	}
//	
//	while(lc > 1 && c[lc-1] == 0)	lc--;
//}
//
//int main()
//{
//	cin >> x >> y;
//	
//	la = x.size(), lb = y.size(), lc = la + lb;
//	for(int i = 0; i < la; i++)		a[i] = x[la-i-1] - '0';
//	for(int i = 0; i < lb; i++)		b[i] = y[lb-i-1] - '0';
//	
//	mult(c, a, b);//c = a*b;
//	for(int i = lc - 1; i >= 0; i--)
//		cout << c[i];
//	return 0;
// } 


//P1480 A/B Problem
#include <iostream>

using namespace std;

const int N = 1e6 + 10;
string x;
int a[N], b, c[N];
int la, lc;

void div(int c[], int a[], int b)
{
	long long t = 0;
	for(int i = la-1; i >= 0; i--)
	{
		t =  t*10 + a[i];
		c[i] = t / b;
		t %= b;
	}
	while(c[lc-1] == 0 && lc > 1)	lc--;
}

int main()
{
	cin >> x >> b;
	la = x.size(), lc = la;
	
	for(int i = 0; i < la; i++)		a[i] = x[la-i-1] - '0';
	
	div(c, a, b);
	
	for(int i = lc-1; i >= 0; i--)
		cout << c[i];
	
	return 0;
}
