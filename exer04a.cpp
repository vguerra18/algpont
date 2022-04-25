#include <iostream>

using namespace std;

void calc_massa(){
    int a, b, ma, mb, u;
    u = ((a*b)/(ma+mb));
}

int main(){

    int a, b, u, ma, mb, *ptr;
    u = ((a*b)/(ma+mb));
    
    cout << "Digite um valor para ma:"<<endl;
    cin >> ma;

    cout << "Digite um valor para mb:"<<endl;
    cin >> mb;

    void calc_massa();

    ptr = &u;
    cout << *ptr;

    return 0;   
}