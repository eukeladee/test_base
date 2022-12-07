/**
 * @file main.cpp
 * @author eukelade mau.guzmans@duocuc.cl
 * @brief 
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022 Mauricio Guzmán mau.guzmans@duocuc.cl
 * 
 */

#include"public.hpp"

int main(int argc, char *argv[]){
    
    //  Check if there is any kind of parameter passed to the main function.
    //  Just to make a better flow of the information.
    bool gl_params;
    if(argc > 1){
        gl_params = true;
    } else {
        gl_params = false;
    }

    //  I dont know yet how to work with pointers yet :p
    //  so I will use strings to deal with parameters.
    std::string gl_mainparam = argv[argc - 1];

    if(gl_params != 0){
        std::cout << pub_StrToAscii(gl_mainparam, true) << std::endl;
    } else {
        std::cout << pub_errorType(100) << std::endl;
    }
    
}