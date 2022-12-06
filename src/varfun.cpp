/**
 * @file varfun.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 *

    gl ->
        in variables gl stands for global.
        if you have to use it multiple times
        it is more easy work with that as an entire value
        and not as a concept.

    bf ->
        in variables bf stands for buffer.
        whenever you have to use an auxiliary space to storage
        data, you may have to use this kind of variable


 */


#include<iostream>
#include<string>

// protoype functions

std::string strToAscii(std::string str);

void cout_strToAscii(std::string str);

// main method - duh
int main(int argc, char *argv[]){

    // string placeholder
    std::string example = "PENISCUM";

    cout_strToAscii(example);

}

std::string strToAscii(std::string strinput){

    // set global -> global _ string int length
    short int gl_siln = strinput.length();

    // set a buffer for the incoming characters.
    char bf_char[gl_siln + 1]; // std::string length function doesn't include the null character terminator -- \0

    std::string stroutput;

    // cicle to convert the string into a char array
    for(unsigned int i = 0; i <= ( (unsigned) gl_siln - 1); i++){
        bf_char[i] = (char) strinput.at(i);
        if( i == ( (unsigned) gl_siln -1) ){
            bf_char[gl_siln] = (char) 0;
        }
    }

    // cicle to convert each character into an int
    for(unsigned int i = 0; i <= (unsigned) gl_siln; i++){
        stroutput = stroutput + std::to_string( (int) bf_char[i] );
    }

    return stroutput;
}


void cout_strToAscii(std::string strinput){
    // set global -> global _ string int length
    short int gl_siln = strinput.length();

    // set a buffer for the incoming characters.
    char bf_char[gl_siln + 1]; // std::string length function doesn't include the null character terminator -- \0

    std::string stroutput;

    // cicle to convert the string into a char array
    for(unsigned int i = 0; i <= ( (unsigned) gl_siln - 1); i++){
        bf_char[i] = (char) strinput.at(i);
        if( i == ( (unsigned) gl_siln -1) ){
            bf_char[gl_siln] = (char) 0;
        }
    }

    // cicle to convert each character into an int
    for(unsigned int i = 0; i <= (unsigned) gl_siln; i++){
        stroutput = stroutput + std::to_string( (int) bf_char[i] );

        // prints a verbose mode of the info
        if( (int) bf_char[i] != 0 ){
            std::cout << bf_char[i] << " pos " << i << " as ascii -> " << (int) bf_char[i] << std::endl;
        } else {
            std::cout << "NULL" << " pos " << i << " as ascii -> " << (int) bf_char[i] << std::endl;
        }
    }

}

