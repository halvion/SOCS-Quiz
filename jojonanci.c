#include<stdio.h>

int jojonanci(int count, int numA, int numB){

    if(count == 0){
        return numA;
    }
    if(count == 1){
        return numB;
    }

    return jojonanci(count-1, numA, numB) - jojonanci(count-2, numA, numB);
}

int main(){
    int testCase;
    scanf("%d", &testCase);
    for(int i=0; i<testCase; i++){
        int nCase, varX, varY;
        scanf("%d %d %d", &nCase, &varX, &varY);
        printf("Case #%d: %d\n", i+1, jojonanci(nCase, varX, varY));
    }
    return 0;
}