//P1003 [NOIP 2011 �����] �̵�̺
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5+10;
//
//int n, x, y;
//int a[N], b[N], g[N], k[N];
//
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i] >> b[i] >> g[i] >> k[i];
//	}
//	cin >> x >> y;
//	for(int i = n; i >= 1; i--)
//	{
//		if(x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i])
//		{
//			cout << i;
//			return 0;
//		}
//	}
//	cout << -1;
//	return 0;
//} 
 

//P2010 [NOIP 2016 �ռ���] ��������
//#include <iostream>
//
//using namespace std;
//
//int a, b;
//int day[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//int main()
//{
//	cin >> a >> b;
//	int sum = 0;
//	for(int i = 1; i <= 12; i++)//�� 
//	{
//		for(int j = 1; j <= day[i]; j++)//�� 
//		{
//			int re = (j%10)*1000 + (j/10)*100 + (i%10)*10 + i/10;
//			int num = re * 10000 + i * 100 + j;
//			if(num <= b && num >= a)	sum++;
//		}
//	}
//	cout << sum;
//	return 0;
//}  


//P2327 [SCOI2005] ɨ��
//#include <iostream> 
//using namespace std;
//
//const int N = 1e4 + 10;
//int a[N], b[N];
//int n,ret;
//
//bool check(int x)//x����һ����ʲô
//{
//	a[1] = x;
//	for(int i = 2; i <= n+1; i++)
//	{
//		a[i] = b[i-1] - a[i-2] - a[i-1];
//		if(a[i] > 1 || a[i] < 0)	return false;
//	}
//	if(a[n+1] == 0)	return true;
//	else return false;
// } 
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//		cin >> b[i];
//	if(check(0))	ret++;
//	if(check(1))	ret++;
//	
//	cout << ret << endl;	
//	return 0;
//}


//���ۣ� 78�Ӽ� 
class Solution 
{
public:
    vector<vector<int>> subsets(vector<int>& nums) 
	{
        vector<vector<int>> ret;
        int n = nums.size();
		for(int i = 0; i < (1 << n); i++)//i���������� 
		{
			vector<int> tmp;
			for(int j = 0; j < n; j++)//j:λ��
			{
				if((i >> j) & 1)	tmp.push_back(nums[j]);
				
			}
			ret.push_back(tmp);
		} 
		return ret;
    }
};



