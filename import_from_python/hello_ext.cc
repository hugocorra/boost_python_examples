#include <memory>
#include <boost/python.hpp>
#include <boost/python/signature.hpp>


namespace bp = boost::python;

class Card
{
public:
	Card(std::string name, std::string text) :
		_name(name),
		_text(text)
	{
	}

	std::string _name;
	std::string _text;		

};


void callme()
{
	bp::object derived = bp::import("fire").attr("Fire_Spirit");
	bp::object class_instance = derived();
	Card* card = bp::extract< Card* >(class_instance);

	std::cout << card->_name << std::endl;
	std::cout << card->_text << std::endl;
}


BOOST_PYTHON_MODULE(hello_ext)
{
	bp::class_<Card>("Card", bp::init<std::string, std::string>());
	bp::def("callme", callme);
}

