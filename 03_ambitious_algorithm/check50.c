#include <stdio.h> 
 #include <math.h> 
  
 int check_coins(int c); 
  
 int main(void) { 
   float dolar; 
  
   printf("Troca devida: "); 
   scanf("%f", &dolar);   
   int change_coins = round(dolar * 100); 
   //round() --> round off the float to the maximum
   
   if(change_coins < 0){ 
     printf("Troca devida: foo\n"); 
     printf("Troca devida: %.2f\n", dolar * -1); 
     printf("%d coin.\n", check_coins(change_coins * -1)); 
     //check change coins and if it is negative
   } else {     
     printf("%d coin.\n", check_coins(change_coins)); 
     //check change coins and if it is positive
   } 
      
   return 0; 
 } 
  
 int check_coins(int c) {   
   int coin = 0; 
     
   while(c > 0) { 
     if(c >= 25){       
       c -= 25; 
       coin += 1;       
       
     } else if(c >= 10) { 
       c -= 10; 
       coin += 1; 
        
     } else if(c >= 5) { 
       c -= 5; 
       coin += 1; 
        
     } else { 
       c -= 1; 
       coin += 1;       
        
     } 
   
  } 
 return coin;
 }