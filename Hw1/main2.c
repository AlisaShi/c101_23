#include <stdio.h>

int main() {
  char a[]="A3B2C4A9";
  for(int i=0;i<(a[1]-48);i++){
    printf("%c",a[0]);
  }
  for(int i=0;i<(a[3]-48);i++){
    printf("%c",a[2]);
  }
  for(int i=0;i<(a[5]-48);i++){
    printf("%c",a[4]);
  }
  for(int i=0;i<(a[7]-48);i++){
    printf("%c",a[6]);
  }
  printf("\n");
  return 0;
}