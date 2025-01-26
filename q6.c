#include<stdio.h>
int main (){
 int a[5]= { 5,1,15,20,25};
int i,j,k;
i = ++a[1];
j = a[1]++;
k = a[i++];
printf ("%d %d %d",i,j,k);
    return 0;
}



















/*solution--> 3,2,15
 index   0 1  2  3  4
 array  [5,1,15,20,25]

initially
i = 2  i =++1.... i=2; then after execution of k , i = 3 as i++ is post incrememnt
j= 2   j=2++......j=3;
m=15   a[i++] (m=a[2]++) --> a[2]--> m=15;
*/

/*
KEYPOINT
x[3] is equivalent to 3[x]
int x[]={1,2,3}; --->[square bracket can be left empty] 
*/