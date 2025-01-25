#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Numbers(int a[], int n) {
    int sum = (n*(n+1))/2;
    int sumsquare =(n*(n + 1)*(2*n+1))/6;
  
    int repeat =0, miss=0;
    
    for (int i = 0; i < n; i++) {
       sum = sum - a[i];
       sumsquare =sumsquare - a[i] * a[i];
    }
    
    miss = (sum + sumsquare/sum)/2;
    repeat = miss - sum;
    
    printf("%d\n", miss);
    printf("%d\n", repeat);
}



int main() {
    int a[6] = {5,3,6,2,1,3};
    int n = sizeof(a) / sizeof(a[0]);
    Numbers(a, n);
    return 0;
}
