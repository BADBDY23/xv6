#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"
#include "types.h"
//#include "user.h"
#include "fcntl.h"
#include "stat.h"

int
sys_fork(void)
{
    return fork();
}

int
sys_exit(void)
{
    exit();
    return 0;  // not reached
}

int
sys_wait(void)
{
    return wait();
}

int
sys_kill(void)
{
    int pid;

    if(argint(0, &pid) < 0)
        return -1;
    return kill(pid);
}

int
sys_getpid(void)
{
    return proc->pid;
}

int
sys_sbrk(void)
{
    int addr;
    int n;

    if(argint(0, &n) < 0)
        return -1;
    addr = proc->sz;
    if(growproc(n) < 0)
        return -1;
    return addr;
}

int
sys_sleep(void)
{
    int n;
    uint ticks0;

    if(argint(0, &n) < 0)
        return -1;
    acquire(&tickslock);
    ticks0 = ticks;
    while(ticks - ticks0 < n){
        if(proc->killed){
            release(&tickslock);
            return -1;
        }
        sleep(&ticks, &tickslock);
    }
    release(&tickslock);
    return 0;
}

// return how many clock tick interrupts have occurred
// since start.
int
sys_uptime(void)
{
    uint xticks;
    acquire(&tickslock);
    xticks = ticks;
    release(&tickslock);
    return xticks;
}



struct test {
    char name;
    int number;
};

int
sys_save(void){
//    int fd;
//    struct test t;
//    t.name = 's';
//    t.number = 1;

//    fd = open("backup", O_CREATE | O_RDWR);
//    if(fd >= 0) {
//        printf(1, "ok: create backup file succeed\n");
//    } else {
//        printf(1, "error: create backup file failed\n");
//        exit();
//    }

//    int size = sizeof(t);
//    if(write(fd, &t, size) != size){
//        printf(1, "error: write to backup file failed\n");
//        exit();
//    }
//    printf(1, "write ok\n");
//    close(fd);

//    //int i ;
//    /*for(i = 0 ; i < 20 ; i++){
//        printf(2,"the value is %d\n",i);
//        if(i == 10){
//            exit();
//        }
//    }*/
return 0;
}

int
sys_load(void)
{
//    int fd;
//    struct test t;

//    fd = open("backup", O_RDONLY);
//    if(fd >= 0) {
//        printf(1, "ok: read backup file succeed\n");
//    } else {
//        printf(1, "error: read backup file failed\n");
//        exit();
//    }

//    int size = sizeof(t);
//    if(read(fd, &t, size) != size){
//        printf(1, "error: read from backup file failed\n");
//        exit();
//    }
//    printf(1, "file contents name %c and number %d", t.name, t.number);
//    printf(1, "read ok\n");
////    close(fd);
    return 0;

}
