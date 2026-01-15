#include<stdio.h>
int main()
{
  double a,n;
  scanf("%lf",&n);
  double sum=0;
  double avg=0;
  for(int i=1;i<=n;i++)
      {
       scanf("%lf",&a);
        sum=sum+a;
        avg=sum/i;
        printf("%lf",avg);
      }
  return 0;
}
