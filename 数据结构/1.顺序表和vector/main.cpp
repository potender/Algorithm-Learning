//#include <iostream>
//using namespace std;
//
//const int N = 1e6+10;
// 
////1.创建 
//int a[N],n;
////2.添加
//void push_back(int x)
//{
//	a[++n] = x;
//}
//
//void push_front(int x)//1到n的元素右移一位 
//{
//	for(int i = n; i >= 1; i--)
//	{
//		a[i+1] = a[i];
//	}
//	a[1] = x;
//	n++;
// } 
//
//void insert(int p, int x)//p 到 n 右移一位 
//{
//	for(int i=n; i >= p; i--)
//	{
//		a[i+1] = a[i];
//	}
//	a[p] = x;
//	n++;
//}
//void print()
//{
//	for(int i = 1; i <= n; i++)
//	{
//		cout << a[i] << ' ';
//	}
//	cout << endl;
// } 
// 
//void pop_back()
//{
//	n--;
//}
//
//void pop_front()
//{
//	for(int i = 2; i <= n; i++)
//	{
//		a[i-1] = a[i];
//	}
//	n--;
//}
//void erase(int p)
//{
//	for(int i = p+1; i <= n; i++)
//	{
//		a[i-1] = a[i];
//	}
//	n--;
//}
//
//int find(int x)
//{
//	for(int i = 1; i <= n; i++)
//	{
//		if(x == a[i])
//			return i;
//	}
//	return 0;
//}
//
//int at(int p)
//{
//	return a[p];
//}
//
//void change(int p, int x)
//{
//	a[p] = x;
//}
//
//void clear()
//{
//	n = 0;
//}
//int main()
//{
//	cout << "push:" << endl;
//	push_back(1);
//	print();
//	push_back(2);
//	print();
//	push_back(3);
//	print();
//	push_back(4);
//	print();
//	push_front(8);
//	print();
//	push_front(9);
//	print();
//	
//	cout <<"pop:" << endl;
//	pop_back();
//	print();
//	pop_back();
//	print();
//	pop_front();
//	print();
//	erase(2);
//	print();
//	
//		
//	return 0;
//}





//vector用法 
//#include <iostream>
//#include <vector>
//using namespace std;
//const int N = 10;
//
//struct node
//{
//	int a, b;
//	string c;
//};
//
//void print(vector<int> &a)
//{
////	//1.用size() 
////	for(int i = 0; i < a.size(); i++)
////	{
////		cout << a[i] << ' ';
////	}
////	cout << endl;
//
////	//2.用begin()和end()
////	for(auto it = a.begin(); it != a.end(); it++)
////	{
////		cout << *it << ' ';
////	 } 
////	 cout << endl;
//
//	//3.语法糖，范围for遍历 
//	for(auto x : a)
//	{
//		cout << x << ' ';
//	 } 
//	 cout << endl;
// } 
//
//int main()
//{
//	//1.创建vector 
//	vector<int> a1;
//	vector<int> a2(N);	//	创建有N个元素大小的可变数组
//	vector<int> a3(N, 2);	 //	创建有N个元素大小的可变数组,所有的元素都为2
//	vector<int> a4 = {1, 2, 3, 4, 5};
//	
//	vector<string> a5;
//	vector<struct node> a6; 
//	vector<vector<int>> a7; 
//	
//	vector<int> a8[N];	//int a8[N],N个元素的数组，元素类型是vector<int> 
//	
//	
////	//2.empty() / size()
////	print(a2);
////	print(a3);
////	print(a4);
////	if(a2.empty())
////		cout << "空" << endl;
////	else
////		cout << "不空" << endl;
//		
//		
////	//3.begin() / end()
////	print(a2);
////	print(a3);
////	print(a4);
//	
//	
////	//4.push_back() / pop_back()	尾插和尾删
////	for(int i = 0; i < 5; i++)
////	{
////		a1.push_back(i);
////		print(a1);
////	} 
////	
////	while(!a1.empty())
////	{
////		a1.pop_back();
////		print(a1);
////	}
//	
//	
//	//5.front() / back()
////	cout << a4.front() << ' ' << a4.back() << endl;
//	
//	
//	//6.resize() / clear()
////	print(a3);
////	a3.resize(N * 2);
////	print(a3);
////	a3.resize(N/2);
////	print(a3);
////	
////	cout << a3.size() << endl;
////	a3.clear();
////	cout << a3.size() << endl;
//	
//	return 0;
// } 


