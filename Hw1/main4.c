#include <stdio.h>

int main(void) {
  char a[]="-99acbc";
  char b[]="99acbc";
  char c[]="ac-99bc";
  char ca[7];
  char cb[6];
  char cc[7];
  int ja=0;
  int jb=0;
  int jc=0;
  for(int i=0;i<7;i++){
    if(a[i]=='-'||(a[i]>='0'&&a[i]<='9')){
      ca[ja]=a[i];
      ja++;
    }
    if(b[i]=='-'||(b[i]>='0'&&b[i]<='9')){
      cb[jb]=b[i];
      jb++;
    }
    if(c[i]=='-'||(c[i]>='0'&&c[i]<='9')){
      cc[jc]=c[i];
      jc++;
    }
  }
  for(int i=0;i<7;i++){
    printf("%c",ca[i]);
  }
  printf("\n");
  for(int i=0;i<6;i++){
    printf("%c",cb[i]);
  }
  printf("\n");
  for(int i=0;i<3;i++){
    printf("%c",cc[i]);
  }
  printf("\n");
  return 0;
}