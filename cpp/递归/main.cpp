//P5739 �����7.��7������׳�
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



//B2064 쳲���������
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



//B2142 �� 1+2+3+...+N ��ֵ
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



//B2144 ��������Ackermann������
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



//B2145 digit ����
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



//B2147 �� f(x,n)
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



//B2148 ���� f(x,n)
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



//B2143 ����ת��
#include <iostream>
using namespace std;

int main()
{
	
	return 0;
}











