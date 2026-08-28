#include <iostream>

using namespace std;

int main (){

    float idade;

    cout << "Qual sua idade: " <<endl;
    cin >> idade;

    if (idade <= 12){
        cout << "Voce e uma Crianca!";
    }else if (idade > 12 and idade <= 18) {
        cout << "Voce e um adolescente!";
    }else if (idade > 18 and idade < 59) {
        cout << "Voce e um adulto!";
    }else{
        cout << "Voce e um idoso!";
    }

    return 0;
}