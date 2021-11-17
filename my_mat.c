#include <stdio.h>
#include <math.h>

int min (int n1, int n2){
    return (n2<n1) ? n2:n1;
}

int getMat(int arr [10][10]) {
    //printf("Enter the Matrix values:\n");
    for (int i =0 ; i<10; i++) {
        for (int j =0; j<10; j++) {
            //printf("Enter the [%d,%d] place: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    return 0;
    
}

int PathExist (int a [10][10]) {
    int n = 0, m = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int k=0; k<10; k++){
        for(int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                if (a[i][j] != 0) {
                    a[i][j] = min(a[i][j], (a[i][k]+a[k][j]));
                } else {
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }
    //printf("%f\n", min(a[n][m],a[m][n]));
    if (a[n][m] > 0 || a[m][n] > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}

int ShortestPath (int a [10][10]) {
    int n = 0, m = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int k=0; k<10; k++){
        for(int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                if (a[i][j] != 0) {
                    a[i][j] = min(a[i][j], (a[i][k]+a[k][j]));
                } else {
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }
    //printf("%f\n", min(a[n][m],a[m][n]));
    if (a[n][m] != 0 && a[m][n] != 0) {
        printf("%d", min(a[n][m], a[m][n]));
    } else {
        if (a[n][m] == 0 && a[m][n] == 0) {
            printf("-1");
        } else {
            if (a[n][m] == 0) {
                printf("%d", a[m][n]);
            } else {
                printf("%d", a[n][m]);
            }
        }
    }
    return 0;
}
/*
int main() {            //0 1 2 3 4 5 6 7 8 9
    float arr[10][10] = {{0,4,5,6,7,3,2,1,1,2},//0
                         {4,0,6,7,8,9,9,0,3,4},//1
                         {6,7,0,4,2,1,5,6,7,8},//2
                         {7,5,3,0,1,3,5,6,7,9},//3
                         {6,5,3,2,0,8,9,1,2,5},//4
                         {7,5,4,3,2,0,7,8,9,4},//5
                         {2,3,1,4,5,7,0,2,1,4},//6
                         {4,2,3,4,6,7,0,0,5,2},//7
                         {7,2,3,4,5,1,7,6,0,1},//8
                         {1,3,2,4,5,6,7,8,9,0}};//9
    //getMat(arr);
    //PathExist(arr);
    ShortestPath(arr);
    return 0;
}
*/