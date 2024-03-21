#include <stdio.h>
int main(void) {
  int i=3,j=5;
  int *p, *q;
  bool result;
  p = &i;
  q = &j;
  
  result = p == &j;
  printf("%d\n", result);

  //O resultado é 0, pois o ponteiro p aponta para o endereço
    de i e o ponteiro q aponta para o endereço de j. 
    Ou seja, p e q não apontam para o mesmo endereço de memória.
  
}
