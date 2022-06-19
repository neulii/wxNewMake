#pragma once
#include "wx/wxprec.h"

#include "BasicDrawPane.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif


#define ACTION_ID 1
#define INPUT_ID 2
#define MAINPANEL_ID 3
#define PPANEL_ID 4

const wxSize WINDOW_SIZE(800, 700);



class Simple : public wxFrame{

private:
	//wxStaticText* closeText = nullptr;
	//wxTextCtrl* inputText = nullptr;
	wxPanel* mainPanel = nullptr;

	wxPanel* paintPanel = nullptr;
	BasicDrawPane* bdp = nullptr;
	
	


public:
	Simple(const wxString& title);

	void onCloseButtonClick(wxCommandEvent& event);
	void pressMeActionClick(wxCommandEvent& event);

	void OnPaint(wxPaintEvent& event);
	



};

