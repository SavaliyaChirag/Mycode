#include<stdio.h>
#include<stdlib.h>


void print_array(int * array, int size){

	for(int i=0; i < size; i++)
		printf("%d ", array[i]);
}

void insertion_sort(int * array, int size){

	int key, i;
	for(int j=1; j < size; j++){

		key = array[j];
		i = j - 1;

		while(i>=0 && array[i] < key){
			array[i+1] = array[i];
			i = i - 1;
		}
		array[i+1] = key;
	}
}

int main(int argv, char * argc[]){

	printf("Hello Insertion sort!!\n");

	int array[10] = {8,2,4,3,6,9,1,12,7,5};

	print_array(array, 10);
	printf("\n");
	insertion_sort(array,10);
	print_array(array,10);
	return 0;
}

