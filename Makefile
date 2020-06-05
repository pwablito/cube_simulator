build: *.cpp
	g++ -Wall -Werror -o solve *.cpp
clean:
	rm solve