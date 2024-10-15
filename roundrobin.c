#include <stdio.h>
#include <conio.h>

void main()
{
    // initlialize the variable name
    int i, NOP, sum = 0, count = 0, y, quant, wt = 0, tat = 0, at[10], bt[10], temp[10];
    float avg_wt, avg_tat;
    printf(" Total number of process in the system: ");
    scanf("%d", &NOP);
    y = NOP; // Assign the number of process to variable y

    // Use for loop to enter the details of the process like Arrival time and the Burst Time
    for (i = 0; i < NOP; i++)
    {
        printf("\n Enter the Arrival and Burst time of the Process[%d]\n", i + 1);
        printf(" Arrival time is: \t"); // Accept arrival time
        scanf("%d", &at[i]);
        printf(" \nBurst time is: \t"); // Accept the Burst time
        scanf("%d", &bt[i]);
        temp[i] = bt[i]; // store the burst time in temp array
    }
    // Accept the Time qunat
    printf("Enter the Time Quantum for the process: \t");
    scanf("%d", &quant);
    // Display the process No, burst time, Turn Around Time and the waiting time
    printf("\n Process No \t\t Burst Time \t\t\t TAT \t\t\t Waiting Time ");
    for (sum = 0, i = 0; y != 0;)
    {
        if (temp[i] <= quant && temp[i] > 0) // define the conditions
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }
        else if (temp[i] > 0)
        {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        if (temp[i] == 0 && count == 1)
        {
            y--; // decrement the process no.
            printf("\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d", i + 1, bt[i], sum - at[i], sum - at[i] - bt[i]);
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }
        if (i == NOP - 1)
        {
            i = 0;
        }
        else if (at[i + 1] <= sum)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    // represents the average waiting time and Turn Around time
    avg_wt = wt * 1.0 / NOP;
    avg_tat = tat * 1.0 / NOP;
    printf("\n Average Turn Around Time: \t%f", avg_wt);
    printf("\n Average Waiting Time: \t%f", avg_tat);
    getch();
}

// #include <stdio.h>

// struct Process
// {
//     int pid;             // Process ID
//     int burst_time;      // Burst time (execution time)
//     int remaining_time;  // Time left for execution
//     int waiting_time;    // Waiting time
//     int turnaround_time; // Turnaround time (completion time)
// };

// void round_robin(struct Process proc[], int n, int time_quantum)
// {
//     int time = 0;      // Current time
//     int completed = 0; // Count of completed processes

//     // Keep looping until all processes are done
//     while (completed < n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (proc[i].remaining_time > 0)
//             {
//                 if (proc[i].remaining_time > time_quantum)
//                 {
//                     // Execute process for the quantum time
//                     printf("Process %d executed for %d units.\n", proc[i].pid, time_quantum);
//                     time += time_quantum;
//                     proc[i].remaining_time -= time_quantum;
//                 }
//                 else
//                 {
//                     // Process finishes in this round
//                     printf("Process %d executed for %d units and finishes.\n", proc[i].pid, proc[i].remaining_time);
//                     time += proc[i].remaining_time;
//                     proc[i].remaining_time = 0;
//                     completed++;

//                     // Turnaround time = current time - arrival time (arrival is assumed to be 0 here)
//                     proc[i].turnaround_time = time;
//                     // Waiting time = turnaround time - burst time
//                     proc[i].waiting_time = proc[i].turnaround_time - proc[i].burst_time;
//                 }
//             }
//         }
//     }

//     // Calculate total waiting and turnaround times
//     int total_waiting_time = 0, total_turnaround_time = 0;
//     for (int i = 0; i < n; i++)
//     {
//         total_waiting_time += proc[i].waiting_time;
//         total_turnaround_time += proc[i].turnaround_time;
//     }

//     // Print results
//     printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].burst_time, proc[i].waiting_time, proc[i].turnaround_time);
//     }

//     printf("\nAverage Waiting Time: %.2f\n", (float)total_waiting_time / n);
//     printf("Average Turnaround Time: %.2f\n", (float)total_turnaround_time / n);
// }

// int main()
// {
//     int n, time_quantum;

//     // Input number of processes and time quantum
//     printf("Enter the number of processes: ");
//     scanf("%d", &n);

//     printf("Enter the time quantum: ");
//     scanf("%d", &time_quantum);

//     struct Process proc[n]; // Array of processes

//     // Input burst time for each process
//     for (int i = 0; i < n; i++)
//     {
//         proc[i].pid = i + 1;
//         printf("Enter burst time for process %d: ", proc[i].pid);
//         scanf("%d", &proc[i].burst_time);
//         proc[i].remaining_time = proc[i].burst_time; // Initialize remaining time to burst time
//     }

//     // Perform round robin scheduling
//     round_robin(proc, n, time_quantum);

//     return 0;
// }
