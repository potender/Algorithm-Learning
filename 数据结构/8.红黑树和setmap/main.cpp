//set
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int a[] = {10, 60, 20, 70, 80, 30, 90, 40, 100, 50};
//
//int main()
//{
//	//创建 
//	set<int> mp;
//	
//	//插入 
//	for(auto x : a)
//		mp.insert(x);
//		
//	//遍历 
//	for(auto x : mp)
//		cout << x << ' ';
//		
//	cout << endl;
//	
//	//删除 
////	mp.erase(30);
////	mp.erase(60);
////	 
////	for(auto x : mp)
////		cout << x << ' ';
////	cout << endl;
////	
////	if(mp.count(30))
////		cout << 30 << endl;
////	else
////		cout << "no:30" << endl;
//		
//	//返回迭代器，一个大于等于，一个大于 
//	cout << *mp.lower_bound(20) << endl;
//	cout << *mp.upper_bound(20) << endl;
//	
//	return 0;
//} 


////map
//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//void print(map<string, int>& mp)
//{
//	for(auto& x : mp)
//	{
//		cout << x.first << ":" << x.second << endl;
//	}
//}
//
//void test()
//{
//	string str;
//	map<string, int> mp;
//	for(int i = 1; i <= 10; i++)
//	{
//		cin >> str;
//		mp[str]++;
//	 } 
//	print(mp);
//}
//int main()
//{
////	map <string, int> mp;
////	mp.insert({"张三", 1});
////	mp.insert({"李四", 2});
////	mp.insert({"王五", 3});
////	
//////	print(mp);
////	
////	//重载[] 
////	mp["李四"] = 666;
////	cout << mp["李四"]  << endl; 
////	
////	//mp["赵六"]会自动创建，value为0 
////	if(mp.count("赵六") && mp["赵六"] == 4) 	cout << "赵六==4" << endl;
////	else cout << "no" << endl;
////	
////	mp.erase("李四");
////	print(mp); 
//	 
//	 test();
//	 
//	return 0;
//}
//


//P2786 英语1（eng1）- 英语作文
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//
//map <string, int> mp;
//int n, p;
//long long ret;
//
//bool check(char ch)
//{
//	if(ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//	return true;
//	else
//		return false;
// } 
//
//int main()
//{
//	cin >> n >> p;
//	while(n--)
//	{
//		string str; 	int num;
//		cin >> str >> num;
//		mp[str] = num;
//	}
//	char c;
//	string t = "";
//	while(scanf("%c", &c) != EOF)
//	{
//		if(check(c))
//		{
//			t += c;
//		}
//		else
//		{
//			ret = (ret + mp[t]) % p;
//			t = "";
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

#include <iostream>
#include <set>

using namespace std;

int n;
set<int> mp;
int ret;

int main()
{
	cin >> n; 
	while(n--)
	{
		int x;	cin >> x;
		mp.insert(x);
	}
	return 0;
 } 


