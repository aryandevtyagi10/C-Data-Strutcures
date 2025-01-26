#include<stdio.h>
int main (){
unsigned int i = 65535; /* assume 2 byte integer*/
while (i++ !=0)
printf ("%d",++i);
printf ("\n");
    return 0;
}




















/*
value of unsigned int is from 0 to 65,535
*/
//solution--> infinte loop
/* i =65535 after i++.... i becomes zero
then by ++i 
i = 1 then with each loop an increment of 2 occurs...
1,3,5,7..........infinity
 */