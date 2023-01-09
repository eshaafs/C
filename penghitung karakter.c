 #include <stdio.h>
 
int penghitungKarakter(char kalimat[], int n){
  if(kalimat[n]){
    n += 1;
    return penghitungKarakter(kalimat, n);
  }
  return n;
}
 
int main(void) {
  char input[200];
  printf("masukkan kata : ");
  scanf("%[^\n]s", input);
  printf("Jumlah kata \"%s\" adalah : %d ", input, penghitungKarakter(input, 1));
  return 0;
}
