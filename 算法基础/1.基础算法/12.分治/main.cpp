//P1908 �����
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
//LL dfs(int l, int r)//�ҵ�l-r�е������ �������� 
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



//P1923 �����9.��4����� k С����
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
//int fun(int left, int right, int k)//�ڵ�left-right��εĵ�kС 
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



//P1115 ����Ӷκ�
//#include <iostream>
//
//using namespace std;
//const int N = 2e5 + 10;
//
//int arr[N];
//
//int findmax(int left, int right)//����left-right��ε�����ֶκ� 
//{
//	if(left == right)	return arr[left];
//	
//	int mid = (left + right)/2;
//	int ret = max(findmax(left, mid),findmax(mid+1, right));
//	
//	int suml = arr[mid], sumr = arr[mid+1];
//	int maxl = suml, maxr = sumr;
//	for(int i = mid-1; i >= left; i--)
//	{
//		suml += arr[i];
//		maxl = max(suml, maxl);
//	}
//	for(int i = mid+2; i <= right; i++)
//	{
//		sumr += arr[i];
//		maxr = max(sumr, maxr);
//	}
//	return max(maxr + maxl, ret);
//	 
//}
//
//int main()
//{
//	int n; 	cin >> n;
//	for(int i = 1; i <= n; i++)	cin >> arr[i];
//	cout << findmax(1,n);
//	return 0;
//}


//P1228 ��̺�����
#include <iostream>
using namespace std;

//�����ǰab��len��Χ�ĵ�̺ 
void dfs(int a, int b, int len, int x, int y)//���Ͻ�����ab������len������λ��xy 
{
	if(len == 1)	return;
	len /= 2;
	if(x >= a+len && y >= b+len)//���� 
	{
		printf("%d %d %d\n", a+len-1, b+len-1, 4);
		dfs(a, b, len, a+len-1, b+len-1);
		dfs(a, b+len, len, a+len-1, b+len);
		dfs(a+len, b, len, a+len, b+len-1);
		dfs(a+len, b+len, len, x, y);
	}
	else if(x < a+len && y < b+len)//���� 
	{
		printf("%d %d %d\n", a+len, b+len, 1);
		dfs(a, b, len, x, y); 
		dfs(a, b+len, len, a+len-1, b+len);		
		dfs(a+len, b, len, a+len, b+len-1);
		dfs(a+len, b+len, len, a+len, b+len);
	}
	else if(x < a+len)//���� 
	{
		printf("%d %d %d\n", a+len, b+len-1, 2);
		dfs(a, b, len, a+len-1, b+len-1); 
		dfs(a, b+len, len, x, y);		
		dfs(a+len, b, len, a+len, b+len-1);
		dfs(a+len, b+len, len, a+len, b+len);		
	}
	else//���� 
	{
		printf("%d %d %d\n", a+len-1, b+len, 3);
		dfs(a, b, len, a+len-1, b+len-1); 
		dfs(a, b+len, len, a+len-1, b+len);		
		dfs(a+len, b, len, x, y);
		dfs(a+len, b+len, len, a+len, b+len);			
	}
	
	
}


int main()
{
	int k, x, y;	cin >> k >> x >> y;
	k = (1 << k);
	dfs(1, 1, k, x, y); 
	return 0; 
}




