// Exemplo 17: Exemplo de escopo estático

// Programa que demonstra a utilização de static

#include <iostream>

using namespace std;

// Prtótipos de função

void incremento();

// Função principal

int main() {

    cout << "\n";

    // Loop para demonstrar a utilização de static
    for (int i = 0; i < 5; i++) {
        cout << "i: " << i << " -- valor: ";
        incremento();
    }

    cout << "\n";

    // Fim do programa
    return 0;

}

// Definição das funções

// Função que retorna o incremento de um valor
void incremento() {

    // Definição da variável estática
    static int valor = 0;

    // Exibe seu valor
    cout << valor << "\n";

    // Incrementa o valor da variável
    valor += 5;

}
