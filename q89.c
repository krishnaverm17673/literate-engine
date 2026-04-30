#include <stdio.h>

int canAllocate(int arr[], int n, int m, int maxPages) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages)
            return 0;

        if (pages + arr[i] > maxPages) {
            students++;
            pages = arr[i];
        } else {
            pages += arr[i];
        }
    }

    return students <= m;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[100];
    int sum = 0, max = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    int low = max, high = sum;
    int ans = sum;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canAllocate(arr, n, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}