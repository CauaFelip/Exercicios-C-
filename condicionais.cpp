#include <iostream>

using namespace std;

int main (){

    size_t idade; //INT SEM NEGATIVO

    cout << "Digite uma idade: ";
    cin >> idade;

    //Inicio da estrutura de decisão

    if (idade < 18){
        cout << "Voce e menor de idade." endl;
    }
    else {
        cout << "Voce e maior de idade." endl;
    }

    return 0;
}