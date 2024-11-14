#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // �O���O�_���洫

        // �C�@����������Ƴv�����
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // �洫����
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // �аO���洫�o��
            }
        }

        // �p�G�S���o�ͥ洫�A���e�����Ƨ�
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