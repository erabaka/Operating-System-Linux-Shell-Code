#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main(){
printf("Hello!\n");
fork();
return 0;
}
