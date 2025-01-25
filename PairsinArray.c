#include<stdio.h>
int main (){
int i,x=10, c=0;
int arr[10]= {2,4,6,8,10,12,14,16,18,20};
for ( i=0;i<=9;i++){
for (int j=i+1;j<=9;j++){//note
 if (arr[i]+arr[j]==x){
    c++;
    printf ("(%d,%d)\n",arr[i],arr[j]);
  }
 }
}
printf ("NUMBER OF PAIRS : %d",c);   
return 0;
}