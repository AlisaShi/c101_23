#include <stdio.h>

int count(int e){
  int t=1;
  for(int i=0;i<e;i++){
    t*=2;
  }
  return t;
}

int main(void) {
  char a[]="10001111";
  char b[]="10011110";
  int ca=0,cb=0;
  for(int i=7;i>=0;i--){
    if(a[i]=='1'){
      int ta=count(7-i);
      ca+=ta;
    }
    if(b[i]=='1'){
      int tb=count(7-i);
      cb+=tb;
    }
  }
  printf("%X",ca);
  printf("\n");
  printf("%X",cb);
  printf("\n");
  return 0;
}