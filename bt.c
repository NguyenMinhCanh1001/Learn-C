#include<stdio.h>

int arr[5]={1,2,3,4,5};
int* ptr= arr;
int main(){
    printf("%d%d%d%d%d%d",*ptr,++*ptr++,(*ptr)++,*ptr++,*++ptr, ++*ptr);}
// bản chất của hàm printf là thực thi từ phải sang trái
