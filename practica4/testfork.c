#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
  
    // make two process which run same 
    // program after this instruction 
    if(fork()==0){
        printf("Hello from Child!\n"); 
    }
    else{
        printf("Hello from Parent!\n"); 
    }
  
    return 0; 
} 