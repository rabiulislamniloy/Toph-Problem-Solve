#include<stdio.h>
int main()
{
   int H,M;
   scanf("%d%d",&H,&M);
   
   double angle=(30*H+0.5*M-6*M);
    if(angle>180)
    {
        angle=360-angle;
    }
    printf("%lf",angle);
    return 0;
}
