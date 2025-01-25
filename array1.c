#include <stdio.h>
int main (){
int arr[10]= {88,98,87,56,34,12,90,98,75,24};
for (int i=0;i<=9;i++)
{
    if (arr[i]<35)
    {
        printf ("ROLL NUMBER = %d\n",i);//index
    }
}
    return 0;
}
//int size =10, b[size]; this is correct array decalaration