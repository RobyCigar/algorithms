#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> data;
	data.assign(10, "hello");

	copy( &data[0], &data[3], ostream_iterator<string>(cout, " "));

	return 0;
}