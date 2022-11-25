#include "sespwdialog.h"

//Constructor/Destructor
SESPWDialog::SESPWDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){

	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Enter your password:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL, 5 );

	pw_entry = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_PASSWORD );
	bSizer2->Add( pw_entry, 0, wxALL, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	ok_button = new wxButton( this, wxID_ANY, wxT("OK!"), wxDefaultPosition, wxDefaultSize, 0 );

	ok_button->SetDefault();
	bSizer3->Add( ok_button, 0, wxALL, 5 );


	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

	cancel_button = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( cancel_button, 0, wxALL, 5 );


	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	ok_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SESPWDialog::OnOK ), NULL, this );
	cancel_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SESPWDialog::OnCancel ), NULL, this );
}

SESPWDialog::~SESPWDialog(void){

	ok_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SESPWDialog::OnOK ), NULL, this );
	cancel_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SESPWDialog::OnCancel ), NULL, this );

	delete m_staticText1;
	delete pw_entry;
	delete ok_button;
	delete cancel_button;
}

//Event management
void SESPWDialog::OnOK(wxCommandEvent &event){
	this->EndModal(wxOK);
}

void SESPWDialog::OnCancel(wxCommandEvent &event){
	this->EndModal(wxCANCEL);
}
