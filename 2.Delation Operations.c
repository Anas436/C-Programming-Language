// 2. Delation Operations using Array in Data Stuctures.

#include <stdio.h>

void main() {
   int LA[] = {81,40,49,62,12};
   int k = 3, n = 5;
   int i, j;

   printf("The original array elements are :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

   j = k;

   while( j < n) {
      LA[j-1] = LA[j];
      j = j + 1;
   }

   n = n -1;

   printf("\nThe array elements after deletion :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}
