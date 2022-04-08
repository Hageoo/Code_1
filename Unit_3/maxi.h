int max(int arr[], int lenght){
    int indexMax = 0;
    for (int i = 0; i < lenght; i++){

        if (arr[i] > arr[indexMax]){
            indexMax = i;
        };
    };
    return indexMax;
};