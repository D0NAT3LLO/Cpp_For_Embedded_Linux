
#ifndef _BACKTRACE_H_
#define _BACKTRACE_H_
#include <string>
#include <vector>

#define EnterFn Backtrace name(__func__)
#define PrintBT Backtrace::printBackTrace()

class Backtrace {
private:
    static std::vector<std::string> Names;
    std::string function_name = "" ;
public:
    Backtrace(std::string input_func );
    static void printBackTrace();
    ~Backtrace();



};
#endif // !_BACKTRACE_H_
