//3. Write a program to merge two sorted arrays to a third array.
#include<stdio.h>
int main(){
    int array1[5], array2[5], array3[10];
    printf("Enter 5 numbers for first array: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d",  &array1[i]);
    }
    printf("Enter 5 numbers for second array: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d",  &array2[i]);
    }
    int i = 0, j = 0, k = 0;
    while(i < 5 && j < 5){
        if(array1[i] < array2[j]){
            array3[k++] = array1[i++];
        }
        else{
            array3[k++] = array2[j++];
        }
    }
    while(i < 5){
        array3[k++] = array1[i++];
    }
    while(j < 5){
        array3[k++] = array2[j++];
    }
    printf("Merged array: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", array3[i]);
    }
}
