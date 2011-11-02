#include <iostream>

using namespace std;



int main()
{
    double n;
    double max;
    double x;
    double max2;




    cout<<"podaj n"<<endl;
    cin>>n;


    if(n>=1)
    {

    cout<<"wprowadz liczbe 1 i 2"<<endl;
    cin>>max;
    cin>>max2;

    for (int i=3; i<=n; i++)
    {
        cout<<"wprowadz liczbe "<<i<<endl;
        cin>>x;
        if (x > max)
        {
            max2 = max;
            max = x;
        }
        else
        {
            if (x > max2)
            {
                max2=x;
            }

        }

    }

    cout<<"maksymalna liczba1="<<max<<endl<<"maksymalna liczba2="<<max2;
    }
    else
    cout<<"wprowadz liczbe naturalna";
    return 0;
}
