#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int count = 1;
// FILE* fp;
// fp = fopen("Hanoi.txt","w+");

void move(FILE *fp, int n, char A, char C) {
  //time_t curtime;
  //time(&curtime);
  char *ctime_no_newline;
  time_t tm = time(NULL);
  ctime_no_newline = strtok(ctime(&tm), "\n");
  // fprintf(fp, count,ctime(&curtime),n, A, C);
  //  printf("%d(%s):%dP from %c to %c\n",count,ctime(&curtime),n, A, C);
  fprintf(fp, "%d (%s):%dP from %c to %c\n", count, ctime_no_newline, n, A, C);

  count++;
}

void Hanoi(FILE *fp, int n, char A, char B, char C) {
  if (n == 1) {
    move(fp, n, A, C);

  } else {

    Hanoi(fp, n - 1, A, C, B);
    move(fp, n, A, C);
    Hanoi(fp, n - 1, B, A, C);
  }
}
int main() {
  int n = 20;
  FILE *fp;
  fp = fopen("Hanoi.txt", "w+");

  // fprintf(fp,*ctime(&curtime));
  // printf("Curtime=%s",ctime(&curtime));

  Hanoi(fp, n, 'A', 'B', 'C');
  fclose(fp);
  return 0;
}
