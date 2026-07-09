#include<logger.h>
#include<gateway.h>
#include<meter.h>
#include<polling.h>
#include<config.h>
void gateway_init() {

   logger_log(LOG_INFO,"Gateway is instialized.....  ");

}

void gateway_run(){
   
      while(1){
         // Meter checking 
         
          logger_log(LOG_INFO,"Gateway application is running");
          
           meter_init();
           int meter_on_search_id = meter_find(1002) ; 
           logger_log(LOG_INFO,"meter found in %d",meter_on_search_id);      
           meter_find_all();
          
          // polling 
          
          meter_poll(&meter_list[0]);
          meter_poll_all();
          
          usleep(conf.poll_interval_ms * 1000);
      }
    
}


void gateway_cleanup(){

      logger_log(LOG_INFO,"Gateway is removed.....  ");
}
