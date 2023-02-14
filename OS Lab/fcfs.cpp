// Given n processes with their burst times, the task is to find average waiting time and average turn around time using FCFS scheduling algorithm.

#include <bits/stdc++.h>
using namespace std;

// Function to find waiting time for all processes
void WaitingTime(int process[], int n, int bt[], int wt[])
{
    // waiting time for first process is 0
    wt[0] = 0;

    // calculation of waiting time
    for (int i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

// Function to calculate turn around time
void TurnAroundTime(int process[], int n, int bt[], int wt[], int tat[])
{
    // Turnaround time= bt[i]+wt[i];
    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}

// Function to calculate average time
void AvgTime(int process[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    // Function to find waiting time
    WaitingTime(process, n, bt, wt);

    // Function to find turn around time for all process'
    TurnAroundTime(process, n, bt, wt, tat);

    // Display processes along with all details
    cout << "Processes  "
         << " Burst time  "
         << " Waiting time  "
         << " Turn around time\n";

    // Calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << i + 1 << "\t\t" << bt[i] << "\t    "
             << wt[i] << "\t\t  " << tat[i] << endl;
    }
    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n << endl;
}

int main()
{
    // process id's
    int processes[] = {1, 2, 3, 4};
    int n = sizeof processes / sizeof processes[0];

    // Burst time of all processes
    int burst_time[] = {10, 5, 8, 7};

    AvgTime(processes, n, burst_time);
    return 0;
}