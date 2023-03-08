 
#include <stdio.h>
#include <string.h>


int main(){

  char str[80] = "This is a str";
  char s[2] = " ";
  char *token;
	char str0[80] = "";
fgets(str0, 256, stdin);
  token =strtok(str0,s);

  while (token != NULL){
	int length = strlen(token);
	printf("%d ", length);
    printf("%s\n", token);
    token = strtok(NULL, s);
  }


    return 1;
}
