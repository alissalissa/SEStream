//Base class for objects used to fetch passwords.
//Derived classes will either fetch from a wxDialog or from CLI
//DOES NOT GENERATE KEYS OR ENCRYPTION

#ifndef __PWSTREAM_PWSTREAMBASE_H__
#define __PWSTREAM_PWSTREAMBASE_H__

//STL Includes
#include <string>

//local includes
#include "pwsbexcept.h"

//type enum
/*enum __BASE_TYPE {
	WX_BASE,
	CLI_BASE
};*/

using namespace std;

class PWStreamBase{
protected:
		string *pwstr; //!< Member variable "pwstr"

public:
	/** Default constructor */
	PWStreamBase(void);
	/** Default destructor */
	virtual ~PWStreamBase();

	/** Access *pwstr
	* \return The current value of *pwstr
	*/
	string AccessPW() const { return *pwstr; }

	//virtual stream access
	virtual void fetch(void);

};

#endif // __PWSTREAM_PWSTREAMBASE_H__
