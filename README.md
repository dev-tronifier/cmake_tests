# cmake_tests
AIM: To create shared library object for the following tree structure

Tree structure of the project:
<pre>
.
├── CMakeLists.txt
├── include
│   └── proj_name
│       └── proj_name.h
├── LICENSE
├── module1
│   ├── CMakeLists.txt
│   ├── include
│   │   └── proj_name
│   │       ├── module1
│   │       │   ├── file00.h
│   │       │   └── file01.h
│   │       └── module1.h
│   └── src
│       ├── file00.c
│       └── file01.c
├── module2
│   ├── CMakeLists.txt
│   ├── include
│   │   └── proj_name
│   │       ├── module2
│   │       │   ├── file00.h
│   │       │   └── file01.h
│   │       └── module2.h
│   └── src
│       ├── file00.c
│       └── file01.c
├── module3
│   ├── CMakeLists.txt
│   ├── include
│   │   └── proj_name
│   │       ├── module3
│   │       │   ├── file00.h
│   │       │   └── file01.h
│   │       └── module3.h
│   └── src
│       ├── file00.c
│       └── file01.c
├── README.md
├── src
│   └── proj_name.c
└── test
    ├── test_main.c
    ├── test_mod1.c
    ├── test_mod2.c
    └── test_mod3.c

19 directories, 27 files
</pre>

Install as follows:-
<ul>
  <li> mkdir build</li>
  <li> cd build && cmake ..</li>
  <li> make && sudo make install</li>
</ul>
