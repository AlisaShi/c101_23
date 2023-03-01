#include <stdio.h>

int main() {
  char a[]="Hello";
  char temp=a[0];
  a[0]=a[4];
  a[4]=temp;
  a[0]-=32;
  a[4]+=32;
  for(int i=0;i<5;i++){
    printf("%c",a[i]);
  }
  return 0;
}