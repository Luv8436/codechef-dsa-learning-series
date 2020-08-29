#include <iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for(int t=0;t<test;t++)
	{
		int n;
		cin >> n;
		int ans = 0;
		while(n)
		{
			ans += n/5;
			n = n/5;
		}
		cout << ans << endl;
	}
}