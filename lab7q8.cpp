#include<iostream>
using namespace std;

int digitsummer(int n, int sum)
{
    if (n==0)
    {
        return sum;
    }
    else
        {
            sum=sum+n%10;
            n=n/10;
            return digitsummer(n,sum);
        }
}
int main()
{
    int n, sum;
    cout<< " Give the number to sum its digits "<<endl;
    cin>>n;
    sum=digitsummer(n,sum);
    cout<<" the sum of the digits of "<<n<<" is "<<sum<<endl;
    return 0;

}
