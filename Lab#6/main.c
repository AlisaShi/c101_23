#include <stdio.h>

int multiplication(int i,int j){
  if(i<=9){
    if(j==9){
      printf("%d*%d=%d \n",i,j,i*j);
      //printf("Hello World\n");
      j=1;
      multiplication(i+1, j);  
    }
    else{
      printf("%d*%d=%d ",i,j,i*j);
      multiplication(i, j+1);
      
    }
    j=1;
  //multiplication(i, j);
    i=i+1;
  }
  

}

int main(void) {
  
  multiplication(1,1);
  return 0;
}
