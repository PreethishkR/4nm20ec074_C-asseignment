#include<stdio.h>

int main(){

int k=0,n,l=0;
printf("Enter the length of array:");
scanf("%d",&n);
int num[n];
while(l<n)
{
    scanf("%d",&num[l]);
    l++;
}
for(int i=0;i<n;i++)
{
        for(int j=i+1;j<n;j++)
            {
            if(num[i]>num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }

            }
}
            int i = 0;
        for (int j = 1; j < n; j++) {
            if (num[i] != num[j]) {
                i++;
                num[i] = num[j];
            }
            else
                k++;
        }


for(int i=0;i<n-k;i++)
{
    printf("%d ",num[i]);
}
return 0;
}
