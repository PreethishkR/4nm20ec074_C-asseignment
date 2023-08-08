#include <stdio.h>
#include <stdlib.h>

int main()
{   char arr[100];
    int n,i,j,count=0;
    scanf("%s",arr);
    n=strlen(arr);
    for(i=0;i<=n;i++){
        if(arr[i]>='a'&& arr[i]<='z'){
            count++;

        }

    }
    printf("%d",count);
    return 0;
}
