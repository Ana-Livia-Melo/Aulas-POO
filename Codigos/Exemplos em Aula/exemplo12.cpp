//exemplo 12 

//Exemplo passagem por valor

#include <iostream>

using namespace std;

void incrementarPorValor(int num) {
    num++;
    cout << "Dentro da função: " << num << endl;
}

int main() {
    int a = 5;
    incrementarPorValor(a);
    cout << "Fora da função: " << a << endl;
    return 0;
}