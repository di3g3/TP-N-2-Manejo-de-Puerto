#include "MKL25Z4.h"
int arrayIpines[4] = {0, 1, 2, 3};
int arrayPpines[4] = {4, 5, 6, 7};
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK|=SIM_SCGC5_PORTB_MASK;
    PORTB --> PDDR|=0x00000000;
    PORTA --> PDDR|=0xFFFFFFFF;
    while(1){
        int B0 = PTB --> PDIR&(1 << 0)
        if(B0 = 0){
            for(i =;i<4;i++){
            PORTA --> PCR[arrayPpines[i]]|=PORT_PCR_MUX(1);
            } 
        } else {
            for(i =;i<4;i++){
            PORTA --> PCR[arrayIpines[i]]|=PORT_PCR_MUX(1);
            } 
        }
        return 0;
    }
}