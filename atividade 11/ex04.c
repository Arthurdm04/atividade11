#include <stdio.h>

// Definindo o valor de π
#define PI 3.141592

// Função para calcular o volume de um cilindro circular
float calcularVolumeCilindro(float altura, float raio) {
    float volume = PI * raio * raio * altura;
    return volume;
}

int main() {
    // Exemplo de uso da função
    float altura, raio, volumeCilindro;

    // Obtendo a altura e o raio do usuário
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    // Chamando a função para calcular o volume e exibindo o resultado
    volumeCilindro = calcularVolumeCilindro(altura, raio);
    printf("O volume do cilindro é: %.2f\n", volumeCilindro);

    return 0;
}
