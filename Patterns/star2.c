#include <stdio.h>
int main ()
{
 int i,j,k;
 for (i=1;i<=5;i++){
    k=1;
    for (j=1;j<=9;j++){     //alternate method for k
        if (j>=6-i&&j<=4+i&&k)//(i+j)%2==0
        {
            printf ("*");
            k=0;
        }
        else 
       {printf (" ");
        k=1;}
    }
 printf ("\n");
 }
     return 0;
}
