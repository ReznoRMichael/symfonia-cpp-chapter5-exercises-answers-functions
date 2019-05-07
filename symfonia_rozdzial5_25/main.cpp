#include <iostream>

using namespace std;

void fun(int a, double b) { }
double y = 8.8;

int main()
{
    int zero = 0;
    double x = 1.1;

    fun(1, 6.6);
    {
        void fun(int a=-1, double b = y);
        fun();
        if(2 > zero)
        {
            void fun(int a, double b = x);
            fun(zero);
        }
    }

}
