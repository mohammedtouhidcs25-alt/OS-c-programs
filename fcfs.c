#include <stdio.h>

int main()
// Add this before calculating CT
for(i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
        if(at[j] > at[j+1]) {
            // Swap AT
            int temp = at[j]; at[j] = at[j+1]; at[j+1] = temp;
            // Swap BT
            temp = bt[j]; bt[j] = bt[j+1]; bt[j+1] = temp;
            // You'd also need a 'pid' array to keep track of process numbers
        }
    }
}

{
    int n, i;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], ct[n], tat[n], wt[n], rt[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter Arrival Time and Burst Time for Process %d: ", i+1);
        scanf("%d %d", &at[i], &bt[i]);
    }

    // First process
    ct[0] = at[0] + bt[0];

    for(i = 1; i < n; i++)
    {
        if(ct[i-1] < at[i])
            ct[i] = at[i] + bt[i];
        else
            ct[i] = ct[i-1] + bt[i];
    }

    for(i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        rt[i] = wt[i];   // In FCFS RT = WT
    }

    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\tRT\n");

    for(i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               i+1, at[i], bt[i], ct[i], tat[i], wt[i], rt[i]);
    }

    return 0;
}
