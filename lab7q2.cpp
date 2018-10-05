#include <iostream>
using namespace std;
int natno(int i,int n)
{
	if(i>n)
	{
		return 0;
	}
	else
	{
		cout<<i<<endl;
		return natno(++i,n);
	}
}
int main()
{
	int i=1;
	int n;
	cout<<" enter the number to which you want to print the natural numbers upto "<<endl;	
	cin>>n;
	natno(i,n);
	return 0;
} 
	
