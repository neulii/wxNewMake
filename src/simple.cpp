#include "simple.h"
#include <OpenXLSX.hpp>

#include <iostream>



using namespace std;
using namespace OpenXLSX;


Simple::Simple(const wxString& title)
	:wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition,WINDOW_SIZE)
{


	mainPanel = new wxPanel(this, MAINPANEL_ID);


	wxButton* closeButton = new wxButton(mainPanel, wxID_EXIT, "Beenden", wxPoint(20, 20));
	wxButton* actionButton = new wxButton(mainPanel, ACTION_ID, "Press me for Action", wxPoint(100, 20));


	//Input Textfield + caption
	//wxStaticText* inputCaptionLabel = new wxStaticText(mainPanel, wxID_ANY, "Hier eingabe machen: ", wxPoint(100, 150));
	//inputText = new wxTextCtrl(mainPanel, INPUT_ID, "", wxPoint(230, 150));

	//closeText = new wxStaticText(mainPanel, wxID_ANY, "zum Beenden klicken", wxPoint(0, 30));

	
	wxColour* minimalBlue = new wxColour(172, 199, 242);


	//Connect buttons to action
	Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Simple::onCloseButtonClick));
	Connect(ACTION_ID, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Simple::pressMeActionClick));
	
	//testing painting on panel
	mainPanel->Connect(wxEVT_PAINT, wxPaintEventHandler(Simple::OnPaint));
	
	bdp = new BasicDrawPane((wxFrame*)mainPanel);

	//bdp->SetBackgroundColour(*minimalBlue);

	//inputText->SetFocus();

	Centre();
}

//closing button
void Simple::onCloseButtonClick(wxCommandEvent& WXUNUSED(event))
{
	Close(true);
}


//check input
void Simple::pressMeActionClick(wxCommandEvent& WXUNUSED(event))
{
   


	
	
	mainPanel->Refresh();

	//message dialog
	/*
	wxMessageDialog* dial = new wxMessageDialog(NULL,
		"Hello", wxT("Info"), wxOK);
	dial->ShowModal();
	
	*/


}


//here is the place to paint on wxframe
void Simple::OnPaint(wxPaintEvent& event)
{
	/*
	wxPaintDC dc(this);

	wxCoord x1 =0, y1 = 0;
	wxCoord x2 = 50, y2 = 50;

	dc.DrawLine(x1, y1, x2, y2);
	dc.DrawText(wxT("Лев Николaевич Толстoй"), 40, 60);
	*/
}


