//P1067 [NOIP 2009 普及组] 多项式输出
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int n;
//
////符号
////if	<0	输出-
////else
////if首项不输出
////else输出+
////
////系数
////取绝对值
////if末项，输出系数
////else
////{
////if 1	不输出 
////else	输出
////}
////so 
////只有不是末项 且 是1 不输出
////else 输出
////
////次幂
////大于1，x^次幂
////==1， x
////<1	不输出;
//
//int main()
//{
//	cin >> n;
//	for(int i = n; i >= 0; i--)
//	{
//		int x; 	cin >> x;
//		if(x == 0)	continue; 
//		//符号 
//		if(x < 0)	cout << "-";
//		else
//		{
//			if(i!=n)	cout << "+";		 
//		}
//		//系数
//		x = abs(x);
//		if(!(i != 0 && x==1)) 	cout << x;
//		//次幂
//		if(i > 1)	cout << "x^" << i;
//		else if(i == 1)	cout << "x" ;
//	}
//
//	return 0;
//}


//P5731 【深基5.习6】蛇形方阵
//#include <iostream>
//using namespace std;
//
//const int N = 20;
//
//int n, pos, x = 1, y = 1;
//int a, b;//下一个坐标 
//int num = 1;
//int dx[4] = {0, 1, 0, -1};//右下左上 
//int dy[4] = {1, 0, -1, 0};
//
//int arr[N][N];
//
//int main()
//{
//	cin >> n; 
//	while(num <= n*n)
//	{
//		arr[x][y] = num++;
//		a = x + dx[pos];
//		b = y + dy[pos];
//
//		if(a < 1 || b < 1 || a > n || b > n || arr[a][b] != 0)//改方向 
//		{
//			pos = (pos + 1) % 4;
//			a = x + dx[pos];
//			b = y + dy[pos];
//		}
//		x = a, y = b;
//
//	}
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= n; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		cout << endl;
//	}
//	return 0;
//} 



#include <iostream>
#include <algorithm>

using namespace std;

int p1, p2, p3;
string str;
string ret;


bool isdig(char ch)
{
	return ch >= '0' && ch <= '9';
}

bool islet(char ch)
{
	return ch >='a' && ch <= 'z';
}

void add(char lch, char rch)
{
	string t;
	for(char cht = lch+1; cht < rch; cht++)
	{
		char tmp = cht;
		//p1
		if(islet(tmp) && p1 == 2)
			tmp -= 32;
		else if(p1 == 3)
			tmp = '*';
		//p2
		for(int i = 1; i <= p2; i++)
		{
			t += tmp;
		}	 
	}
	//p3
	if(p3 == 2)
		reverse(t.begin(), t.end());
	ret += t;
}


int main()
{
	cin >> p1 >> p2 >> p3 >> str;
	for(int i = 0; i < str.size(); i++)
	{
		char ch;
		ch = str[i];
		if(ch != '-' || i == 0 || i == str.size() - 1)	ret += ch;
		else
		{	 
			char lch = str[i-1], rch = str[i+1];
			//判断是否展开
			if(isdig(lch) && isdig(rch) && lch < rch ||
			islet(lch) && islet(rch) && lch < rch)
				add(lch, rch);
			else
				ret += ch; 
			 
		}
	}
	cout << ret;
	return 0;
}





















