/** Bubble Sorting in Data Stucture **/


#include<stdio.h>

void Bubble_Sort(int array[], int num){
    int i, j, temp;
    //outer loop
    for(i=0; i<num; i++){
            //inner loop
            for(j=0; j<num-i-1; j++){
                    if(array[j]> array[j+1]){

                            //swap inputed elements
                            temp=array[j];
                            array[j]=array[j+1];
                            array[j+1]=temp;
                    }
            }
    }

    //will be print the sorted array elements
    printf("\nSorted Array Elements : ");
    for(i=0; i<num; i++){

        printf("%d\t", array[i]);
    }

}

















int main(){


    int array[50], i, num, temp;
    //ask to user they what elements want to input
    printf("Enter the number of elements for sort: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){

        printf("\nEnter the elements no.%d : ", i+1);
        scanf("%d", &array[i]);
    }
    //call the function their name Bubble_sort
    Bubble_Sort(array, num);

    return(0);

}




