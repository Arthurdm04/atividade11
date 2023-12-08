#include <stdio.h>

// Definindo o valor de π
#define PI 3.141592

// Função para calcular o volume de uma esfera
float calcularVolumeEsfera(float raio) {
    float volume = (4.0 / 3.0) * PI * raio * raio * raio;
    return volume;
}

int main() {
    // Exemplo de uso da função
    float raio, volumeEsfera;

    // Obtendo o raio do usuário
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    // Chamando a função para calcular o volume e exibindo o resultado
    volumeEsfera = calcularVolumeEsfera(raio);
    printf("O volume da esfera é: %.2f\n", volumeEsfera);

    return 0;
}
