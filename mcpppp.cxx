// generated by Fast Light User Interface Designer (fluid) version 1.0306

#include "mcpppp.h"

void UI::cb_log_i(Fl_Input* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_log(Fl_Input* o, void* v) {
  ((UI*)(o->parent()->user_data()))->cb_log_i(o,v);
}

void UI::cb_timestamptrue_i(Fl_Button* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_timestamptrue(Fl_Button* o, void* v) {
  ((UI*)(o->parent()->parent()->user_data()))->cb_timestamptrue_i(o,v);
}

void UI::cb_timestampfalse_i(Fl_Button* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_timestampfalse(Fl_Button* o, void* v) {
  ((UI*)(o->parent()->parent()->user_data()))->cb_timestampfalse_i(o,v);
}

void UI::cb_outputlevel_i(Fl_Counter* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_outputlevel(Fl_Counter* o, void* v) {
  ((UI*)(o->parent()->user_data()))->cb_outputlevel_i(o,v);
}

void UI::cb_loglevel_i(Fl_Counter* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_loglevel(Fl_Counter* o, void* v) {
  ((UI*)(o->parent()->user_data()))->cb_loglevel_i(o,v);
}

void UI::cb_autoreconverttrue_i(Fl_Button* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_autoreconverttrue(Fl_Button* o, void* v) {
  ((UI*)(o->parent()->parent()->user_data()))->cb_autoreconverttrue_i(o,v);
}

void UI::cb_autoreconvertfalse_i(Fl_Button* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_autoreconvertfalse(Fl_Button* o, void* v) {
  ((UI*)(o->parent()->parent()->user_data()))->cb_autoreconvertfalse_i(o,v);
}

void UI::cb_fsbtransparenttrue_i(Fl_Button* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_fsbtransparenttrue(Fl_Button* o, void* v) {
  ((UI*)(o->parent()->parent()->user_data()))->cb_fsbtransparenttrue_i(o,v);
}

void UI::cb_fsbtransparentfalse_i(Fl_Button* o, void* v) {
  settingchanged(o, v);
}
void UI::cb_fsbtransparentfalse(Fl_Button* o, void* v) {
  ((UI*)(o->parent()->parent()->user_data()))->cb_fsbtransparentfalse_i(o,v);
}

void UI::cb_Close_i(Fl_Button*, void*) {
  path_warning->hide();
}
void UI::cb_Close(Fl_Button* o, void* v) {
  ((UI*)(o->parent()->user_data()))->cb_Close_i(o,v);
}

UI::UI() {
  { window = new Fl_Double_Window(660, 420, "MCPPPP");
    window->color((Fl_Color)48);
    window->user_data((void*)(this));
    { Fl_Button* o = new Fl_Button(445, 370, 190, 30, "Run");
      o->tooltip("Start conversion process");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->labelfont(1);
      o->labelsize(16);
      o->callback((Fl_Callback*)run);
    } // Fl_Button* o
    { // Output in place of stdout
      text_display = new Fl_Text_Display(25, 40, 395, 275);
      text_display->box(FL_BORDER_BOX);
      text_display->textfont(4);
    } // Fl_Text_Display* text_display
    { Fl_Check_Button* o = new Fl_Check_Button(25, 380, 56, 16, "FSB");
      o->tooltip("FabricSkyboxes");
      o->down_box(FL_DOWN_BOX);
      o->value(1);
      o->callback((Fl_Callback*)conversion);
      o->when(FL_WHEN_CHANGED);
    } // Fl_Check_Button* o
    { Fl_Check_Button* o = new Fl_Check_Button(185, 380, 56, 16, "VMT");
      o->tooltip("Varied Mob Textures");
      o->down_box(FL_DOWN_BOX);
      o->value(1);
      o->callback((Fl_Callback*)conversion);
      o->when(FL_WHEN_CHANGED);
    } // Fl_Check_Button* o
    { Fl_Check_Button* o = new Fl_Check_Button(360, 380, 56, 16, "CIM");
      o->tooltip("Chime");
      o->down_box(FL_DOWN_BOX);
      o->value(1);
      o->callback((Fl_Callback*)conversion);
      o->when(FL_WHEN_CHANGED);
    } // Fl_Check_Button* o
    { scroll = new Fl_Scroll(445, 55, 190, 260, "Resourcepacks to convert");
      scroll->color((Fl_Color)48);
      { // padding
        Fl_Check_Button* o = new Fl_Check_Button(445, 60, 190, 15);
        o->down_box(FL_DOWN_BOX);
        o->labeltype(FL_NO_LABEL);
        o->hide();
        o->deactivate();
      } // Fl_Check_Button* o
      scroll->end();
    } // Fl_Scroll* scroll
    { Fl_Button* o = new Fl_Button(355, 330, 64, 25, "Browse");
      o->tooltip("Browse for resourcepacks folders");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)browse);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(445, 330, 110, 25, "Reload");
      o->tooltip("Reload list of resourcepacks");
      o->box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)reload);
    } // Fl_Button* o
    { path_input = new Fl_Input(120, 330, 225, 24, "Resourcepacks: ");
      path_input->tooltip("Input resourcepacks folder manually");
      path_input->box(FL_BORDER_BOX);
      path_input->labelsize(12);
      path_input->textsize(12);
      path_input->callback((Fl_Callback*)editpath);
      path_input->align(Fl_Align(36));
      path_input->when(FL_WHEN_CHANGED);
    } // Fl_Input* path_input
    { Fl_Button* o = new Fl_Button(25, 10, 65, 20, "Settings");
      o->tooltip("Edit Settings");
      o->box(FL_FLAT_BOX);
      o->down_box(FL_FLAT_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)opensettings);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(570, 10, 65, 20, "Help");
      o->tooltip("Open help screen");
      o->box(FL_FLAT_BOX);
      o->down_box(FL_FLAT_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)openhelp);
    } // Fl_Button* o
    { box1 = new Fl_Box(25, 10, 65, 20);
      box1->box(FL_BORDER_FRAME);
      box1->color((Fl_Color)34);
    } // Fl_Box* box1
    { box2 = new Fl_Box(570, 10, 65, 20);
      box2->box(FL_BORDER_FRAME);
      box2->color((Fl_Color)34);
    } // Fl_Box* box2
    { allpacks = new Fl_Check_Button(570, 330, 59, 25, "All");
      allpacks->tooltip("Select/Deselect all resourcepacks");
      allpacks->down_box(FL_DOWN_BOX);
      allpacks->value(1);
      allpacks->callback((Fl_Callback*)selectall);
      allpacks->when(FL_WHEN_CHANGED);
    } // Fl_Check_Button* allpacks
    window->end();
  } // Fl_Double_Window* window
  { edit_paths = new Fl_Double_Window(269, 300, "Edit Paths");
    edit_paths->color((Fl_Color)48);
    edit_paths->user_data((void*)(this));
    { Fl_Button* o = new Fl_Button(10, 270, 120, 20, "Add");
      o->tooltip("Browse for resourcepacks folder");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)addrespath);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(140, 270, 120, 20, "Delete");
      o->tooltip("Remove selected folder");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)deleterespath);
    } // Fl_Button* o
    { paths = new Fl_Scroll(10, 15, 250, 245);
      paths->box(FL_BORDER_BOX);
      paths->color(FL_BACKGROUND2_COLOR);
      paths->labeltype(FL_NO_LABEL);
      paths->end();
    } // Fl_Scroll* paths
    edit_paths->end();
  } // Fl_Double_Window* edit_paths
  { settings = new Fl_Double_Window(300, 260, "Settings");
    settings->user_data((void*)(this));
    { Fl_Box* o = new Fl_Box(10, 10, 120, 20, "log");
      o->tooltip("A log file where logs will be stored");
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(10, 40, 120, 20, "timestamp");
      o->tooltip("Whether to add timestamp to console");
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(10, 70, 120, 20, "outputLevel");
      o->tooltip("How much info should be outputted \\n1 Spam\\n2 Info\\n3 Important\\n4 Warnin\
g\\n5 Error");
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(10, 100, 120, 20, "logLevel");
      o->tooltip("Same as outputLevel, but for logs");
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(10, 130, 120, 20, "autoReconvert");
      o->tooltip("Automatically reconvert resourcepacks instead of skipping. Could lose data if\
 a pack isn\'t converted with MCPPPP");
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(10, 160, 120, 20, "fsbTransparent");
      o->tooltip("Make Fabricskyboxes skyboxes partially transparent to match with optifine. FS\
B has minor issues with transparency, some parts may not show");
      o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { log = new Fl_Input(140, 10, 150, 20);
      log->box(FL_BORDER_BOX);
      log->labeltype(FL_NO_LABEL);
      log->callback((Fl_Callback*)cb_log);
      log->when(FL_WHEN_CHANGED);
    } // Fl_Input* log
    { Fl_Group* o = new Fl_Group(140, 40, 150, 20);
      { timestamptrue = new Fl_Button(140, 40, 75, 20, "True");
        timestamptrue->type(102);
        timestamptrue->box(FL_FLAT_BOX);
        timestamptrue->down_box(FL_BORDER_BOX);
        timestamptrue->value(1);
        timestamptrue->color(FL_DARK2);
        timestamptrue->selection_color((Fl_Color)43);
        timestamptrue->callback((Fl_Callback*)cb_timestamptrue);
      } // Fl_Button* timestamptrue
      { timestampfalse = new Fl_Button(215, 40, 75, 20, "False");
        timestampfalse->type(102);
        timestampfalse->box(FL_FLAT_BOX);
        timestampfalse->down_box(FL_BORDER_BOX);
        timestampfalse->color(FL_DARK2);
        timestampfalse->selection_color((Fl_Color)43);
        timestampfalse->callback((Fl_Callback*)cb_timestampfalse);
      } // Fl_Button* timestampfalse
      o->end();
    } // Fl_Group* o
    { outputlevel = new Fl_Counter(140, 70, 150, 20);
      outputlevel->box(FL_BORDER_BOX);
      outputlevel->labeltype(FL_NO_LABEL);
      outputlevel->minimum(1);
      outputlevel->maximum(5);
      outputlevel->step(1);
      outputlevel->value(3);
      outputlevel->callback((Fl_Callback*)cb_outputlevel);
    } // Fl_Counter* outputlevel
    { loglevel = new Fl_Counter(140, 100, 150, 20);
      loglevel->box(FL_BORDER_BOX);
      loglevel->labeltype(FL_NO_LABEL);
      loglevel->minimum(1);
      loglevel->maximum(5);
      loglevel->step(1);
      loglevel->value(2);
      loglevel->callback((Fl_Callback*)cb_loglevel);
    } // Fl_Counter* loglevel
    { Fl_Group* o = new Fl_Group(140, 125, 150, 25);
      { autoreconverttrue = new Fl_Button(140, 130, 75, 20, "True");
        autoreconverttrue->type(102);
        autoreconverttrue->box(FL_FLAT_BOX);
        autoreconverttrue->down_box(FL_BORDER_BOX);
        autoreconverttrue->color(FL_DARK2);
        autoreconverttrue->selection_color((Fl_Color)43);
        autoreconverttrue->callback((Fl_Callback*)cb_autoreconverttrue);
      } // Fl_Button* autoreconverttrue
      { autoreconvertfalse = new Fl_Button(215, 130, 75, 20, "False");
        autoreconvertfalse->type(102);
        autoreconvertfalse->box(FL_FLAT_BOX);
        autoreconvertfalse->down_box(FL_BORDER_BOX);
        autoreconvertfalse->value(1);
        autoreconvertfalse->color(FL_DARK2);
        autoreconvertfalse->selection_color((Fl_Color)43);
        autoreconvertfalse->callback((Fl_Callback*)cb_autoreconvertfalse);
      } // Fl_Button* autoreconvertfalse
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(140, 155, 150, 25);
      { fsbtransparenttrue = new Fl_Button(140, 160, 75, 20, "True");
        fsbtransparenttrue->type(102);
        fsbtransparenttrue->box(FL_FLAT_BOX);
        fsbtransparenttrue->down_box(FL_BORDER_BOX);
        fsbtransparenttrue->color(FL_DARK2);
        fsbtransparenttrue->selection_color((Fl_Color)43);
        fsbtransparenttrue->callback((Fl_Callback*)cb_fsbtransparenttrue);
      } // Fl_Button* fsbtransparenttrue
      { fsbtransparentfalse = new Fl_Button(215, 160, 75, 20, "False");
        fsbtransparentfalse->type(102);
        fsbtransparentfalse->box(FL_FLAT_BOX);
        fsbtransparentfalse->down_box(FL_BORDER_BOX);
        fsbtransparentfalse->value(1);
        fsbtransparentfalse->color(FL_DARK2);
        fsbtransparentfalse->selection_color((Fl_Color)43);
        fsbtransparentfalse->callback((Fl_Callback*)cb_fsbtransparentfalse);
      } // Fl_Button* fsbtransparentfalse
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(10, 200, 280, 25, "Save");
      o->tooltip("Save settings");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)savesettings);
    } // Fl_Button* o
    { savewarning = new Fl_Box(10, 230, 280, 20, "Warning: unsaved changes");
      savewarning->labelfont(1);
      savewarning->labelcolor((Fl_Color)1);
      savewarning->hide();
    } // Fl_Box* savewarning
    settings->end();
  } // Fl_Double_Window* settings
  { help = new Fl_Window(400, 320, "Help");
    help->user_data((void*)(this));
    { Fl_Help_View* o = new Fl_Help_View(0, 0, 400, 320);
      o->box(FL_FLAT_BOX);
      o->value("<html><body><p>Hi there, welcome to MCPPPP.</p><p>To begin, click the Browse button to browse for a path. Click the Add button and locate your Minecraft resourceapcks folder.<br><strong>IMPORTANT: </strong>This should be .minecraft/resourcepacks, not the resourcepack itself.<br>At the bottom, select which conversions you want to do, and select which resourcepacks to convert at the right (you may need to reload first).<br>When you are done with that, you may press the Run button to start the conversion process.</p><p>For additional support, please check out <a href=\"https://github.com/supsm/MCPPPP/blob/master/GUI.md\">https://github.com/supsm/MCPPPP/blob/master/GUI.md</a></p></body></html>");
      o->textsize(16);
    } // Fl_Help_View* o
    help->end();
  } // Fl_Window* help
  { tempfound = new Fl_Window(200, 160, "mcpppp-temp");
    tempfound->user_data((void*)(this));
    { Fl_Box* o = new Fl_Box(10, 10, 180, 100, "mcpppp-temp folder was found. It may contain important information if you cre\
ated it yourself. Do you want to delete it?");
      o->align(Fl_Align(FL_ALIGN_WRAP));
    } // Fl_Box* o
    { Fl_Button* o = new Fl_Button(10, 120, 85, 20, "Yes");
      o->tooltip("Delete mcpppp-temp");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)deletetemp);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(105, 120, 85, 20, "No");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)dontdeletetemp);
    } // Fl_Button* o
    tempfound->end();
  } // Fl_Window* tempfound
  { path_warning = new Fl_Window(200, 160, "Warning");
    path_warning->user_data((void*)(this));
    { Fl_Box* o = new Fl_Box(10, 10, 180, 100, "Potentially incorrect path detected. Make sure the path inputted is the path \
of the resourcepacks folder, instead of any individual resource pack.");
      o->align(Fl_Align(FL_ALIGN_WRAP));
    } // Fl_Box* o
    { Fl_Button* o = new Fl_Button(10, 125, 85, 20, "Close");
      o->box(FL_BORDER_BOX);
      o->down_box(FL_BORDER_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)43);
      o->callback((Fl_Callback*)cb_Close);
    } // Fl_Button* o
    { dontshowwarning = new Fl_Check_Button(100, 125, 90, 20, "Don\'t show");
      dontshowwarning->down_box(FL_DOWN_BOX);
    } // Fl_Check_Button* dontshowwarning
    path_warning->end();
  } // Fl_Window* path_warning
}

void UI::show() {
  window->show();
}
