#include<stdio.h>
int main ()
{ int x=18,c=0;
int arr[10]={2,4,6,8,10,12,14,16,18,20};
for (int i=0;i<=9;i++){
    for (int j=i+1;j<=9;j++){//note
        for (int k=i+2;k<=9;k++){//note
            if ((arr[i]+arr[j]+arr[k])==x){
     printf ("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
     c++;
            }
        }
    }
}
printf ("NUMBER OF TRIPLETS: %d",c);
    return 0;
}//easy method for this is HASHMAP