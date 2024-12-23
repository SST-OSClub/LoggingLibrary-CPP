#pragma once

#include <iostream>

// Write your blueprint of Logger class here
class Logger {
public:
	// Your public methods/member variables here
	Logger();
	~Logger();
	void info(std::string msg);
	void warn(std::string msg);
	void error(std::string msg);

private:
	// Your private methods/member variables here
};
