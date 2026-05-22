#include<stdio.h>

int main() {
    int n, bt[10], rem[10], wt[10]={0}, tat[10];
    int tq, i, done, time=0;

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("BT of P%d: ",i+1);
        scanf("%d",&bt[i]);
        rem[i]=bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d",&tq);

    do {
        done=1;
        for(i=0;i<n;i++) {
            if(rem[i] > 0) {
                done=0;

                if(rem[i] > tq) {
                    time += tq;
                    rem[i] -= tq;
                } else {
                    time += rem[i];
                    wt[i] = time - bt[i];
                    rem[i] = 0;
                }
            }
        }
    } while(!done);

    printf("\nP\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++) {
        tat[i]=bt[i]+wt[i];
        printf("P%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }

    return 0;
}
