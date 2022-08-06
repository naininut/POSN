#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n==0)
        printf("N is ZERO\n");
    if (n%2==0)
        printf("N is EVEN\n");
    else
        printf("N is OOD\n");
    if (n>0)
        printf("N is Positive\n");
    else if (n<0)
        printf("N is Negative\n");
    else
        printf("N is Zero\n");
    return 0;
}