#include<stdio.h>
#include<math.h>

int main()
{
    int n, sq, i, cnt=0;
    scanf("%d",&n);
    sq = sqrt(n);
    for (i=1; i<=sq; i++)
        if (n%i==0)
            cnt++;
    if (cnt==1 && n!=1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}