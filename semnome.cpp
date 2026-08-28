#include <iostream>

using namespace std;

int main (){

    int numero;

    cout << "Digite um numero:";
    cin >> numero;
    
    //condição de verificação para um intervalo de 10 a 50

    if (numero >= 10 && numero <= 50){
        cout << "O numero esta dentro do intervalo!";
    }else {
        cout << "O numero esta fora do intervalo!";
    }

    return 0;
}