#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
  int n = 2500;
  int pid = fork();
  int i = 0;
  for (i; i < n; i++){
	 if(pid != 0){
	 	pid = fork();
	 }
  }
  if (pid == 0) {
  	sleep(2);
  } else if (pid > 0) {
 	 printf("Process: %d", n);
  	 wait(0);
  }
  return 0;
}
//Количество зависить от состояния системы и RAM
