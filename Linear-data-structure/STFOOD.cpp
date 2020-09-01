#include <iostream>
using namespace std;

int main()
{
	int test;
	cin>>test;
	for(int t=0;t<test;t++)
	{
		int n;
		cin>>n;
		int max_profit = 0;
		for(int i=0;i<n;i++)
		{
			int curr_profit = 0;
			int s , p , v;
			cin >> s >> p >> v ;
			curr_profit = (p/(s+1))*v;
			if(curr_profit > max_profit)
			{
				max_profit = curr_profit ;
			}
		}
		cout << max_profit << endl;

	}
}