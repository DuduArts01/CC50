#include <stdio.h>

void mauro(int height);

int main() {
    int height = 0;
    printf("Enter valor height:  ");
    scanf("%d", &height);
    mauro(height);
    
    return 0;
}

void mauro(int height) {
    int width = 1;
    //Width would be #
    int void_spaces = height-1;
    //void_spaces would be the void spaces
    for (int i = 0; i < height; ++i) {
        for (int space = 0; space < void_spaces; ++space) {
            printf(" ");
        }
        for (int x = 0; x < width; ++x) {
            printf("#");
        }
        ++width;
        //add more #
        --void_spaces;
        //decrease empty spaces
        printf("\n");
    }
}
