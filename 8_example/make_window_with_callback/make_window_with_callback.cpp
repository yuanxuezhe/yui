#include <stdio.h>
#include "yscore/Fl_C.h"
//#include "Fl_Types.h"
//#include "Fl_WindowC.h"
void my_callback(fl_Window w, void* user_data) {
  puts("The title of this window is:");
  puts((const char*)Fl_Window_label(w));
  Fl_Window_hide(w);
  Fl_Window_Destroy(w);
}
int main(int argc, char** argv)
{
  fl_Window win = (fl_Window)Fl_Window_NewXY_WithLabel(640,480,500,500,"FLTK Window");
  Fl_Window_set_callback(win,(fl_Callback*)my_callback);
  Fl_Window_show(win);
  return Fl_run();
}
