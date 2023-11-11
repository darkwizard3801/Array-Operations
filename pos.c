#include<stdio.h>
int main(){
int n,i,pos,x,a[100];
printf("ente the size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter position:");
scanf("%d",&pos);
printf("enter element to be inserted:");
scanf("%d",&x);
//shift right
n=n+1;
for(i=n-1;i>=pos;i--)
{
    a[i]=a[i-1];
}
a[pos]=x;


printf("new array is:");
for(i=0;i<n;i++)
printf("%d \n",a[i]);
}