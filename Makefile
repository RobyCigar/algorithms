src = src 

compile:
	cd $(src) && g++ -o output index.cpp && ./output

test: build.cpp
	cd $(src) && ./output < input.txt > output.txt

build.cpp:
	cd $(src) && g++ -o output index.cpp 

clean:
	cd $(src) && rm -f output