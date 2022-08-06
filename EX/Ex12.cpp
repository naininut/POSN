#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf",&a, &b, &c);
    if (c == 0)
        printf("%.2lf\n",sqrt(a*a + b*b));
    if (a == 0)
        printf("%.2lf\n",sqrt(c*c - b*b));
    if (b == 0)
        printf("%.2lf\n",sqrt(c*c - a*a));
    return 0;
}