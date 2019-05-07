#include <iostream>
#include "nagl.h"

using namespace std;

int i2 = 2;
double d2 = 0.2;
char c2 = 'b';

void funkcjad1()
{
    cout << "funkcja #1 z pliku druga.cpp: " << endl;
    cout << "Wartosc zmiennej int z pliku main.cpp: " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp: " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main: " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp: " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp: " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp: " << c2 << endl;
    i1 = 31;
    i2 = 32;
    d1 = 3.1;
    d2 = 3.2;
    c1 = 'C';
    c2 = 'D';
    cout << "Wartosc zmiennej int z pliku main.cpp (zmiana): " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp (zmiana): " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main (zmiana): " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp (zmiana): " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp (zmiana): " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp (zmiana): " << c2 << endl;

    funkcjad2();
}

void funkcjad2()
{
    cout << "funkcja #2 z pliku druga.cpp: " << endl;
    cout << "Wartosc zmiennej int z pliku main.cpp: " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp: " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main: " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp: " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp: " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp: " << c2 << endl;
    i1 = 41;
    i2 = 42;
    d1 = 4.1;
    d2 = 4.2;
    c1 = 'e';
    c2 = 'f';
    cout << "Wartosc zmiennej int z pliku main.cpp (zmiana): " << i1 << endl;
    cout << "Wartosc zmiennej int z pliku druga.cpp (zmiana): " << i2 << endl;
    cout << "Wartosc zmiennej double z pliku main (zmiana): " << d1 << endl;
    cout << "Wartosc zmiennej double z pliku druga.cpp (zmiana): " << d2 << endl;
    cout << "Wartosc zmiennej char z pliku main.cpp (zmiana): " << c1 << endl;
    cout << "Wartosc zmiennej char z pliku druga.cpp (zmiana): " << c2 << endl;
}
