
#include "Backtrace.hpp"
#include<iostream>
#include<string>
std::vector<std::string> Backtrace::Names = {"Back Trace : "};
Backtrace::Backtrace(std::string input_func ) : function_name(input_func) {
    Names.push_back(input_func);
    std::cout << "Current func is :" << function_name << " " <<std::endl; 
}

void Backtrace::printBackTrace(){
    for( auto Names_i : Names ){
        std::cout << Names_i << std::endl;;
    }
    
}

Backtrace::~Backtrace(){
    std::cout << "Exit From " << function_name << std::endl;
}
