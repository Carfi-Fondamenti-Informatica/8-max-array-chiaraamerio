#include <iostream>
#include "lib.h"

using namespace std;

int main(){
   int d=0;
     cout<<"inserire la dimensione dell'array"<<endl;
     cin>>d;
     float valori[d];
     cout<<"inserire i valori degli array"<<endl;
     for (int i=0; i<d; i++){
         cin>>valori[i];
     }
     float x= funzione(valori,d);
     cout<<x<<endl;
  return 0;
}
