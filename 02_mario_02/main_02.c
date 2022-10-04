#include <stdio.h>

int main(void)

{

	int height, width = 1;	

	do {

	    printf("Enter a height: ");

	    scanf("%i", &height);

	    

	    }

	    while ((height < 0) || (height > 8));

	    for(int y = 0; y < height; ++y) {

	         

	         for(int x = 0; x < height; ++x) {

	                x + y < height - 1 ? printf(" ") : printf("#");

	                }

	                

	          printf(" ");  

	          for(int x = 0; x < width; ++x) {

	              printf("#");

	              

	              

	              }

	           ++width;

	          printf("\n"); 

	    }

	        

}
