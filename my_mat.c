#include <stdio.h>
#include <math.h>

static int arr [10][10];

int getMat() {
    for (int i =0 ; i<10; i++) {
        for (int j =0; j<10; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }

    return 0;
}

int PathExist () {
    int n = 0, m = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int k=0; k<10; k++){
        for(int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                
                if (arr[i][k] + arr[k][j] < arr[i][j] && arr[i][k] != 0 && arr[k][j] != 0 && arr[i][j] != 0) {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
                if (i == j) {
                    arr[i][j] = 0;
                }
            }
        }
    }

    if (arr[n][m] > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}

int ShortestPath () {
    int n = 0, m = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int k=0; k<10; k++){
        for(int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                if (arr[i][k] + arr[k][j] < arr[i][j] && arr[i][k] != 0 && arr[k][j] != 0 && arr[i][j] != 0) {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
                if (i == j) {
                    arr[i][j] = 0;
                }
            }
        }
    }
    if (arr[n][m] == 0) {
            printf("-1\n");
        }
        else {
            printf("%d\n", arr[n][m]);
        }
    return 0;
}
