#include<stdio.h>
int main()
{
int a[20],i,n;
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{


scanf("%d",&a[i]);
}
//printf("the array is:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
