#include <iostream>

using namespace std;

int main (){

    int escolha;
    float temperatura;

    cout << "### TEMPERATURA ###" <<endl;
    cout << "Escolha a conversao desejada: "<<endl;
    cout << "1. Celsius para Fahrenheit" <<endl;
    cout << "2. Fahrenheit para Celsius" <<endl;
    cin >> escolha;

    switch(escolha){
        case 1:
            cout << "Digite a temperatura em celsius: ";
            cin >> temperatura;
            cout << "Temperatura em Fahrenheit: " <<(temperatura * 9/5 + 32) <<endl;
            break;
        case 2:
            cout << "Digite a temperatura em fahrenheit: ";
            cin >> temperatura;
            cout << "Temperatura em celsius: " <<((temperatura - 32) * 5/9) <<endl;
            break;
        default:
            cout << "Opcao invalida!";
            break;
    }

    return 0;
}
