## Tempatku Belajar Algorithms, Data Structure, CPP, dan hopefully CP

### `My Useful Notes:`

#### To compile: (I forgot this sometime lmao)
`g++ foo.cpp` 
if you want to specify filename 
`g++ -o output foo.cpp`

#### Penggunaan "" beda dengan ''

#### Print an vector
If you're going to use streams, you can also use `ostream_iterator` in conjunction with a looping construct like `copy`:

	vector<string> data;
	data.assign(10, "hello");

	copy( &data[0], &data[3], ostream_iterator<string>(cout, " "));

Note that the second parameter to `copy` points to one past the end. 