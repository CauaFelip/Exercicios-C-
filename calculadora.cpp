#include <iostream>

using namespace std;

int main (){

    float number1, number2;
    float soma, divisao, subtracao, multiplicacao;

    cout << "*** CALCULADORA ***";
    cout << "\n";

    cout << "Digite o primeiro numero: ";
    cin >> number1;
    cout << "Digite o segundo numero: ";
    cin >> number2;

    soma = number1 + number2;
    subtracao = number1 - number2;
    multiplicacao = number1 * number2;
    divisao = number1 / number2;

    cout << "\nSOMA: " <<soma;
    cout << "\nSUBTRACAO: " <<subtracao;
    cout << "\nMULTIPLICACAO: " <<multiplicacao;
    cout << "\nDIVISAO: " <<divisao;
    
    return 0;
}