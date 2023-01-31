#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numZero(int myArr[10]) {
	int count = 0;
	for(int i = 0; i < 10; i++) {
		if(myArr[i] == 0) {
			++count;
		}
	}

return(count);
}

void printArr(int myArr[10]) {
for(int i = 0; i < 10; i++) {
printf("%d ", myArr[i]);
}
printf("\n");
}

void printTripArr(int myArr[10]) {
int temp = 0;
for(int i = 0; i < 10; i++) {
temp = myArr[i] * 3;
printf("%d ", temp);
}
printf("\n");
}

int main(){
int myArr[10] = {0,1,0,2,0,3,0,4,0,5};
printArr(myArr);
printf("%d\n", numZero(myArr));
printTripArr(myArr);
return 0;
}


