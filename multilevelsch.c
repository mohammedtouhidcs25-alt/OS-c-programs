#include<stdio.h>

int main() {
    int n, bt[10], type[10];
    int i, wt = 0;

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("Enter BT and Type (1-System, 0-User) for P%d: ",i+1);
        scanf("%d%d",&bt[i],&type[i]);
    }

    printf("\nExecution Order:\n");

    // System processes first
    for(i=0;i<n;i++) {
        if(type[i]==1) {
            printf("P%d WT=%d TAT=%d\n",i+1,wt,wt+bt[i]);
            wt += bt[i];
        }
    }

    // User processes next
    for(i=0;i<n;i++) {
        if(type[i]==0) {
            printf("P%d WT=%d TAT=%d\n",i+1,wt,wt+bt[i]);
            wt += bt[i];
        }
    }

    return 0;
}
