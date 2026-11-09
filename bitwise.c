//  and bit (& ) => clearn bit về 0 (cái gì and với 0 thì luôn bằng 0)
//  or bit (| ) => set bit về 1 ( cái gì or với 1 thì luôn bằng  1)
// not bit (~ ) => đảo bit
//xor bit (^)  [0^0=0, 1^1=0, 0^1=1, 1^0=1] => đảo bit
#include <stdio.h>
#include <stdint.h>

uint8_t data = 0;


int main (){
    data |= (1<<3);
    //data = 0 => 000 0000
    //(1<<3) => 000 1000
    // 000 0000 | 000 1000 => 000 1000
    printf("data = %d\n", data);
    data &= ~(1<<3);
    // data = 8 => 000 1000
    //(1<<3) => 000 1000
    // ~(1<<3) => 111 0111
    // 000 1000 & 111 0111 => 000 0000
    printf("data = %d\n", data);
    return 0;
}