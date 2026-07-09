#include<stdio.h>
#include<config.h>
#include<string.h>
#include<stdlib.h>
#include<logger.h>

Config conf;

void function_to_lower_string(char *a , int len ){
   for(int i = 0 ; i < len ; i++ ) {
             if(a[i]>=65 && a[i]<=90)  a[i] = a[i] + 32 ; 
   }
}

void parse_gateway_configure(){
       
       FILE *file_pointer = fopen("config/gateway.conf","r");
       if(file_pointer == NULL ){ logger_log(LOG_INFO,"opening gateway.conf is failed");  return  ;  }
        
       char buf[100];
       while(fgets(buf,100,file_pointer)!=NULL) {    
             int len = strlen(buf);
             for (int i = 0 ; buf[0]!='#' && i < len; i++ ) {
                        if(buf[i]=='='){
                             char first[i+1] ,second[len-i+1];
                             strncpy(first, &buf[0],i);
                             strncpy(second, &buf[i+1], len-i+1); 
                             first[i] = '\0';
                             second[len-i+1] = '\0';
                             
                            function_to_lower_string(first,i);
                            
                          if (strcmp(first, "gateway_name") == 0)  strcpy(conf.gateway_name, second);
                          else if (strcmp(first, "gateway_id") == 0)  strcpy(conf.gateway_id, second);
                          else if (strcmp(first, "location") == 0)  strcpy(conf.location, second);
                          else if (strcmp(first, "server_ip") == 0) strcpy(conf.server_ip, second);
                          else if (strcmp(first, "server_port") == 0) conf.server_port = atoi(second);
 			   else if (strcmp(first, "meter_count") == 0)   conf.meter_count = atoi(second);
		           else if (strcmp(first, "poll_interval_ms") == 0)   conf.poll_interval_ms = atoi(second);
                          else if (strcmp(first, "log_level") == 0)  strcpy(conf.log_level, second);
                          else if (strcmp(first, "log_file") == 0 )    strcpy(conf.log_file, second);
                          else if (strcmp(first, "connect_timeout_sec") == 0) conf.connect_timeout_sec = atoi(second);
                          else if (strcmp(first, "retry_count") == 0)  conf.retry_count = atoi(second);
                          else if (strcmp(first, "worker_threads") == 0)   conf.worker_threads = atoi(second);
                          else if (strcmp(first, "run_as_daemon") == 0) conf.run_as_daemon = atoi(second) ; 
                          else if (strcmp(first, "pid_file") == 0 )  strcpy(conf.pid_file, second);
                          else  printf("Unknown configuration key: %s\n", first);
                          break ;
                        }
             }
       }
       fclose(file_pointer);
       return ; 
}











