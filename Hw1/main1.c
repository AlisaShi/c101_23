#include <stdio.h>

int main() {
  char a[]="AABBBCCCCddd";
  int b[4]={0,0,0,0};
  for(int i=0;i<12;i++){
    if(a[i]=='A'){
      b[0]++;
    }
    else if (a[i]=='B'){
      b[1]++;
    }
    else if (a[i]=='C'){
      b[2]++;
    }
    else if (a[i]=='d'){
      b[3]++;
    }
  }
  printf("A");
  printf("%d",b[0]);
  printf("B");
  printf("%d",b[1]);
  printf("C");
  printf("%d",b[2]);
  printf("d");
  printf("%d",b[3]);
  return 0;
}