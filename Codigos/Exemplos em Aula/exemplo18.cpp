// Exemplo 18: exemplo de register

// Programa que demonstra a utilização de register

#include <iostream>

using namespace std

// Função principal
int main() {

    // Declara a variável utilizando register
    register int i;

    cout << "\n";

    // Loop para demonstrar a utilização de register
    for (i = 0; i < 5; i++) {
        cout << "Valor do contador: " << i << "\n";
    }

    cout << "\n";

    // Fim do programa
    return 0;
}