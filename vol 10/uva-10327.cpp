#include <cstdio>
#include <cstdlib>
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int bubble_sort(int arr[], int n) {
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; i + j < n - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    int *arr = (int *)malloc(sizeof(int[1005]));
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++)
            scanf("%d", arr + i);
        printf("Minimum exchange operations : %d\n", bubble_sort(arr, n));
    }
    free(arr);

    return 0;
}
