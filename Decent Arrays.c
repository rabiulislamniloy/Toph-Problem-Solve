#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);

    int arr[100];
    for (int i=0; i<N; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i<N; i++) {
        if (arr[i]<arr[i - 1]) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
