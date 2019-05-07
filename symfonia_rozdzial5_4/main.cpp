#include <iostream>

using namespace std;

int f();
double f2();
void f5();

int main()
{

    cout << f() << endl;
    cout << f2() << endl;
    cout << f5() << endl;

    return 0;
}

int f()
{
    return 4.2;
}

double f2()
{
    return 4;
}

void f5()
{
    return 0;
}
