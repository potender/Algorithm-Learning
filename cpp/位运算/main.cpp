//B3619 10 ����ת x ����
//#include <iostream>
//using namespace std;
//
//int n, x;
//string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWKYZ";
//
//void n_to_x(int n, int x)
//{
//	if(n >= x)
//		n_to_x(n/x, x);
//	cout << s[n%x];
//}
//
//int main()
//{
//	cin >> n >> x;
//	n_to_x(n, x);
//	return 0;
//} 


//B3620 x ����ת 10 ����
//����1 
//#include <iostream>
//
//using namespace std;
//
//string st = "0123456789ABCDEFGHIJKLMNOPQRSTUVWKYZ";
//
//int x;string s;
//int ret = 0;
//
//int main()
//{
//	cin >> x >> s;
//	for(int i = 0; i < s.size(); i++)
//	{
//		ret = ret * x + st.find(s[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}
//����2
//#include <iostream>
//#include <string>
//using namespace std;
//
//int x;string s;
//
//int main()
//{
//	cin >> x >> s;
//	cout << stoi(s, NULL, x);
//	return 0;
//}



//P1143 ����ת��
//n����תm���ƣ���ת��10���ƣ���ת��m����
 

//���ۣ�190.�ߵ�������
//class Solution 
//{
//public:
//    uint32_t reverseBits(uint32_t n) 
//	{
//		uint32_t ret = 0;
//        for(int i = 0; i < 32; i++)
//        {
//        	uint32_t tmp = (n>>i) & 1;
//        	tmp <<= (31 - i);
//        	ret |= tmp;
//        	
//		}
//        return ret;
//    }
//};


//���ۣ�476.���ֵĲ��� 
//class Solution 
//{
//public:
//    int findComplement(int num)
//    {
//    	int i = 0;//num�ڼ�λ
//		int ret = 0; 
//        while(num)
//        {
//        	if((num & 1) == 0)
//        		ret |= (1 << i);
//        	i++;
//        	num >>= 1;
//		}
//		return ret;
//    }
//};



//���ۣ�191.λ1�ĸ��� 
//class Solution
//{
//public:
//    int hammingWeight(int n) 
//	{
//		int count = 0;
//        while(n)
//        {
//        	n = n & (n-1);
//        	count++;
//		}
//		return count;
//    }
//};


//���ۣ�231.2����
//class Solution 
//{
//public:
//    bool isPowerOfTwo(int n) 
//	{
//		return (n>=1) && (n&(n-1) == 0);
//    }
//};


//���ۣ�136.ֻ����һ�ε�����
//class Solution 
//{
//public:
//    int singleNumber(vector<int>& nums) 
//	{
//		int ret = 0;
//        for(auto x : nums)
//        {
//        	ret ^= x;
//		}
//		return ret;
//    }
//};


//���ۣ�268.��ʧ������ 
class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
	{
		int ret = 0;
        for(int i = 0; i < nums.size(); i++)
		{
			ret ^= nums[i];
			ret ^= i;
		} 
		return ret ^ nums.size();
    }
};







