#ifndef __SES_PWSTREAMWX_H__
#define __SES_PWSTREAMWX_H__

#include <wx/wx.h>

#include "pwstreambase.h"
#include "sespwdialog.h"

class PWStreamWX : public PWStreamBase {
public:
	//Constructor/destructor
	PWStreamWX();
	~PWStreamWX();

	//Fetch the password
	void fetch(void);

};

#endif // __SES_PWSTREAMWX_H__

