#include<stdio.h>

void printArray( int* A , int n){
    for(int i =0 ; i< n; i++ ){
     printf("%d  ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A , int n){
    for(int i=0; i< n-1 ; i++){
        int IndexofMax = i;
        for(int j= i+1 ; j<n ; j++){
            if(A[j] > A[IndexofMax]){
                IndexofMax = j;
            }
        }
       int temp = A[i];
       A[i] = A[IndexofMax];
       A[IndexofMax] = temp;
    }
}

int main(){
    int A[] = { 12 , 54 , 65 , 7 , 23, 9};
    int  n = sizeof(A)/ sizeof(A[0]);
    printArray( A, n);
    selectionSort( A , n);
    printArray( A , n);

    return 0;
}
