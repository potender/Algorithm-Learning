//ţ�ͣ�NC226514����ģ�塿01����
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 1010;
//int n, V;
//int f[N][N];//ǰi����Ʒ������ݻ�Ϊj������ֵ�� ǰi����Ʒ���ݻ�Ϊj������ֵ
//int w[N], v[N];
//
//int main()
//{
//	cin >> n >> V;
//	for(int i = 1; i <= n; i++)
//		cin >> v[i] >> w[i];
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 0; j <= V; j++)
//		{
//			f[i][j] = f[i-1][j]; 
//			if(j >= v[i])
//			{
//				f[i][j] = max(f[i-1][j], f[i-1][j-v[i]] + w[i]);
//			}
//		}
//	}
//	cout << f[n][V] << endl;
//	
//	memset(f, -0x3f, sizeof(f));
//	f[0][0] = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 0; j <= V; j++)
//		{
//			f[i][j] = f[i-1][j]; 
//			if(j >= v[i])
//			{
//				f[i][j] = max(f[i-1][j], f[i-1][j-v[i]] + w[i]);
//			}
//		}
//	}
//	if (f[n][V] >= 0)
//		cout << f[n][V] << endl;
//	else cout << 0 << endl;
//	return 0;
//}


//P1048 [NOIP 2005 �ռ���] ��ҩ
//#include <iostream> 
//using namespace std;
//const int N = 1010;
//
//int T, M;
//int t[N], v[N];
//int f[N][N];//1~i����Ʒ��ʱ���Ϊj������ҩ��ֵ 
//
//int main()
//{
//	cin >> T >> M;
//	for(int i = 1; i <= M; i++)	cin >> t[i] >> v[i];
//	for(int i = 1; i <= M; i++)
//	{
//		for(int j = 0; j <= T; j++)
//		{
//			f[i][j] = f[i-1][j];
//			if(j >= t[i])
//				f[i][j] = max(f[i][j], f[i-1][j-t[i]] + v[i]);
//		}
//	}
//	cout << f[M][T] << endl;
//	return 0;
//}


//P1164 СA���
#include <iostream>
using namespace std;
const int N = 110, M = 1e4+10;
int n, m;
int a[N];//�˼� 
int f[N][M];//1~i�����У�����jԪ�ķ����� 
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)		cin >> a[i];
	f[0][0] = 1;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			f[i][j] = f[i-1][j];
			if(j >= a[i])
				f[i][j] += f[i-1][j-a[i]]; 
		}
	}
	cout << f[n][m] << endl;
	return 0;
}



