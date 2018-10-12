#include<iostream>

using namespace std;

int fib(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}

int main()
{
    int n,i=0;
    cout<<" input the number of terms for fibonacci series: ";
    cin>>n;
    cout<<" fibonacci Series is as follows ";

    while(i<n)
    {
        cout<<" "<<fib(i);
        i++;
    }

    return 0;
}
