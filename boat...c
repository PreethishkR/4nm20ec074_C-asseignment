#include <stdio.h>
#include <stdlib.h>

int main()
{
int x=75,y=30,a,c,sum=0,max_weight,no_of_adult,no_of_children;
printf("enter maximum weight of boat:");
scanf("%d",&max_weight);
printf("enter number of adults:");
scanf("%d",&no_of_adult);
printf("enter number of children:");
scanf("%d",&no_of_children);
a=x*no_of_adult;
c=y*no_of_children;
sum=a+c;
printf("%d\n",sum);
if(max_weight>=sum){
    printf("Boat is stable");
}
else{
    printf("Boat is unstable");
}

    return 0;
}
