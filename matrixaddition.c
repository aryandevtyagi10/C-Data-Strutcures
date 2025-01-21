#include<stdio.h>  
int main(){  
   int m, n, i, j;  
   printf("Enter number of rows and columns: ");  
   scanf("%d%d", &m, &n);  
   int a[m][n], b[m][n], c[m][n];  
   printf("Enter elements of matrix A: ");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &a[i][j]);  
      }  
   }  
   printf("\nEnter elements of matrix B: ");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &b[i][j]);  
      }  
   }   
   for (i = 0; i < m; i++){  
      for (j = 0; j < n; j++) {  
         c[i][j] = a[i][j] + b[i][j];  
      }  
   }  
   printf("Matrix Addition: \n");  
   for (i = 0; i < m; i++){  
      for (j = 0; j < n; j++) {  
         printf("%d ", c[i][j]);  
      }  
      printf("\n");  
   }  
   return 0;  
}  