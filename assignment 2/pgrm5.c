#include <stdio.h>

int main()
{
    int anuApples = 10, anuMangoes = 20;
    int ammuApple = 5, ammuMangoes = 10;
    int totalFruitFirst = anuApples + anuMangoes;
    printf("Anu initially has %d apples and %d mangoes, totally %d fruits.\n", anuApples, anuMangoes, totalFruitFirst);
    anuApples = ammuApple;
    anuMangoes = ammuMangoes;
    int totalFruitsRemaining = anuApples + anuMangoes;
    printf("After sharing with ammu, anu has %d apples and %d mangoes left, totally %d fruits.\n", anuApples, anuMangoes, totalFruitsRemaining);

    return 0;
}