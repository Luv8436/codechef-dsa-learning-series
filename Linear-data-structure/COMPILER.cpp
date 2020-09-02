#include<string>
#include <bits/stdc++.h> 
using namespace std;
#define ll long long int

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	while(test--)
	{
		string s;
		cin>>s;
		stack <char> stk;
		ll max_length = 0;
		ll length = 0;
		for(ll i=0;i<s.length() ;i++)
		{
			if(s[i]=='<')
			{
				stk.push('<');
			}
			else
			{
				if(!stk.empty())
				{
					stk.pop();
					length += 2;
					if(stk.empty())
					max_length = length;
				}
				else
				{
					break;
				}
				
			}
		}
		cout<<max_length << endl;
		/*
		if(stk.empty())
		cout<<length << endl;
		else
		{

			cout<<max_length << endl;
		}
		*/
	}
}