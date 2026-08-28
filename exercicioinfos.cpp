/*
    Exercício: escreva um programa em C++ que armazene: 
    nome
    telefone
    data de nascimento
    endereço
    cidade
*/

/*PERGUNTAR PRO BAZO PORQUE QUE A PRIMEIRA LETRA NAO APARECE NAS ULTIMAS VARIAVEIS 
E COMO PODERIA TER ARMAZENADO O NUMERO DE TELEFONE */


#include <iostream> 
#include <string>

using namespace std;

int main(){
    string nome, nascimento, endereco, cidade;
    int telefone;

    cout << "\nDigite suas informacoes a seguir: ";
    cout << "\n";

    cout << "\n";
    cout << "\nDigite seu nome: ";
    cin >> nome;;
    cout << "Seu nome e: " <<nome;

    cout << "\n";
    cout << "\nDigite seu telefone: ";
    cin >> telefone;
    cout << "Seu telefone e: " <<telefone;

    cout << "\n";
    cout << "\nDigite sua data de nascimento: ";
    cin.ignore();
    getline(cin, nascimento);
    cout << "Sua data de nascimento e: " <<nascimento;

    cout << "\n";
    cout << "\nDigite seu endereco: ";
    cin.ignore();
    getline(cin, endereco);
    cout << "Seu endereco e: " <<endereco;

    cout << "\n";
    cout << "\nDigite sua cidade: ";
    cin.ignore();
    getline(cin, cidade);
    cout << "Sua cidade e: " <<cidade;

return 0;

}