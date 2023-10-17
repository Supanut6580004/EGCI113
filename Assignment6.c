#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;

    printf("How many lines?");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        /*printf("i=%d",i);*/
        for(j=i; j<n;j++) printf("  ");
        for(j=0;j<=i;j++) printf("%4s","*");
        printf("\n");
    }

    for(i=n;i>0;i--){
        for(j=i; j<n;j++) printf("  ");
        for(j=0;j<=i;j++) printf("%4s","*");
        printf("\n");

    }

    return 0;
}
