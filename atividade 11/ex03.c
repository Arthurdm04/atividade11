#include <stdio.h>

// Função para converter temperatura de Fahrenheit para Celsius
float converterFahrenheitParaCelsius(float temperaturaFahrenheit) {
    float temperaturaCelsius = (temperaturaFahrenheit - 32.0) * (5.0 / 9.0);
    return temperaturaCelsius;
}

int main() {
    // Exemplo de uso da função
    float temperaturaFahrenheit, temperaturaCelsius;

    // Obtendo a temperatura em Fahrenheit do usuário
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    // Chamando a função para converter e exibindo o resultado
    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);
    printf("A temperatura em Celsius é: %.2f\n", temperaturaCelsius);

    return 0;
}
