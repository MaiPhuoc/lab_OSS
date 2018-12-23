#include <stdio.h>
#include <unistd.h>
int main(){
    int pid = 1;
    int i = 0;
    for (i; i < 10; i++){
        if (pid != 0){
            pid = fork();
        }
        else
            sleep(5);
    }
    if (pid > 0)
        sleep(2);
    return 0;

}
