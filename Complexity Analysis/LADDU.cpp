#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test;
	cin>>test;
	for(int t=0;t<test;t++)
	{
		int activities;
		string origin;
		cin >> activities >> origin;
		int laddus = 0;
		for(int a=0;a<activities ;a++)
		{
			string type;
			cin>>type;
			if (type == "CONTEST_WON") {
				laddus += 300;
				int rank;
				cin >> rank;
				if (rank<=20)
				laddus += 20 - rank;
			}
			else if (type == "TOP_CONTRIBUTOR") {
				laddus += 300;
			}
			else if (type == "BUG_FOUND") {
				int severity;
				cin>>severity ;
				laddus += severity;
			}
			else if (type == "CONTEST_HOSTED")
			{
				laddus += 50;
			}

		}
		if (origin == "INDIAN")
		cout << laddus/200 << endl;
		else
		{
			cout << laddus/400 << endl;
		}
		
	}
}