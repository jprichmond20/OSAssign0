
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char str[6] = "Hello";
  char str2[6] = "Bob";

  char *str3;
  str3 = (char *)malloc(sizeof(char)*strlen(str2));


  printf("%s\n", str);

  strcpy(str2,str);
  strcpy(str3,str);

  printf("%s\n", str2);
  printf("%s\n", str3);


  for(int i =0; i < 18; i++){
    printf("%c\n", str[i]);
  }

  return 1;

}
