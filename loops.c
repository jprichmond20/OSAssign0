#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
int num[5];
int *ptr;
ptr = &num;
printf("Enter a number: ");
scanf("%d", ptr);
for(int i = 0; i < *ptr; i++) {
	printf("%d\n", i);
}





return 0;
}
