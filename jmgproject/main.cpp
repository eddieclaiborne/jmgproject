#include "std_lib_facilities_4.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_File_Chooser.H>

void upload_cb(Fl_Widget* obj, void*);
void library_cb(Fl_Widget* obj, void*);
void make_intro_window();
void make_upload_window();
void make_library_window();

int main(int argc, char **argv) {
    
    make_intro_window();
    return Fl::run();
}

void make_intro_window(){
    Fl_Window* window = new Fl_Window(800,600,"AggieSnap");
    window->begin();
    
    Fl_Box *tbox = new Fl_Box(200,100,400,100,"AggieSnap");
    tbox->box(FL_NO_BOX);
    tbox->labelfont(FL_BOLD);
    tbox->labelsize(100);
    tbox->labeltype(FL_SHADOW_LABEL);
    
    Fl_Box *dbox = new Fl_Box(200,200,400,100,"The last photo album you'll ever need.");
    dbox->box(FL_NO_BOX);
    dbox->labelfont(FL_BOLD+FL_ITALIC);
    dbox->labelsize(22);
    dbox->labeltype(FL_SHADOW_LABEL);
    
    Fl_Button* lbutton = new Fl_Button(100,400,200,100,"Library");
    lbutton->box(FL_UP_BOX);
    lbutton->labelfont(FL_BOLD);
    lbutton->labelsize(36);
    lbutton->labeltype(FL_SHADOW_LABEL);
    
    Fl_Button* sbutton = new Fl_Button(500,400,200,100,"Upload");
    sbutton->box(FL_UP_BOX);
    sbutton->labelfont(FL_BOLD);
    sbutton->labelsize(36);
    sbutton->labeltype(FL_SHADOW_LABEL);
    window->end();
    
    lbutton->callback( (Fl_Callback*) library_cb);
    sbutton->callback( (Fl_Callback*) upload_cb);
    window->show();
}

void upload_cb(Fl_Widget* obj, void*)
{
    make_upload_window();
}

void library_cb(Fl_Widget* obj, void*)
{
    make_library_window();
}

void make_upload_window(){
    Fl_Window* window = new Fl_Window(800,600,"AggieSnap - Upload");
    window->begin();
    
    
}





