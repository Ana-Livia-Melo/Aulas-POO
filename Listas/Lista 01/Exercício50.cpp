// 50. Escrever um programa para verificar a nota do aluno em uma
// prova com 10 questões. O programa deve perguntar ao aluno a resposta
// de cada questão a ao final comparar com o gabarito da prova, calculando
// o total de caertos e a nota do aluno (atribuir 1 ponto por resposta certa).
// Após a entrada dos dados de um aluno, o programa deve verificar se mais alguém
// pretende utilizar o sistema. Após todos os alunos terem respondido o questionário,
// o programa deve apresentar o seguinte resultado:
// a. Maior e menor acerto;
// b. Total de alunos que utilizaram o sistema;
// c. A média das notas da turma;

//Considere o seguinte gabarito:
// Gabarito da prova:
// 01 - A
// 02 - B
// 03 - C
// 04 - D
// 05 - E
// 06 - E
// 07 - D
// 08 - C
// 09 - B
// 10 - A

//--------------------------------------------------------------------------------------

#include <iostream>  

using namespace std;  

// Função principal 
int main() {
    char gabarito[10] = {'A', 'B', 'C', 'D', 'E', 'E', 'D', 'C', 'B', 'A'};  
    int maiorAcerto = 0;  
    int menorAcerto = 10;  
    int totalAlunos = 0;  
    int somaNotas = 0;  

    char continuar;  

    do {

        // Armazena o número de acertos
        int acertos = 0;  

        cout << "Digite as respostas do aluno (use letras maiúsculas):" << endl;
        for (int i = 0; i < 10; i++) {  
            char resposta;
            cout << "Questão " << i + 1 << ": ";
            cin >> resposta;  

            // Compara a resposta com o gabarito
            if (resposta == gabarito[i]) { 
                acertos++;  
            }
        }

        // Atualiza as estatísticas
        if (acertos > maiorAcerto) {
            maiorAcerto = acertos;  
        }
        if (acertos < menorAcerto) {
            menorAcerto = acertos;  
        }

        somaNotas += acertos;  
        totalAlunos++;  

        // Pergunta se há mais alunos para usar o sistema
        cout << "Mais alguém vai utilizar o sistema? (S/N): ";
        cin >> continuar;  // Lê a resposta do usuário

    } while (continuar == 'S' || continuar == 's'); 

    // Exibe os resultados finais
    cout << "\nResultado final:" << endl;
    cout << "Maior acerto: " << maiorAcerto << endl;  
    cout << "Menor acerto: " << menorAcerto << endl;  
    cout << "Total de alunos que utilizaram o sistema: " << totalAlunos << endl; 
    cout << "Média das notas da turma: " << static_cast<double>(somaNotas) / totalAlunos << endl;  

    // Fim do programa
    return 0;  
}
