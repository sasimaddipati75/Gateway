#include<stdio.h>
#include<config.h>
#include<logger.h>
int main() {
      Config conf =  parse_gateway_configure() ;
      logger_init();
      logger_log(LOG_INFO,"Gateway is running %d ",5);
      logger_log(LOG_INFO,"Gateway is running %d",5);
      logger_close() ; 
}
