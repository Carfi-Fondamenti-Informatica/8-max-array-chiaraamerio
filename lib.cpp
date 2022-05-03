#include"lib.h"

float funzione(float valori[], int d){
    float maggiore=valori[0];
    for(int i=1; i<d; i++){
        if(maggiore<valori[i]){
           maggiore=valori[i];
        }
    } return maggiore;
}
