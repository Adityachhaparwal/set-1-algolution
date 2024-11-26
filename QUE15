//8. Write a program to count frequency of each number in an array
#include<stdio.h>
int main(){
    int array1[5];
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d",  &array1[i]);
    }
    int frequency[5] = {0};
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(array1[i] == array1[j]){
                frequency[i]++;
            }
        }
    }
    for (int i = 0; i < 5; i++){
        int flag = 0;
        for (int j = 0; j < i; j++){
            if(array1[i] == array1[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("Number %d appears %d times\n", array1[i], frequency[i]);
        }
    }
}
