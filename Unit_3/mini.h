int min(int arr[], int lenght){
    int indexMin = 0;
    for (int i = 0; i < lenght; i++){

        if (arr[i] < arr[indexMin]){
            indexMin = i;
        };
    };
    return indexMin;
};