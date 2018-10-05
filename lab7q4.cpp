//4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
#include <iostream>
using namespace std;
int natsum(int i, int n)
{
	if(i<=n)
	{
		return n+natsum(i,n-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i;
	int n;
	i=1;
	cout<<" give the limit of the numbers upto which to add "<<endl;
	cin>>n;
	cout<<" the sum of all natural numbers upto "<<n<<" is "<<natsum(i,n)<<endl;
	return 0;
}
		
