#include <stdio.h>

struct Process
{
    int processID;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

void sortProcessesByBurstTime(struct Process proc[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (proc[j].burstTime > proc[j + 1].burstTime)
            {
                struct Process temp = proc[j];
                proc[j] = proc[j + 1];
                proc[j + 1] = temp;
            }
        }
    }
}

void findWaitingTime(struct Process proc[], int n)
{
    proc[0].waitingTime = 0;
    for (int i = 1; i < n; i++)
    {
        proc[i].waitingTime = proc[i - 1].waitingTime + proc[i - 1].burstTime;
    }
}

void findTurnaroundTime(struct Process proc[], int n)
{
    for (int i = 0; i < n; i++)
    {
        proc[i].turnaroundTime = proc[i].burstTime + proc[i].waitingTime;
    }
}

void findAverageTime(struct Process proc[], int n)
{
    int totalWaitingTime = 0, totalTurnaroundTime = 0;

    // Sort processes by burst time
    sortProcessesByBurstTime(proc, n);

    findWaitingTime(proc, n);
    findTurnaroundTime(proc, n);

    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++)
    {
        totalWaitingTime += proc[i].waitingTime;
        totalTurnaroundTime += proc[i].turnaroundTime;
        printf("%d\t%d\t\t%d\t\t%d\n", proc[i].processID, proc[i].burstTime, proc[i].waitingTime, proc[i].turnaroundTime);
    }

    printf("\nAverage Waiting Time: %.2f", (float)totalWaitingTime / n);
    printf("\nAverage Turnaround Time: %.2f\n", (float)totalTurnaroundTime / n);
}

int main()
{
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process proc[n];

    for (int i = 0; i < n; i++)
    {
        proc[i].processID = i + 1;
        printf("Enter burst time for process %d: ", proc[i].processID);
        scanf("%d", &proc[i].burstTime);
    }

    findAverageTime(proc, n);

    return 0;
}
