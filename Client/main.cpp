//https://www.fltk.org/doc-1.3/classFl__Table.html
#include "fl_comm.h"
#include "core/button.h"
#include "core/table.h"
#include "tools.h"

template <typename T>
static std::string Concatenate(T t)
{
    std::stringstream ss("");
    ss << t;
    return ss.str();

}

template <typename T, typename... Args>
static std::string Concatenate(T t, Args... args)
{
    return Concatenate(t) + Concatenate(args...);

}



void Clicked() {
  printf("Clicked\n");
}

int main(){
    Fl_Double_Window window(450, 350, "wyClient");                  /* 1. 创建一个窗口 */
    Fl_Group* pGroup = new Fl_Group(50, 50, 400, 150);                  /* 2. 创建一个分组 */
    Fl_Button* pButton = new Fl_Button(70, 50, 150, 30, "Fl_Button");   /* 3. 创建控件 */
    Fl_Check_Button* pChkButton = new Fl_Check_Button(230, 50, 150, 30, "Fl_Check_Button");
    //Fl_Return_Button* pRetButton = new Fl_Return_Button(70, 100, 150, 30, "Fl_Return_Button");
    CButton *x = new CButton(70, 100, 150, 30, "NewButton");
    x->setCallback(Clicked);
    Fl_Radio_Round_Button* pRndButton = new Fl_Radio_Round_Button(230, 100, 150, 30, "Fl_Round_Button");
    pGroup->end();                                                      /* 4. 结束上个容器的创建 */
    // Fl_Text_Editor* pText = new Fl_Text_Editor(50, 150, 350, 150);
    // Fl_Text_Buffer* pBuff = new Fl_Text_Buffer();
    // pText->buffer(pBuff);                                               /* pBuff->text()中的内容就是Fl_Text_Buffer中显示的内容 */
    // pBuff->text("示例文字");
    // pText->end();
    // Fl_Table* table = new Fl_Table(50, 150, 350, 150, "Fl_Table");

    printf(CTools::Concatenate(123,"hehe", 456,'e', 78.9, '\n').c_str());

    CTable* table = new CTable(50, 150, 350, 150);
    table->when(1);
    window.end();                                                       /* 4. 结束上个容器的创建 */
    window.show();                                                      /* 5. 显示窗口 */
    return Fl::run();                                                   /* 6. 运行FLTK主循环 */
}


int main3(int argc, char **argv) {
  Fl_Window *window = new Fl_Window(340,180);
  Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
  window->end();
  window->show(argc, argv);
  return Fl::run();
}

