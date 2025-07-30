#operating_system 
#include <stdio.h>
struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};
void sort_by_arrival_time(struct Process p[], int n) {
    struct Process temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(p[j].arrival_time > p[j+1].arrival_time) {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    struct Process p[n];
    printf("Enter process ID, Arrival Time and Burst Time for each process:\n");
    for(int i = 0; i < n; i++) {
        printf("Process %d: ", i+1);
        scanf("%d %d %d", &p[i].pid, &p[i].arrival_time, &p[i].burst_time);
    }

    sort_by_arrival_time(p, n);

    int time = 0;

    for(int i = 0; i < n; i++) {
        if (time < p[i].arrival_time)
            time = p[i].arrival_time;

        p[i].completion_time = time + p[i].burst_time;
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;

        time = p[i].completion_time;
    }

    printf("\n----------------------------------------------------------------------------------\n");
    printf("| PID | Arrival Time | Burst Time | Completion Time | Turnaround Time | Waiting Time |\n");
    printf("----------------------------------------------------------------------------------\n");

    for(int i = 0; i < n; i++) {
        printf("| %3d |      %3d      |     %3d     |       %3d       |       %3d       |      %3d     |\n",
            p[i].pid, p[i].arrival_time, p[i].burst_time,
            p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
    }
    printf("----------------------------------------------------------------------------------\n");
    printf("\nGantt Chart:\n|");
    for(int i = 0; i < n; i++) {
        printf("  P%d  |", p[i].pid);
    }
    printf("\n0");
    for(int i = 0; i < n; i++) {
        printf("     %2d", p[i].completion_time);
    }
    printf("\n");

    return 0;
}

