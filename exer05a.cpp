#include <iostream>

using namespace std;

void ingredientes(int *num_pessoas, int *maca, int *manteiga, int *acucar, int *mig_pao, int *creme_de_leite){

    *maca *= *num_pessoas;

    *manteiga *= *num_pessoas;

    *acucar *= *num_pessoas;

    *mig_pao *= *num_pessoas;

    *creme_de_leite *= *num_pessoas;
}


int main(){

    int maca = 675;
    int manteiga = 75;
    int acucar = 150;
    int mig_pao = 100;
    int creme_de_leite = 150;
    int num_pessoas;
    
    cout<< "Informe o numero de pessoas que irao comer na casa de Bohr: "<< endl;
    cin >> num_pessoas;

   ingredientes(&num_pessoas, &maca, &manteiga, &acucar, &mig_pao, &creme_de_leite);

    cout << "Serao necessarios: ";
    cout << maca << "g de maca" << endl;
    cout << manteiga << "g de manteiga" << endl;
    cout << acucar << "g de acucar" << endl;
    cout << mig_pao << "g de migalhas de pao" << endl;
    cout << creme_de_leite << "ml de creme de leite";

    return 0;
}