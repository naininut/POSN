#include<stdio.h>
#include<ctype.h>
#include<string.h>

char a[110][110], b[20];
int di[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dj[] = {-1, -1, -1, 0, 1, 1, 1, 0};

int play(int i, int j, int len, int cnt){

    int l;

    if(a[i][j] != b[cnt])
        return 0;

    for(int k=0; k<8; k++){
        int ii = i;
        int jj = j;
        for(l=0; l<len; l++){
            if(a[ii][jj] == b[l]){
                ii = di[k] + ii;
                jj = dj[k] + jj;
            }
            else{
                break;
            }
        }
        if(l == len){
            return 1;
        }
    }
    return 0;
}

int main(){

    int n, m, q, len;
    int c = 0;

    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        scanf(" %s", a[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = toupper(a[i][j]);
        }
    }

    scanf("%d", &q);

    for(int k=0; k<q; k++){
        scanf(" %s", b);
        len = strlen(b);
        for(int i=0; i<len; i++){
            b[i] = toupper(b[i]);
        }
        c = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == b[0]){
                    c = play(i, j, len, 0);
                    if(c){
                        printf("%d %d\n", i, j);
                        break;
                    }
                }
            }
            if(c){
                break;
            }
        }
    }

    return 0;
}