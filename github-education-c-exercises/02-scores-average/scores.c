#include <stdio.h>

const int N = 3;

float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // kullanıcıdan skorları al
    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    // ortalamayı yazdır
    printf("Average: %.2f\n", average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float) sum / length;
}