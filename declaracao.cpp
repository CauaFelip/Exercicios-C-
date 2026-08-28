/*
EXEMPLO

Compara dois números e exibe o maior ou informa se são iguais

1. Declaração de Variáveis: duas variáveis do tipo int (inteiro) para armazenar os números
 que o usuário irá inserir.

2. Entrada de Dados: solicita ao usuário que insira dois números inteiros. cout: 
Exibe mensagens para o usuário no console. cin: Lê os valores inseridos pelo usuário
 e armazena nas variáveis numero1 e numero2.

3. Estrutura Condicional if-else: Compara os dois números e exibe o maior número ou informa
 se eles são iguais. if: Verifica se numero1 é maior que numero2. Se verdadeiro, exibe numero1 
 como o maior número. else if: Se a primeira condição não for verdadeira, verifica se numero2 é
  maior que numero1. Se verdadeiro, exibe numero2 como o maior número.
else: Se nenhuma das condições anteriores for verdadeira (o que significa que numero1 é igual a numero2)
, exibe a mensagem informando que os números são iguais. endl: Adiciona uma nova linha no final da saída,
 garantindo que a próxima saída comece em uma nova linha.

*/


#include <iostream>

using namespace std;

int main (){

    int numero1, numero2;

    cout << "Digite primeiro numero: " <<endl;
    cin >> numero1;
    cout << "Digite segundo numero: " <<endl;
    cin >> numero2;

    if (numero1 == numero2){
        cout << "Os dois numeros sao iguais: " <<endl;
    }
    else if (numero1 > numero2){
        cout << "O maior numero e: " <<numero1 <<endl;
    }
    else {
        cout << "O maior numero e: " <<numero2 <<endl;
    }

    return 0;
}