#include <stdio.h>
#include <stdlib.h>

int main(){
	
	unsigned int *arr; // Dynamically-sized array.
	int n; // Size of the array.
	size_t i; // Incrementer.
	
	// Read in the size of the array.
	scanf("%d", &n);
	
	// Allocate memory for the array.
	arr = malloc(n * sizeof(unsigned int));
	
	// As unsigned integers are read in,
	// use bitwise NOT to flip the bits.
	for(i = 0; i < n; ++i){
		scanf("%u", &arr[i]);
		printf("%u\n", ~arr[i]);
	}

	return 0;
}
