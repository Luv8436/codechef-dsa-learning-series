#include <iostream>
#include <bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>arr[i];
	}
	std::sort(arr, arr+n, std::greater<int>()); 
	long long int revenue = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]*(i+1) > revenue )
		{
			revenue = arr[i]*(i+1);
		}
	}
	std::cout << revenue << std::endl;

	
}