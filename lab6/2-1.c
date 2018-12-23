#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int pid = fork();
    if (pid == 0) {
        printf("Child (pid) = %d\nParent (ppid) = %d\n", getpid(), getppid());
    }

  return 0;
}
