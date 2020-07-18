/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Foo {
    std::mutex mtx;
    std::condition_variable cv;
    int flag;
public:
    Foo() {
        flag=1;
        
    }

    void first(function<void()> printFirst) {
        unique_lock<std::mutex> lck(mtx);
        cv.wait(lck,[&]{ return flag==1;});
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        flag=2;
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
        unique_lock<std::mutex> lck(mtx);
        cv.wait(lck,[&]{ return flag==2;});
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        flag=3;
        cv.notify_all();
    }

    void third(function<void()> printThird) {
        unique_lock<std::mutex> lck(mtx);
        cv.wait( lck,[&]{ return flag==3;});
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        flag=1;
        cv.notify_all();
    }
};