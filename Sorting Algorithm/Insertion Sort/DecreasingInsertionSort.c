#include<stdio.h>

void printArray( int* A , int n){
    for(int i =0 ; i< n; i++ ){
     printf("%d  ", A[i]);
    }
    printf("\n");
}

void Insertion( int*A , int n){
    int key , j;
    for(int i =1 ; i<= n ; i++){
        key = A[i];
        j = i-1;
        while( j>=0 && A[j] < key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = { 12 , 54 , 65 , 7 , 23, 9};
    int  n = sizeof(A)/ sizeof(A[0]);
    printArray( A, n);
    Insertion( A , n);
    printArray( A , n);

    return 0;
}
