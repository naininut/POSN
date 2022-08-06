#include<stdio.h>

int MX[5], mark[30][30][30];
int ans[30];
void play (int now[]);
int main()
{
    int i;
    for (i=0; i<3; i++)
        scanf("%d",&MX[i]);
    int a[3] = {0, 0, MX[2]};
    play(a);
    for (i=0; i<=MX[2]; i++)
        if (ans[i])
            printf("%d ",i);
    printf("\n");
    return 0;
}
void play(int now[])
{
    int i, j;
    for (i=0; i<3; i++)
        if(now[i]<0 || now[i]>MX[i])
            return;
    if (mark[now[0]][now[1]][now[2]])
        return;
    mark[now[0]][now[1]][now[2]]=1;
    if (now[0]==0)
        ans[now[2]]=1;

    int next[3];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (i==j) continue;
            int other = 3-i-j;
            next[j]=now[i]+now[j];
            next[i]=0;
            next[other] = now[other];
            play(next);

            next[j]=MX[j];
            next[i]=now[i]-MX[j]+now[j];
            next[other] = now[other];
            play(next);
        }
    }
}