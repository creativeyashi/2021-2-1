
#include <iostream>
using namespace std;

int main() 
{
	int a;
	cin>>a;
	
	int count=1;
	while(--a)
	{
	    cout<<count<<", ";
	    count += 2;
	}
	cout<<count;
	return 0;
}

