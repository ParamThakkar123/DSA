#include <bits/stdc++.h> 

long long merge(long long *arr, int start, int end){
    int mid = start + (end - start) / 2;
    long long inv = 0;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;

    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }

        else{
            arr[mainArrayIndex++] = second[index2++];
            inv += len1 - index1;
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
    return inv;
}

long long mergeSort(long long *arr, int start, int end){
    long long inv = 0;

    if(start >= end){
        return inv;
    }

    int mid = start + (end - start) / 2;
    inv += mergeSort(arr, start, mid);
    inv += mergeSort(arr, mid+1, end);
    inv += merge(arr, start, end);
    return inv;
}

long long getInversions(long long *arr, int n){
    return mergeSort(arr, 0, n-1);
}
