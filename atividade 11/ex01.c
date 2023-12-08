#include <stdio.h>

// Função para encontrar o maior entre dois números
int encontrarMaior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    // Exemplo de uso da função
    int numero1, numero2;
    
    // Obtendo os números do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Chamando a função e exibindo o resultado
    int resultado = encontrarMaior(numero1, numero2);
    printf("O maior número é: %d\n", resultado);

    return 0;
}
