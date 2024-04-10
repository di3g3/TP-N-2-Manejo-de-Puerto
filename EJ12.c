#include "MKL25Z4.h"
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK|=SIM_SCGC5_PORTB_MASK;
    PORTB --> PDDR|=0x00000000;
    PORTA --> PDDR|=0xFFFFFFFF;
    while(1){
        for(int i = 0;i<32;i++){
            int estado = PTB --> PDIR&(1 << i) 
            PTA -> PSOR|=((estado + 1) << i)
            }
        return 0;
    }
}