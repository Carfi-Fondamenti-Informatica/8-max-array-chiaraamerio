#include <iostream>
#include "lib.h"

using namespace std;

int main(){
   int d=0;
     cin>>d;
     float valori[d];
     for (int i=0; i<d; i++){
         cin>>valori[i];
     }
     float x= funzione(valori, d);
     cout<<x<<endl;
  return 0;
}
