#include <stdio.h>

int main() {
	char name[15];
	char age[8];
	printf("Enter your name: ");
	fgets(name, 15, stdin);
	printf("\nEnter your age: \n");
	fgets(age, 8, stdin);
	printf("%s is %s years old.\n", name, age);
	return 0;
}
