#include <stdio.h>

int main()
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
