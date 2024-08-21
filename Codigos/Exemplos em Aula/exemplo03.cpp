// Exemplo 03: desvio condicional simples (aula 13/08)

//Programa que permite a leitura de duas notas de um aluno e calcula a média
//Se essa média for maior ou igual ao valor 6, exibe uma mensagem informando
//que o aluno foi aprovado, juntamente com o valor da média que foi obtida
//Considere a apresentação dos valores utilizando duas casas decimais


#include <iostream>
#include <iomanip>

using namespace std;

//Função principal
int main() {

    //Declaração das variáveis
    float n1, n2, media{0};

    //Entrada dos dados
    cout << "\n";
    cout << "Desvio condicional simples\n\n";
    cout << "* Informe as duas notas do aluno: ";

    cin >> n1 >> n2;

    //Calcula a média do aluno
    media = (n1 + n2) / 2;

    //Formatação do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //Verifica se ele foi aprovado
    if (media >= 6) {
        cout << "* O aluno foi aprovado com média final " << media << "\n";
    }

    cout << "\n";

    //Fim do programa
    return 0;
}
