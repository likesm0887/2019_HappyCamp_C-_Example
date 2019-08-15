.PHONY: clean

test/ut_example: src/triangle.h obj/triangle.o src/circle.h obj/circle.o src/square.h obj/square.o
	g++ -std=c++11 test/ut_example.cpp obj/triangle.o obj/circle.o obj/square.o -o bin/example -lgtest -lpthread

obj/triangle.o: src/triangle.cpp src/triangle.h
	g++ -std=c++11 -c $< -o $@

obj/circle.o: src/circle.cpp src/circle.h
	g++ -std=c++11 -c $< -o $@

obj/square.o: src/square.cpp src/square.h
	g++ -std=c++11 -c $< -o $@

clean:
	rm bin/example
