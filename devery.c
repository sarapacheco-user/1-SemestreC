#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_TIMES 10
#define NUM_JOGOS 45

const char *timeNomes[NUM_TIMES] = {
    "Angola", "Etiopia", "Mexico", "Brasil", "China",
    "India", "Portugal", "Servia", "Fiji", "Samoa"};

void geraPontos(int Pontos[NUM_TIMES][NUM_TIMES])
{
    srand(time(NULL));
    int i;
    int j;
    for ( i = 0; i < NUM_TIMES; i++)
    {
        for ( j = 0; j < NUM_TIMES; j++)
        {
            if (i == j)
            {
                Pontos[i][j] = -1; // Pula partidas entre mesmo time
            }
            else
            {
                Pontos[i][j] = rand() % 10; // Gera Pontuação Aleatória
            }
        }
    }
}

void mostraResult(int Pontos[NUM_TIMES][NUM_TIMES])
{
	int i;
	int j;
    printf("Resultados dos jogos:\n\n");

    // Imprime Equipe
    printf("%-12s|", "Equipe");
    for ( i = 0; i < NUM_TIMES; i++)
    {
        printf("%-12s|", timeNomes[i]);
    }
    printf("\n");

    // Imprime linha separadora
    for ( i = 0; i <= NUM_TIMES; i++)
    {
        printf("------------");
    }
    printf("\n");

    // Imprime a matriz com as pontuações
    for ( i = 0; i < NUM_TIMES; i++)
    {
        printf("%-12s|", timeNomes[i]);
        for ( j = 0; j < NUM_TIMES; j++)
        {
            if (Pontos[i][j] == -1)
            {
                printf(" %-11s|", "-");
            }
            else
            {
                printf(" %2d-%-9d|", Pontos[i][j], Pontos[j][i]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int Pontos[NUM_TIMES][NUM_TIMES];

    geraPontos(Pontos);
    mostraResult(Pontos);

    return 0;
}

