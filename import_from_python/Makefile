# location of the Python header files
  
PYTHON_VERSION = 2.7
PYTHON_INCLUDE = /usr/include/python$(PYTHON_VERSION)
NPYTHON_INCLUDE = /usr/lib64/python2.7/site-packages/numpy/core/include/

 
# location of the Boost Python include files and library
 
BOOST_INC = /usr/include
BOOST_LIB = /usr/lib
 
# compile mesh classes
TARGET = hello_ext
#  
$(TARGET).so: $(TARGET).o
	g++ -shared -Wl,--export-dynamic $(TARGET).o -L$(BOOST_LIB) -lboost_python -L/usr/lib/python$(PYTHON_VERSION)/config -lpython$(PYTHON_VERSION) -o $(TARGET).so
  	 
$(TARGET).o: $(TARGET).cc
	g++ -I$(PYTHON_INCLUDE) -I$(BOOST_INC) -I$(NPYTHON_INCLUDE) -fPIC -c $(TARGET).cc
