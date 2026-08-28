#include <iostream>

using namespace std;

int main(){
    float temp;

    cout << "Digite a temperatura atual: ";
    cin >> temp;

    if (temp < -50 or temp > 60){
        cout << "ERRO!!";
    }else if(temp < 0){
        cout << "Muito Frio!";
    }else if(temp >= 0 && temp <= 15){
        cout << "Frio!";
    }else if(temp >= 16 && temp <= 25){
        cout << "Agradavel!";
    }else if(temp > 25){
        cout << "Quente!";
    }


    
}