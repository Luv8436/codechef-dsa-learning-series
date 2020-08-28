#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int test;
	cin >> test;
	int res_array[test];
	for(int i=0;i<test;i++)
	{
	    int result=0;
    	// finding length of number
		int number  ;
		cin>>number;
    	int num = number;
    	int length=0;
    	while(num)
    	{
    		length += 1;
    		num = (num - num % 10)/10;
    	}
    	while(number)
    	{
    		result += (number%10)*pow(10 , (length-1));
    		length--;
    		number = (number - number%10)/10;
    	}
    	res_array[i]=result;
	}
	for(int i=0;i<test;i++)
	{
	    cout<<res_array[i]<<endl;
	}
	
	

}

