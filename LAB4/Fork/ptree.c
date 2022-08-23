#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
    printf("P1 = cd %d\n", getpid());//P1
    pid_t pid;
    pid = fork();//P2, create.
    printf("P1 = %d, P2 = %d\n", getpid(),getppid()); //Print line for P1 and P2. So 2 P1, P2
    if(pid>0){ //for P1.
        pid = fork(); // fork P1 again. So we get P3
        printf("P1 = %d, P3 = %d\n", getpid(), getppid()); //Print line for P1 and P3. So 2 P1, P3
        if(pid==0){ //for P3
            pid = fork(); // fork P3, So we get P4
            printf("P3 = %d, P4 = %d\n", getpid(), getppid()); //Print line for P3 and P4. So 2 P3, P4
            if(pid==0){ // for P4
                pid = fork();// fork P4. So we get P5
                printf("P4 = %d, P5 = %d\n", getpid(), getppid());// Print line P4 and P5. So, 2 P4, P5.
            }

        }
    }
}
// output
//P1
//P1, P2
//P1, P2
//P1, P3
//P1, P3
//P3, P4
//P3, P4
//P4, P5
//P4, P5
