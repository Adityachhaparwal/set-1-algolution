//5. Write a program that takes 5 integers as input from the user and finds out if the order of numbers in array is palindrome.
#include<stdio.h>
int main(){
    int array1[5];
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d",  &array1[i]);
    }
    int flag = 0;
    for (int i = 0; i < 5/2; i++){
        if(array1[i] != array1[4-i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Array is not a palindrome");
    }
    else{
        printf("Array is a palindrome");
    }
}
