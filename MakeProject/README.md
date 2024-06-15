# A simple project for Make

```
MakeProject
├── include
│   └── parameters.hpp
├── library
│   ├── include
│   │   └── my_math
│   │       ├── constants.h
│   │       ├── double.h
│   │       └── int.h
│   └── src
│       ├── double.c
│       └── int.c
└── src
    ├── double_test.c
    ├── integer_test.c
    ├── params_double_test.c
    ├── params_int_test.c
    └── print_pi.c
```

This is the structure of the project. The goal is to create a **library** object which contains all compiled code on the ``library/src`` path, and whose headers are defined in ``library/include``. This library **is not** an **executable**.

The **executables** are all the sources in the ``src`` folder, and each of them **must** be linked to the library. These source codes import definitions of header present in the ``include`` directory.
