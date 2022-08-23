#include<sys/types.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid;
pid = fork();
if(pid == 0){
printf("Child\n");
execv("./b", NULL);
}
else if(pid > 0){
printf("Parent");
}
}
