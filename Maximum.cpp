#include<iostream>
using namespace std;

int main()
{
    int N,max=0;
    cin >>N;
    int A[N];
    for(int i=0; i<N; i++)
    {
       cin >>A[i];
       if(A[i]>max)
       {
         max=A[i];
       }
    }
    cout <<max<< endl;
    
    return 0;
}
