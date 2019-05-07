#include <iostream>
#include "nagl.h"

using namespace std;

int i1 = 1;
double d1 = 0.1;
char c1 = 'a';

void funkcjam2();

int main()
{
    cout << "funkcja #1 (main) z pliku main.cpp: " << endl;
    cout << "Wartosc zmiennej int z pliku main.cpp: " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp: " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main: " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp: " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp: " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp: " << c2 << endl;
    i1 = 11;
    i2 = 12;
    d1 = 1.1;
    d2 = 1.2;
    c1 = 'A';
    c2 = 'B';
    cout << "Wartosc zmiennej int z pliku main.cpp (zmiana): " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp (zmiana): " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main (zmiana): " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp (zmiana): " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp (zmiana): " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp (zmiana): " << c2 << endl;

    funkcjam2();
    funkcjad1();
}

void funkcjam2()
{
    cout << "funkcja #2 z pliku main.cpp: " << endl;
    cout << "Wartosc zmiennej int z pliku main.cpp: " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp: " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main: " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp: " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp: " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp: " << c2 << endl;
    i1 = 21;
    i2 = 22;
    d1 = 2.1;
    d2 = 2.2;
    c1 = 'c';
    c2 = 'd';
    cout << "Wartosc zmiennej int z pliku main.cpp (zmiana): " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp (zmiana): " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main (zmiana): " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp (zmiana): " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp (zmiana): " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp (zmiana): " << c2 << endl;
}
