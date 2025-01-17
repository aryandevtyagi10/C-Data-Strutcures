#include<stdio.h>
int main (){
 for (int i = 1;i<=3;i++){
    int k;
 for (int j =1;j<=5;j++){
        if (j<=2+i&&j>=4-i&&k)
        {
            printf("*");
            k=0;
        }
        else 
        {
        printf (" ");
        k=1;
        }
    }
    printf ("\n");
 }
    return 0;
}