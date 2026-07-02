#include<stdio.h>
#include<config.h>
int main() {
    
      printf("Gateway is running \n");
      
     Config conf =  parse_gateway_configure() ; 
     
    printf("Gateway Name      : %s\n", conf.gateway_name);
    printf("Gateway ID        : %s\n", conf.gateway_id);
    printf("Location          : %s\n", conf.location);
    printf("Server IP         : %s\n", conf.server_ip);
    printf("Server Port       : %d\n", conf.server_port);
    printf("Meter Count       : %d\n", conf.meter_count);
    printf("Poll Interval     : %d ms\n", conf.poll_interval_ms);
    printf("Log Level         : %s\n", conf.log_level);
    printf("Log File          : %s\n", conf.log_file);
    printf("Timeout           : %d sec\n", conf.connect_timeout_sec);
    printf("Retry Count       : %d\n", conf.retry_count);
    printf("Worker Threads    : %d\n", conf.worker_threads);
    printf("Run As Daemon     : %d\n", conf.run_as_daemon);
    printf("PID File          : %s\n", conf.pid_file);
}
