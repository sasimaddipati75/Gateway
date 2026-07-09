
typedef struct
{
    int meter_id;
    char ip[32];
    int port;
    int status;
} Meter;

extern Meter meter_list[5]; 

extern void meter_init(void);

extern int meter_find(int);

extern Meter meter_print_all(void);

