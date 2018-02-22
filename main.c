#include<stdio.h>
 int main()
 {
 int b,n,j=1;
 scanf("%d",&b);
 n=b;
 while(b!=0)
 {
  b=b/10;
  if(b!=0)
  j++;
 }
 printf("%d",j);
 }
