#include <iostream>

using namespace std;

int main (){

    int categoria, subcategoria;

    cout << "### PRODUTOS SAUDAVEIS ###" <<endl;
    cout << "1. Frutas" <<endl;
    cout << "2. Vegetais" <<endl;
    cout << "3. Graos" <<endl;
    cout << "Escolha uma opcao de (1-3): ";
    cin >> categoria;

    switch (categoria){
        case 1: // categoria frutas

            cout << "\nEscolha uma subcategoria (1 ou 2): ";
            cout << "1. Citricas" <<endl;
            cout << "2. Estacao" <<endl;
            cin >> subcategoria;

            switch (subcategoria){
                case 1:
                    cout << "Voce escolheu Frutas Cítricas!" <<endl;
                    break;
                case 2:
                    cout << "Voce escolheu a fruta da estação" <<endl;
                    break;
                default: 
                    cout << "Opção invalida fruta!" <<endl;
                    break;
            }
            break; //Break do case maior

        case 2: //categoria vegetal

            cout << "\nEscolha uma subcategoria (1 ou 2): " <<endl;
            cout << "1. Folhas" <<endl;
            cout << "2. Raizes" <<endl;
            cin >> subcategoria;

            switch (subcategoria){
                case 1:
                    cout << "Voce escolheu vegetais de folhas!" <<endl;
                    break;
                case 2:
                    cout << "Voce escolheu a vegetais com raizes" <<endl;
                    break;
                default: 
                    cout << "Opção invalida vegetal!" <<endl;
                    break;
            }
            break;
        case 3: //categoria graos

            cout << "\nEscolha uma subcategoria (1 ou 2): " << endl;
            cout << "1. Inteiros" <<endl;
            cout << "2. Processados" <<endl;
            cin >> subcategoria;
            
            switch (subcategoria){
                case 1:
                    cout << "Voce escolheu graos inteiros!" <<endl;
                    break;
                case 2:
                    cout << "Voce escolheu a graos processados!" <<endl;
                    break;
                default: 
                    cout << "Opção invalida vegetal!" <<endl;
                    break;

            
            }
            break;
        }
    return 0;
}