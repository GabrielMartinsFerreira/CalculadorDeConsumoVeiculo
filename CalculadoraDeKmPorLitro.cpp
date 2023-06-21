#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void salvarDados(float distancia, float combustivel) {
    ofstream arquivo("dados.txt", ios::app); // Abrir o arquivo em modo de anexo (append)

    if (arquivo.is_open()) {
        arquivo << "Distancia percorrida: " << distancia << " km" << endl;
        arquivo << "Combustivel abastecido: " << combustivel << " litros" << endl;
        arquivo << "Consumo de gasolina: " << distancia / combustivel << " km/l" << endl;
        arquivo << "------------------------" << endl;
        arquivo.close();
        cout << "Dados salvos com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
    }
}

int main() {
    float distancia, combustivel;
    int opcao;

    cout << "Calculadora de consumo de gasolina" << endl;

    do {
        cout << "Digite a distância percorrida (em km): ";
        cin >> distancia;

        cout << "Digite a quantidade de combustível abastecida (em litros): ";
        cin >> combustivel;

        salvarDados(distancia, combustivel);

        cout << "Consumo de gasolina: " << distancia / combustivel << " km/l" << endl;

        cout << "Digite 1 para fechar o programa ou qualquer outro número para continuar: ";
        cin >> opcao;
    } while (opcao != 1);

    return 0;
}
