// 9. Write a program to count total number of duplicate numbers in an array
#include<stdio.h>
int main(){
    int array1[5];
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d",  &array1[i]);
    }
    int count = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(i != j && array1[i] == array1[j]){
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate numbers: %d", count/2);
}
