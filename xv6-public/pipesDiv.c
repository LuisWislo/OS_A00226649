
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num = 0;
    int prime = 0;
  //fprintf(stderr, "imprimendo los pares \n");

    scanf("%d\n",&prime);
    fprintf(stderr,"%d\n",prime);
  while(1){
    scanf("%d\n",&num);//noten que leo de stdout
    if(num == -1){
        fprintf(stdout,"%d\n",-1);
      break;
    }
    if(num % prime != 0){
      fprintf(stdout,"%d\n",num);

    }
  }
}