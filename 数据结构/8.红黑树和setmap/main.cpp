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
//	//���� 
//	set<int> mp;
//	
//	//���� 
//	for(auto x : a)
//		mp.insert(x);
//		
//	//���� 
//	for(auto x : mp)
//		cout << x << ' ';
//		
//	cout << endl;
//	
//	//ɾ�� 
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
//	//���ص�������һ�����ڵ��ڣ�һ������ 
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
////	mp.insert({"����", 1});
////	mp.insert({"����", 2});
////	mp.insert({"����", 3});
////	
//////	print(mp);
////	
////	//����[] 
////	mp["����"] = 666;
////	cout << mp["����"]  << endl; 
////	
////	//mp["����"]���Զ�������valueΪ0 
////	if(mp.count("����") && mp["����"] == 4) 	cout << "����==4" << endl;
////	else cout << "no" << endl;
////	
////	mp.erase("����");
////	print(mp); 
//	 
//	 test();
//	 
//	return 0;
//}
//


//P2786 Ӣ��1��eng1��- Ӣ������
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


