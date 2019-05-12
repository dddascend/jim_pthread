#include <stdio.h>
#include <pthread.h>
#include <string.h>

void thread_a()
{
printf("hello thread_a\n");
for(int i = 0; ; i++)
{
printf("thread a i%d\n", i);
sleep(1);
}

}

pthread_t id[2] = {0};

int main (int argc,char ** argv)
{
memset(id, 0, sizeof(id));
pthread_create(&(id[0]), NULL, (void *)thread_a, NULL);
//pthread_join(id[0], NULL);
pthread_detach(id[0]);
printf("it is main\n");
for(int i = 0; ; i++)
{
printf("main i %d\n", i);
sleep(5);
}

printf("after start pthread a\n");

return 0;
}

