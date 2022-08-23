
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
void *thread1code(void *params)
{
    int i;
    for(i=0; i<100; i++)
    {
        printf("%d ", i);
    }
    //printf("\n");
}

int main()
{
    pthread_t th[5];
    int p = 10;
    for(int i=0;i<5;i++){
    pthread_create(&th[i], NULL,thread1code, (void *)&p);}
    //pthread_join(th[i], NULL);
    for(int i=0;i<5;i++){
        pthread_join(th[i], NULL);
    }
    pthread_exit(0);
    return 0;
}
