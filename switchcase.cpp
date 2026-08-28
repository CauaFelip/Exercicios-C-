#include <iostream>

using namespace std;

int main(){
    int opcao;

    cout << "### MENU DE OPCOES###" <<endl;
    cout <<"1. Exibir uma mensagem" <<endl;
    cout << "2. Calcular a soma" <<endl;
    cout << "3. Sair" <<endl;
    cout << "Escolha uma opcao 1-3" <<endl;
    cin >> opcao;

    switch (opcao){
        case 1:
            cout << "Voce escolheu exibir uma mensagem!" <<endl;
            break;
        case 2:
            int num1, num2;

            cout << "\nInsira o primeiro numero: ";
            cin >> num1;
            cout << "\nInsira o segundo numero: ";
            cin >> num2;
            cout << "A soma = " <<(num1 + num2) <<endl;
            break;
        case 3:
            cout << "Saindo......... tchau!";
            break;
        default:
            cout << "Opcao invalida!!!" <<endl;
            break;
    }
    return 0;
}