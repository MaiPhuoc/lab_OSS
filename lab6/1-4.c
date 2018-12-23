#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[]){
    char **p;
    int i = 0;
    int d = atoi(argv[1]) - 1;
    if(d > 2)
    	for (p = environ; *p != NULL && i < d; p++, i++) 
        	printf("%s\n", *p);  
    else return 0;
}
