#include <stdio.h>

int main() {
	int nil[2];
	
	nil[0] = 80;
	nil[2] = 90;
	
	int rr = (nil[0] + nil[1] + nil[2]) / 2;
	printf("The average of the 3 grades is: %d", rr);
	
	return 0;
}