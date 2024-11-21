#include <stdio.h>

int main() {
	int number,count = 0;
	
	printf("enter a number : ");
	scanf("%d", &number);
	
	if(number < 0 ) {
		number = -number;
	}
	
	for( number > 0; number /= 10; ) {
		count++;
	}
	
	printf("the number of digits is : %d\n",count);
	
	return 0;
	
}