//P3156 【深基15.例1】询问学号
//#include<iostream>
//using namespace std;
//
//const int N = 2e6+10;
//
//int arr[N];
//int main()
//{
//    int n, m;
//    int p;
//    cin >> n >> m;
//    for(int i = 1; i <= n; i++)
//    {
//        cin >> arr[i];
//    }
//    for(int i = 1; i <= m; i++)
//    {
//        cin >> p;
//        cout << arr[p] << endl;
//    }
//
//    return 0;
//}


//P3613 【深基15.例2】寄包柜
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//vector<int> v[N];
//int n, q;
//
//int main()
//{
//	cin >> n >> q;
//	while(q--)
//	{
//		int op, i, j;
//		cin >> op >> i >> j;
//		if(op == 1)
//		{
//			if(v[i].size() <= j)
//				v[i].resize(j+1);
//			cin >> v[i][j];
//		}
//		else
//		{
//			cout << v[i][j] << endl;
//		}
//	} 
//	return 0;
//}


//力扣，283.移动零 
//class Solution 
//{
//public:
//    void moveZeroes(vector<int>& nums) 
//	{
//        for(int i = 0, cur = -1; i < nums.size();i++) 
//        {
//        	if(nums[i] != 0)
//        	{
//        		swap(nums[i], nums[++cur]);
//
//			}
//		}
//    }
//}; 


//力扣，75.颜色分类 
//class Solution
//{
//public:
//    void sortColors(vector<int>& nums) 
//	{
//		int i = 0, left = -1, right = nums.size();
//		while(i < right)
//		{
//			if(nums[i] == 1)	i++;
//			else if(nums[i] == 2)	swap(nums[--right],nums[i]);
//			else if(nums[i] == 0)	swap(nums[i++], nums[++left]);
//		}
//    }
//};



//力扣，88.合并两个有序数组 
//class Solution 
//{
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
//	{
//        vector<int> meg(m+n);
//		int i = 0, j = 0;
//		int p = 0;//meg指针 
//		while(i!= m && j != n)
//		{
//			if(nums1[i] >= nums2[j])
//				meg[p++] = nums2[j++];
//			else if(nums1[i] < nums2[j])
//				meg[p++] = nums1[i++];
//				
//		}
//		if(i == m)
//			for(int x = j; x < n; x++)
//				meg[p++] = nums2[x];
//		else if(j == n)
//		{
//			for(int x = i; x < m; x++)
//			{
//				meg[p++] = nums1[x];
//			}
//		}
//		for(int x = 0; x < m+n; x++)
//		{
//			nums1[x] = meg[x];
//		}
//    }
//};




//Blocks Problem
#include <iostream>
#include <vector> 
#include <string>
using namespace std;

const int N = 30;
vector<int> v[N];

void recover(vector<int> ve)
{
	for(int i = 1; i < ve.size(); i++)
	{
		int p = ve[i];
		v[p].push_back(p);
	}
	ve.resize(1);	
}

int main()
{
	int n; 	cin >> n;
	for(int i = 0; i < n; i++)
		v[i].push_back(i);
	
	
	int a, b;
	string op1, op2;
	while(cin >> op1 && op1 != "quit")
	{
		cin >> a >> op2 >> b;
		if (op1 == "move" && op2 == "onto")
		{
			recover(v[a]);
			recover(v[b]);
			v[a].clear();
			v[b].push_back(a);
		}
		else if (op1 == "move" && op2 == "over")
		{
			recover(v[a]);
			v[a].clear();
			v[b].push_back(a);
		}
		else if (op1 == "pile" && op2 == "onto")
		{
			recover(v[b]);
			//找到a
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < v[i].size(); j++)
				{
					if(v[i][j] == a)
					{
						for(int x = j; i < v[i].size(); x++)
						{
							v[b].push_back(v[i][x]);
						}
					}
				}
			 } 

		}
		else if (op1 == "pile" && op2 == "over")
		{
			//找到a
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < v[i].size(); j++)
				{
					if(v[i][j] == a)
					{
						for(int x = 0; x < v[i].size(); x++)//检查非法指令 
						{
							if(v[i][x] == b)
								goto FLAG;
						}
						
						for(int x = j+1; i < v[i].size(); x++)
						{
							v[b].push_back(v[i][x]);
						}
					}
				}
			 } 
		}
		
		for(int i = 0; i < n; i++)
		{
			cout << i << ':';
			for(auto x : v[i])
			{
				cout << x <<' ';
			}
			cout << endl << endl;
		}
		FLAG:;
	}
	
	for(int i = 0; i < n; i++)
	{
		cout << i << ':';
		for(auto x : v[i])
		{
			cout << x <<' ';
		}
		cout << endl;
	}
	return 0;
}
