#include "main.h"
#include "simple.h"
#include "BarGraph.h"


IMPLEMENT_APP(MyApp);




bool MyApp::OnInit()
{
	

	Simple* simple = new Simple(wxT("super"));
	simple->Show(true);
	return true;
}