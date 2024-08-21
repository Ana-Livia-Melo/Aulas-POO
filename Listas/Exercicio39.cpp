// 39. Escreva um programa que receba o valor de três ângulos de um triângulo.
// Em seguida o programa deve informar se o triângulo é acutângulo, retângulo ou
// obtusângulo. Considere as seguintes informações:
// a. Triângulo retângulo: possui um ângulo reto (igual a 90°);
// b. Triângulo obtusângulo: possui um ângulo obtuso (maior que 90°);
// c. Triângulo acutângulo: possui três ângulos agudos (menores que 90°);


#include <iostream>  

using namespace std;  

// Função principal
int main() {  

    // Declaração das variáveis para armazenar os ângulos
    int angulo1, angulo2, angulo3;  

    // Recebe os valores dos ângulos
    cout << "Digite o valor do primeiro angulo: ";  
    cin >> angulo1; 
    cout << "Digite o valor do segundo angulo: "; 
    cin >> angulo2;  
    cout << "Digite o valor do terceiro angulo: ";  
    cin >> angulo3;  

    // Verifica se os ângulos formam um triângulo válido
    if (angulo1 + angulo2 + angulo3 != 180) {  
        cout << "Os angulos fornecidos nao formam um triangulo valido." << endl;  
    } 
    // Determina o tipo do triângulo
    else {  
        
        // Verifica se algum ângulo é igual a 90
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {  
            cout << "O triangulo e retangulo." << endl;  
        }
        // Verifica se algum ângulo é maior que 90
        else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {  
            cout << "O triangulo e obtusangulo." << endl;  
        } 
        // Caso contrário, todos os ângulos são menores que 90
        else {  
            cout << "O triangulo e acutangulo." << endl;  
        }
    }

    return 0;  
}
