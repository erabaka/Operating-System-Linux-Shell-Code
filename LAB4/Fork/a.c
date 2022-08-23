/*#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main(){
printf("Hello\n");
fork();
printf("Hello\n");
}
*/
// as far can be guessed, instructions with end-line before fork will be terminated once. And instruction with end-line after fork
// will have copy of the total parent (initializers + codes after fork). If we have a printf("Hello") fork(); then, there will
// be output hellohello. if we have printf("hello\n") fork(); then child will be created but that will not take the printf as
//copy because of the \n. Later we have printf("hello\n") fork(); printf("hello\n"). Here, the first printf will execute.
//then the fork will be created. fork will not copy the first printf but will copy the second thus for later printf and fork we
//will have output hello\nhello\nhello.

#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main(){
printf("Hello\n");
pid_t pid;
pid = fork();
printf("Hello\n");
if(pid<0){
    printf("Unsuccessful\n");
}
else if(pid>0){
    printf("Parent\n");
    printf("Parent pid: %d\n", getpid());
}
else{
    printf("Child\n");
    printf("Child pid: %d, Child ppid: %d\n", getpid(), getppid());

}

}
// here child ppid and parent pid is same. After P1 is executed and forks as well, then OS will have two individual processes.
// so OS can switch as it wants. That's why our ss has the difference in output.

/*update*/
