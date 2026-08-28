#include <iostream>

using namespace std;

int main () {
    // declaração das variaveis
    int idade;
    bool estudante;
    float salario;

    cout << " ### IDENTIFICADOR DE PESSOAS ###" << endl;

    cout << "\nDigite sua idade: ";
    cin >> idade;

    cout << "Voce e um estudante (1 para sim, 0 para nao): ";
    cin >> estudante;

    cout << "Informe o salario (0 caso nao tenha): ";
    cin >> salario;

    if (idade < 18){
        cout << "Voce e menor de idade." << endl;
        if (estudante){
            cout << "Voce e um estudante menor de idade." << endl;
            if (salario >= 3000){
                cout << "Menor de idade - estudante - alto salario";
            } else {
                cout << "Menor de idade - estudante - baixo ou sem salario";
            }
        } else {
            cout << "Voce nao esta estudando e e menor de idade." << endl;
            if (salario >= 3000){
                cout << "Nao estuda - menor de idade - alto salario";
            } else {
                cout << "Nao estuda - menor de idade - baixo ou sem salario";
            }
        }
    } else {
        cout << "Voce e maior de idade." << endl;
        if (estudante) {
            cout << "Você e um estudante maior de idade." << endl; 
            if (salario >= 3000){
                cout << "Maior de idade - estudante - alto salario";
            } else {
                cout << "Maior de idade - estudante - baixo ou sem salario";
            }
        } else {
            cout << "Voce e maior de idade e nao estuda!" << endl;
            if (salario >= 3000){
                cout << "Maior de idade - nao estuda - alto salario";
            } else {
                cout << "Maior de idade - nao estuda - baixo ou sem salario";
            }
        }
    }

    return 0;
}