#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    switch(a){
    case 'a':printf("A\n"); break;
    case 'b':printf("B\n"); break;
    case 'c':printf("C\n"); break;
    case 'd':printf("D\n"); break;
    case 'e':printf("E\n"); break;
    default:printf("NO\n"); break;
    }
    return 0;
}