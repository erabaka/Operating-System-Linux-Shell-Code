#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
void *thread1code(void *params){
    int i;
    for(i=0;i<100;i++){
        printf("%d ", i);
    }
    //printf("\n");
}
int main(){
    pthread_t thread, th[5];
    int p = 10, q = 12;
    for(int i=0;i<5;i++){
    pthread_create(&th[i], NULL, thread1code, (void *)&q);
    //pthread_join(th[i], NULL);
    }
    for(int i=0;i<5;i++){
    pthread_join(th[i], NULL);
    }
    pthread_exit(0);
    printf("Hello World!");
    //pthread_create(&thread, NULL, thread1code, (void *)&p);
    //pthread_join(thread, NULL);
    //pthread_exit(0);
}

// When we created the thread with pthread_create(), it did create the thread.
// but as the main() function thread gets return 0 and terminates and also
// the created thread dies as P1 dies. To enable it to work even though the main thread P1
// terminates, we will use pthread_join(). This will keep the created thread on move
// and will not get killed. The pthread_join() will say main thread to wait
// until T1 thread has fully executed.
//Supposedly, we have
/* P1
    |->T1 (created)
    |->T2
    |->T3 (main) */
// When we do pthread_exit(0), means we will terminate the main thread. but the
// T1 is still on function. So it will work.

// Next, we took an array of thread. And when we didn't use join the threads were
// running parallel y. That's why the out put will be overlapped, Suppose. T1 will
// run for 68 and the T2 starts, runs for 50 and this swapping goes on until all
// Thread ensures to executed fully.
// But then when join was added in the loop along side with create, then all threads
// became sequential. (This is not generally used or expected. Cause thread was
// implemented to perform tasks concurrently. However we do get sequential thread
// work as well. Suppose an app being downloaded and can't get installed at the same
// time. So in this case, we will ensure sequential threads.

// Next we detach the join from the same loop as create. And thus the threads get
// parallel again.


/*Compile in WSL as -> gcc th.c -o th -lpthread
                    ./th
                    */
