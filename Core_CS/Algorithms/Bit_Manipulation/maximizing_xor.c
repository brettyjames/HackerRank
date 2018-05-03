#include <stdio.h>
#include <stdlib.h>

int main(){
	int left; // Left number in the equation.
	int right; // Right number in the equation.
	int max; // Maximum result of combination.
	int result; // Current result of the combination.
	int i, j; // Incrementers.
	
	// Read in the left and right numbers for the equation.
	scanf("%d", &left);
	scanf("%d", &right);
	
	// Initialize the max.
	max = 0;

	// Increments left.
	for(i = left; i <= right; i++){
		
		// Increments right.
		for(j = left; j <= right; j++){

			// Calculate XOR.
			result = i ^ j;
			
			// Increase the max if the result is bigger than the current max.
			if(result > max){
				max = result;
			}
		}
	}

	printf("%d\n", max);

	return 0;
}
