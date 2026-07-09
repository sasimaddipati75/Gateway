#include<meter.h>
#include<config.h>
#include<logger.h>
Meter meter_list[5] ;
void meter_init(void) {
      meter_list[0].meter_id = 1001;
      strcpy(meter_list[0].ip, "192.168.1.101");
      meter_list[0].port = 5000;
      meter_list[0].status = 0;

      meter_list[1].meter_id = 1002;
      strcpy(meter_list[1].ip, "192.168.1.102");
      meter_list[1].port = 5000;
      meter_list[1].status = 0;

      meter_list[2].meter_id = 1003;
      strcpy(meter_list[2].ip, "192.168.1.103");
      meter_list[2].port = 5000;
      meter_list[2].status = 0;

      meter_list[3].meter_id = 1004;
      strcpy(meter_list[3].ip, "192.168.1.104");
      meter_list[3].port = 5000;
      meter_list[3].status = 0;

      meter_list[4].meter_id = 1005;
      strcpy(meter_list[4].ip, "192.168.1.105");
      meter_list[4].port = 5000;
      meter_list[4].status = 0; 
      
      return ; 
}


int meter_find (int x ) {
    
    for (int i = 0 ; i < conf.meter_count ; i++ ) {
           
           if ( meter_list[i].meter_id == x ) return i ; 
          
        
    }
    return -1 ;
  
}

void meter_find_all (void ) {
    
    for (int i = 0 ; i < conf.meter_count ; i++ ) {
           
          logger_log(LOG_INFO,"id = %d , ip = %s , port = %d , status = %d \n",meter_list[i].meter_id,meter_list[i].ip,meter_list[i].port,meter_list[i].status); 
          
        
    }
    return ;
  
}









