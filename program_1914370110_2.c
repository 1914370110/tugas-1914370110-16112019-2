#include <stdio.h>
int main()
{
    int c = 5;
    for (int i=1;i<=c;i++){
        for (int j=1;j<=i;j++){printf("*");}
    printf("\n");}
    for (int i=1;i<=c;i++){
        for (int j=c-1;j>=i;j--){printf("*");}
    printf("\n");}
    return 0;
}
