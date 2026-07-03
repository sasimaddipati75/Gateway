typedef enum {
     LOG_DEBUG,
     LOG_INFO,
     LOG_WARN,
     LOG_ERROR
   
}LogLevel;
extern void logger_init() ; 

extern void logger_log(LogLevel,const char *,...);

extern void logger_close();
