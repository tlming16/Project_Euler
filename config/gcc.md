# GCC: GNU C Complier(GNU C 编译器)

不仅仅能支持C语言，它现在还支持 Ada、C++、Java、Objective-C、Pascal、COBOL ，D，golang,以及函数式编程和逻辑编程的Mercury 语言等。因此，现在的 gcc 已经变成了 GNU Compiler Collection，也即是 **GNU 编译器套件**.

g++: gcc 的一个版木，默认语言设置为C++，而且在连接的时候自动包含标准 C++ 库。

# GCC 使用的软件工具:

- addr2line
   给出一个可执行文件的内部地址，addr2line使用文件中的调试信息将地址翻译成源码文件名和行号。该程序是binutils包的一部分。
- ar
   是一个程序，可以从文档中增加、删除和析取文件来维护库文件。通常使用该工具是为了**创建和管理连接程序使用的目标库文档**。该程序是binutils包的一部分
- as
   GNU 汇编器。binutils包的一部分
- autoconf
   产生的 shell 脚本自动配置源代码包去编译某个特定版本的 UNIX
- c++filt
   程序接受被 C++ 编译程序转换过的名字(不是被重载的),而且将该名字翻泽成初始形式。 该程序是 binutils 包的一部分
- gcov
   gprof使用的配置工具，来确定程序运行时哪一部分耗时最大
- gdb
   GNU调试器，用于检查程序运行时的值和行为
- GNATS
   GNU的调试跟踪系统(GNU Bug Tracking System),一个跟踪GCC和其他GNU软件问题的在线系统
- gprof
   该程序会监督编译程序的执行过程，并报告程序中各个函数的运行时间，可以根据所提供的配置文件来优化程序。该程序是 binutils 包的一部分
- ld
   GNU连接程序，该程序将目标文件的集合组合成可执行程序。binutils包的一部分
- libtool
   一个基本库，支持make程序的描述文件使用的简化共享库用法的脚本
- make
   一个工具程序，它会读makefile脚本来确定程序中的哪个部分需要编泽和连接，然后发布必要的命令。它读出的脚本(叫做makefile或Makefil)定义了文件关系和依赖关系
- nlmconv    
   将可重定位的目标文件转换成NetWare可加载模块（NetWare Loadable Module, NLM）。该程序是 binutils 的一部分 
- nm
   列出目标文件中定义的符号。该程序是 binutils 包的一部分
- objcopy
   将目标文件从一种二进制格式复制和翻译到另外一种。该程序是 binutils 包的一部分
- objdump
   显示一个或多个目标文件中保存的多种不同信息。该程序是 binutils 包的一部分
- ranlib
   创建和添加到 ar 文档的索引。该索引被ld使用来定位库中的模块， binutils包的一部分
- ratfor
   预处理程序可由 GCC激活，但不是标准GCC发布版的一部分
- readelf 
   从 ELF 格式的目标文件显示信息。该程序是 binutils 包的一部分  
- size
   列出目标文件中每个部分的名字和尺寸。该程序是 binutils 包的一部分
- strings 
   浏览所有类型的文件，析取出用于显示的字符串。该程序是 binutils 包的一部 
- strip
   从目标文件或文档库中去掉符号表，以及其他调试所需的信息。该程序是 binutils 包的一部
-  vcg
   Ratfor 浏览器从文木文件中读取信息，并以图表形式显示它们。而 vcg 工具并不是 GCC 发布中的一部分，但 -dv 选项可被用来产生 vcg 可以理解的优化数据的格式
- windres
    Window 资源文件编泽程序。该程序是 binutils 包的一部分

GCC 编译器在编译一个C语言程序时需要经过以下 4 步：

- 将C语言源程序预处理，生成.i文件。
-  预处理后的.i文件编译成为汇编语言，生成.s文件。
-  将汇编语言文件经过汇编，生成目标文件.o文件。
-  将各个模块的.o文件链接起来生成一个可执行程序文件。

过程如下：
![](./compiler.png)

GCC常用选项：
**1）-c**
  编译、汇编指定的源文件，但是不进行链接
2) -S
  编译指定的源文件，但是不进行汇编
3) -E
  预处理指定的源文件，但不进行编译
**4) -o [file1] [file2]**
  将文件2编译成可执行文件file1
**5) -I directory**
  指定include包含文件的搜索目录
**6) -g**
  生成调试信息，该程序可以被调试器调试
注意： 编译选项区分大小写

GCC 预处理器阶段常用的选项:
**1) -Dname[=definition]**
  在处理源文件之前，先定义宏name。宏name必须是在源文件和头文件中都没有被定义过的。将该选项搭配源代码中的#ifdef name命令使用，可以实现条件式编译。
  如果没有指定一个替换的值，该宏被定义为值 1。
**2) -Uname**
  如果在命令行或 GCC 默认设置中定义过宏 name，则“取消”name 的定义。-D和-U选项会依据在命令行中出现的先后顺序进行处理。 
**3) -Idirectory[:directory[...]]**
  当通过 #include 命令把所需的头文件包括进源代码中时，除系统标准 include 目录之外，指定其他的目录对这些头文件进行搜索
4) -iquote directory[:directory[...]]
  这是在最近 GCC 版本中新增的选项，它为在 #include 命令中采用引号而非尖括号指定的头文件指定搜索目录
