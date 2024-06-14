# Make and CMake course

## Setup requirement

I highly recommend following along the course and experiment the thing demonstrated.
To this extent, you should prepare in advanced your programming environment.
In general Unix-style OSs are recommended (Linux/MacOS). Make and cmake _can_ work on Windows, but the Microsoft compiler will also be required, and setting up everything is quite complex: for this reason I suggest to use a virtualisation tool (as reported here).

### Ubuntu 

To get ready for the course, the only requirement is to install the ``build-essential`` (for compilation tools) and ``git`` (to retrieve the course material) debian packages, i.e. running
``` bash
sudo apt update
sudo apt install -y build-essential git
```

### MacOS
**TODO**

### Windows (using WSL, recommended)

The easiest way to get running in Windows is by installing the _Windows Subsystem for Linux_ (WSL).
Plese follow [this guide](https://learn.microsoft.com/en-us/windows/wsl/install) to install WSL on your PC.

Once WSL is ready, you can open the Ubuntu terminal from within Windows and so you can follow the above guide to get ready in Ubuntu.


### Windows (using Docker)

An alternative way (for more experienced user) is through the use of [Docker](https://www.docker.com).
As baseline for this course you can use the following ``Dockerfile`` as baseline (on top of which you could add you own configurations and user setup):
``` Dockerfile
FROM ubuntu:22.04

RUN apt-get update \
    && apt-get install -y build-essential
```


### IDE / Code Editor

The focus of this course is on _build system_, not strictly on _code writing_, so you can feel free to use your favourite code editor. 
In practice, all is really required is just a terminal in which it is possible to run the commands.

If you don't know what to use, I suggest to use [Visual Studio Code](https://code.visualstudio.com/) (aka VSCode), a free and wide-spread code editor. The main advantage is that it enables to have, in one place, both the source code, a terminal, and a tree view of the project (which will help us _see_ the files are getting created).
VSCode is available for both Linux, MacOS and Windows. For Windows users it is possible to install the WSL extension for the editor, enabling to open a WSL terminal and project directly from VSCode.


## Material

In this repository you will find the material for the course, i.e.:
- the slides used during the course (available **after** the ending of each lesson);
- some simple source code that will be used as baseline for the course. Here no ``Makefile`` and ``CMakeLists.txt`` files are provided (we will create it during the course), but these files will be uploaded separately after the end of the course.

