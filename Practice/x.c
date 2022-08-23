#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    pid_t pid;
    pid = fork();//p2
    if(pid>0){//p1
        pid = fork();
        if(pid==0){//p3
        printf("p3 %d p1%d\n", getpid(), getppid());}
    }
    if(pid==0){//p2
    printf("p2 %d p1 %d\n", getpid(), getppid());}

    //printf("%d %d\n", pid, getpid());
    if(pid==0)//p2
    {
        pid = fork();
        if(pid==0){//p4
        printf("p4 %d p2%d\n", getpid(), getppid());}
        if(pid==0){//p4
            pid = fork();
            if(pid==0){//p5

            printf("p5 %d p4 %d\n", getpid(), getppid());}
            if(pid == 0){//p5
                pid = fork();
                if(pid==0){//p6
                printf("p6 %d p5 %d\n", getpid(), getppid());}

            }
        }
    }
}
