#include <stdio.h>
//#include "Fl_Types.h"
#include "yscore/Fl_C.h"
//#include "Fl_WindowC.h"

int main(int argc, char** argv)
{
  char* title = "FLTK Window";
  fl_Window win = (fl_Window)Fl_Window_New_WithLabel(500,500,title);
  Fl_check();
  Fl_Window_show(win);
  return Fl_run();
}
