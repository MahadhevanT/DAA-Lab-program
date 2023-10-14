#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}
int main() {
    int n, k;
    printf("Enter no of contest and no of Important constant:\n");
    scanf("%d %d", &n, &k);
    int important_contests[n];
    int unimportant_contests[n];
    int important_count = 0;
    int unimportant_count = 0;
    int i=0;
    printf("Enter luck and important contest values:\n");
    for (i = 0; i < n; i++) {
        int luck, importance;
        scanf("%d %d", &luck, &importance);
        if (importance == 1) {
            important_contests[important_count++] = luck;
        } else {
            unimportant_contests[unimportant_count++] = luck;
        }}
    qsort(important_contests, important_count, sizeof(int), compare);
    int max_luck_balance = 0;
    for (i = 0; i < important_count; i++) {
        if (i < k) {
            max_luck_balance += important_contests[i];
        } else {
            max_luck_balance -= important_contests[i];
        }}
    for (i = 0; i < unimportant_count; i++) {
        max_luck_balance += unimportant_contests[i];
    }
    printf("Maximum luck balance:%d\n", max_luck_balance);
    return 0;
}
