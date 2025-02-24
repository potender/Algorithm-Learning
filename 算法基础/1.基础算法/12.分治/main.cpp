//P1908 逆序对
//#include <iostream>
//using namespace std;
//
//const int N = 5e5 + 10;
//typedef long long LL;
//
//int n;
//int arr[N], tmp[N];
//
//
//LL dfs(int l, int r)//找到l-r中的逆序对 ，并排序 
//{
//	if(l >= r)	return 0;
//	
//	LL ret = 0;
//	int mid = (l+r)/2;
//	ret += dfs(l, mid);
//	ret += dfs(mid+1, r);
//	
//	int cur1 = l, cur2 = mid+1, i = l;
//	while(cur1 <= mid && cur2 <= r)
//	{
//		if(arr[cur1] <= arr[cur2])	tmp[i++] = arr[cur1++];
//		else
//		{
//			ret += (mid-cur1+1);
//			tmp[i++] = arr[cur2++];
//		}
//	}
//	while(cur1 <= mid)	tmp[i++] = arr[cur1++];
//	while(cur2 <= r)	 tmp[i++] = arr[cur2++];
//	for(int i = l; i <= r; i++)	arr[i] = tmp[i];
//	return ret;
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	
//	cout << dfs(1, n);
//	return 0;
//}



//P1923 【深基9.例4】求第 k 小的数
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//const int N = 5e6 + 10;
//
//int n;
//int arr[N];
//
//int get_random(int left, int right)
//{
//	return arr[left + rand() % (right-left+1)];
//}
//
//int fun(int left, int right, int k)//在第left-right这段的第k小 
//{
//	if(left >= right) return a[left];
//	int p = get_random(left, right);
//	int l = left-1, r = right+1, i = left;
//	while(i < r)
//	{
//		if(arr[i] < p)	swap(arr[++l], arr[i++]);
//		else if(arr[i] == p) i++;
//		else swap(arr[--r],arr[i]);
//	}
//	int a = l-left+1, b = r-l-1, c = right-r+1;
//	if(k <= a)   return fun(left, l, k);
//	else if(k <= a+b)	return p;
//	else	 return fun(r, right, k-a-b);//k > a+b
//	
//}
//
//int main()
//{
//	srand(NULL); 
//	int k;
//	scanf("%d%d", &n, &k);	k++;
//	for(int i = 1; i <= n; i++)		scanf("%d", &arr[i]);
//	cout << fun(1, n, k); 
//	return 0;
// } 



//P1115 最大子段和
#include <iostream>

using namespace std;
const int N = 2e5 + 10;

int arr[N];

int findmax(int left, int right)
{
	
}

int main()
{
	int n; 	cin >> n;
	for(int i = 1; i <= n; i++)	cin >> arr[i];
	cout << findmax(1,n);
	return 0;
}







