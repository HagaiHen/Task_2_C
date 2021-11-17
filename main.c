#include <stdio.h>
#include "my_mat.h"

int main () {
    char ch;
    int arr [10][10];
    scanf("%c", &ch);
    while (ch == 'A' || ch == 'B' || ch == 'C') {
    
        switch (ch) {
            case 'A':
            getMat(arr);
            break;

            case 'B':
            PathExist(arr);
            break;

            case 'C':
            ShortestPath(arr);
            break;

            default:
            break;

        }
    scanf("%c", &ch);
    }
}