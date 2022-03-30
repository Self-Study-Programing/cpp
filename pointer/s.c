#include <stdio.h>

int main(void){
    int num = 10;
    int * ptr1=&num;
    int * ptr2=ptr1;

    (*ptr1)++;
    (*ptr2)++;
    printf("%d \n", num);
    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    return 0;
}