#include <stdio.h>
#include <time.h>

int main(){
    int i; 
    for (i = 0; i < 10; i++) { 
        // delay of one second 
        delay(1000); 
        printf("%d seconds have passed\n", i + 1); 
    } 
    return 0;
}

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
}