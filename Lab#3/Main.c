#include <stdio.h>
typedef struct person {
  int id;
  char first_name[32];
  char last_name[32];
} person_t;

int main() {
  FILE *wfp;
  wfp = fopen("person.bin", "w+");
  person_t p[5] = {
      {1, "IU", "Lee"},    {2, "IUU", "Lee"},    {3, "IUUU", "Lee"},
      {4, "IUUUU", "Lee"}, {5, "IUUUUU", "Lee"},
  };
  for (int i = 0; i < 5; i++) {
    fwrite(p + i, sizeof(person_t), 1, wfp);
    // fwrite(p[i], sizeof(person_t), 1, wfp);
  }
  fseek(wfp, 0, SEEK_SET);
  int i = 0;
  person_t tmp[1];
  while (fread(tmp, sizeof(person_t), 1, wfp)) {
    printf("[%d]%d:%s %s\n", i, tmp[0].id, tmp[0].first_name, tmp[0].last_name);
    i++;
  }

  fclose(wfp);
  return 0;
}
