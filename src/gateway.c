#include<logger.h>
#include<gateway.h>
#include<meter.h>
void gateway_init() {

   logger_log(LOG_INFO,"Gateway is instialized.....  ");

}

void gateway_run(){
   
      while(1){
          logger_log(LOG_INFO,"Gateway application is running");
          meter_init();
          int meter_on_search_id = meter_find(1002) ; 
          
          logger_log(LOG_INFO,"meter found in %d",meter_on_search_id);      
           meter_find_all();
          
          sleep(5);
      }
    
}


void gateway_cleanup(){

      logger_log(LOG_INFO,"Gateway is removed.....  ");
}
