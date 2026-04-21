#include <stdio.h>
int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], ct[n], tat[n];

    printf("Enter Arrival Time:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &at[i]);

    printf("Enter Burst Time:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &bt[i]);

    ct[0] = at[0] + bt[0];

    for(int i = 1; i < n; i++) {
        if(ct[i-1] < at[i])
            ct[i] = at[i] + bt[i];
        else
            ct[i] = ct[i-1] + bt[i];
    }

    for(int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
    }

    printf("\nProcess\tAT\tBT\tCT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], ct[i], tat[i]);
    }

    return 0;
}
