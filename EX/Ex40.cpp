#include<stdio.h>

long long lcm(long long a, long long b)
{
    if (a%b==0)
        return b;
    return lcm(b, a%b);
}

int main()
{
    long long n, num, ans, i;
    scanf("%lld %lld",&n, &ans);
    for (i=0; i<n-1; i++)
    {
        scanf("%lld",&num);
        ans = ans*num / lcm(ans, num);
    }
    printf("%lld\n",ans);
    return 0;
}