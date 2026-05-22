#include<stdio.h>

int mutex=1, full=0, empty=3, x=0;

void producer() {
    mutex--;
    full++;
    empty--;
    x++;
    printf("Produced item %d\n",x);
    mutex++;
}

void consumer() {
    mutex--;
    full--;
    empty++;
    printf("Consumed item %d\n",x);
    x--;
    mutex++;
}

int main() {
    producer();
    producer();
    consumer();

    return 0;
}
