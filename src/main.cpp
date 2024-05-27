#include <iostream>
#include "Stu.h"
#include "SpdLog.h"
using namespace std;

/*
 * Global variables
 */

 // variable for spdlog
	 // LOG_LEVEL:  trace > debug > info > warn > err > critical
auto logger_log_level = spdlog::level::debug;    // 1st fileter,
auto console_log_level = spdlog::level::debug;   // 2nd fileter, console only
auto file_log_level = spdlog::level::err;       // 2nd fileter,   file  only






int main()
{
	ns_spdlog::SpdLog::init();
	ns_spdlog::SpdLog::GetCoreLogger()->warn("Initialized log!");

	Stu stu_1(12);
	stu_1.print();
	cout << "OK" << endl;
	return 0;
}