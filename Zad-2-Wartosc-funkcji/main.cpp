#include <iostream>
#include <math.h>

using namespace std;

double wynik;
double suma;

int silnia (int wartosc)
    {
        int zm=1;
        for (int i=2; i<=wartosc; i++)
        {
            zm=zm*i;
        }
        return zm;
    }



double funkcja (double x, double y )
    {
        suma=0;

        if (sin(x) > cos(x))
        {
            for (int i=0; i<10; i++)
            {
               wynik=pow((x+y), i)/silnia(i);
               suma=suma+wynik;
            }
            return suma;
        }
        else
            {
                wynik=pow(x,5)+ pow(x,3)*pow(y,2)+pow(y,4);
                return wynik;
            }
    }

int main()
{
    double y;
    double x;
    cout<<"podaj y"<<endl;
    cin>>y;
    cout<<endl<<"f(x,y)"<<endl;
   for (x=0; x<=10; x=x+0.1)
                {
                    double result = funkcja (x, y);
                    cout<<"f("<<x<<","<<y<<")="<<result<<endl;
                }
    return 0;
}
