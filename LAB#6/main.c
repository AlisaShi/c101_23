#include <stdio.h>

int multiplication(int i,int j){
  
  if(j==9){
      printf("%d*%d=%d ",i,j,i*j);
      
    //  multiplication(i+1, j=9);
    }
    else{
      multiplication(i, j+1);
      printf("%d*%d=%d ",i,j,i*j);
    }

}

int main(void) {
  printf("Hello World\n");
  multiplication(1,1);
  return 0;
}
