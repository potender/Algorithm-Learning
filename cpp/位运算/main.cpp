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
class Solution 
{
public:
    uint32_t reverseBits(uint32_t n) 
	{
		uint32_t ret = 0;
        for(int i = 0; i < 32; i++)
        {
        	uint32_t tmp = (n>>i) & 1;
        	tmp <<= (31 - i);
        	ret |= tmp;
        	
		}
        return ret;
    }
};



