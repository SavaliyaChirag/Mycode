#include<stdio.h>
#include<stdlib.h>

void print_array(int * array, int size){

	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void bubble_sort(int *array, int size){
    int temp = 0;
    for(int i = 0; i < size - 1; i++){
        for(int j = size -1; j >= i + 1; j--){
            if( array[j] < array[j - 1]){
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(int argv, char * argc []){

	printf("....... Bubble Sort .......\n");

	int array[11] = {23,1,45,67,-1,20,10,1929,122229,121,0};

	print_array(array,11);

	bubble_sort(array,11);

	print_array(array,11);

	return 0;
}



