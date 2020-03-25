#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
  
    // make two process which run same 
    // program after this instruction 
    if(fork()==0){
        printf("Hello from Child!\n"); 
        execlp("ls","ls","-a","/",(char *)NULL);
    }
    else{
        printf("Hello from Parent!\n"); 
    }
  
    return 0; 
} 
