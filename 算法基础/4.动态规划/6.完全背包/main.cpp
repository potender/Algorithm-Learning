//ţ�ͣ�NC226516����ģ�塿��ȫ����
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 1010;
//int n, V;
//int v[N], w[N];
//int f[N];//1~i����Ʒ�У�������Ϊj������ֵ 
//int main()
//{
//	cin >> n >> V;
//	for(int i = 1; i <= n; i++)		cin >> v[i] >> w[i];
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = v[i]; j <= V; j++)
//		{
//			f[j] = max(f[j], f[j-v[i]] + w[i]);
//		}
//	}
//	cout << f[V] << endl;
//	
//	memset(f, -0x3f, sizeof(f));
//	f[0] = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = v[i]; j <= V; j++)
//		{
//			f[j] = max(f[j], f[j-v[i]] + w[i]);
//		}
//	}
//	if(f[V] >= 0)	cout << f[V] << endl;
//	else 	cout << 0 << endl;
//	return 0;
//} 


////P1616 ���Ĳ�ҩ
//#include <iostream>
//using namespace std;
//const int M = 10010;
//const int T = 1e7+10;
//typedef long long LL; 
//int n, m;
//int v[M], w[T];
//LL f[T];//1~i����ҩ���ʱ��Ϊj������ֵ
//int main()
//{
//	cin >> m >> n;
//	for(int i = 1; i <= n; i++)		cin >> v[i] >> w[i];
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = v[i]; j <= m; j++)
//		{
//			f[j] = max(f[j], f[j-v[i]] + w[i]);
//		}
//	}
//	cout << f[m] << endl;
//	return 0;
//}


//P2918 [USACO08NOV] Buying Hay S
#include <iostream>
#include <cstring> 
using namespace std;
const int N = 110;
const int M = 50010;
int n, m;//�ʲݹ�˾����Ҫ�ɲ� 
int p[N], c[N];
int f[N][M];//1~i�Ĺ�˾ �ɹ��ĸɲ�������j�� ��С����

int main()
{
	cin >> n >> m;
	memset(f, 0x3f, sizeof f);
	f[0][0] = 0;
	for(int i = 1; i <= n; i++)		cin >> p[i] >> c[i];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			f[i][j] = min(f[i-1][j], f[i][max(0, j-p[i])] + c[i]);	
		}
	}
	cout << f[n][m] << endl;
	return 0;
}

