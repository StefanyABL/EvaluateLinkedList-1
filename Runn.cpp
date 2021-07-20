













/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Runn.cpp
 * Author: Sala 6
 *
 * Created on 24 de agosto de 2018, 03:04 PM
 */

#include <cstdlib>

#include<stdio.h>
#include<iostream>
#include "Numero.hpp"

#include "LinkedDouble.hpp"
#include"LinkedDouble.cpp"


using namespace std;







/*
 * 
 */
int main(int argc, char** argv) {
   
    LinkedDouble<Numero>* linked = new LinkedDouble<Numero>() ;
     linked->addFirst((Numero("563")));
    linked->addFirst((Numero("892")));
    linked->addLast((Numero("500")));
  //  linked->addAfterTo((Numero("345")));
   // linked->addAfterTo((Numero("278")));
  //  linked->addAfterTo((Numero("500")));
  //  linked->addBeforeTo((Numero(671)));
  //  linked->deleteNode((Numero(278)));
  //  linked->deleteNode((Numero(671)));
    
    
    
    
 
    
    for (int i=0; i<linked->printList(true).size();i++){
        cout <<linked->printList(true).at(i).toString()<<endl;
    }
    return 0;
}