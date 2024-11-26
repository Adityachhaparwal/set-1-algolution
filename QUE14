//7. Write a program to print all unique numbers in an array
#include<stdio.h>
int main(){
    int array1[5];
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d",  &array1[i]);
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
            printf("%d ", array1[i]);
        }
    }
}
