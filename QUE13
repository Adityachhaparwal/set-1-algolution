//6. Write a program to search a number (taken as input from user) in an array then print the index of the first occurrence of the input number in the array If the input number is not present in the array then print -1
#include<stdio.h>
int main(){
    int array1[5];
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d",  &array1[i]);
    }
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    int index = -1;
    for (int i = 0; i < 5; i++){
        if(array1[i] == target){
            index = i;
            break;
        }
    }
    if(index != -1){
        printf("Number found at index %d", index);
    }
    else{
        printf("-1");
    }
}
