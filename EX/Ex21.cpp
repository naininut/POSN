#include<stdio.h>

char a[100][100];
int main()
{
    int r, c, i, j, k;
    scanf("%d %d",&r,&c);
    for (i=0; i<r; i++)
        for (j=0; j<c; j++)
            scanf(" %c",&a[i][j]);
    for (j=0; j<c; j++){
        scanf("%d",&k);
        for (i=0; i<r&&a[i][j]=='.'; i++);
        for (i=i-1; i>=0&&k>0; k--, i--)
            a[i][j]='#';
        }
        for (i=0; i<r; i++){
            for(j=0; j<c; j++)
                printf("%c",a[i][j]);
            printf("\n");
        }
        return 0;
}