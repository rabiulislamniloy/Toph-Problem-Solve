#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   
         if(n>=70){
        printf("Bad weather.\n");
    }
        else if(n<=30){
        printf("Good weather.\n");
    } 
    else{
        printf("\"Confusing weather.\"\n");
    }
    return 0;
}
