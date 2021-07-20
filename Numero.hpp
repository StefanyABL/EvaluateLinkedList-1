/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VideoCamera.hpp
 * Author: Sala 6
 *
 * Created on 24 de agosto de 2018, 03:08 PM
 */

#ifndef VIDEOCAMERA_HPP
#define VIDEOCAMERA_HPP

#include <string>

//TO STRING..FUNCIONANDO 
class Numero {
public:
    Numero();
    Numero(std::string);
    void setValue(std::string);
    
    std::string  getValue();
    //std::string parseInt(int);
    std::string toString();
    
    virtual ~Numero();
private:

    std::string  value;

   
};

#endif /* VIDEOCAMERA_HPP */

