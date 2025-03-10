//P1443 马的遍历
//#include <iostream>
//#include <queue>
//#include <cstring> 
//using namespace std;
//typedef pair<int,int> PII;
//const int N = 410;
//
//int n, m, x, y;
//queue<PII> q;
//int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
//int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
//int arr[N][N];
//
//
//void bfs()
//{
//	memset(arr, -1, sizeof(arr)); 
//	q.push({x, y});
//	arr[x][y] = 0;
//	
//	while(q.size())
//	{
//		auto t  = q.front();
//		q.pop(); 
//		for(int i = 0; i < 8; i++)
//		{
//			int nx = t.first + dx[i];
//			int ny = t.second + dy[i];
//			if(nx < 1 || nx > n || ny < 1 || ny > m)	continue;
//			if(arr[nx][ny] != -1)	continue;
//			arr[nx][ny] = arr[t.first][t.second] + 1;
//			q.push({nx, ny});
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> x >> y;
//
//	bfs();
//	for(int i = 1; i <= n; i++) 
//	{
//		for(int j = 1; j <= m; j++)
//		{
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
// } 


//牛客，NC50041，kotori和迷宫 
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int N = 35;
//typedef pair<int, int> PII;
// 
//int n, m;
//char str[N][N];
//int arr[N][N];
//int kx, ky;//k的位置 
//int num, dis = N*N;
//
//int dx[] = {0, 0, -1, 1};
//int dy[] = {1, -1, 0, 0};
//
//void bfs()
//{
//	queue<PII> q;
//	memset(arr, -1, sizeof(arr)) ;
//	
//	arr[kx][ky] = 0;
//	q.push({kx, ky});
//	
//	while(q.size())
//	{
//		auto t = q.front();	q.pop();
//		int x = t.first;	int y = t.second;
//		for(int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i], ny = y + dy[i];
//			if(str[nx][ny] != '*' && nx <= n && ny <= m && nx >= 1 && ny >= 1 && arr[nx][ny] == -1)
//			{
//				arr[nx][ny] = arr[x][y] + 1;
//				if(str[nx][ny] == 'e')	
//				{
//					num++;
//					dis = min(dis, arr[nx][ny]);
//				}
//				else	q.push({nx, ny});
//				
//
//			}
//			
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	for(int i = 1; i <= n; i++)
//	{
//		
//		for(int j = 1; j <= m; j++)
//		{
//			cin >> str[i][j];
//			if(str[i][j] == 'k')
//			{
//				kx = i,ky = j;
//			}
//		}
//	}
//
//	bfs();
//	if(num==0)	cout << -1 << endl;
//	else	cout << num << " " << dis << endl;
//	return 0;
//}



//P1588 [USACO07OPEN] Catch That Cow S
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const int N = 1e5 + 10;

int t, x, y, ret;
int arr[N];//步数 

void bfs()
{
	queue<int> q;
	q.push(x);
	
	memset(arr, -1, sizeof(arr));
	arr[x] = 0;
	
	while(q.size())
	{
		int x = q.front();	q.pop();
		int nx;
		for(int i = 1; i <= 3; i++)
		{
			if(i%3 == 1)
				nx = x+1;
			else if(i%3==2)
				nx = x-1;
			else
				nx = 2*x;
			if(arr[nx] != -1 || nx < 1 || nx > N)	continue;
			q.push(nx);
			arr[nx] = arr[x] + 1;
			if(nx == y)		ret = arr[nx];
		}
	}
}

int main()
{
	cin >> t;
	
	while(t--)
	{
		cin >> x >> y;
		bfs();
		cout << ret << endl;
	}
	
	return 0;
}

