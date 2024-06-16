#include "header.h"

poly::poly() : array() {
    degree = 0;
}

poly::~poly(){}

void poly::read(){
    cin >> degree;
    for(int i = degree; i >= 0; i--){
        cin >> array[i];
    }
}

void poly::add(poly a, poly b){
    int i = 0;
    if(a.degree > b.degree) {
        *this = a;
        for(i = 0; i <= b.degree; i++){
            array[i] += b.array[i];
        }
    }
    else {
        *this = b;
        for(i=0; i <= a.degree; i++){
            array[i] += a.array[i];
        }
    }
}

void poly::sub(poly a, poly b){
    int i =0;
    *this = a;
    if(a.degree > b.degree){
        for(i=0; i<= a.degree; i++){
            array[i] -= b.degree;
        }
    }
    else {
        for(i=0; i<= b.degree; i++){
            array[i] -= b.degree;
        }
    }
}

void poly::add(poly a, poly b){
    
}


void poly::add(poly a, poly b){
    
}

void poly::add(poly a, poly b){
    
}