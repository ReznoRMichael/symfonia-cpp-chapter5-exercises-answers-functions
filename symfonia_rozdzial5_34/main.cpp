#include <iostream>

using namespace std;

int sumuj(int);

int main()
{
    cout << sumuj(15) << endl;
    return 0;
}

int sumuj(int ile)
{
    int sum; // niezainicjalizowana zmienna w funkcji (ostrzezenie) tworzona na stosie
    for(int i=0; i < ile; i++)
    {
        sum += i;
    }
    return sum;
}
