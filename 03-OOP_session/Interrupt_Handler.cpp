#include <iostream>
#include<csignal>

void signal_handler(int signal){
    std::cout << signal << " 'Ctrl+C' is pressed -> terminating program " <<std::endl;
    //Terminating program
    exit(signal);
}
int main() {
signal(SIGINT, signal_handler);
while(1){
    std::cout << "the program is still running... Are you there? " <<std::endl;
    sleep(1);
}
return 0;
}