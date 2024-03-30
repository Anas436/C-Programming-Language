#include<stdio.h>

void search(int arr[], int n, int item, int i, int j){

int item =3, n=5;
int i=0, j=0;

printf("The original array elements : \n");

 for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

   while( j < n){
      if( LA[j] == item ) {
         break;
      }

      j = j + 1;
   }

   printf("Found element %d at position %d\n", item, j+1);
}

int main(){

search(arr,n);

return 0;

}










