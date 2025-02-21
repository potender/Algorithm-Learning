//P5739 【深基7.例7】计算阶乘
//#include <iostream> 
//using namespace std;
//
//int fun(int n)
//{
//	if(n==1)	return 1;
//	return n*fun(n-1);
//}
//
//int main()
//{
//	int n;	cin >> n;
//	cout << fun(n) << endl;
//	return 0;
//}



//B2064 斐波那契数列
//#include <iostream>
//
//using namespace std;
//
//int fib(int n)
//{
//	if(n==1 || n==2) 	return 1;
//	return fib(n-1) + fib(n-2);	
//}
//
//int main()
//{
//	int m;	cin >> m;
//	while(m--)
//	{
//		int n;	cin >> n;
//		cout << fib(n) << endl;	
//	}
//
//	return 0;
//}



//B2142 求 1+2+3+...+N 的值
//#include <iostream>
//
//using namespace std;
//
//int fun(int n)
//{
//	if(n==1)	return 1;
//	return n + fun(n-1);
//}
//
//int main()
//{
//	int n;	cin >> n;
//	cout << fun(n) << endl;
//	return 0;
// } 



//B2144 阿克曼（Ackermann）函数
//#include <iostream>
//using namespace std;
//
//int Acker(int m, int n)
//{
//	if(m==0)	return n+1;
//	if(m>0 && n==0)	return Acker(m-1, 1);
//	else return Acker(m-1, Acker(m, n-1));
//}
//
//int main()
//{
//	int m, n;	cin >> m >> n;
//	cout << Acker(m, n) << endl;
//	return 0;
//}



//B2145 digit 函数
//#include <iostream>
//
//using namespace std;
//
//int find(int n, int k)
//{
//	if(k==1)	return n%10;
//	return find(n/10, k-1);
//}
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	cout << find(n, k) << endl;
//	return 0;
//}



//B2147 求 f(x,n)
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//double fun(double x, int n)
//{
//	if(n==1)	return sqrt(1+x);
//	return sqrt(n + fun(x, n-1));
//}
//
//int main()
//{
//	double x; int n;	cin >> x >> n;
//	double ret = fun(x, n);
//	printf("%.2lf", ret);
//	return 0;
//}



//B2148 再求 f(x,n)
//#include <iostream>
//using namespace std;
//
//double fun(double x, int n)
//{
//	if(n==1)	return x/(1+x);
//	return x/(n + fun(x, n-1));
//}
//
//int main()
//{
//	double x; int n;	cin >> x >> n;
//	double ret = fun(x, n);
//	printf("%.2lf", ret);
//	return 0;
// } 



//B2143 进制转换
#include <iostream>
using namespace std;

int main()
{
	
	return 0;
}











