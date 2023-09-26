#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Input your numbers : ");
    scanf("%d,%d,%d",&a,&b,&c);
    int x1,x2;
    x1=-b+sqrt(pow(b,2)-4*a*c)/2*a;
    x2=-b-sqrt(pow(b,2)-4*a*c)/2*a;
    printf("%d,%d",x1,x2);
    return 0;
}
