#include <iostream>

using namespace std;

int how_many_global;
void f();

int main()
{
    int m = 0;
    while(m < 100)
    {
        m++;
        f();
    }
    cout << "Funkcje f() wywolano " << how_many_global << " razy" << endl;
}

void f()
{
    static int how_many; // jak duzo razy zostala ju¿ wywo³ana
    how_many++;
    how_many_global = how_many;
    if( !(how_many % 12) ) cout << "nowy tuzin ( " << how_many << " razy )" << endl; // co 12 razy wywo³añ
}
