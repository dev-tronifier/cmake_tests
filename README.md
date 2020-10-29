# cmake_tests
AIM: To create shared library object for the following tree structure

Tree structure of the project:
<pre></code>
.
├── <a href = CMakeLists.txt>CMakeLists.txt</a>
├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/include>include</a>
│   └── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/include/proj_name>proj_name</a>
│       └── <a href = include/proj_name/proj_name.h>proj_name.h</a>
├── <a href = LICENSE>LICENSE</a>
├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module1>module1</a>
│   ├── <a href = module1/CMakeLists.txt>CMakeLists.txt</a>
│   ├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module1/include>include</a>
│   │   └── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module1/include/proj_name>proj_name</a>
│   │       ├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module1/include/proj_name/module1>module1</a>
│   │       │   ├── <a href = module1/include/proj_name/module1/file00.h>file00.h</a>
│   │       │   └── <a href = module1/include/proj_name/module1/file01.h>file01.h</a>
│   │       └── <a href = module1/include/proj_name/module1.h>module1.h</a>
│   └── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module1/src>src</a>
│       ├── <a href = module1/src/file00.c>file00.c</a>
│       └── <a href = module1/src/file01.c>file01.c</a>
├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module2>module2</a>
│   ├── <a href = module2/CMakeLists.txt>CMakeLists.txt</a>
│   ├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module2/include>include</a>
│   │   └── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module2/include/proj_name>proj_name</a>
│   │       ├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module2/include/proj_name/module2>module2</a>
│   │       │   ├── <a href = module2/include/proj_name/module2/file00.h>file00.h</a>
│   │       │   └── <a href = module2/include/proj_name/module2/file01.h>file01.h</a>
│   │       └── <a href = module2/include/proj_name/module2.h>module2.h</a>
│   └── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module2/src>src</a>
│       ├── <a href = module2/src/file00.c>file00.c</a>
│       └── <a href = module2/src/file01.c>file01.c</a>
├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module3>module3</a>
│   ├── <a href = module3/CMakeLists.txt>CMakeLists.txt</a>
│   ├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module3/include>include</a>
│   │   └── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module3/include/proj_name>proj_name</a>
│   │       ├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module3/include/proj_name/module3>module3</a>
│   │       │   ├── <a href = module3/include/proj_name/module3/file00.h>file00.h</a>
│   │       │   └── <a href = module3/include/proj_name/module3/file01.h>file01.h</a>
│   │       └── <a href = module3/include/proj_name/module3.h>module3.h</a>
│   └── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/module3/src>src</a>
│       ├── <a href = module3/src/file00.c>file00.c</a>
│       └── <a href = module3/src/file01.c>file01.c</a>
├── <a href = README.md>README.md</a>
├── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/src>src</a>
│   └── <a href = src/proj_name.c>proj_name.c</a>
└── <a href = https://github.com/dev-tronifier/cmake_tests/tree/main/test>test</a>
    ├── <a href = test/test_main.c>test_main.c</a>
    ├── <a href = test/test_mod1.c>test_mod1.c</a>
    ├── <a href = test/test_mod2.c>test_mod2.c</a>
    └── <a href = test/test_mod3.c>test_mod3.c</a>

19 directories, 27 files
</code></pre>

Install as follows:-
<pre>
<b>$</b> mkdir build
<b>$</b> cd build && cmake ..
<b>$</b> make && sudo make install
</pre>
