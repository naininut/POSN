#include<stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    if (score >= 80 && score <= 100)
        printf("A\n");
    else if (score >= 75 && score <= 79)
        printf("B+\n");
    else if (score >=70 && score <= 74)
        printf("B\n");
    else if (score >=65 && score <= 69)
        printf("C+\n");
    else if (score >=60 && score <= 64)
        printf("C\n");
    else if (score >=55 && score <= 59)
        printf("D+\n");
    else if (score >=50 && score <= 54 )
        printf("D\n");
    else
        printf("F\n");
    return 0;
}