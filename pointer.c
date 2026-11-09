#include <stdio.h>
#include <stdint.h>
#define CNt 2;
// 40byte
// struct nó sẽ lấy size của biến lớn nhất trong struct để làm size của struct (ví dụ: int [4byte, char 1byte] => struct sẽ lấy size của int là 4byte để làm size của struct(8byte))
// 1byte + 4byte + 1byte = 6byte => struct sẽ lấy size của biến lớn nhất trong struct là 4byte để làm size của struct => struct sẽ có size là 12byte
// 1byte +  1byte(block của nó ban đầu là 4byte đủ để quản lý 2 thằng đầu) +4byte  = 6byte => struct sẽ lấy size của biến lớn nhất trong struct là 4byte để làm size của struct => struct sẽ có size là 8byte
typedef struct {
    uint8_t a;
   
    uint8_t c;
     int b;
}mystruct;
mystruct s;
mystruct* ptr;
uint8_t* ptr8;
uint32_t* ptr32;
uint8_t arr[5]={1,2,3,4,5};

void view(uint8_t x){
    printf("value %d \n", x);
}
void view2(uint32_t x){
    printf("value %d \n", x*2);
}
typedef void (*mfuction)(uint8_t);
void (*mfuction1[2])()={view, view2};
int main(){
    for (int i =0; i<2; i++){
        mfuction1[i](2);
    }
    mfuction m;
    m = view;
    m(2);

    m = view2;
    m(2);
    uint64_t address;
    printf ("add %p", address = view);
    ((mfuction)address)(2);
    //
    ptr8 = &arr[0];
    ptr32 = (uint32_t*)&arr[0];
    ptr8 ++;// increment by 1 byte nên tăng 1 từ địa chỉ có giá trị là 1 lên 2 nhảy 1 byte  
    ptr32 ++;// increment by 4 byte nên tăng 4 từ địa chỉ có giá trị là 1 lên 5 nhảy 4 byte
    printf("ptr8 %d \n", *ptr8);
    printf("ptr32 %d \n", *ptr32);
    printf("size %d \n", sizeof(s));
    printf("size %d", sizeof(ptr));
    return 0;
}
