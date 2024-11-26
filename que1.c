//1. Write a program to count total number of negative numbers in an array
#include<stdio.h>
int main(){
    int array1[5]={2,3,-5,6,-2};
    int array_size = sizeof(array1)/4;

    int count=0;
    for (int i = 0; i < array_size; i++)
    {
        if (array1[i]<0)
        {
            count+=1;
        }
    }
    printf("Total No of Negative Numbers: %d", count);    
}
