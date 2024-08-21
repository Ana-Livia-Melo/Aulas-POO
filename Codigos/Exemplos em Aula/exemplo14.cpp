//exemplo 14

//Exemplo passagem por ponteiro

#include <iostream>

using namespace std;

void incrementarPorPonteiro(int *num) {
    (*num)++;
    cout << "Dentro da função: " << *num << endl;
}

int main() {
    int a = 5;
    incrementarPorPonteiro(&a);
    cout << "Fora da função: " << a << endl;
    return 0;
}