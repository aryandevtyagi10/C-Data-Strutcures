#include <stdio.h>
#include <string.h>

void reverse(char* str) 
{
    int length = strlen(str);
    int a, b;
    char temp;
    
    for (a=0,b=length-1;a<b;a++,b--){
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;
    }
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverse(str);

    printf("\nReversed string : %s", str);
    return 0;
}