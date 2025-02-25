#include <iostream>

using namespace std;

string str; 
void dfs(int pos)//处理第pos次 
{
	if(pos == 0)
	{
		cout << str << endl;
		return; 
	}
	str += "N";
	dfs(pos-1);
	str.pop_back();
	
	str += "Y";
	dfs(pos-1);
	str.pop_back();
	
}

int main()
{
	int n; cin >> n;
	dfs(n); 
	return 0;
 } 
