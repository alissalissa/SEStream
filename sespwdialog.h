#ifndef __SES_PWDIALOG_H__
#define __SES_PWDIALOG_H__

#include <string>

#include <wx/wx.h>

using namespace std;

///////////////////////////////////////////////////////////////////////////////
/// Class SESPWDialog
///////////////////////////////////////////////////////////////////////////////
class SESPWDialog : public wxDialog {
private:
	wxStaticText* m_staticText1;
	wxTextCtrl* pw_entry;
	wxButton* ok_button;
	wxButton* cancel_button;

public:

	//Constructor/destructor
	SESPWDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
	~SESPWDialog();

	//Event handlers
	void OnOK( wxCommandEvent& event );
	void OnCancel( wxCommandEvent& event );

	//Data accessors
	string get_entered(void){return pw_entry->GetValue().ToStdString();}

};



#endif // __SES_PWDIALOG_H__
