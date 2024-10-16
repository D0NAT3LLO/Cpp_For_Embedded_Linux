#include <iostream>
#include <string>
#include <vector>

enum class level : unsigned char {
    Info,
    Warning,
    Error
};

class Log{
    private:
        level priv_level;
        static std::vector<std::string> Buffer;
        std::string to_string(level level) {
            switch (level) {
                case level::Info:
                    return "Info";
                case level::Warning:
                    return "Warning";
                case level::Error:
                    return "Error";
                default:
                    return "Unknown";
            }
        }
    

    public:
        Log(level param_level) : priv_level(param_level) {}; // Constructor with Level parameter

        static Log Level(level parameter_lv){ //static instance of Log
            return Log(parameter_lv);
        }

        void operator<<(std::string message){
            std::string temp = "[" +to_string(this->priv_level)+ "] " + message;
            Buffer.emplace_back(temp); // append to Buffer
        }

        static void Dump(){
            for(const std::string& display : Buffer){
                std::cout << display << std::endl;
            }
        }

        static void Clear(){
            Buffer.clear();
            std::cout << "Log Buffer is cleared." << std::endl;
        }

};
 //Intializing static vector
std::vector<std::string> Log::Buffer;

int main()
{
    Log::Level(level::Info) << "App Started";
    Log::Level(level::Warning) << "forgot to close file" ;
    Log::Level(level::Error) << "Error";
    Log::Dump();
    Log::Clear();
    Log::Dump(); // check that it is cleared

  return 0;
}