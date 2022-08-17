#include "pwsbexcept.h"

const char *PWSBExcept::what(void) const noexcept{

	return (char*)"No method specified for fetching (base class is being used rather than the specific wx or CLI handler";

}
