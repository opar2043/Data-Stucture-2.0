#include <stdio.h>
int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], rt[n], ct[n], tat[n];

    printf("Enter Arrival Time:\n");
    for(int i = 0; i < n; i++) scanf("%d", &at[i]);

    printf("Enter Burst Time:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        rt[i] = bt[i]; // remaining time
    }

    int time = 0, completed = 0;

    while(completed < n) {
        int min = 9999, index = -1;

        for(int i = 0; i < n; i++) {
            if(at[i] <= time && rt[i] > 0) {
                if(rt[i] < min) {
                    min = rt[i];
                    index = i;
                }
            }
        }

        if(index != -1) {
            rt[index]--;

            if(rt[index] == 0) {
                completed++;
                ct[index] = time + 1;
                tat[index] = ct[index] - at[index];
            }
        }

        time++;
    }

    printf("\nProcess\tAT\tBT\tCT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], ct[i], tat[i]);
    }

    return 0;
}
