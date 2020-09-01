#include <iostream>
#include <bits/stdc++.h>
using namespace  std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin >> test;
	for(int t=0;t<test;t++)
	{
		long long int k;
		int d0,d1;
		cin >> k >> d0 >> d1;
		long long int sum = d0+d1;
		if (k==2)
		{
			if ((d0+d1)%3)
			cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl;
			}
			return 0;
		}
		else if (k==3)
		{
			if(sum+(sum)%10)
			cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl;
			}
			return 0;
		}
		
		int a = (2*sum)%10;
		int b = (4*sum)%10;
		int c = (8*sum)%10;
		int d = (6*sum)%10;

		long long int s = sum + (sum)%10 + (a+b+c+d)*((k-3)/4);

		if((k-3)%4==1)
		s += a;
		if((k-3)%4==2)
		s += (a+b);
		if((k-3)%4==3)
		s += (a+b+c);

		if (s%3)
		cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}