#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<time.h>

unsigned int partition(int * A, int p, int q){

	int x = A[p];
	int i = p;
	int temp = 0;
	for(int j = p + 1; j < q; j++){
		if(A[j] <= x){
			i++;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}
	temp = A[p];
	A[p] = A[i];
	A[i] = temp;
	return i;
}

void quicksort(int * A, int p, int q){

	if( p < q ){

		unsigned int r = partition(A, p, q);

		quicksort(A, p, r - 1);
		quicksort(A, r + 1, q);
	}
}

void print_array(int *A, int size){

	for(int i = 0; i < size; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main(int argv, char * argc [ ]){

	printf("....... Quick Sort .......\n");

	int A[8] = {6,10,13,5,8,3,2,11};

	print_array(A, 8);
	quicksort(A,0,8);

	print_array(A,8);


	return 0;
}


