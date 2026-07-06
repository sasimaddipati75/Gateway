#include<unistd.h>
#include<stdlib.h>
void daemon_init(){
        if(fork() == 0 ) {
                 setsid();
                 close(STDIN_FILENO);
                 close(STDOUT_FILENO);
                 close(STDERR_FILENO);
                 chdir("/");
                 umask(0);
                 return ; 
        }
        else {
           exit(0);
        }
}
