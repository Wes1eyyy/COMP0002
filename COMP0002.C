#include <stdio.h>

// 函数来找到数组中出现次数最多的数字
int findMostFrequent(int arr[], int size) {
    int frequency[100] = {0};
    
    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
    }

    int maxCount = 0;
    int mostFrequentNumber = -1;
    for (int i = 0; i < 100; ++i) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            mostFrequentNumber = i;
        }
    }

    return mostFrequentNumber;
}

int pointerFindMostFrequent(int *arr, int size){
    int frequency[100] = {0};
    
    for(int *ptr = arr;ptr < arr + size;++ptr){
        *(frequency + *ptr) += 1;
    }

    int maxCount = 0;
    int mostFrequentNumber = -1;
    for(int i = 0;i<100;i++){
        if(*(frequency+i)>maxCount){
            maxCount = *(frequency+i);
            mostFrequentNumber = i;
        }
    }
    return mostFrequentNumber;
}

int main() {
    // 测试数组
    int arr[] = {1, 3, 2, 1, 4, 3, 1, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 调用函数并打印出现次数最多的数字
    int mostFrequent = findMostFrequent(arr, size);
    printf("Most frequent number: %d\n", mostFrequent);

    return 0;
}
