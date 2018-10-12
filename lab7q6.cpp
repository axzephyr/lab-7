#include<iostream>
using namespace std;
int revfun(int j)
{
    if(j>0&&j<10)
    {
        cout<<j;
        return j;
    }
    else
    {
        cout<<j%10;
        return revfun(j/10);
    }
}
int main()
{
    int j;
    cout<<" input the positive number to print the reverse of "<<endl;
    cin>>j;
    cout<<" the reverse of the number is "<<endl;
    revfun(j);
    return 0;
}
