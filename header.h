#pragma once 
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <string.h>
#include <fstream>
#define N '\n'

//converts to BIG text
//string as value because it might be modified
std::string big_text(const std::string& input, const bool& have_lines);

// if string is an int
bool is_int(const char* string, int start_i);

void help();