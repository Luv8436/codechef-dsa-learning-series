#include <iostream>
#include <vector>
using namespace std;
using std::vector;
using std::cout;
using std::cin;
int main() {
	// your code goes here
	vector<int> v;
	int number;
	cin >> number;
	while(number != 42)
	{
	    v.push_back(number);
	    cin>>number;
	}
	cin>>number;
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i]<<endl;
	}
}
