#include <stdio.h>

int main(){
  int num;
  scanf("%d", &num);

  while (num != 0){
    printf("%d\n", num*2);
    scanf("%d", &num);
  }
  printf("%d\n", num);
  return 1;
}
