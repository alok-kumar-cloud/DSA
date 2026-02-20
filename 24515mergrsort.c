#include <stdio.h>


void merge(int a[], int b[], int ans[], int n, int m) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            ans[k++] = a[i++];
        } else {
            ans[k++] = b[j++];
        }
    }
    while (i < n) {
        ans[k++] = a[i++];
    }
    while (j < m) {
        ans[k++] = b[j++];
    }
}
void mergesort(int ans[], int n) {
    if (n < 2)
        return;

    int mid = n / 2;

    int a[mid];
    int b[n - mid];

    
    for (int i = 0; i < mid; i++) {
        a[i] = ans[i];
    }
    for (int i = mid; i < n; i++) {
        b[i - mid] = ans[i];
    }
    mergesort(a, mid);
    mergesort(b, n - mid);
    merge(a, b, ans, mid, n - mid);
}

int main() {
    int ans[] = {4, 7, 9, 3, 6};
    int n = sizeof(ans) / sizeof(ans[0]);

    mergesort(ans, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}
