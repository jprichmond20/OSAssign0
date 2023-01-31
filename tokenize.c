 
#include <stdio.h>
#include <string.h>


int main(){

  char str[80] = "This is a str";
  char s[2] = " ";
  char *token;

  token =strtok(str,s);

  while (token != NULL){
    printf("%s\n", token);
    token = strtok(NULL, s);
  }
  
		       
    return 1;
}
