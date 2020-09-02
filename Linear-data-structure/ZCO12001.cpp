#include<string>
#include <bits/stdc++.h> 
using namespace std;
#define ll long long int

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	stack <int> s;
	int depth = 0;
	int max_depth = 0;
	int index =0;
	int max_element = 0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		if(x==1)
		{
			s.push(1);
		}
		else
		{
			s.pop();
			depth += 2;
			if(s.empty())
			{
				if(depth > max_depth)
				{
					max_depth = depth;
					index = i - depth + 1;
				}
				depth = 0;
			}
		}
		
	}

}