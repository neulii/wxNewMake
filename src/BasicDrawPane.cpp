#include "BasicDrawPane.h"
#include "BarGraphSet.h"
#include "BarGraph.h"


BEGIN_EVENT_TABLE(BasicDrawPane, wxPanel)
// some useful events
/*
 EVT_MOTION(BasicDrawPane::mouseMoved)
 EVT_LEFT_DOWN(BasicDrawPane::mouseDown)
 EVT_LEFT_UP(BasicDrawPane::mouseReleased)
 EVT_RIGHT_DOWN(BasicDrawPane::rightClick)
 EVT_LEAVE_WINDOW(BasicDrawPane::mouseLeftWindow)
 EVT_KEY_DOWN(BasicDrawPane::keyPressed)
 EVT_KEY_UP(BasicDrawPane::keyReleased)
 EVT_MOUSEWHEEL(BasicDrawPane::mouseWheelMoved)
 */

// catch paint events
EVT_PAINT(BasicDrawPane::paintEvent)

END_EVENT_TABLE()

//test�nderung
BasicDrawPane::BasicDrawPane(wxFrame* parent) :
    wxPanel(parent)
{
    

    wxSize panelSize(700,450);
    wxPoint panelPosition(15,50);

    
    SetPosition(panelPosition);
    SetSize(panelSize);

    SetBackgroundColour(wxColor(255, 212, 252));



}

/*
 * Called by the system of by wxWidgets when the panel needs
 * to be redrawn. You can also trigger this call by
 * calling Refresh()/Update().
 */

void BasicDrawPane::paintEvent(wxPaintEvent& evt)
{
    wxPaintDC dc(this);
    render(dc);
}

/*
 * Alternatively, you can use a clientDC to paint on the panel
 * at any time. Using this generally does not free you from
 * catching paint events, since it is possible that e.g. the window
 * manager throws away your drawing when the window comes to the
 * background, and expects you will redraw it when the window comes
 * back (by sending a paint event).
 *
 * In most cases, this will not be needed at all; simply handling
 * paint events and calling Refresh() when a refresh is needed
 * will do the job.
 */
void BasicDrawPane::paintNow()
{
    wxClientDC dc(this);
    render(dc);
}

/*
 * Here we do the actual rendering. I put it in a separate
 * method so that it can work no matter what type of DC
 * (e.g. wxPaintDC or wxClientDC) is used.
 */
void BasicDrawPane::render(wxDC& dc)
{
    
    //BarGraphSet values;
    BarGraph* test = new BarGraph(10);
    std::string ds;
    //test->setRange(100);

    ds = "range: " + std::to_string(test->getRange());
   
    BarGraphSet* set = new BarGraphSet(10,100);

   

    // draw some text
    dc.DrawText(ds.c_str(), 40, 60);
    /*

    // draw a circle
    dc.SetBrush(*wxGREEN_BRUSH); // green filling
    dc.SetPen(wxPen(wxColor(255, 0, 0), 5)); // 5-pixels-thick red outline
    dc.DrawCircle(wxPoint(200, 100), 25 );

    // draw a rectangle
    dc.SetBrush(*wxBLUE_BRUSH); // blue filling
    dc.SetPen(wxPen(wxColor(255, 175, 175), 10)); // 10-pixels-thick pink outline
    dc.DrawRectangle(100, 100, 400, 200);

    // draw a line
    dc.SetPen(wxPen(wxColor(0, 0, 0), 3)); // black line, 3 pixels thick
    dc.DrawLine(300, 100, 700, 300); // draw line across the rectangle

    // Look at the wxDC docs to learn how to draw other stuff
    */
}