#include <stdio.h>

int main() {
	int number1,number2,number3,lowest;
	
	printf("enter the first number : ");
	scanf("%d",&number1);
	
	printf("enter the second number : ");
	scanf("%d",&number2);
	
	printf("enter the third number : ");
	scanf("%d",&number3);
	
	if(number1 < number2){
		if(number1 <number3) {
			lowest = number1;
		}
		else {
			lowest = number3;
		}
	}
	
	else {
		if(number2 <number3) {
			lowest = number2;
		}
		else {
			lowest = number3;
		}
	}
	
	printf("the lowest value is : %d\n",lowest);
	
	return 0;
}
