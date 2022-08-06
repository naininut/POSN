#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
char a[20];
int main(){
    int i,len,sum,j,num;
    for(i=0;i<5;i++){
        scanf(" %s",a);
        len=strlen(a);
        sum=0;
        for(j=0;j<len;j++)
            sum+=pow(a[j]-'0',j+1);
        num=atol(a);
        if(sum==num)
            printf("Y");
        else
            printf("N");
    }
    return 0;
}