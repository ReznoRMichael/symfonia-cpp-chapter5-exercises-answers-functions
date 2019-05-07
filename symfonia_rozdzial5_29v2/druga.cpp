
//**********************************
inline int wieksza(int a, int b)
{
    if(a > b)       return a;
    else if(b > a)  return b;
    else            return a;
}
//**********************************

namespace
{
    int druga(int a, int b)
    {
        return wieksza(a, b);
    }
}
