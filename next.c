//simple test file :))

#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(void){
    if(load("backup",O_RDONLY)!=0)
        wait();
    exit();
    return 0;
}

