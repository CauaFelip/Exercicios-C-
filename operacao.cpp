#include <iostream>

using namespace std;

int main(){

    char operacao;
    float num1, num2;

    cout << "### POWER CALCULATOR ###" <<endl;
    cout << "Digite a operacao que deseja realizar" <<endl;
    cin >> operacao;

    cout << "Primeiro numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;

    switch(operacao) {
        case '+':
            cout << "Resultado: " <<(num1 + num2) <<endl;
            break;
        case '-':
            cout << "Resultado: " <<(num1 - num2) <<endl;
            break;
        case '*':
            cout << "Resultado: " <<(num1 * num2) <<endl;
            break;
        case '/':
            if (num2 == 0){
                cout << "Divisao impossivel!!!";
            }else{
                cout << "Resultado: " <<(num1 / num2) <<endl;
            }
            break;
        default:
            cout << "Operacao invalida!!!!!";
            break;
    }
    return 0;
}
