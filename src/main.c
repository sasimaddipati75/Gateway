#include<stdio.h>
#include<config.h>
#include<logger.h>
#include<daemon.h>
#include<pthread.h>
#include<gateway.h>
int main() {
      logger_init();
      parse_gateway_configure() ;
      logger_log(LOG_INFO,"Gateway is running..... \n");
      if(conf.run_as_daemon == 0 ) { 
         // daemon_init();
          logger_log(LOG_INFO,"daemon process is created \n");
          gateway_init();
          gateway_run();
          gateway_cleanup();
          
      }
     logger_close() ; 
}
