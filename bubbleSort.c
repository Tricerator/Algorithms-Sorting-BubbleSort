#include <stdio.h>
#include <stdlib.h>

#define POCET 20

void swap(int *a,int *b);
void generate(int *n);
void bubbleSort(int *n);

int main(){

  int pole [POCET];
  generate(pole);
  printf("%s\n","Puvodni pole:");
  for(int i = 0; i < POCET - 1; i++){
     printf("%d, ",pole[i]);
  }
  printf("%d\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n",pole[POCET-1]);
  bubbleSort(pole);
  for(int i = 0; i < POCET - 1; i++){
     printf("%d, ",pole[i]);
  }
  printf("%d\n",pole[POCET-1]);
  


  return 0;
}

void generate(int p[]){
  for(int i = 0; i < POCET; i++){
    p[i] = rand() % 98;
  }
}

void bubbleSort(int p[]){
  for(int i = 0; i < POCET; i++){
    for(int j = 0; j < POCET; j++){
         if(p[i] < p[j]){
           int pom = p[i];
           p[i] = p[j];
           p[j] = pom;
         }
    }
  }
}
