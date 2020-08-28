# dlang 与 cpp 

```cpp
// foo.cpp
#include <iostream>
using namespace std;
int foo(int i, int j, int k)
{
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;

    return 7;
}
```

```D
// bar.d
extern (C++) int foo(int i, int j, int k);

void main()
{
    foo(1, 2, 3);
}
```

```
g++ -c foo.cpp 
ldc2 bar.d foo.o -L-lstdc++
```

- 在 windows 环境下，这种操作无法连接成功

- 切换成 ubuntu，不管是 dmd编译器，还是ldc2 编译器，都可以链接成功

- 参考资料 https://dlang.org/spec/cpp_interface.html  

- ```
  sudo apt-get remove --purge  ldc2
  sudo apt-get install ldc2 
  ```

  