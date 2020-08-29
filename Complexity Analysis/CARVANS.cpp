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
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		int max = 1;
		for(int i=1; i<n;i++)
		{
			if(arr[i-1]>=arr[i])
			{
				max += 1;
			}
			else
			{
				arr[i] = arr[i-1];
			}
			
		}
		cout << max;
	}
}