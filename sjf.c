#include <stdio.h>
int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], ct[n], tat[n], completed[n];
    for(int i = 0; i < n; i++) completed[i] = 0;

    printf("Enter Arrival Time:\n");
    for(int i = 0; i < n; i++) scanf("%d", &at[i]);

    printf("Enter Burst Time:\n");
    for(int i = 0; i < n; i++) scanf("%d", &bt[i]);

    int time = 0, count = 0;

    while(count < n) {
        int min = 9999, index = -1;

        for(int i = 0; i < n; i++) {
            if(at[i] <= time && !completed[i]) {
                if(bt[i] < min) {
                    min = bt[i];
                    index = i;
                }
            }
        }

        if(index != -1) {
            time += bt[index];
            ct[index] = time;
            tat[index] = ct[index] - at[index];
            completed[index] = 1;
            count++;
        } else {
            time++; // idle time
        }
    }

    printf("\nProcess\tAT\tBT\tCT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], ct[i], tat[i]);
    }

    return 0;
}
