#ifndef __HELLOWORLD__
#define __HELLOWORLD__

#include <gtkmm.h>

class HelloWorld : public Gtk::Window
{
private:
	/* data */
public:
	HelloWorld(/* args */);
	~HelloWorld();
	void on_button_clicked();
protected:
	Gtk::Button m_button;
};


#endif //__HELLO_WORLD__