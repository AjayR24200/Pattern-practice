#include<stdio.h>
void main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
           printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}

/* 		OUTPUT

 555555555
  4444444
   33333
    222
     1
	 
*/