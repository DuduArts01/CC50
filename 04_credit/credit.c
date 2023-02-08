#include <stdio.h>

int main(void) {
  char number;
  int i = 0, c = 0, n1, sum1 = 0, sum2 = 0, sumtotal = 0;
   
  printf("Number: ");
  scanf("%c", number);
  
  while(i){

  }
  
  while(number >= 0){
    c = (number % 10);
    //sum1  
    if (((i % 2) != 0) && (i != 0)) {
      n1 = c * 2;

      //if n1 for major that 10 separate this number in digit
      if(n1 >= 10){
        while(n1 > 0){
          sum1 += (n1 % 10);
          n1 /= 10;
        }
      } else{
        sum1 += n1;
      }
    }
    number /= 10;
    i++;
  }
  
  printf("sum1 = %i\n", sum1);    
  
  return 0;
}

