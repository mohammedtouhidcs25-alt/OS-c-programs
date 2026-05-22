#include<stdio.h>

int main() {
    int request, avail;

    printf("Enter Request and Available: ");
    scanf("%d%d",&request,&avail);

    if(request > avail)
        printf("Deadlock Detected\n");
    else
        printf("No Deadlock\n");

    return 0;
}
