# A simple project for CMake
```
CmakeProject
├── CMakeLists.txt
├── include
│   └── parameters.hpp
├── library
│   ├── CMakeLists.txt
│   ├── include
│   │   └── my_math
│   │       ├── matrices.hpp
│   │       └── ...
│   ├── priv_include
│   │   └── my_math
│   │       └── eigen_check.hpp
│   └── src
│       ├── eigen_checks.cpp
│       ├── matrices.cpp
│       └── ...
├── src
│   ├── double_test.cpp
│   └── ...
└── unit_tests
    ├── double_unit_test.cpp
    └── int_unit_test.cpp
```

This is the structure of the project, which is similar to the one of the [``MakeProject``](../MakeProject). 

Within the ``library`` folder there all to available elements to create a test mathematic library. 
Compared to the makefile example, such target must link with the [Eigen](https://eigen.tuxfamily.org/index.php?title=Main_Page) linear algebra library.
This target has some public headers (``library/include``) and some private headers (``library/priv_include``). 
The former shall be queriable by the consuming targets, while the latter defines some internal functions that shouldn't be exposed.

All files in the ``src`` folder are source code that must be turned into separate executables, and it is also required to add the dependency on the ``include`` header fodlers.
All such targets must be linked with the library target.

The ``unit_tests`` folder contains some unit tests for the library.
To properly work, it is necessary to fetch the [Catch2](https://github.com/catchorg/Catch2) library (release ``3.6.0``), and create executables for each test file (linking them with Catch2).
