int mostTimes(int arr[], int targetV, int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == targetV){
            count++;
        }
    }
    return count;
}

int mostTimes2(int* arr, int targetV, int size){
    int count = 0;
    for(int i = 0; i < size;i++){
        if(*(arr+i) == targetV){
            count++;
        }
    }
    return count;
}