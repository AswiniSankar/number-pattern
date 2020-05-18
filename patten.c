/*
 1 
2 4 
3 5 7 
6 8 10 12 
9 11 13 15 17 
*/

#include<stdio.h>
int main()
{
   int n,i,j,x=1,y=2;
   printf("enter the limit:");
   scanf("%d",&n);
   for(i=1;i<=n;++i)
   {
    for(j=1;j<=i;++j)
    {
     if(i%2!=0)
     {
       printf("%d ",x);
       x=x+2;
      }
      else
      {
        printf("%d ",y);
        y=y+2;
       }
     }printf("\n");
    }
   return 0;
}
