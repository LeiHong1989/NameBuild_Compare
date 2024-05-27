#pragma once
#include <memory>

// -------------
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace ns_spdlog {


	class SpdLog
	{
	public:
		static void init();
		static void set_level(spdlog::level::level_enum filter_level,
			spdlog::level::level_enum console_level,
			spdlog::level::level_enum file_level);

		static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;


	};

}