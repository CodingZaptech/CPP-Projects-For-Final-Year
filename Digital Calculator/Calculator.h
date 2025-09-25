#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <gtkmm.h>
#include <string>

class Calculator : public Gtk::Window {
public:
    Calculator();
    virtual ~Calculator();

protected:
    // Signal handlers
    void on_button_clicked(std::string value);

    // Widgets
    Gtk::Box vbox;
    Gtk::Entry display;
    Gtk::Grid grid;

    // Helper
    std::string expression;
};

