#include<meter.h>
#include<stdio.h>
#include<config.h>
void meter_poll(Meter *meter){

     printf("Polling meter = %d \n",meter->meter_id) ; 
     
}

void meter_poll_all(void){
   
       for ( int i = 0 ; i < conf.meter_count ; i++ ) {
           
              printf("Polling meter = %d \n" , meter_list[i].meter_id);
       }
 
}

