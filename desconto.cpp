/*
EXERCICIO

Com base no código "Cálculo de Valor de Venda com Desconto" acrescente o
 uso de um cupom de desconto, ou seja, além de todas as funcionalidades 
 presentes no código anterior, deverá ser solicitado em tela a inclusão 
 de um cupom de desconto, o usuario deverá digitar o percentual de desconto
  deste cupom (semelhante ao percentual de desconto). 
  Caso o usuario não possua um cupom desconto o valor inserido deverá ser 0.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //declaracao de variaveis
    float precoOriginal, valorDesconto, precoFinal, percentualDesconto, cupomD;
    
    cout << "*** CALCULADORA DE DESCONTO ***" <<endl;

    //entrada dos dados necessario para o calculo do desconto
    cout << "Digite o preco original do produto: " <<endl;
    cin >> precoOriginal;

    cout << "Digite o percentual de desconto (em %): ";
    cin >> percentualDesconto;

    //calculo do desconto
    valorDesconto = precoOriginal * (percentualDesconto / 100);
    precoFinal = precoOriginal - valorDesconto;

    cout << "**CUPOM DE DESCONTO**" <<endl;
    cout << "Digite o precentual do cupom de desconto (caso não tiver cupom digite 0): ";
    cin >> cupomD;

    precoFinal = precoFinal - (precoFinal * (cupomD / 100));

    //saida dos resultados com duas casas decimais
    cout << fixed << setprecision(2);

    cout << "Valor do desconto: " <<valorDesconto << "R$" <<endl;
    cout << "Preco final com desconto: " <<precoFinal << "R$" <<endl;
    return 0;
}