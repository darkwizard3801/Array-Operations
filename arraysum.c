#include<stdio.h>
int main()
{
int a[20],i,n,sum=0;
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
sum=sum+a[i];
printf("sum=%d\n",sum);
return 0;
}
