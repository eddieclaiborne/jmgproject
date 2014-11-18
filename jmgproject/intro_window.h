#include "std_lib_facilities_4.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_File_Chooser.H> 

#ifndef jmgproject_intro_window_h
#define jmgproject_intro_window_h

class intro_window : public Fl_Window{
public:
    
private:
    int x;
    int y;
    const char* title;
    
};


#endif
