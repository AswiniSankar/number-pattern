/*
input:10
* # # # # # # # # * 
^ * # # # # # # * $ 
^ ^ * # # # # * $ $ 
^ ^ ^ * # # * $ $ $ 
^ ^ ^ ^ * * $ $ $ $ 
^ ^ ^ ^ * * $ $ $ $ 
^ ^ ^ * @ @ * $ $ $ 
^ ^ * @ @ @ @ * $ $ 
^ * @ @ @ @ @ @ * $ 
* @ @ @ @ @ @ @ @ * 

input:11
 
* # # # # # # # # # * 
^ * # # # # # # # * $ 
^ ^ * # # # # # * $ $ 
^ ^ ^ * # # # * $ $ $ 
^ ^ ^ ^ * # * $ $ $ $ 
^ ^ ^ ^ ^ * $ $ $ $ $ 
^ ^ ^ ^ * @ * $ $ $ $ 
^ ^ ^ * @ @ @ * $ $ $ 
^ ^ * @ @ @ @ @ * $ $ 
^ * @ @ @ @ @ @ @ * $ 
* @ @ @ @ @ @ @ @ @ * 
*/

#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
  {if(i==j || i+j==n+1)
     printf("* ");
    else if(j<=n/2 && i>j && i+j<n+1)
    printf("^ ");
   else if(i<=n/2 && j+i<n+1)
     printf("# ");
   else if(j>n/2 && i<j)
    printf("$ ");
   //else
   // printf("%");
    else
     printf("@ ");
  }
  printf("\n");
 }
 printf("\n");
 return 0;
}

/*

8
  1
  9  2      
 16 10  3     
 22 17 11  4    
 27 23 18 12  5   
 31 28 24 19 13  6  
 34 32 29 25 20 14  7 
 36 35 33 30 26 21 15  8

*/
#include<stdio.h>
int main()
{
  int n,i,j,t=1,d,temp1,s=0;
  scanf("%d",&n);
  printf("  1\n");
  for(i=2;i<=n;i++) 
  {temp1=n-i+1;
   s=s+n-t;
   d=s+i;
   for(j=1;j<=n;j++)
   {
       if(i>=j)
        {
          printf("%3d",d);
        
        }
       else
         printf(" ");
         d=d-temp1;
         temp1++;
   }
    t++;
   printf("\n");
  }  
  printf("\n");
  return 0;
}


/*
  5    
  9  4   
 12  8  3  
 14 11  7  2 
 15 13 10  6  1

*/
#include<stdio.h>
int main()
{
  int n,i,j,t=0,d,temp1,temp,s=0;
  scanf("%d",&n);
  //printf("  1\n");
  temp=n;
  temp1=n;
 //printf("%d--",temp1);
  for(i=1;i<=n;i++) 
  { temp1=n-t+1;
     s=s+temp;
   //d=s+i;
      d=s;
   for(j=1;j<=n;j++)
   {
       if(i>=j)
        {
         printf("%3d",d);
          d=d-temp1;
         temp1++;
        
        }
       else
         printf(" ");
      
   }
   temp=temp-1;
   t++;
   printf("\n");
  }  
  printf("\n");
  return 0;
}
