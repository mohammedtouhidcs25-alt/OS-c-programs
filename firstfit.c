#include <stdio.h>

int main() {
    int b[10], p[10], i, j, nb, np;

    printf("Blocks: ");
    scanf("%d", &nb);

    printf("Processes: ");
    scanf("%d", &np);

    printf("Block sizes:\n");
    for(i=0;i<nb;i++)
        scanf("%d", &b[i]);

    printf("Process sizes:\n");
    for(i=0;i<np;i++)
        scanf("%d", &p[i]);

    for(i=0;i<np;i++) {
        for(j=0;j<nb;j++) {
            if(b[j] >= p[i]) {
                printf("Process %d -> Block %d\n", i+1, j+1);
                b[j] -= p[i];
                break;
            }
        }

        if(j == nb)
            printf("Process %d -> Not Allocated\n", i+1);
    }
}
