// 4. Write a program that takes 7 integers as input from the user then Reverse the order of numbers in the array, then print the numbers.
#include<stdio.h>
int main(){
    int array1[7];
    printf("Enter 7 numbers: \n");
    for (int i = 0; i < 7; i++){
        scanf("%d",  &array1[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < 7; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");
    int start = 0, end = 6;
    while(start < end){
        int temp = array1[start];
        array1[start] = array1[end];
        array1[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < 7; i++){
        printf("%d ", array1[i]);
    }
}
