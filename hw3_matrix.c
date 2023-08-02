#include <stdio.h>
#include <stdlib.h>

int main()
{// WHERE ODD [i] ,[j] IS THERE PRINT 1 else *
    int i,j;
    for(i=0;i<=2;i++){//rows
        for(j=0;j<=2;j++){//columns
            if(i%2==0 && j%2==0){//if both even only then
                printf("*");
           }else{//if atleast one is odd
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
