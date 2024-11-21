#include <stdio.h>

int main() {
	char ch;
	
	printf("enter an alphabet : ");
	scanf("%c", &ch);
	
	if(ch>= 'A' && ch <= 'Z') {
		ch = ch + ('a' - 'A');
	}
	
	switch(ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("the alphabet '%c' is a vowel. \n", ch);
			break;
			
		default:
			if(ch>= 'a' && ch<='z') {
				printf("the alphabet '%c' is a consonant. \n", ch);
			}
			
			else {
				printf(" '%c' is not an alphabet. \n", ch);
			}
	}
	
	return 0;
}
