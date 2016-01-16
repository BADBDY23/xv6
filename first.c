//simple test file :))

#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(void)
{
    int i  ;
    for(i = 0 ; i < 30 ; i++){
        printf(1,"the number is  = %d\n",i);
        if(i == 20){
            save("backup", O_CREATE | O_RDWR);
        }
    }
    return 0;
}

