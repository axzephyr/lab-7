#include<iostream>
using namespace std;
int factorial(int a)
{
    if (a==0||a==1)
    {
        return 1;
    }
    else
    {
        a = a*factorial(a-1);
        return a;
    }
}
int main()
{
    int a;
    cout<< "calculate the facorial of the number" <<endl;
    cin>>a;
    factorial(a);
    cout<<" the factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}
