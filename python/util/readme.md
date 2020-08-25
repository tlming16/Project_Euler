# python 调用 C语言动态库

- c语言编写基本函数，打包成动态链接库
- 依赖 ctypes 引入动态库 

# c代码

```c
// example.c 
//gcc -shared -fPIC -o libexample.dll example.c
int add(int x,int y){
  return x+y;
}
```

# 编译

```
gcc -shared -fPIC -o libexample.dll example.c
```

# python 调用

```python
#!/usr/bin/env  python3 
# coding:utf-8
from ctypes import * 
if __name__ =='__main__':
  lib_name ="./libexample.dll" 
  lib= cdll.LoadLibrary(lib_name)
  print(lib.add(c_int(10),c_int(10)));
```

