#include <bits/stdc++.h>
using namespace std;

char sms[100];
int tmp[100][2];

int main(){

    int s, m, n, h, v, k;

    scanf("%d", &n);
    scanf("%d", &s);
    scanf("%d", &m);
    tmp[0][0] = s;
    tmp[0][1] = m;
    //printf("%d %d\n", tmp[0][0], tmp[0][1]);

    for(int i=1; i<n; i++){
        scanf("%d %d %d", &h, &v, &m);
        s = s + h + v*3;
        tmp[i][0] = s;
        tmp[i][1] = m;
        //printf("%d %d\n", tmp[i][0], tmp[i][1]);
    }

    k = 0;
    for(int i=0; i<n; i++){
        if(tmp[i][0] == 1){
            for(int j=1; j<=tmp[i][1] && k>0; k--, j++);
            continue;
        }
        else if(tmp[i][0] == 2){
            tmp[i][1] = (tmp[i][1]-1)%3;
            sms[k] = tmp[i][1] + 'A';
        }
        else if(tmp[i][0] == 3){
            tmp[i][1] = (tmp[i][1]-1)%3;
            sms[k] = tmp[i][1] + 'D';
        }
        else if(tmp[i][0] == 4){
            tmp[i][1] = (tmp[i][1]-1)%3;
            sms[k] = tmp[i][1] + 'G';
        }
        else if(tmp[i][0] == 5){
            tmp[i][1] = (tmp[i][1]-1)%3;
            sms[k] = tmp[i][1] + 'J';
        }
        else if(tmp[i][0] == 6){
            tmp[i][1] = (tmp[i][1]-1)%3;
            sms[k] = tmp[i][1] + 'M';
        }
        else if(tmp[i][0] == 7){
            tmp[i][1] = (tmp[i][1]-1)%4;
            sms[k] = tmp[i][1] + 'P';
        }
        else if(tmp[i][0] == 8){
            tmp[i][1] = (tmp[i][1]-1)%3;
            sms[k] = tmp[i][1] + 'T';
        }
        else if(tmp[i][0] == 9){
            tmp[i][1] = (tmp[i][1]-1)%4;
            sms[k] = tmp[i][1] + 'W';
        }
        k++;
    }
    if(k == 0){
        printf("null");
        return 0;
    }

    for(int i = 0; i<k; i++)
        printf("%c", sms[i]);

    return 0;
}