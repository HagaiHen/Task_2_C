#include <stdio.h>
#include "my_mat.h"



int main () {
    char ch;
    
    scanf("%c", &ch);
    
    while (ch == 'A' || ch == 'B' || ch == 'C') {
    
        switch (ch) {
            case 'A':
            getMat();
            break;

            case 'B':
            PathExist();
            break;

            case 'C':
            ShortestPath();
            break;

            default:
            break;

        }
    scanf(" %c", &ch);
    }
}
