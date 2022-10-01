#include <stdio.h>

void stair(int h);

int main(void) {
  int height;
  printf("Enter valor of height: ");
  scanf("%i", &height);
  stair(height);
  return 0;
}

void stair(int h) {  
  int width = h - 1;
  int c, c2;
    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < width; ++j) {
        printf(" ");
        c = j;
      } 
      if(c == width){
        for(int j = c; j < h - 1; ++j) {
          printf("#");
          c2 = j;
        }
      } 
      if(c2 == h - 1){
        printf("\n");
      }
      --width;
      
    }
}
