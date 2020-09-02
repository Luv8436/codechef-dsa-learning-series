#include <iostream>
using namespace std;


int find_smallest_index(int arr[] , int n);
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	for(int t=0;t<test;t++)
	{
		long long int n;
		cin>>n;
		int capacity[n];
		for(int i=0;i<n;i++)
		{
			cin>>capacity[i];
		}
		long long int token = 0;

		while(n>0)
		{
			long long int index = find_smallest_index(capacity , n);
			token += n*capacity[index];
			for(int i=0;i<n;i++)
			{
				capacity[i] -= capacity[index];
			}
			n = index;
		}
		cout << token<<endl;
	}
}

int find_smallest_index(int arr[] , int n)
{
	long long int index = 0;
	for(int i=1;i<n;i++)
	{
		if(arr[index]> arr[i])
		{
			index = i;
		}
	}
	return index;
}