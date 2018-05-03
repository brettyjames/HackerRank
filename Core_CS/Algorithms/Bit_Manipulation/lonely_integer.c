#include <stdio.h>
#include <stdlib.h>

int main(){

	int *arr; // Dynamically-sized array
	int n; // Size of the array
	int unique = 0; // Unique number
	size_t i; // Incrementers
	
	// Read in the size of the array.
	scanf("%d", &n);
	
	// Allocate memory for the array.
	arr = malloc(n * sizeof(int));
	
	// Read in all elements of the array.
	for(i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	
	// Use the summation bitwise XORs to find the unique number.
	for(i = 0; i < n; i++){
		unique ^= arr[i];
	}
	
	// Done.
	printf("%d\n", unique);

	return 0;
}
