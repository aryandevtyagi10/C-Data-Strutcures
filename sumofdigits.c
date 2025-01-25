#include<stdio.h>
int main (){ int n,s=0,l;
printf ("Enter a number");
scanf ("%d",&n);
while (n!=0)
{ l = n%10;
 s = s + l;
 n = n/10;
}
printf ("SUM OF DIGITS : %d",s);
    return 0;
}