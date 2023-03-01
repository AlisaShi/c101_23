#include <stdio.h>

int main() {
  char a[]="ABCabcABC";
  int shift=4;
  char temp[]="    ";
  for(int i=0;i<4;i++){
    temp[i]=a[i];    
  }
  for(int i=4;i<9;i++){
    a[i-4]=a[i];
  }
  for(int i=5;i<9;i++){
    a[i]=temp[i-5];
  }
  for(int i=0;i<9;i++){
    printf("%c",a[i]);
  }
  return 0;
}