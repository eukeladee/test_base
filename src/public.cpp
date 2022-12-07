/**
 * @file public.cpp
 * @author eukelade (mau.guzmans@duocuc.cl)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022 Mauricio Guzmán mau.guzmans@duocuc.cl
 * 
 */

#include"public.hpp"

//  FIXME: Function doesn't return all the ASCII values correctly
//  Returns a string with ascii values of each char contained in string_input
std::string pub_StrToAscii(std::string string_input, bool human_readable){
    
    //  Definition of global variables to use in this function
    unsigned short int gl_strLength = string_input.length();

    //  Strings in C++ aren't null char terminated
    char bf_char[gl_strLength];

    std::string string_output;

    //  Checks if there is any invalid character inside the string_input
    for(int i = 0; i <= (gl_strLength - 1); i++){
        if(string_input.at(i) < 32 || string_input.at(i) > 126){
            return pub_errorType(115);
        }
    }
        
    if(human_readable != 1){

        // Converts string data to a char array [] and re-converts that data to a string of integers.
        for(unsigned int i = 0; i <= (unsigned) (gl_strLength - 1); i++){
        
            //  Assigns each char stored in string_input
            //  to the array at position <<i>>.
            bf_char[i] = (char) string_input.at(i);

            //  Stores the char data converted to Integers
            //  into a string <<string_output>>
            string_output = string_output + std::to_string( (int) bf_char[i] );
        
        }

    } else {

        //  The same function of the above loop but in this case
        //  it adds a space to separate the values, so in this way
        //  it's kinda more -human readable-
        for(unsigned int i = 0; i <= (unsigned) (gl_strLength - 1); i++){

            bf_char[i] = (char) string_input.at(i);

            string_output = string_output + std::to_string( (int) bf_char[i] );

            string_output = string_output + " ";
        
        }
    }

    return string_output;

}

//  Prints the entire ASCII Chart
void pub_printAsciiValues(){

    
    for(int i = 0; i <= 255; i++){
        std::cout << i << " -> " <<(char) i << std::endl;
    }
}

//  Function to return error values and their explanation.
//      I know that this is not the correct way to deal with
//      errors, but it works and it's enough in early version development.
std::string pub_errorType(short int error_code){
    
    std::string _noe000 = "";
    std::string _err100 = "NO USABLE PARAMETER";
    std::string _err115 = "CHARACTER NOT IN VALID RANGE";

    if(error_code == 100){
        return _err100;
    
    } else if(error_code == 115) {
        return _err115;

    } else {

        return _noe000;
    }
}