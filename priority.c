#include <stdio.h>

struct Process
{
    int pid;             // Process ID
    int burst_time;      // Burst time (execution time)
    int priority;        // Priority (lower value means higher priority)
    int waiting_time;    // Waiting time
    int turnaround_time; // Turnaround time
};

void calculate_waiting_time(struct Process proc[], int n)
{
    proc[0].waiting_time = 0; // First process has zero waiting time

    // Calculate waiting time for each process
    for (int i = 1; i < n; i++)
    {
        proc[i].waiting_time = proc[i - 1].waiting_time + proc[i - 1].burst_time;
    }
}

void calculate_turnaround_time(struct Process proc[], int n)
{
    // Turnaround time is waiting time + burst time
    for (int i = 0; i < n; i++)
    {
        proc[i].turnaround_time = proc[i].waiting_time + proc[i].burst_time;
    }
}

// Function to sort processes based on their priority (ascending order)
void sort_by_priority(struct Process proc[], int n)
{
    struct Process temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (proc[i].priority > proc[j].priority)
            {
                // Swap processes if one has higher priority number (lower priority)
                temp = proc[i];
                proc[i] = proc[j];
                proc[j] = temp;
            }
        }
    }
}

void priority_scheduling(struct Process proc[], int n)
{
    // Sort processes based on priority
    sort_by_priority(proc, n);

    // Calculate waiting time and turnaround time for each process
    calculate_waiting_time(proc, n);
    calculate_turnaround_time(proc, n);

    // Print process details
    printf("\nProcess\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].priority, proc[i].burst_time, proc[i].waiting_time, proc[i].turnaround_time);
    }

    // Calculate average waiting and turnaround times
    float total_waiting_time = 0, total_turnaround_time = 0;
    for (int i = 0; i < n; i++)
    {
        total_waiting_time += proc[i].waiting_time;
        total_turnaround_time += proc[i].turnaround_time;
    }

    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);
}

int main()
{
    int n;

    // Input number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process proc[n];

    // Input burst time and priority for each process
    for (int i = 0; i < n; i++)
    {
        proc[i].pid = i + 1;
        printf("Enter burst time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].burst_time);
        printf("Enter priority for process %d (lower number means higher priority): ", proc[i].pid);
        scanf("%d", &proc[i].priority);
    }

    // Perform priority scheduling
    priority_scheduling(proc, n);

    return 0;
}