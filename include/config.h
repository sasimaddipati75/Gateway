
typedef struct
{
    char gateway_name[100];
    char gateway_id[30];
    char location[40];

    char server_ip[64];
    int server_port;

    int meter_count;
    int poll_interval_ms;

    char log_level[16];
    char log_file[128];

    int connect_timeout_sec;
    int retry_count;
    int worker_threads;

    int run_as_daemon;
    char pid_file[128];

} Config; 

void parse_gateway_configure(void);
