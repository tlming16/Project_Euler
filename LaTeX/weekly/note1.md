# # note1 

- [ ]  C++11 静态变量初始化不需要手动加锁，如果静态变量正在初始化，并发执行将会自动等待初始化完成 
- [ ] 对于 singleton 模式而言，静态变量本身线程安全 

- 写一个 vector，当元素数目较少时，使用栈内存，当元素数目较多时，使用 堆内存

  ```c++
  template<class T,size_t N> 
      class inline_vector{
          static_assert(N>0,"N must greater than 0");
          public:
          	inline_vector();
          	size_t size() const;
          	const T operator [](size_t i) const;
          	T & operator [](size_t i);
              void emplace_back(const T & item);
          	void pop_back();
          	T & back();
          	const T & back() const;
          private:
          	T head[N]; 
          	std::vector<T> tail;
              size_t len;
      }; 
  // Paddle/paddle/fluid/framework/inlined_vector.h 
  
  template<class T,size_t N> 
  std::vector<T> to_stdVector(constinline_vector<T,N> & vec);
  ```

  

