#include <stdio.h>
#include <math.h>

int check_coins(float c);

int main(void) {
  float dolar;

  printf("Troca devida: ");
  scanf("%f", &dolar);  
  int change_coins = round(dolar * 100);
  if(change_coins < 0){
    printf("Troca devida: foo\n");
    printf("Troca devida: %.2f\n", change_coins * -1);
    printf("%d coin.\n", check_coins(change_coins * -1));
    //check change coins
  } else {    
    printf("%d coin.\n", check_coins(change_coins));
    //check change coins
  }
    
  return 0;
}

int check_coins(float c) {  
  int x = 0, coin = 0, co = c;  
   
  while(co > 0) {
    if(co >= 25){      
      co -= 25;
      coin += 1;      
      
    } else if(co >= 10) {
      co -= 10;
      coin += 1;
      
    } else if(co >= 5) {
      co -= 5;
      coin += 1;
      
    } else {
      co -= 1;
      coin += 1;      
      
    }
  return coin;

  }
}
