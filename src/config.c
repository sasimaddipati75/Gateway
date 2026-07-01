#include<stdio.h>
#include<config.h>
#include<string.h>
void parse_gateway_configure(){
       
       FILE *file_pointer = fopen("config/gateway.conf","r");
       if(file_pointer == NULL ) printf("Error in opening the file ");
       Config conf ; 
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
                        }
             }
       }
       fclose(file_pointer);

}

