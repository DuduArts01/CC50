#include <stdio.h>

int main() {
    int number, i = 0, c = 0, n;
    int digits[9999];
    
    printf("Number: ");
    scanf("%i", &number);
    
    while(number > 0){
        digits[i] = (number % 10);
        number = number / 10;
        i++;
    }   
    
    while(c < i){
        if(c % 2 != 0){
            n = digits[c]
            
            //multiply by 2
            n *= 2;
            
            //separate digits
            if(n % 10 != 0){
                
            }
        }
        //n reset    
        n = 0;
        c++;
    }
    
    printf("\n");
    
    return 0;
}
