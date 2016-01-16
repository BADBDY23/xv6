//simple test file :))

#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(void){
    load("backup",O_RDONLY);
    return 0;
}

