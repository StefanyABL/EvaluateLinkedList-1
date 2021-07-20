/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VideoCamera.cpp
 * Author: Sala 6
 * 
 * Created on 24 de agosto de 2018, 03:08 PM
 */
#include "Numero.hpp"
#include <sstream>
Numero::Numero() {
    
}


Numero::Numero(std::string value) {
    setValue(value);
  getValue();
   
}

std::string Numero::getValue() {
    return value;
}

void Numero::setValue(std::string value) {
    this->value= value;
}






std::string Numero::toString() {
 std::string output="";
  //std::string auxValues= parseInt(value);
 return "Numeros[valor="+value+"]";
}


Numero::~Numero() {
}

