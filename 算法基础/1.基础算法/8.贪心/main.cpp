//P10452 货仓选址
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef long long LL;
//const int N = 1e5 + 10;
//int a[N], n;
//LL ret;
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)		cin >> a[i];
//	sort(a+1, a+n+1);
//	
////	for(int i = 1; i <= n/2; i++)
////	{
////		ret += (a[n+1-i] - a[i]);
////	}
//	
//	for(int i = 1; i <= n; i++)
//	{
//		ret += abs(a[i] - a[n/2]);
//	}
//	
//	cout << ret;
//	return 0;
// } 



//P1115 最大子段和
//#include <iostream>
//using namespace std;
//
//typedef long long LL;
//const int N = 2e5 + 10;
//int a[N];
//int n;
//LL ret = -1e5, sum;
//
//int main()
//{
//	cin >> n;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		sum += a[i];
//		ret = max(sum, ret);
//		if(sum < 0) sum = 0;
//	}
//	cout << ret << endl;
//	return 0;
//}


//P1094 [NOIP 2007 普及组] 纪念品分组
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 3e4 + 10;
//int a[N];
//int w, n;
//
//int main()
//{
//	cin >> w >> n;
//	for(int i = 1; i <= n; i++)	cin >> a[i];
//	sort(a+1, a+n+1);
//	
//	int i = 1, j = n, ret = 0;
//	while(i <= j)
//	{
//		if(a[i] + a[j] > w)	j--;
//		else
//		{
//			i++;
//			j--;
//		}
//		ret++;
//	}
//	cout << ret;
//	return 0;
//}

//P1056 [NOIP 2008 普及组] 排座椅
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int m, n, k, l, d;
//const int N = 1010;
//
//struct node
//{
//	int idx;
//	int count;
//} x[N], y[N];
//
////次数从大到小 
//bool cmp1(node& a, node& b)
//{
//	return a.count > b.count;
//}
//
////索引从小到大
//bool cmp2(node& a, node& b)
//{
//	return a.idx < b.idx;
// } 
//
//int main()
//{
//	cin >> m >> n >> k >> l >> d;
//	
//	for(int i = 1; i <= m; i++)	x[i].idx = i;
//	for(int i = 1; i <= n; i++)	y[i].idx = i;
//	
//	while(d--)
//	{
//		int x1, y1, x2, y2;		cin >> x1 >> y1 >> x2 >> y2;
//		if(x1 == x2)	y[min(y1, y2)].count++;
//		else	x[min(x1, x2)].count++;
//	}
//	
//	sort(x+1, x+m+1, cmp1);
//	sort(y+1, y+n+1, cmp1);
//	
//	sort(x+1, x+k+1, cmp2);
//	sort(y+1, y+l+1, cmp2);
//	
//	for(int i = 1; i <= k; i++)
//		cout << x[i].idx << " ";
//		
//	cout << endl;
//		
//	for(int i = 1; i <= l; i++)
//		cout << y[i].idx << " ";
//	return 0;
// } 


//P1012 [NOIP 1998 提高组] 拼数
//#include <iostream> 
//#include <algorithm>
//using namespace std;
//
//string str[25], ret="";
//int n;
//
//bool cmp(string& a, string& b)
//{
//	return a+b > b+a;
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> str[i];
//	}
//	sort(str, str + n, cmp);
//	for(int i = 0; i < n; i++)
//	{
//		ret += str[i];
//	}
//	cout << ret;
//	return 0;
//}



//牛客，NC233601，【模板】哈夫曼编码
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//typedef long long LL;
//
//LL n, ret;
//priority_queue<LL ,vector<LL>, greater<LL>> heap;
//
//
//int main()
//{
//	cin >> n; 
//	while(n--)
//	{
//		LL x;	cin >> x;
//		heap.push(x);
//	}
//	
//	while(heap.size() > 1)
//	{
//		LL x = heap.top();	heap.pop();
//		LL y = heap.top();	heap.pop();
//		ret += (x+y);
//		heap.push(x+y); 
//	}
//	cout << ret << endl;
//	return 0;
//}


//P1090 [NOIP 2004 提高组] 合并果子
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//typedef long long LL;
//
//LL n;
//priority_queue<LL, vector<LL>, greater<LL>> heap;
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		LL x;	cin >> x;
//		heap.push(x);
//	}
//	LL ret = 0;
//	while(heap.size() > 1)
//	{
//		LL x = heap.top();	heap.pop();
//		LL y = heap.top();	heap.pop();
//		ret += (x+y);
//		heap.push(x+y);
//	}
//
//	cout << ret;
//	return 0;
//}




//P1803 凌乱的yyy / 线段覆盖
//#include <iostream>
//#include <algorithm> 
//using namespace std;
//
//const int N = 1e6 + 10;
//
//struct node
//{
//	int l;
//	int r;
//}a[N];
//
//int n;
//
//bool cmp(node& a, node& b)
//{
//	return a.l < b.l;
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)	cin >> a[i].l >> a[i].r;
//	
//	sort(a+1, a+n+1, cmp);
//	
//	int ret = 1;
//	int r = a[1].r;
//	for(int i = 2; i <= n; i++)
//	{
//		if(a[i].l < r)
//		{
//			r = min(r, a[i].r);
//		}
//		else
//		{
//			ret++;
//			r = a[i].r;
//		}
//	}
//	
//	cout << ret;
//	return 0;
//}



//UVA1193 Radar Installation
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int N = 1010;
int n, d;

struct node 
{
	double l, r;
}a[N];

bool cmp(node& a, node& b)
{
	return a.l < b.l;
}

int main()
{
	int cnt = 0; 
	while(cin >> n >> d, n && d)
	{
		cnt++;
		bool flag = false;
		for(int i = 1; i <= n; i++)
		{
			double x, y;
			cin >> x >> y;
			if(y > d)	flag = true;
			double det = sqrt(d*d - y*y);
			a[i].l = x-det;	a[i].r = x+det;
		}
		
		cout << "Case " << cnt << ":";
		
		
		sort(a+1, a+n+1, cmp);
		
		int ret = 1;
		double r = a[1].r;
		if(flag)	cout << -1 << endl;
		else
		{
			for(int i = 2; i <= n; i++)
			{
				if(a[i].l < r)
				{
					r = min(r, a[i].r);
				}
				else
				{
					ret++;
					r = a[i].r;
				}
			}
			cout << ret << endl;
		}
	}
	return 0;
}









