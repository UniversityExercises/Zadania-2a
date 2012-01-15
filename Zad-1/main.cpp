#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"wprowadz liczbe";
    cin>>x;
    while (x>=0)
    {
        if(x==0 || x==1)
        {
            cout<<"Fib("<<x<<")=1"<<endl;
        }
        else
        {
            int sum1=1;
            int sum2=1;
            int sum=0;
            int wynik=0;
            for (int i=1; i<x; i++)
            {
                sum=sum1+sum2;
                sum2=sum1;
                sum1=sum;
            }
            cout<<"Fib("<<x<<")="<<sum<<endl;
        }
            cout<<"wprowadz liczbe";
            cin>>x;

    }
    return 0;
}
