#include <stdio.h>

void solveProblem(int n, char rodFrom, char middleRod, char rodTo) {
	
	if (n == 1) {
		printf("Place 1 from %c to %c\n", rodFrom, rodTo);
		return;
	}
	
	solveProblem(n - 1, rodFrom, rodTo, middleRod);
	printf("Place %d to from %c to %c\n", n, rodFrom, rodTo);
	solveProblem(n - 1, middleRod, rodFrom, rodTo);
}

int main() {
	// 1 => smallest
	// 3 => biggest
	solveProblem(3, 'A', 'B', 'C');
	
	getchar();
}
