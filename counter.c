//simple test file :))

#include "types.h"
#include "user.h"
//#include "stat.h"
//#include "defs.h"

int main(void)
{
    int i ;
    for(i = 0 ; i < 20 ; i++){
        printf(2,"the value is %d\n",i);
        if(i == 10){
            exit();
        }
    }
    first();
    exit();
}

