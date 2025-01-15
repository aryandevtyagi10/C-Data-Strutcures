#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
   if(b==0){
    return a;
   }
   else{
      return gcd(b,a%b);
   }
}
int main(){
int a=30;
int b=12;
int ans=gcd(a,b);
printf("%d",ans);
}