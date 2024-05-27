#include "SpdLog.h"

namespace ns_spdlog {

	std::shared_ptr<spdlog::logger> SpdLog::s_CoreLogger;




	void SpdLog::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("Core");
		s_CoreLogger->set_level(spdlog::level::trace);

	}



	// backup code
	//void SpdLog::init()
	//{
	//	spdlog::set_pattern("%^[%T] %n: %v%$");
	//	s_CoreLogger = spdlog::stdout_color_mt("Core");
	//	s_CoreLogger->set_level(spdlog::level::trace);

	//}

	static void set_level(spdlog::level::level_enum filter_level,
		spdlog::level::level_enum console_level,
		spdlog::level::level_enum file_level)
	{

	}

}