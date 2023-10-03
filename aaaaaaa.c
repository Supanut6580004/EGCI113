#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float x1,x2;
    printf("Input your coefficients : ");
    scanf("%d %d %d",&a,&b,&c);
    puts("Roots of the equation: ");

    switch (a){
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }

    if(b>0) printf("+");


    x1=(-b+sqrt((b*b)-4*a*c))/(2*a);
    x2=(-b-sqrt((b*b)-4*a*c))/(2*a);
    printf("%d,%d",x1,x2);


    return 0;
}

/*int grade;
    printf("Enter your grade : ");
    scanf("%d",&grade);
    printf("I got a grade ");
    switch (grade){
        case 4: puts("A"); break;
        case 3: puts("B"); break;
        case 2: puts("C"); break;
        case 1: puts("D"); break;
        case 0: puts("F"); break;
        default: puts("I don't know Y_Y");

    }
    return 0;
}*/
