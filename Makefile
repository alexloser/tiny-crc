# Makefile of test tiny-crc
.PHONY: all test

CXX = g++ -std=c++11 -m64 -Wall -O2 -D_GNU_SOURCE -DBDEBUG -march=native -mcrc32
CC =  gcc -std=c99   -m64 -Wall -O2 -D_GNU_SOURCE -DBDEBUG -march=native -mcrc32

all: clean
	$(CC)   test.c crc.c 	-o test_c
	$(CXX) 	test.cpp crc.c 	-o test_cxx
	$(CXX) -DUSE_BOOST_LIB test.cpp crc.c -o test_cxx_boost	

test:
	./test_c
	./test_cxx
	./test_cxx_boost

clean:
	rm -rf ./*.o ./test_*
