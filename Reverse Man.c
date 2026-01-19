#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    if (str[l-1]=='\n') 
    {
        str[l-1] = '\0';
        l--;
    }
    for (int i=l-1;i>=0;i--) 
    {
        printf("%c",str[i]);
    }

    return 0;
}
