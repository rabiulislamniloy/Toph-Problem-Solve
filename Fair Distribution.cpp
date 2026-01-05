#include<iostream>
using namespace std;

int main()
{
    int x,y,n,a,b;
    cin >>x >>y;
    if(y%x==0)
    {
     cout <<0<< endl;
    }
    else
    {
      a=y%x;
      b=x-a;
      cout <<b<< endl;
    }
    return 0;
}
