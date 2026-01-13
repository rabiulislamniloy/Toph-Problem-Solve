#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    if (N<=1) {
        printf("No");
        return 0;
    }
    for (int i=2; i*i<= N;i++) 
    {
        if (N % i == 0) 
          {
            printf("No");
          }
    }

    printf("Yes");
    return 0;
}
