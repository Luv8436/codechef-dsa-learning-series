#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	for(int t=0;t<test;t++)
	{
		int n;
		cin >> n;
		char result[2*n+1];
		cin >> result;
		int point_A=0;
		int point_B=0;
		for(int i=0;i<2*n;i++)
		{
			if(i%2==0){
				if(result[i]=='1')
				point_A += 1;
				else
				{
					point_B += 1;
				}
			}
			else{
				if(result[i]=='1')
				point_B += 1;
				else
				{
					point_A += 1;
				}
			}
	
			if ((point_A >n)|| (point_B > n)) {
				cout<<i+1<<endl;
				break;
			}
		}
		if(point_A == point_B)
		{
			cout<< 2*n << endl;
		}
	}
}