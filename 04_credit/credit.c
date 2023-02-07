#include <stdio.h>

int main() {
    int number, i = 0, c = 0;
    int digits[9999];
    
    printf("Number: ");
    scanf("%i", &number);
    
    while(number > 0){
        digits[i] = (number % 10);
        number = number / 10;
        i++;
    }   
    
    while(c < i){
        printf("%i ", digits[c]);
        c++;
        
    }
    
    printf("\n");
    
    return 0;
}
