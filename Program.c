#include <stdio.h>
#include <stdlib.h>
#define N1 5
#define N2 6
#define N3 4 

void introduction (float array[], int N);
void analysist (float array[], int N, float n);

int main (){
    system ("chcp 65001");
    float array1[N1], array2[N2], array3[N3];

    introduction(array1, N1);
    introduction(array2, N2);
    introduction(array3, N3);

    float n;
    puts("Введіть число ( від якого будуть враховуватися менші числа ):");
    scanf("%f", &n);

    puts("Аналіз та обрахунок першого масиву:");
    analysist(array1, N1, n);
    puts("Аналіз та обрахунок другого масиву:");
    analysist(array2, N2, n);
    puts("Аналіз та обрахунок третього масиву:");
    analysist(array3, N3, n);

    return 0;
}

void introduction (float array[], int N){
    int i;
    printf("Введіть значення для масивів ( Розміри: 5, 6, 4 ): \n");
    for (i=0; i<N; i+=1){
        scanf("%f", &array[i]);
    }
}

void analysist (float array[], int N, float n){
int i;
float sum = 0.00;
int count = 0;
for(i=0; i<N; i+=1){
    if(array[i] < n){
        sum += array[i];
        count += 1;
    }
}
if(count > 0){
    printf("Сума: %.2f\n", sum);
    printf("Середнє значення: %.2f\n", sum / count);
}
else{
    puts("Виберіть інше число!");
}
}