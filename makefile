.PHONY: clean

test/ut_example: src/triangle.h 
	g++ -std=c++11 test/ut_example.cpp  -o bin/example -lgtest -lpthread

clean:
	rm bin/example
