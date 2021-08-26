## Tempatku Belajar Algorithms, Data Structure, CPP, dan hopefully CP

### `My Useful Notes:`

#### To compile: (I forgot this sometime lmao)
`g++ foo.cpp` 
if you want to specify filename 
`g++ -o output foo.cpp`

#### Penggunaan "" beda dengan ''

#### C++ nggak bisa ngeprint array tanpa loop!

#### Print an vector

If you're going to use streams, you can also use `ostream_iterator` in conjunction with a looping construct like `copy`:

	vector<string> data;
	data.assign(10, "hello");

	copy( &data[0], &data[3], ostream_iterator<string>(cout, " "));

Note that the second parameter to `copy` points to one past the end. 


#### Why uses set?

The choice of which set implementation to use is often a matter of taste. The
benefit of the set structure is that it maintains the order of the elements and
provides functions that are not available in unordered_set . On the other hand,
unordered_set can be more efficient.

#### *.hpp vs *.h
https://stackoverflow.com/questions/152555/h-or-hpp-for-your-class-definitions