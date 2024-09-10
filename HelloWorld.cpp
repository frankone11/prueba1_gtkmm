#include "HelloWorld.h"
#include <iostream>

HelloWorld::HelloWorld(/* args */) :
	m_button ("Hello World!")
{
	set_title("Basic application");
	set_default_size(200, 200);
	set_child(m_button);
	m_button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));
}

HelloWorld::~HelloWorld()
{
}

void HelloWorld::on_button_clicked()
{
	std::cout << "Hello World." << std::endl;
}