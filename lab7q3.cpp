//Write a C++ program to print all even or odd numbers in given range using recursion.
#include <iostream>
using namespace std;
int evenprint(int a, int b)
{
	if (a%2==0&&a<=b)
	{
		cout<<a<<endl;
		++a;
		++a;
		return evenprint(a,b);
	}
	else if(a%2==1&&a<=b)
	{
		cout<<a+1<<endl;
		a=a+2;
		return evenprint(a,b);
	}
	else{
	return 0;
	}
}
int oddprint(int a, int b)
{
	if (a%2==1&&a<=b)
	{
		cout<<a<<endl;
		++a;
		++a;
		return oddprint(a,b);
	}
	else if(a%2==0&&a<=b)
	{
		cout<<a+1<<endl;
		a=a+2;
		return oddprint(a,b);
	}
	else{
	return 0;
	}
}
int main()
{
	int a;
	int b;
	int userdef1;
	cout<<" input the lower limit of the range "<<endl;
	cin>>a;
	cout<<" input the upper limit of the range "<<endl;
	cin>>b;
	cout<<" input number of the function you want to perform 1]even numbers print 2]odd numbers print "<<endl; 
	cin>>userdef1;
	if (userdef1==1)
	{
		evenprint(a,b);
	}  	
	else
	{
		oddprint(a,b);
	}
	return 0;
}
