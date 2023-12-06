#include <iostream>
#include <cmath>

using namespace std;

int fib(int );
unsigned long  long int approxFib(int );

int main()
{

    int x;
    char c='T';
    do
    {
        cout<<"Obliczanie n-tego wyrazu ciagu Fibonacciego\n";
        cout<<"Podaj n\n";
        cin>>x;
        if(x>0 )
        {
            if(x<40)
            {
                cout<<x<<"-ty wyraz ciagu wynosi: "<<fib(x)<<endl;
                cout<<"Chcesz kontynuowac?(T/N)\n";
            }
            else
            {
                cout<<x<<"-ty wyraz ciagu(w przyblizeniu) wynosi: "<<approxFib(x)<<endl;
                cout<<"Chcesz kontynuowac?(T/N)\n";
            }
            
        }
        else 
        {
            cout<<"Blad\n";
            cout<<"Chcesz kontynuowac?(T/N)\n";
        }

        cin>>c;
    } while (c=='T');
    

}

int fib(int n)
{
    if(n<=2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

unsigned long long int approxFib(int x)
{
    return static_cast<long long int>((pow((1 + sqrt(5)) / 2, x) / sqrt(5)) + 0.5);
}