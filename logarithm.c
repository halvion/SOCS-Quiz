#include<stdio.h>
#include<math.h>

int logarithma(float varX, float varY){

    float result;
    // result adalah hasil dari nilai terbesar yang lebih kecil atau sama dengan dari pembagian log(a)/log(b) yang menhasilkan N dari b^N  <= a
    float a = log10(varY)/log10(varX);
    result = ceil(floor(a));
    return result;
}


int main(){

    int testCase;
    scanf("%d", &testCase);
    for(int i=0; i<testCase ; i++){
        float variableX, variableY;
        scanf("%f %f", &variableX, &variableY);
        int hasil = logarithma(variableX, variableY);
        printf("Case #%d: %d\n",i+1, hasil);
    }

    return 0;
}