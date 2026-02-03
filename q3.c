#include <stdio.h>

int main() {
    int n, k, i;
    int comparisons = 0;
    int foundIndex = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1)
        printf("Found at index %d\n", foundIndex);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", comparisons);

    return 0;
}
