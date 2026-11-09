#include <stdio.h>



// Hàm tự động đổi giá trị và in kết quả luôn
void swap(void) {
    int a = 10;
    int b = 20;
    printf("Truoc khi doi: a=%d, b=%d \n", a, b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("Sau khi doi: a=%d, b=%d", a, b);
}
void vd1(void) {
    int x = 5; // 0x0000 0101
    printf("x= %d",x);
    x |= (1<<1); //0x0000 0111 set bit
    printf("x= %d",x);
    x &= ~(1<<1); //0x0000 0101 clear bit
    printf("x= %d",x);
    x ^= (1<<0); //0x0000 0100toggle bit
    printf ("x= %d", x);
    if ((x & (1<<2)) != 1){
        printf  ("true");

    } else {
        printf ("false");
    }
}
int main(void) {
   
    //swap();
    vd1();

    return 0;
}