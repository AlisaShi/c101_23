#include <stdio.h>
#include<stdlib.h>

int main(void) {
  int a[]={1,2,3};
  char b[]="ABC";
  float c[]={1.1,1.2,1.3};
  FILE* filepoint;
  filepoint = fopen("a.bin", "wb+");
  fwrite(a, sizeof(int), 1 ,filepoint);
  fread(a,sizeof(int), 1, filepoint);
  
  for(int i=0;i<=2;i++){
    printf("%d",a[i]);
  }
  fclose(filepoint);
  return 0;
}
