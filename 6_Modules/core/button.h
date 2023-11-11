#pragma once

#include "fl_comm.h"

typedef void (*Callback)();

class DLLExport CButton : public Fl_Button {
     
public:
    
    CButton(int X, int Y, int W, int H, char *title = 0): Fl_Button(X, Y, W, H, title) {
    }
    
    virtual ~CButton() {
    }
    
    void draw();

    void setCallback(Callback callback);

private:
    Callback callback;
};
