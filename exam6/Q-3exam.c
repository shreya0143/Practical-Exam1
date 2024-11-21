#include <stdio.h>

int main() {
	int n;
	
	printf("entr a number : ");
	scanf("%d", &n);
	
	printf("natural number in reverse order from %d to 1 :\n",n);
	
	while(n>=1) {
		printf("%d ",n);
		n--;
	}
	
	printf("\n");
	
	return 0;
}
