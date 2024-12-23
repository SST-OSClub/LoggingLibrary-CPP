#include "includes/Logger.h"

// Define your functions/variables declared in "includes/Logger.h" here
// For eg:- To define "void <your-function>();" declared in "includes/Logger.h",
// Define it like this:-
// void Logger::<your-function>() { ... }
// Here "Logger" is your class name declared in "includes/Logger.h"

void Logger::info(std::string msg){
	std::cout << "[INFO] "<<msg<<std::endl;
}

void Logger::warn(std::string msg){
	std::cout << "[WARNING] "<<msg<<std::endl;
}

void Logger::error(std::string msg){
	std::cout<<"[ERROR] "<<msg<<std::endl;
}


// Logger Constructor Definition
Logger::Logger() {
	std::cout << "Logger Constructor called!\n";
}

// Logger Destructor Definition
// Use this to free heap-allocated space if you allocated any
Logger::~Logger() {}
