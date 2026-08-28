#include <iostream>
#include <string>

using namespace std;

int main(){
    int inteiro;
    float decimal;
    char caractere;
    bool logico;
    string texto;

    cout << "\nDigite um numero inteiro";
    cin >> inteiro;
    cout << "Voce digitou: " <<inteiro;
    
    cout << "\nDigite um numero decimal:";
    cin >> decimal;
    cout << "Voce digitou: " <<decimal;

    cout << "\nDigite um caractere:";
    cin >> caractere;
    cout << "Voce digitou: " << caractere;

    cout << "\nDigite 1 para verdadeiro ou 0 para falso: ";
    cin >> logico;
    cout << "Voce digitou: " <<logico;

    cout << "\nDigite uma string: ";
    cin.ignore(); //limpa o buffer antes de armazenar a string
    getline(cin, texto);
    cout << "Voce digitou: " <<texto;
    
    return 0;
}