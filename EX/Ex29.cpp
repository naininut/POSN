#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[200];

int main(){

    int q, len;
    int n = 0;
    int e = 0;
    int s = 0;
    int w = 0;

    scanf(" %s", a);
    scanf("%d", &q);

    len = strlen(a);

    for(int i=0; i<len; i++){
        if(a[i] == 'N')
            n += 1;
        else if(a[i] == 'S')
            s += 1;
        else if(a[i] == 'E')
            e += 1;
        else if(a[i] == 'W')
            w += 1;
    }

    if(n > s && s > 0 && q > 0){
        if(s >= q)
            s -= q, q = 0;
        else
            q -= s, s = 0;
    }
    if(e > w && w > 0 && q > 0){
        if(w >= q)
            w -= q, q = 0;
        else
            q -= w, w = 0;
    }
    if(s >= n && n > 0 && q > 0){
        if(n >= q)
            n -= q, q = 0;
        else
            q -= n, n = 0;
    }
    if(w >= e && e > 0 && q > 0){
        if(e >= q)
            e -= q, q = 0;
        else
            q -= e, e = 0;
    }

    printf("%d", 2*abs(n-s)+2*abs(e-w)-2*q);

    return 0;
}