/*#include <iostream> //fluxo de input e output de dados (biblioteca)

using namespace std;//nome de espaco padrao

int main(){

    return 0;//retorna 0 para o compilador saber que ocorreu tudo certo


#include <iostream> //fluxo de input e output de dados (biblioteca)

using namespace std;//nome de espaco padrao

int main(){
    cout << "Hello Word";

    return 0;//retorna 0 para o compilador saber que ocorreu tudo certo
}*/

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2;

    cout << "Digite o primeiro numero: ";//c out sinal e para esquerda <<
    cin >> numero1;//para saida no terminal >>

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "\nVoce digitou: " << numero1 << " e " << numero2;

    return 0;
}
