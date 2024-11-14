#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // 記錄是否有交換

        // 每一輪比較的次數逐漸減少
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交換元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // 標記有交換發生
            }
        }

        // 如果沒有發生交換，提前結束排序
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
