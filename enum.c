#include <stdio.h>

typedef enum {
    SUCCESS =0,
    NOT_FOUND,
    ERROR 
} RETURN_STATUS;

 RETURN_STATUS checkIC(){
    RETURN_STATUS check = 0;
    if (check ==0){

    }else if (check ==1){
        check = NOT_FOUND;
    }else{
        check = ERROR;
    }    
 };
int main(){
    checkIC();
}