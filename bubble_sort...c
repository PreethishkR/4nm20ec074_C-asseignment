#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<=n;i++){
        printf("%d\t",arr[i]);r
  }
}

int main()
{   int n,i;
    printf("enter the length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the values to sort in ascending order:");
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
     bubble_sort(arr,n);



    return 0;
}
