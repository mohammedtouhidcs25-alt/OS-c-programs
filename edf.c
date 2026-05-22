#include<stdio.h>

int main() {
    int d[3] = {7,3,5}; // deadlines
    int i, j, temp;

    // Smaller deadline = higher priority
    for(i=0;i<3;i++) {
        for(j=i+1;j<3;j++) {
            if(d[i] > d[j]) {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }
        }
    }

    printf("Execution Order:\n");
    for(i=0;i<3;i++)
        printf("Task with Deadline %d\n",d[i]);

    return 0;
}
