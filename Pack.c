#include <stdio.h>
#include <stdint.h>
#pragma pack(push, 1);// căn chỉ theo đúng kiểu dữ liệu  thay vì là 8
typedef struct {
    uint32_t data;
    uint8_t data1;
} Pack_Typedef;
Pack_Typedef  pack;

#pragma pack(pop);
typedef struct {
    uint32_t data;
    uint8_t data1;
} Pack_Typedef1;
Pack_Typedef1  pack1;
 int main(){
    printf("%d\n", sizeof(pack));
    printf("%d", sizeof(pack1));
 }
