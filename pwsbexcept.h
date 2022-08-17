#ifndef __SESTREAM_PWSBEXCEPT_H__
#define __SESTREAM_PWSBEXCEPT_H__

#include <exception>

class PWSBExcept : std::exception{
public:
	/** Default constructor */
	PWSBExcept()=default;

	//returns the error message
	const char *what(void) const noexcept;
};

#endif // __SESTREAM_PWSBEXCEPT_H__
