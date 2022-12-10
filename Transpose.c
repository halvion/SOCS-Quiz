#include<stdio.h>

int main(){

    int mSize, matrix[110][110];
    scanf("%d", &mSize);
    for(int row=0; row<mSize ; row++){
        for(int column=0; column<mSize ; column++){
            scanf("%d", &matrix[row][column]);
        }
    }
    for(int row=0; row<mSize ; row++){
        for(int column=0; column<mSize ; column++){
            printf("%d", matrix[column][row]);
            if(column<mSize-1){
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}