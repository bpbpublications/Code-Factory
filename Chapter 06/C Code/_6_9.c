#include<stdio.h>
#include<stdlib.h>

int main () {
  // variable to store the result
  long bina = 0;
  int re, i = 1;
  int nn, bb;
  printf("Enter the decimal number: ");
  scanf("%d", &nn);

  printf("Enter the required base: ");
  scanf("%d", &bb);

  if(bb<2 || bb > 9)
  {
      printf("Base should be between 2 to 9");
      exit(0);
  }
 // loop to convert to binary
  while (nn != 0) {
        // get remainder of nn divided by base
    re = nn % bb;
        // divide nn by base
    nn = nn/bb;
        // multiply remainder by i
    // add the product to bin
    bina += re * i;
        // multiply i by 10
    i *= 10;
  }

  printf("The base %d representation of %d is %ld", bb,nn,bina);

return 0;
}

