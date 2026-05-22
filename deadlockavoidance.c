#include<stdio.h>

int main() {
    int alloc, max, avail, need;

    printf("Enter Allocation, Max, Available: ");
    scanf("%d%d%d",&alloc,&max,&avail);

    need = max - alloc;

    if(need <= avail)
        printf("Safe State\n");
    else
        printf("Unsafe State\n");

    return 0;
}
