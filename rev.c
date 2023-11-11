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

printf("the reverse array is:");
for(i=n-1;i>=0;i--)
printf("%d",a[i]);
return 0;
}
