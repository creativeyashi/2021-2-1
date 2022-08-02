#include <iostream>
using namespace std;

int main() 
{
	int a;
	cin>>a;
  
  if(a%2==0)
  {
    --a;
  }
	int i=1;
	while(--a)
	{
	    cout<<i<<", ";
	    i += 2;
	}
	cout<<i;
	return 0;
}

