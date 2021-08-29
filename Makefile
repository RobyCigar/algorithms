src = toki 

compile:
	cd $(src) && g++ -o output main.cpp && ./output

compiles:
	cd $(src) && g++ -o output additionalfile.cpp main.cpp && ./output

test: build.cpp
	cd $(src) && ./output < input.txt > output.txt

build.cpp:
	cd $(src) && g++ -o output main.cpp 

clean:
	cd $(src) && rm -f output