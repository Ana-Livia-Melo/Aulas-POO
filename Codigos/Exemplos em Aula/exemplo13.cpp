//exemplo 13

//Exemplo passagem por referência

#include <iostream>

using namespace std;

void incrementarPorReferencia(int num) {
    num++;
    cout << "Dentro da função: " << num << endl;
}

int main() {
    int a = 5;
    incrementarPorReferencia(a);
    cout << "Fora da função: " << a << endl;
    return 0;
}