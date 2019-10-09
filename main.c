
#include <stdio.h>
#include <conio.h>

int main()
{
   int i,j,k,z=1,m,n;

   for(i=1;i<=5;i++)
   {
        printf("\n");
       for(k=5-i;k>=1;k--)
        printf(" ");
       for(j=1;j<2*i;j++)
        printf("*");
   }
   for(z=1;z<=4;z++)
   {
       printf("\n");
       for(m=1;m<=2;m++)
        printf(" ");
       for(n=1;n<=5;n++)
       {

       if(z>2 && n==3)
        printf(" ");
        else
            printf("*");
       }

   }
    
    return 0;
}
