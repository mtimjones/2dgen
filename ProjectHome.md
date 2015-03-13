Experiments with a 2D terrain generator for curses-based games.

```
mtj@mtj-desktop:~/2dgen$ ./2dgen 
.....................................^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^...........................................................................
.....................................^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^.............................................................................
.....................................^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^............................................................................
...................................^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..............................................................................
..................................^^^^.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..............................................................................
.................................^^^^.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..............................................................................
.................................^^^^.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..............................................................................
................................^^^^^..^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^.^^....^.......................................................................
...............................^.^^....^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..^^...^...%%%..................................................................
..............................^...^....^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..^.........%%%..................................................................
...............................^.......^^^^^^^^^^^^^^^^^^^^^^^^^^^^^.^.^.........%%%..%.........................^.....................................
................................^.......^^^^^^^^^^^^^^^^^^^^^^^^^^^^^...^...^..%%%%%%%%%..............................................................
..........................................^^^^^^^^^^^^^^^^^^^^^^^^^^^...^....^%%%%%%%%%%.....^^...............^.............^^........................
...........................................^^^^^^^^^^^^^^^^^^^^^^^^^.....^...%.%%%%%%%%%%%...^^.............^^^^^^.......^.^^^^.......................
...........................................^^^^^^^^^^^^^^^^^^^^^^.^.^.^..^^%%%%%%%%%%%%%%%%..^^^............^^^^^^^....^^^^^^^^^.^^...................
...........................................^^^^^^^^^^^^^^^^^.^^..^........%%%%%%%%%%%%%%%%%.^...^..........^^^^^^^^^^^^^^^^^^^^^^^....................
...........................................^^^^^^^^^^^^^^^^.....^.........%%%%%%%%%%%%%%%%.......^......^^^^^^^^^^^^^^^^^^^^^^^^^^^...................
...........................................^^^^^^^^^^.^..^^^^..^.^.......%%%%%%%%%%%%%%%%.......^.....^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..............
............................................^^^^^^^^....^^^^^.^.........%%%%%%%%%%%%%%%%%%.............^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^.............
.............................................^^...^.....^.^............%%%%%%%%%%%%%%%%%%%...............^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^.............
.................%%..........................^...^.............^...^^....%%%%%%%%%%%%%%%%%.%.........^^..^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^............
....................%%%%%..............^......^^........^...........^...%%%%%%%%%%%%%%%%%%....^......^...^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^............
................%%.%%%%%%%%..%%%%.....^^^^^^.^^^^^.......^...............%%%%%%%%%%%%%%%%%%...^^...............^^^^^^^^^^^^^^^^^^^^^^^^^^^^...........
................%%%%%%%%%%%%%%%%%..........^.^^^^^...^....^^............%%%%%%%%%%%%%%%%%%%%..^.........^^^....^^^^^^^^^^^^^^^^^^^^^^^^^^^^^..........
................%%%%%%%%%%%%%%%%%%.........^^^.^^^^^^...^................%%%%%%%%%%%%%%%%%%%%..........^..^^...^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^.........
................%%%%%%%%%%%%%%%%%%.......^^^^.^^^^^^^....^...............%%%%%%%%%%%%%%%%%%%%%.%........^.^^....^^^^^^^^^^^^^^^^^^^^^^^^^^^^.^........
...........^...%%%%%%%%%%%%%%%%%%%%%.....^^^^^^^^^^^^.^^^................%%%%%%%%%%%%%%%%%%%%%.........^^^^.^......^^^^^^^^^^^^^^^^^^^^^^^^^..........
.......^^^^.....%%%%%%%%%%%%%%%%%%%%.....^^^^^^^^^^^^^^^.^.............%.%%%%%%%%%%%%%%%%%%%%%.........^^^^^.......^^^^^^^^^^^^^^^^^^^^^^^^^..........
......^^^^^^^...%%%%%%%%%%%%%%%%%%%%.....^^^^^^^^^^^^^^^^^^............%...%.....%%%%%%%%%%%%%........^^^^..^.^^...^^^^^^^^^^^^^^^^.^....^^^^.........
......^^^^^^^...%%%%%%%%%%%%%%%%%%%...^..^^^^^^^^^^^^^^^^.^......................%%%%%%%%%%%%%%%%.........^..^^....^...^^^^^^^^^^^.....^^^^^..........
......^^^^^^^^^.%%%%%%%%%%%%%%%%%.%%.^^^^^^^^^^^^^^^^^^^^.......................%%%%%%%%%%%%%%%%.%............^...^.....^^^^^^.^.^^..^....^^..........
......^^^^^^....%%%%%%%%%%%%%%%%..%%..^^^^^^^^^^^^^^^^^^^^..............%.......%%%%%%%%%%%%.%..........................^^..^.^......^^....^..........
.....^^^^^^.....%%%%%%%%%%%%%%....%.%^..^^^^^^^^^^^^^^^^^.^^...........%..%....%...%..%%%%%%.........................................^.^..............
......^^^^^.....%%%%%%%%%%%%%%...........^^^^^^^^^^^^^....^^............%%.....%......%%%%%..%....%.........................^.......^.................
....^...^^^......%%%%%%%%%%%%%%%..........^^^^^^^^^^^^^....^...........%......%%.......%%%%..%.......................................^................
..^.......^^....%%%%%%%%%%%%%%%%%........^^.^^^^^^^^^^^................%%....%........%%..%.%.%.......................................................
..^......^^.^..%..%%%%%%%%%%%%%%%%.......^^...^^^^^^^^^......................%.......%%.%%%%%....%.............^......................................
........^^^^^.%...%%%%%%%%%%%%%%%%........^^...^^^^^^^^^......................%........%%%%%.%........................................................
.......^^.^^.^...%..%%%%%%%%%%%%%%..........^..^^^^^^^^^................................%.%%%.........................................................
.............^.......%%%%%%%%%%%%%.............^^^^^^^^.^^...............................%%%%.........................................................

mtj@mtj-desktop:~/2dgen$ ./2dgen2 
...............fffffff########^^^^^^^............^^^^^^^^^^%%%%%%%%%.........^^^..............^^^^^^^^^^.....fffff........ffffffff
..............fffffffff#######^^^^^^^.............^^^^^^^^^%%%%%%%%%........^^^^^.............^^^^^^^^^%.....fffff........ffffffff
..............fffffffff#######^^^^^^^.........^....^^^^^^^^%%%%%%%%%........^^^^^..............^^^^^^^^%%.....ffff........ffffffff
.........^^...fffffffff#######^^^^^^^^.......^^.....^^^^^^^%%%%%%%%%........^^^^^..............^^^^^^^%%%%....fff.........ffffffff
........^^^....ffffffff#######^^^^^^^^......^^^^.....^^^^^...%%%%%%%........^^^^^..............^^^^^^^%%%%%...ff..........ffffffff
.....^^^^^^.....fffffff#######^^^^^^^^^....^^^^^.......^^......%%%%%........^^^^^..............^^^^^^^%%%%%%..............ffffffff
....^^^^^^^......ffffff..#####^^^^^^^^^...^^^^^^^.................%........^^^^^^...............^^^^^^%%%%%%%.............ffffffff
...^^^^^^^^.......fffff......^^^^^^^^^^^.^^^^^^^^..................^^.......^^^^^...............^^^^^^%%%%%%%ff...........ffffffff
...^^^^^^^^........fff........^^^^^^^^^^^^^^^^^^^......^^^........^^^^......^^^^fff..............^^^^^%%%%%%ffff..........ffffffff
...^^^^^^^^...................^^^^^^^^^..^^^^^^^^^...^^^^^.......^^^^^.......^^fffff............ffffff%%%%%ffffff.........ffffffff
...^^^^^^^^....................^^^^^^^...^^^^^^^^^^^^^^^^^^.....^^^^^^........ffffff...........fffffff...%ffffffff.......fffffffff
...^^^^^^^^....................^^^^^.....^^^^^^^^^^^^^^^^^^^...^^^^^^^^.......ffffff...........ffffff.....fffffffff......fffffffff
#####^^^^^^........................^^^....^^^^^^^^^^^^^^^^^^..^^^^^^^^^.......ffffff..........ffffff.......ffffffff......fffffffff
######^^^^..............%%%%%%...^^^^^^^^...^^^^^^^^^^^^^^^...^^^^^^^^^.......ffff^^..........ffff.........fffffffff....ffffffffff
########^^^............%%%%%%%%.^^^^^^^^^^..^^^^^^^^^^^^^.....^^^^^^^^^^.......f^^^^^.........fff..........fffffff......ffffffffff
#########^^^^^^^^.....%%%%%%%%%^^^^^^^^^^^..^^^^^^^^^^^........^^^^^^^^^.........^^^^...................................ffffffffff
########^^^^^^^^^^^^.%%%%%%%%%%^^^^^^^^^^^^^^^^^^^^^^^^.........^^^^^^^^..........^^^...................................ffffffffff
#######^^^^^^^^^^^^^^%%%%%%%%%%^^^^^^^^^^^^^^^^^^^^^^^...........^^^^^^^............^....................^..............ffffffffff
######^^^^^^^^^.^^^^^%%%%%%%%%%^^^^^^^^^^^^.^^^^^^^^^^...........^^^^^^..............................^^^^^^..............fffffffff
....^^^^^^^^.........%%%%%%%%%%^^^^^^^^^^^...^^^^^^^^............fff.............................^^^^^^^^^^..............%ffffffff
.....^^^^^^^.........%%%%%%%%%.^^^^^^^^^^.....^^^^^.............ffffff.........................^^^^^^^^^^^^^............%%%%%fffff
.....^^^^^^..........%%%%%%%%...^^^^^^^^.......................ffffffff........................^^^^^^^^^^^^^............%%%%%%%ff.
.....^^^^^^..........%%%%%%.....^^^^^^^.......................ffffffffff.....................^^^^^^^^^^^^^^^...........%%%%%%%%%..
.....^^^^^............%%%........^^^^^^......................fffffffffff....................^^^^^^^^^^^^^^^^...........%%%%%%%%%..
......^^..........................^^^^.......................fffffffffff%..................^^^^^^..^^^^^^^^^...........%%%%%%%%...
..................................^^^........................fffffffffff%%%%.............^^^^^^^^....^^^^^^^...........%%%%%%%....
...................................^^........................ffffffffff%%%%%%...........^^^^^^^^.......^^^^^..........%%%%%%%.....
..............................................................ffffffff%%%%%%%...........^^^^^^^^........^^^^..........%%%%%.......
..............................................................fffffff%%%%%%%%...........^^^^^^^^..........^...........%%%%........
f...........................%%%%%%............................ffffff%%%%%%%%%...........^^^^^^^.......................%%%.........
fff........................%%%%%%%%...%%%%%%.......^^.........fffff%%%%%%%%%%............^^^^.........................%...........
ffff......................%%%%%%%%%..%%%%%%%%%%.^^^^^^.........fff%%%%%%%%%%%.............^....................^^^^^..............
fffff....................%%%%%%%%%....%%%%%%%%%^^^^^^^^........ff%%%%%%%%%%%%.....................%%%%%%%%^^^^^^^^^^^^............
fffff.................^^%%%%%%%%%%.....%%%%%%%%^^^^^^^^........^^%%%%%%%%%%%%...................%%%%%%%%%^^^^^^^^^^^^^^...........
ffffff.............^^^^^^%%%%%%%%.......%%%%%%^^^^^^^^^.......^^^^%%%%%%%%%%..............^^^^^^%%%%%%%%%^^^^^^^^^^^^^^...........
fffffff............^^^^^^^%%%%%%........%%%%%%^^^^^^^^^.......^^^^^%%%%%%%................^^^^^^^%%%%%%%^^^^^^^^^^^^^^^^..........
ffffffff..........^^^^^^^^^..............%%%%%^^^^^^^^^.......^^^^^^%%%%.................^^^^^^^^%%%%%%%^^^^^^^^^^^^^^^^..........
fffffffff.........^^^^^^^^^..............%%%%^^^^^^^^^........^^^^^^^%...................^^^^^^^fff%%%%^^^^^^^^^^^^^^^^^..........
fffffffff.........^^^^^^^^^...............%%%^^^^^^^^^........^^^^^^^....................^^^^^^ffffff%^^^^^^^^^^^^^^^^^...........
ffffffffff.......^^^^^^^^^^#####...........%%^^^^^^^^^........^^^^^^^....................^^^...fffffff^^^^^^^^^^^^^^^^^...........
fffffffffff.......^^^^^^^^######............%^^^^^^^^..........^^^^^^...........................ffffff^^^^^^^^^^^^^^^^............
ffffffffffff......^^^^^^^########............^^^^^^^^.........^^^^^^^............................fffff^^^^^^^^^^^^^^^^............
fffffffffff........^^^^^#########.............^^^^^^^..........^^^^^^.............................ffff^^^^^^^^^^^^^^^.............
fffffffffff.........^^^##########.................^^..........^^^^^^^..............................fff^^^^^^^^^^^^^^^.............
fffffffffff..........^###########..............................^^^^^^..............................fff^^^^^^^^^^^^^^^.............

```