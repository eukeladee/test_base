/**
 * @file public.hpp
 * @author eukelade mau.guzmans@duocuc.cl
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022 Mauricio Guzmán mau.guzmans@duocuc.cl
 * 
 */

#ifndef PUBLIC_HPP
#define PUBLIC_HPP

#define PROJECT_VERSION 0.1
#define PROJECT_NAME TEST_BASE
#define DEV_ACTIVE true

#include<iostream>
#include<string>

std::string pub_StrToAscii(std::string string_input, bool human_readable);

void pub_printAsciiValues();

std::string pub_errorType(short int error_code);

#endif // PUBLIC_HPP
