crypto : build/CaesarBox.o build/CryptographyModule.o
	g++ -o crypto build/CaesarBox.o build/CryptographyModule.o 
build/CaesarBox.o : CaesarBox.h CaesarBox.cpp
	g++ -c  CaesarBox.cpp
	mv *.o build
build/CryptographyModule.o : CryptographyModule.cpp
	g++ -c CryptographyModule.cpp
	mv *.o build



