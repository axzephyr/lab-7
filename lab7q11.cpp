#include<iostream>
using namespace std;
int HCF(int a,int b)
{
    if(b%a==0)
    {
        return a;
    }
    else
    {
        return HCF(b%a,a);
    }
}
int main()
{
    int a,b;
    cout<< " Input the two numbers to find their HCF in ascending order "<<endl;
    cin>>a>>b;
    cout<<" The HCF of "<<a<<" and "<<b<<" is "<<HCF(a,b)<<endl;
    return 0;

}
