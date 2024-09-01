// 78. Escreva um programa que utilize uma função para exibir
// o seguinte padrão:
// * * * * *
// * * * *
// * * * 
// * *
// *

//--------------------------------------------------------------------

#include <iostream>  

using namespace std;  

// Função que imprime o padrão
void imprimePadrao() {
    cout << "* * * * *" << endl; 
    cout << "* * * *" << endl;    
    cout << "* * *" << endl;      
    cout << "* *" << endl;       
    cout << "*" << endl;          
}

int main() {
    // Chama a função para imprimir o padrão
    imprimePadrao();  
    
    // Fim do programa
    return 0;       
}
