#include <iostream>
#include <math.h>

using namespace std;

void calcularX(int *num);

int main(){

    int num;
    int num1;
    int num2;
    int num3;

    num1 = num;
    num2 = num;
    num3 = num;

    cout << "Digite um numero para x" <<endl;
    cin >> num;

    calcularX(&num);

    cout << "x-1 = %d", num1;
    cout << "x+1 = %d", num2;
    cout << "x² + x - 2 = %d", num3;


    return 0;
}

void calcularX(int *num){
    float num1 = *num - 1;
    float num2 = *num + 1;
    float num3 = pow(*num, 2) + *num - 2;
}
