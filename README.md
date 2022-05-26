# Tempatku Belajar Algorithms, Data Structure, C++, Competitive Programming, dan tentu saja VIM

## Sumber Belajar dan Bookmark

* https://codeforces.com/blog/entry/57282
* https://www.geeksforgeeks.org/how-to-prepare-for-acm-icpc/
* https://blog.shahjalalshohag.com/topic-list/

## My Useful Notes:

#### Cara return array di C++
C++ does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index.
https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm

#### push_back 
Adds a new element at the end of the vector, after its current last element. The content of val is copied (or moved) to the new element.

This effectively increases the container size by one, which causes an automatic reallocation of the allocated storage space if -and only if- the new vector size surpasses the current vector capacity.

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

#### Mengambil satu baris input
```
scanf("%[^\n]%*c", s);
```

#### printf format
```
- %d integer
- %p pointer location
- %x hex
- %c character
- %s string
- %lf float
- %f float
- %.1f float 1 angka di belakang koma
```


#### Using g++, you can use the -I option to specify an alternate include directory.

`g++ -o main -I/source/includes main.cpp`

#### Cara ngeimport file/function
https://stackoverflow.com/questions/15891781/how-to-call-on-a-function-found-on-another-file

#### Kenapa beberapa program menggunakan sync_with_stdio, cin.tie(NULL), cout.tie(NULL)
https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull

#### :: is the scope resolution operator.
http://www.cplusplus.com/forum/beginner/111502/

#### Cara kembali ke file explorer di vim
You can go back to the last buffer using :b#
https://stackoverflow.com/questions/9160499/go-to-back-directory-browsing-after-opening-file-in-vim

#### Penjelasan tentang this
https://www.youtube.com/watch?v=Z_hPJ_EhceI


#### Perbedaan Pair dengan Map
* std::map<X, Y>:

is an ordered structure with respect to keys (that is, when you iterate over it, keys will be always increasing).
supports unique keys (Xs) only
offers fast find() method (O(log n)) which finds the Key-Value pair by Key
offers an indexing operator map[key], which is also fast

* std::list<std::pair<X, Y> >:

is a simple sequence of paired Xs and Ys. They remain in the order you put it in.
can hold any number of duplicates
finding a particular key in a list is O(N) (no special method)
offers the splice method.




## Tips Memakai VIM

#### Starter Template & Themes
https://github.com/Optixal/neovim-init.vim

#### Cara pindah panel/window
* ctrl + w + w

#### Cara menambahkan file
Activate the NERDTree and navigate to the directory in which the new file should live. Then press m to bring up the NERDTree Filesystem Menu and choose a for "add child node". Then simply enter the file's (or directory's name) and you're done.

#### How to find a word in Vi / Vim? 
* To find a word in Vi/Vim, simply type the / or ? key, followed by the word you're searching for.
* Once found, you can press the n key to go directly to the next occurrence of the word.
* Vi/Vim also allows you to launch a search on the word over which your cursor is positioned. To do this, place the cursor over the term, and then press * or # to look it up.

#### Cara resize window di vim
https://vi.stackexchange.com/questions/514/how-do-i-change-the-current-splits-width-and-height

#### Core Shortcut
    , - Map leader, nearly all my custom mappings starts with pressing the comma key
    ,q or \\ - Toggle sidebar filetree viewer (nvim-tree.lua)
    ,r - Refresh/source ~/.config/nvim/init.vim
    ,t - Trim all trailing whitespaces
    ,a - Auto align variables (vim-easy-align), eg. do ,a= while your cursor is on a bunch of variables to align their equal signs
    ,h - Toggle rainbow parentheses highlighting (rainbow-parentheses.vim)
    ,j - Set filetype to "journal" which makes the syntax highlighting beautiful when working on regular text files and markdown
    ,k - Toggle coloring of hex colors
    ,l - Toggle Limelight mode, highlight the lines near cursor only (Limelight)
    ,, - Remove highlights (after searching with /)
    <Tab> - Next buffer
    <Shift-Tab> - Previous buffer
    ,$s - New terminal in horizontal split
    ,$v - New terminal in vertical split

#### Telescope Shortcut
  ,ff - Find files
  ,fg - Live grep from files
  ,fb - Buffers
  ,fh - Help tags
  ,fc - Change colorscheme
  ,f/ - Fuzzy find current buffer

#### Delete
* `d` to delete a character
* `dd` to delete a line

#### Undo dan Redo
* `u` undo
* `ctrl + r` redo

#### Macros di VIM
You start recording by `q<letter>` and you can end it by typing `q` again.
Recording is a really useful feature of Vim.
It records everything you type. You can then replay it simply by typing `@<letter>`. Record search, movement, replacement...

One of the best feature of Vim IMHO.

