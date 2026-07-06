#include<stdio.h>
#include<config.h>
#include<logger.h>
#include<daemon.h>
int main() {
      Config conf =  parse_gateway_configure() ;
      logger_init();
      logger_log(LOG_INFO,"Gateway is running..... \n");
      if(conf.run_as_daemon == 0 ) { 
          daemon_init();
          logger_log(LOG_INFO,"daemon process is created");
      }
      
     logger_close() ; 
}
