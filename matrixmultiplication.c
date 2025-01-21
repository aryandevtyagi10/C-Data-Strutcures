#include <stdio.h>
int main(){
int a[10][10],b[10][10],m[10][10],i,j,k,r1,c1,r2,c2;
printf ("Enter order of matrix A: ");
scanf ("%d %d",&r1,&c1);
printf ("\nEnter order of matrix B: ");
scanf ("%d %d",&r2,&c2);
 if (r2!=c1)
 {
    printf ("ERROR");
 }
else 
{
    printf ("\nEnter Elements of Matrix A: ");
    for (i=0;i<r1;i++){
    for (j=0;j<c1;j++)
    {
     scanf ("%d",&a[i][j]);
    }
    }
    printf ("\nEnter Elements of Matrix B: ");
    for (i=0;i<r2;i++){
    for (j=0;j<c2;j++)
    {
     scanf ("%d",&b[i][j]);
    }
    }
    for (i=0;i<r1;i++){
    for (j=0;j<c2;j++)
    {
        m[i][j]=0;
        for (k=0;k<c2;k++)
        {
            m[i][j]= m[i][j]+a[i][k]*b[k][j];
        }
    }
}

 printf ("\nMatrix Multiplication :\n");
 for(i=0;i<r1;i++){
 for(j=0;j<c2;j++){
    printf("%d ",m[i][j]);
 }
  printf ("\n");
 }
}
    return 0;
}