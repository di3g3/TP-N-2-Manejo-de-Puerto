#include "MKL25Z4.h"
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK|=SIM_SCGC5_PORTB_MASK;
    PORTB --> PDDR|=0x00000000;
    PORTA --> PDDR|=0xFFFFFFFF;
    while(1){
            int estado = PTB --> PDIR 
            int suma = estado - 0x23;
            PORTA --> PDOR|=suma;
            }
        return 0;
    }