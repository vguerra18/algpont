#include <iostream>

using namespace std;

void achar_tamanho(char texto[], int *i)
{
    cout << "Introduza um texto" << endl;
    gets(texto);

    cout << "O tamanho do texto: "<< texto << " e: ";
    *i = 0;
    while(*(texto++) != '\0'){
        (*i)++;
    }
    cout << *i;
}

int main(){
    char texto[30];
    int i;
    achar_tamanho(texto, &i);
    
    return 0;
}