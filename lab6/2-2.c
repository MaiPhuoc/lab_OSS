#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid = fork();
    if (pid == 0){
        printf("This is from pid = %d \n", getpid());
	sleep(5);
    }
    else{
        printf("This is from %d\n",getppid());
	sleep(5);
    }
    return 0;
}
