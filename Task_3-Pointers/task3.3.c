#include <stdio.h>
#define N 10

int main(){
    int arr[N];
    int * ptr = arr;
    for (int i = 0; i < N; i++){
        arr[i]= i + 1;
        
    }
 
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i)); // Используем арифметику указателей для доступа к элементам
    }
    
    return 0;

}
