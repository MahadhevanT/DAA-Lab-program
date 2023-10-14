#include <stdio.h>
#include <stdlib.h>
struct Job {
    char id;
    int deadline;
    int profit;
};
int compareJobs(const void *a, const void *b) {
    return ((struct Job *)b)->profit - ((struct Job *)a)->profit;
}
int findMaxDeadline(struct Job jobs[], int n) {
    int maxDeadline = -1,i=0;
    for (i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline) {
            maxDeadline = jobs[i].deadline;
        }}
    return maxDeadline;
}
void jobSequencing(struct Job jobs[], int n) {
    qsort(jobs, n, sizeof(struct Job), compareJobs);
    int maxDeadline = findMaxDeadline(jobs, n), i=0, j=0;
    char schedule[maxDeadline];
    for (i = 0; i < maxDeadline; i++) {
        schedule[i] = '\0';
    }
    int totalProfit = 0;
    for (i = 0; i < n; i++) {
        for (j = jobs[i].deadline - 1; j >= 0; j--) {
            if (schedule[j] == '\0') {
                schedule[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
    }
}
    printf("Scheduled Jobs: ");
    for (i = 0; i < maxDeadline; i++) {
        if (schedule[i] != '\0') {
            printf("%c ", schedule[i]);
        }
}
    printf("\nTotal Profit: %d\n", totalProfit);}

int main() {
    int n, i=0;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);
    struct Job jobs[n];
    for (i = 0; i < n; i++) {
        printf("Enter details for Job %d (ID Deadline Profit): ", i + 1);
        scanf(" %c %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }
    printf("Job Sequencing using Greedy Algorithm:\n");
    jobSequencing(jobs, n);
    return 0;
}
