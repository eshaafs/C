#include <stdio.h>
int penghitungKata(char kata[]){
  if (*kata == '\0'){
    return 0;
  } else {
    return penghitungKata((1+kata)) + 1;
  }

}
int main(void) {
  char kalimat[25];
  printf("Masukkan kalimat: ");
  scanf("%[^\n]", kalimat);
  printf("Jumlah kata yang anda masukkan adalah: %d", penghitungKata(kalimat));
  return 0;
}
