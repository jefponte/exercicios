#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h>

void *OLA(void *arg){
	int i;

	for(i = 0; i < 100; i++){
	    	printf("\nOla %d\n", i);
	    	sleep(rand()%3);

	}
	pthread_exit(NULL);
}

int main()
{
    printf("Hello world!\n");
    pthread_t thread;
    int flag;
    printf("Vamos criar a thread\n");
    flag = pthread_create(&thread, NULL, OLA, NULL);
    if(!flag)
        printf("Erro\n\n");
    flag = pthread_create(&thread, NULL, OLA, NULL);
    if(!flag)
        printf("Erro\n\n");
    OLA(NULL);
    pthread_exit(NULL);
    return 0;

}
