#include <iostream>

using namespace std;

int main()
{

    int i=0;
    int k;

    od_nowa:

    cout<<"podaj liczbe calkowita z zakresu od 0 do 20"<<endl;
    cin>>k;

    if(k>0 && k<20)
    {

        for(i=1; i<=k; i++)
        {
            for(int z=0 ; z<i ; z++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else
    {
        goto od_nowa;
    }
    return 0;
}
