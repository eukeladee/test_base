/**
 * 
 * @file public.cpp
 * @author eukelade (mau.guzmans@duocuc.cl)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022 Mauricio Guzmán mau.guzmans@duocuc.cl
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
        data, you may have to use this name for your variable


 */

#include"public.hpp"

std::string pub_StrToAscii(std::string string_input){
    
    //  Definition of global variables to use in this function
    unsigned short int gl_strLength = string_input.length();

    // The + 1 is due to .length function doesn't return the null character terrmination as a char.
    char bf_char[gl_strLength];

    std::string string_output;

    // Converts string data to a char array [] and re-converts that data to an string of integers.
    for(unsigned int i = 0; i <= (unsigned) (gl_strLength - 1); i++){
        
        //  Assigns each char stored in string_input
        //  to the array at position <<i>>.
        bf_char[i] = (char) string_input.at(i);

        //  Stores the char data converted to Integers
        //  into a string <<string_output>>
        string_output = string_output + std::to_string( (int) bf_char[i] );

    }

    //  Strings in C++ aren't null terminated.
    return string_output;

}