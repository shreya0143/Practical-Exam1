#include <stdio.h>

int main() {
	int a,b,area;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	area = (a*a) + (2*a*b) + (b*b);
	
	printf("the ares is : %d \n", area);
	
	return 0;
}
