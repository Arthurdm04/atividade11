#include <stdio.h>

// Função para calcular o IMC (Índice de Massa Corporal)
float calcularIMC(float peso, float altura) {
    float imc = peso / (altura * altura);
    return imc;
}

int main() {
    // Exemplo de uso da função
    float peso, altura, imc;

    // Obtendo o peso e a altura do usuário
    printf("Digite o peso (em quilos): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Chamando a função para calcular o IMC e exibindo o resultado
    imc = calcularIMC(peso, altura);
    printf("O IMC é: %.2f\n", imc);

    return 0;
}
