//Exemplo 08: cálculo de fatorial utilizando o WHILE

//Programa que calcula o fatorial de um valor fornecido pelo usuário

#include <iostream>

using namespace std;

//Função principal
int main() {

    //Declaração das variáveis
    int i, valor;
    long int fatorial = 1;


    // Entrada dos dados
    cout << "\n";
    cout << "Cálculo do fatorial utilizando o laço WHILE\n\n";
    cout << "Informe o valor desejado: "; cin >> valor;

    //inicializa o contador
    i = 1;

    //Laço para calcular o fatorial
    while (i <= valor) {

        //Calcula o fatorial
        fatorial *= i;

        // Incrementa o contador
        i++;
    }

    //Exibe o resultador
    cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    //Fim do programa
    return 0;
}