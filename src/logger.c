#include<stdio.h>
#include<logger.h>
#include<stdarg.h>
#include<time.h>
static *logger_file_pointer ;

void logger_init(){
    
    logger_file_pointer = fopen("logs/gateway.log","w") ; 
    
    if (logger_file_pointer == NULL ){
        printf("Creating logger file is failed \n");
        return ; 
    }
    
}

void logger_log(LogLevel level, const char *format, ...)
{
  
    va_list args;
    va_start(args, format);
     char lev[100] = "" ; 
     switch(level){
         case 0: strcpy(lev,"DEBUG"); break;
         case 1: strcpy(lev,"INFO"); break;
         case 2: strcpy(lev,"WARN"); break;
         case 3: strcpy(lev,"ERROR"); break;
     }
     
     time_t t;
     time(&t);
    
    fprintf(logger_file_pointer,"%s %s  ",ctime(&t),lev);
    vfprintf(logger_file_pointer, format, args);
    
    fprintf(logger_file_pointer, "\n\n");

    va_end(args);
}





void logger_close() {

   fclose(logger_file_pointer) ;
}


