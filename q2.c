#include <stdio.h>
int main ()
{
    int x;
    for (x=-1;x<=10;x++){
        if (x<5)
        continue;
        else
        break; 
        printf ("abc");
    }
    return 0;
}





















/* solution : ---> loop runs zero times.
continue statement skip the rest of the loop and 
moves to the for loop again for iteration till the value is true
when value is false... by break statement
 it moves out of loop without execution.
continue is followed with break statement
*/

//KEYPOINT
// precedence of >= is bigger than !
//if (0)---> false
// if (1) ---> true