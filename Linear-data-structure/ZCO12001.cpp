#include<string>
#include <bits/stdc++.h> 
using namespace std;
#define ll long long int

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	cin >> n;
	stack <int> s;
	ll depth = 0;
	ll max_depth = 0;
	ll index =1;
	ll max_element = 0;
	ll curr_element = 0;
	ll max_element_index = 1;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		if(x==1)
		{
			s.push(1);
			depth += 1;
		}
		else
		{
			s.pop();
			curr_element += 2;
			if(s.empty())
			{
				if(curr_element > max_element )
				{
					max_element = curr_element ;
					max_element_index = i - max_element + 2;
				}
				curr_element = 0;
			}
			if(depth > max_depth)
			{
				max_depth = depth;
				index = i ;
			}
			depth = 0;
		}
		
	}
	cout << max_depth << " " << index << " " << max_element << " "<< max_element_index << endl;

}