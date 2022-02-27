all: output
	./output

output: main.cpp
	g++ main.cpp -o output

clean:
	rm output