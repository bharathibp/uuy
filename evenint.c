#include <stdio.h>
   
int main() {  
    int counter; 
    printf("even numbers between 6to 9\n");  
    counter = 0;
    while (counter <= 9) {  
        printf("%d ", counter);
        counter = counter + 3;  
    }  
       return 0;  
}

