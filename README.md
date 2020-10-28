# cmake_tests

Install as follows:-
<ul>
  <li> mkdir build</li>
  <li> cd build && cmake ..</li>
  <li> make && sudo make install</li>
</ul>

Currently I am getting an error in test/test.c.
<pre>
$gcc ./test.c
In file included from ./test.c:1:0:
/usr/local/include/proj_name/module3.h:4:10: fatal error: module3/file00.h: No such file or directory
 #include "module3/file00.h"
          ^~~~~~~~~~~~~~~~~~
compilation terminated.
</pre>
