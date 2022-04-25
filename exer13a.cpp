#include <iostream>

using namespace std;

void preencher_array(int *valor, int *i, int *array){
    for(*i = 0; *i < 3; (*i)++){
        cout << "De um valor para a posicao " << *i << " do vetor: \t";
        cin >> *valor;
        array[*i] = *valor;
    }
}

void soma_valor(int *array, int *i, int *somavalor){
    for(*i=0; *i<3; (*i)++){
        *somavalor += array[*i];
    }
} 

int main(){

    int array[3];
    int valor, i, somavalor;

    preencher_array(&valor, &i, array);

    soma_valor(&i, array, &somavalor);
    cout << "A soma dos valores resulta em: "<< somavalor << endl;

    return 0;
}