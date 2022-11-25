#ifndef __PWSTREAM_PWDIALOG_H__
#define __PWSTREAM_PWDIALOG_H__

#include <wx/wx.h>

class SESPWDialog : public wxDialog {
private:
	wxStaticText* m_staticText1;
	wxTextCtrl* pw_entry;
	wxButton* ok_button;
	wxButton* cancel_button;

	// Virtual event handlers, override them in your derived class
	void OnOK( wxCommandEvent& event ) { event.Skip(); }
	void OnCancel( wxCommandEvent& event ) { event.Skip(); }

public:

	SESPWDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

	~SESPWDialog();

};

#endif // __PWSTREAM_PWDIALOG_H__
