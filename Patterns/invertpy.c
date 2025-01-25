#include <stdio.h> //GENERAL FORM
int main (){
int i,j,rows;
printf ("Enter no.of rows: ");
scanf ("%d",&rows);
for (i=1;i<=rows;i++){
    for (j=1;j<=(2*rows)-1;j++){
  if (j>=i&&j<=(2*rows)-i)
  printf ("*");
  else 
  printf (" ");
    }
    printf ("\n");
}
    return 0;
}
/*
#include <stdio.h>       INVERT PYRAMID
int main (){                *******
int i,j;                     *****
for (i=1;i<=4;i++){           ***
    for (j=1;j<=7;j++){        *
  if (j>=i&&j<=8-i)
  printf ("*");
  else 
  printf (" ");
    }
    printf ("\n");
}
    return 0;
}
*/