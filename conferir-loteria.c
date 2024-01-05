#include <stdio.h>

#define MAX_NUMEROS 6
#define MAX_JOGOS 100

void conferirResultados(int jogoGanhador[], int meusJogos[][MAX_NUMEROS], int numJogos) {
    for (int i = 0; i < numJogos; i++) {
        int acertos = 0;
        
        for (int j = 0; j < MAX_NUMEROS; j++) {
            for (int k = 0; k < MAX_NUMEROS; k++) {
                if (meusJogos[i][j] == jogoGanhador[k]) {
                    acertos++;
                    break;
                }
            }
        }
        
        printf("Jogo %d: ", i + 1);
        for (int j = 0; j < MAX_NUMEROS; j++) {
            printf("%d ", meusJogos[i][j]);
        }
        printf("- Acertos: %d\n", acertos);
    }
}

int main() {
    int jogoGanhador[MAX_NUMEROS];
    int meusJogos[MAX_JOGOS][MAX_NUMEROS];
    int numJogos;

    // Pedindo os números do jogo ganhador
    printf("Digite os numeros do jogo ganhador (separados por espaco): ");
    for (int i = 0; i < MAX_NUMEROS; i++) {
        scanf("%d", &jogoGanhador[i]);
    }

    // Pedindo os números dos seus jogos
    printf("Quantos jogos voce quer conferir? (maximo %d): ", MAX_JOGOS);
    scanf("%d", &numJogos);

    printf("Digite os numeros de cada jogo (separados por espaco):\n");
    for (int i = 0; i < numJogos; i++) {
        printf("Jogo %d: ", i + 1);
        for (int j = 0; j < MAX_NUMEROS; j++) {
            scanf("%d", &meusJogos[i][j]);
        }
    }

    // Chamando a função para conferir os resultados
    conferirResultados(jogoGanhador, meusJogos, numJogos);

    return 0;
}

