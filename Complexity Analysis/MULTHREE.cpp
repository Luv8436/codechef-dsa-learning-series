#include <iostream>
using namespace  std;

int main()
{
	int test;
	cin >> test;
	for(int t=0;t<test;t++)
	{
		int k,d0,d1;
		cin >> k >> d0 >> d1;
		int sum = d0+d1;
		int next_digit = 0;
		for(int i=2;i<k;i++)
		{
			next_digit = sum%10;
			sum += next_digit;
		}
		cout << sum<<endl;
		if (sum%3)
		cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
		}
		
	}
}