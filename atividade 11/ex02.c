#include <stdio.h>

void imprimirMesEQuantidadeDias(int numero) {
    // Verificar se o número está no intervalo válido
    if (numero < 1 || numero > 12) {
        printf("Número inválido. Digite um número entre 1 e 12.\n");
        return;
    }

    // Array com os nomes dos meses
    char *nomesMeses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                          "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    // Array com a quantidade de dias em cada mês
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Obtendo o índice do array
    int indice = numero - 1;

    // Imprimindo o nome do mês e a quantidade de dias
    printf("Mês: %s\n", nomesMeses[indice]);
    printf("Quantidade de dias: %d\n", diasPorMes[indice]);
}

int main() {
    int numeroMes;

    // Solicitando ao usuário que insira um número de mês
    printf("Digite um número de 1 a 12 para representar o mês: ");
    scanf("%d", &numeroMes);

    // Chamando a função e exibindo o resultado
    imprimirMesEQuantidadeDias(numeroMes);

    return 0;
}
