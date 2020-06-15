build: main.cpp cube.cpp
	g++ -Wall -Werror -o solve *.cpp
clean:
	rm solve