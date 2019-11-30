#include<stdio.h>
#include<stdlib.h>


void print_array(int * array, int size){

	for(int i=0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void selection_sort(int *array, int size){

	int temp=0;
	for(int i=0; i < size - 1; i++){
		for(int j = i + 1; j < size; j++){
			if(array[i] > array[j]){
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
}
int main(int argv, char * argc []){

	printf("......Selection sort.........\n");

	int array[6] = {31,41,59,26,41,58};

	print_array(array, 6);

	selection_sort(array, 6);

	print_array(array, 6);

	return 0;
}

