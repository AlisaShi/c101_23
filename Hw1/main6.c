#include <stdio.h>

void number(char a){
  if(a=='1'){
    printf("I ");
  }
  else if (a=='2'){
    printf("II ");
  }
  else if (a=='3'){
    printf("III ");
  }
  else if (a=='4'){
    printf("IV ");
  }
  else if (a=='5'){
    printf("V ");
  }
  else if (a=='6'){
    printf("VI ");
  }
  else if (a=='7'){
    printf("VII ");
  }
  else if (a=='8'){
    printf("VIII ");
  }
  else if (a=='9'){
    printf("IX ");
  }
}

int main() {
  char a[]="81c8g8u168";
  for(int i=0;i<10;i++){
    if(a[i]>='0'&&a[i]<='9'){
      number(a[i]);
    }
    else{
      printf("%c ",a[i]);
    }
  }
  return 0;
}