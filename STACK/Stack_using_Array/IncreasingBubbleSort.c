#include<stdio.h>

void printArray(int *A , int n){
 for(int i = 0 ; i<n ; i++){
    printf("%d ", A[i]);
 }
 printf("\n"); 
}

  void bubbleSort(int * A , int n){
   int temp =0;

   for(int i =0; i< n-1 ; i++){
   for(int j=0; j < n-1-i ; j++ ){
     if(A[j] > A[j+1]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
     }
   }
}
}

int main(){
    int A[] = {23  , 44 , 67  , 1 , 8 , 9};
    int n = sizeof(A)/sizeof(A[0]);

    printArray(A, n);
    bubbleSort(A, n);
    printArray(A , n);

    return 0;

}
