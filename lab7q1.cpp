#include <iostream>
using namespace std;
int powercalculator(int a,int b)
{
	if(b!=0)
	{
		return a*powercalculator(a,b-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int a;
	int b;
	cout<<" enter the value of the base "<<endl;
	cin>>a;
	cout<< " enter the value of the power "<<endl;
	cin>>b;
	powercalculator(a,b);
	cout<<" The value of "<<a<<"^"<<b<<" is "<<powercalculator(a,b)<<endl;
	return 0;
}	
				
	
