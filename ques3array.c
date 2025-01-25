#include<stdio.h>
int main (){
    int i,sum1=0,sum2=0,sub;
int arr[10]= {2,4,6,8,10,12,14,16,18,20};
for ( i=0;i<=9;i++){
    if (i%2==0){
        sum1 = sum1 + arr[i];
    }
    else 
   { sum2 = sum2 +arr[i];}
   sub = sum2 - sum1;
}
printf ("%d",sub);   
return 0;
}