#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,product;

    i=0;
    printf("enter the number to find multiple of:");
    scanf("%d",&n);
    while(i<=10){
        product=n*i;
        printf("%dx%d=%d\n",n,i,product);
        i++;
    }

    return 0;
}
