#include<stdio.h>
#include<stdlib.h>

void print_array(int * array, int size){

	for(int i=0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

void merge(int *array, int first_index, int mid_index, int max_index){

	int left_array_size = (mid_index - first_index) + 1;
	int right_array_size = (max_index - mid_index);

	int *left_array = (int *)malloc(sizeof(left_array_size));
	int *right_array = (int *)malloc(sizeof(right_array_size));

	for(int i=0; i < left_array_size; i++){
		left_array[i] = array[first_index + i];
	}
	for(int j=0; j < right_array_size; j++){
		right_array[j] = array[mid_index + j + 1];
	}

	int i=0,j=0;
	int k = first_index;
        while(i < left_array_size && j < right_array_size){

		if(left_array[i] <= right_array[j]){
			array[k] = left_array[i];
			i++;
		}
		else{
			array[k] = right_array[j];
			j++;
		}
		k++;
	}

	while(i < left_array_size){
		array[k]= left_array[i];
		i++;
		k++;
	}

	while(j < right_array_size){
		array[k] = right_array[j];
		j++;
		k++;
	}
	free(left_array);
	free(right_array);
}

void merge_sort(int * array, int first_index, int max_index){

	if( first_index < max_index){

	int mid_index = (max_index + first_index)/2;

	merge_sort(array, first_index, mid_index);
	merge_sort(array, mid_index + 1, max_index);

	merge(array, first_index, mid_index, max_index);
	}
}

int main(int argv, char * argc []){

	printf("....... Merge-Sort .......\n");

	int array[11] = {23 ,1 ,45 ,67,-1,20,10,1929,122229, 121,0};

	print_array(array, 11);

	merge_sort(array, 0, 10);

	print_array(array,11);

	return 0;
}