5) -isystem directory[:directory[...]]
  该选项在标准系统include目录以外为系统头文件指定搜索目录，且它指定的目录优先于标准系统include目录被搜索。在目录说明开头位置的等号，被视作系统根目录的占位符，
  可以使用--sysroot或-isysroot选项来修改它。 
6) -isysroot directory
  该选项指定搜索头文件时的系统根目录。例如，如果编译器通常在/usr/include目录及其子目录下搜索系统头文件，则该选项将引导到 directory/usr/include 及其子目录下进行搜索。  
7) -I-
  在较新版本的GCC中，该选项被-iquote替代。在旧版本中，该选项用于将命令行的所有-Idirectory选项分割为两组。所有在-I-左边加上-I选项的目录，被视为等同于采用-iquote选项；
  这指的是，它们只对 #include 命令中采用引号的头文件名进行搜索。所有在-I-右边加上-I选项的目录，将对所有 #include 命令中的头文件名进行搜索，无论文件名是在引号还是尖括号中。
  而且，如果命令行中出现了-I-，那么包括源文件本身的目录不再自动作为搜索头文件的目录。

对于include目录而言，通常的**搜索顺序**是：
a) 包含指定源文件的目录（对于在 #include 命令中以引号包括的文件名）。
b) 采用-iquote选项指定的目录，依照出现在命令行中的顺序进行搜索。只对 #include 命令中采用引号的头文件名进行搜索。
c) 采用-I选型指定的目录，依照出现在命令行中的顺序进行搜索。
d) 采用环境变量 CPATH 指定的目录。
e) 采用-isystem选项指定的目录，依照出现在命令行中的顺序进行搜索。
f） 采用环境变量 C_INCLUDE_PATH 指定的目录。
g) 系统默认的 include 目录。

链接器把多个二进制的目标文件（object file）链接成一个单独的可执行文件。在链接过程中，它必须把符号（变量名、函数名等一些列标识符）用对应的数据的内存地址（变量地址、函数地址等）替代，以完成程序中多个模块的外部引用。
GCC 的-l选项可以让我们手动添加链接库。
数学库的文件名是 libm.a。前缀lib和后缀.a是标准的，m是基本名称，GCC 会在-l选项后紧跟着的基本名称的基础上自动添加这些前缀、后缀，本例中，基本名称为 m。
eg: gcc main.c -o main.out -lm
使用-L选项，为 GCC 增加另一个搜索链接库的目录： 
eg: gcc main.c -o main.out -L/usr/lib -lm


Linux 下动态链接库（shared object file，共享对象文件）的文件后缀为.so，它是一种特殊的目标文件（object file），可以在程序运行时被加载（链接）进来。
GCC 生成动态链接库:
如果想创建一个动态链接库，可以使用 GCC 的**-shared**选项。输入文件可以是源文件、汇编文件或者目标文件。
另外还得结合**-fPIC**选项。
-fPIC 选项作用于编译阶段，告诉编译器产生与位置无关代码（Position-Independent Code）；这样一来，产生的代码中就没有绝对地址了，全部使用相对地址，所以代码可以被加载器加载到内存的任意位置，都可以正确的执行。
这正是共享库所要求的，共享库被加载时，在内存的位置不是固定的。
eg: gcc -fPIC -shared func.c -o libfunc.so

 

C/C++程序在linux下被编译和连接时，GCC/G++会查找系统默认的include和link的路径，以及自己在编译命令中指定的路径。自己指定的路径就不说了，这里说明一下系统自动搜索的路径。

# # 修改 include

- include头文件路径
  除了默认的/usr/include, /usr/local/include等include路径外，还可以通过设置环境变量来添加系统include的路径：
  \# C
  export C_INCLUDE_PATH=XXXX:$C_INCLUDE_PATH
  \# CPP
  export CPLUS_INCLUDE_PATH=XXX:$CPLUS_INCLUDE_PATH

以上修改可以直接命令行输入（一次性），可以在/etc/profile中完成（对所有用户生效），也可以在用户home目录下的.bashrc或.bash_profile中添加（针对某个用户生效），修改完后重新登录即生效。



# # link链接库文件路径

链接库文件在连接（静态库和共享库）和运行（仅限于使用共享库的程序）时被使用，其搜索路径是在系统中进行设置的（也可以在编译命令中通过 -l -L 来指定，这里讲的是使用系统默认搜索路径）。
一般 Linux 系统把 /lib /usr/lib /usr/local/lib 作为默认的库搜索路径，所以使用这几个目录中的链接库文件可直接被搜索到（不需要专门指定链接库路径）。对于默认搜索路径之外的库，则需要将其所在路径添加到gcc/g++的搜索路径之中。
链接库文件的搜索路径指定有两种方式：

- 修改/etc/so.ld.conf 
- 修改环境变量，在其中添加自己的路径在环境变量中添加
  动态链接库搜索路径：
  export LD_LIBRARY_PATH=XXX:$LD_LIBRARY_PATH
  静态链接库搜索路径：
  export LIBRARY_PATH=XXX:$LIBRARY_PATH
  以上修改可以直接命令行输入（一次性），可以在/etc/profile中完成（对所有用户生效），也可以在用户home目录下的.bashrc或.bash_profile中添加（针对某个用户生效）,修改完后重新登录即生效。



- 在/etc/ld.so.conf 中添加指定的链接库搜索路径（需要root权限），然后运行 /sbin/ldconfig，以达到刷新 /etc/ld.so.cache的效果。

以上两种方式均可以达到指定链接库搜索路径的效果。