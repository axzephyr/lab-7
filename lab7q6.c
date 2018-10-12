#include<iostream>
using namespace std;
int factorial(int a)
{
    int i=1;
    if (a==0||a==1)
    {
        return 1;
    }
    else if(i<a,i++)
    {
        return a*factorial(a-i);
    }
}
int main()
{
    int a;
    cout<< "calculate the facorial of the number" <<endl;
    cin>>a;
    factorial(a);
    cout>>" the factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}
