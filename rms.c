#include<stdio.h>

int main() {
    int p[3] = {2,4,6}; // periods
    int i, j, temp;

    // Smaller period = higher priority
    for(i=0;i<3;i++) {
        for(j=i+1;j<3;j++) {
            if(p[i] > p[j]) {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    printf("Execution Order:\n");
    for(i=0;i<3;i++)
        printf("Task with Period %d\n",p[i]);

    return 0;
}
