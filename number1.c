/*
5
        1         
      2 1 2       
    3 2 1 2 3     
  4 3 2 1 2 3 4   
5 4 3 2 1 2 3 4 5 
  4 3 2 1 2 3 4   
    3 2 1 2 3     
      2 1 2       
        1         

*/
#include<stdio.h>
int main()
{
 int i,n,j,t,t1=2,t3;
 scanf("%d",&n);
 for(i=1;i<=n*2-1;i++)
 {t=i;
   t1=2;
    t3=n*2-i;
  for(j=1;j<=n*2-1;j++)
  {
    if((j>n-i &&i<=n && t>0))
      {printf("%d ",t);
        t--;
      }
    else if((j>n && j<=n+i-1 && i<=n))
     {
      printf("%d ",t1);
      t1++;
     }
     else if(i>n && j>i-n && t3>0)
      {
      printf("%d ",t3);
      t3--;
      }
     else if(i>n && j>n && j<=(n*2-1-i)+n)
      {printf("%d ",t1);
       t1++;
      }
    else 
     printf("  ");
  }printf("\n");
 }
}

