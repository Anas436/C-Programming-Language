//1. Insertion Operations using Array in Data Structures.

#include <stdio.h>
#define MAX 5
void main() {
   int array[MAX] = {30, 89, 35, 98};

   int N = 4;        // number of elements in array
   int i = 0;        // loop variable
   int index = 3;    // index location before which value will be inserted
   int value = 34;    // new data element to be inserted

   printf("Printing array before insertion : \n"); // print array before insertion

   for(i = 0; i < N; i++) {
      printf("array[%d] = %d \n", i, array[i]);
   }

   // now shift rest of the elements downwards
   for(i = N; i >= index + 1; i--) {
      array[i + 1] = array[i];
   }

   array[index + 1] = value; // add new element at first position

   // increase N to reflect number of elements
   N++;

   // print to confirm
   printf("\nPrinting array after insertion : \n");

   for(i = 0; i < N; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   }
}
