test : test.o animal.o dog.o
	g++  test.o animal.o dog.o -o test
test.o : test.cpp 
	g++ -c test.cpp
animal.o : animal.cpp animal.h
	g++  -c animal.cpp
dog.o : dog.cpp dog.h
	g++ -c dog.cpp

clean: 
	rm animal.o dog.o  test.o *.*.gch