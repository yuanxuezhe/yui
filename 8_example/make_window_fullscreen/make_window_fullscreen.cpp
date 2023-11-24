#include <stdio.h>
#include "yscore/Fl_C.h"
// #include "Fl_Types.h"
// #include "Fl_WindowC.h"

int main(int argc, char** argv)
{
  fl_Window win = (fl_Window)Fl_Window_NewXY_WithLabel(640,480,100,100,"FLTK Window");
  Fl_Window_show_with_args(win, argc, argv);
  Fl_Window_fullscreen(win);
  return Fl_run();
}
