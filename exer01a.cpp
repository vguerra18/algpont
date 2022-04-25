#include <iostream>

using namespace std;

struct numeros{
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    int numero6;
    int numero7;
    int numero8;
    int numero9;
    int numero10;
};

int main(){
    int ler_numero;
    int *somatoria;
    int soma;
    numeros num;

    cout << "Digite dez numeros e encontre sua soma:"<< endl;

    cout << "Digite o primeiro numero:"<< endl;
    cin >> num.numero1;

    cout << "Digite o segundo numero:"<< endl;
    cin >> num.numero2;

    cout << "Digite o terceiro numero:"<< endl;
    cin >> num.numero3;

    cout << "Digite o quarto numero:"<< endl;
    cin >> num.numero4;

    cout << "Digite o quinto numero:"<< endl;
    cin >> num.numero5;

    cout << "Digite o sexto numero:"<< endl;
    cin >> num.numero6;

    cout << "Digite o setimo numero:"<< endl;
    cin >> num.numero7;

    cout << "Digite o oitavo numero:"<< endl;
    cin >> num.numero8;

    cout << "Digite o nono numero:"<< endl;
    cin >> num.numero9;

    cout << "Digite o decimo numero:"<< endl;
    cin >> num.numero10;

    soma = num.numero1 + num.numero2 + num.numero3 + num.numero4 + num.numero5 + num.numero6 + num.numero7 + num.numero8 + num.numero9 + num.numero10;

    somatoria = &soma;

    cout << "A soma dos numeros resulta em : " << *somatoria <<endl;

  return 0;  
}