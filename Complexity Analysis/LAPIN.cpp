#include <iostream>
#include <string>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
		string s;
		cin >> s;
		int arr_left[26];
		int arr_right[26];
		for(int i=0;i<26;i++)
		{
			arr_left[i] = 0;
			arr_right[i] = 0;
		}
		int index;
		for(index=0;index<s.length()/2;index++)
		{
			arr_left[int(s[index])-97] += 1;
		}
		if(s.length()%2!=0)
		{
			index += 1;
		}
		for(index ; index < s.length() ; index++)
		{
			arr_right[int(s[index])-97] += 1;
		}
		cout<< "checking "<<endl;
		for(int i=0;i<26;i++)
		{
			cout<< arr_left[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<26;i++)
		{
			cout<< arr_right[i]<<" ";
		}
		cout<<endl;

		int flag = 0;
		for(int i=0;i<26;i++)
		{
			if(arr_left[i]!=arr_right[i])
			{
				cout<<"NO"<<endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout<<"YES"<<endl;
		}


	}

}