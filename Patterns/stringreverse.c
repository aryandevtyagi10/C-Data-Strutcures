#include <stdio.h>
int main(){
char str1[20], reversed[50];
int a, b, count = 0;
 
printf("Enter a string :");
scanf("%s",&str1);

while (str1[count] != '\0') {
  count++;
}
b = count - 1;
for (a = 0; a < count; a++) {
  reversed[a] = str1[b];
  b--;
}
printf("\nReversed string:%s",reversed);
}