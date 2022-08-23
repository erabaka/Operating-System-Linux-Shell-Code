#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
void *f1(void *p){
    int i = 0;
    for(i=0;i<100;i++){
        printf("%d", i);
    }
    printf("\n");
}
int main(){

    pthread_t t, th[2];
    int p=10, q=2;
    for(int i =0;i<2;i++){
        pthread_create(&th[i], NULL, f1, (void*)&q);
        pthread_join(th[i], NULL);
    }
    pthread_exit(0);
}
