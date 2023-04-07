
#include <stdio.h>
#include <unistd.h>

int main (){
    while (1){
        fork();
        return 0;
    }
}

/*A forkbomb is a type of denial-of-service (DoS) attack on a computer system that can cause it to crash or become unresponsive.
The result is an exponential increase in the number of processes,
which can quickly overwhelm the system's resources and cause it to crash or become unresponsive.
It is not recommended to run the program as
it may make a system non-responsive.*/