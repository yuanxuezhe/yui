#include <stdio.h>
#include "yscore/Fl_C.h"
// #include "Fl_Types.h"
// #include "Fl_WindowC.h"
// #include "Fl_Toggle_ButtonC.h"
// #include "Fl_Light_ButtonC.h"
// #include "Fl_Check_ButtonC.h"
// #include "Fl_Radio_ButtonC.h"
// #include "Fl_ButtonC.h"
void callback_button1(fl_Button b1, void* user_data) {
  printf("%s %s\n", (char*) Fl_Button_label(b1), "has been clicked");
}
void callback_button2(fl_Button b2, void* user_data) {
  printf("%s %s\n", (char*) Fl_Button_label(b2), "has been clicked");
}
void callback_button3_with_user_data(fl_Button b3, void* user_data) {
  printf("%s:%s %s\n", (char*) Fl_Button_label(b3), "Got the user data :", (char*)user_data);
}
int main(int argc, char** argv)
{
  char* title = "FLTK Button Window";
  fl_Window win = (fl_Window)Fl_Window_New_WithLabel(500,500,title);
  Fl_Window_begin(win);
  fl_Button b1 = (fl_Button)Fl_Button_New_WithLabel(20,20,100,100,"Button 1");
  Fl_Button_set_callback(b1,(fl_Callback*)callback_button1);
  fl_Button b2 = (fl_Button)Fl_Button_New_WithLabel(130,20,100,100,"Button 2");
  Fl_Button_set_callback(b2, (fl_Callback*)callback_button2);
  fl_Button b3 = (fl_Button)Fl_Button_New_WithLabel(240,20,100,100,"Button 3");
  char* user_data = "User data";
  Fl_Button_set_callback(b3, (fl_Callback*)callback_button3_with_user_data);
  Fl_Button_set_user_data(b3,(void*)user_data);
  printf("Retrieve user_data directly:%s\n", (char*)Fl_Button_user_data(b3));
  Fl_Window_end(win);
  Fl_Window_show(win);
  return Fl_run();
}
