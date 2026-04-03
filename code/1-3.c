#include <stdio.h>

void print_reverse(int *arr, int size){
    int *reverse_arr = arr + (size -1);

    for(int i=0;i<size;i++){
        printf("%d",*reverse_arr);
        if(i != size-1) printf(" ");
        reverse_arr--;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};

    print_reverse(nums,5);
    printf("\n");

    return 0;
}