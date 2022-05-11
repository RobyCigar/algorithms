# Tempatku Belajar Algorithms, Data Structure, C++, Competitive Programming, dan tentu saja VIM

## Sumber Belajar dan Bookmark

* https://codeforces.com/blog/entry/57282
* https://www.geeksforgeeks.org/how-to-prepare-for-acm-icpc/
* https://blog.shahjalalshohag.com/topic-list/

## My Useful Notes:

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


#### printf format
```
- %d integer
- %p pointer location
- %x hex
- %s string
- %lf float
- %f float
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

## Tips Memakai VIM

#### Starter Template & Themes
https://github.com/Optixal/neovim-init.vim

#### Cara pindah panel/window
<ctrl> + w + w

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

