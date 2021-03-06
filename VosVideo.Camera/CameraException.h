#pragma once
#include <stdexcept>

namespace vosvideo
{
	namespace camera
	{
		class CameraException : public std::runtime_error
		{
		public:
			CameraException(const std::string& msg) : runtime_error(msg)
			{
				LOG_ERROR(msg);
			}
		};
	}
}