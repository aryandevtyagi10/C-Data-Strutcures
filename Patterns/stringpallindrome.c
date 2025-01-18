#include <stdio.h>
int main() {
   char str[100];
   int i, length, flag = 0;

   printf("Enter a string: ");
   gets(str);
   for(length = 0; str[length] != '\0'; length++);

   for(i=0; i<length/2; i++) {
      if(str[i] != str[length-i-1])
      {
         flag = 1;
         break;
      }
   }

   if(flag == 0)
      printf("%s is a palindrome string", str);
   else
      printf("%s is not a palindrome string", str);

   return 0;
}