#include <iostream>

using namespace std;

int main()
{
    int k;

    do
    {
        cout<<"wprowadz liczbe z zakresu od 0 do 20"<<endl;
        cin>>k;
    }
    while (k<=0 || k>=20);


    for (int w=1; w<=k; w++)
    {

        for(int spacja=1; spacja<=(k-w); spacja++)
        {
            cout<<" ";
        }

        for (int gwiazdka=1; gwiazdka<=(2*w-1); gwiazdka++)
        {
            cout<<"*";
        }

        cout<<endl;
    }



    return 0;
}



