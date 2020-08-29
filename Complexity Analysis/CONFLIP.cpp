#include <iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for(int t=0;t<test;t++)
	{
		int game;
		cin >> game;
		for(int g=0;g<game ;g++)
		{
			int i , n , q;
			cin >> i >> n >> q;
			int result;
			if (n%2 && q!=i)
			result = n/2+1;
			else if(q==i)
			result = n/2;
			cout<< result << endl;
		}

	}
}