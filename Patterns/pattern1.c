#include<stdio.h>
int main (){
 for (int i = 1;i<=3;i++){
    for (int j =1;j<=3;j++){
        if (j<=3)
        {
            printf("*");
        }
        else printf (" ");
    }
    printf ("\n");
 }
    return 0;
}