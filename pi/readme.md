# this is toy tool to compute the N digits of pi

## usage

### python usage

-   python3 setup build\
-   python3 pi.py 1000 \### cpp usage
-   `make pi_thread` for two threads
-   `make pi_v2` for single thread

## implementations

-   pi.d:this is the original d language implementations of pi
-   pi.cpp: motivated by pi.d and use two threads to build the dynamic shared library
-   `test/pi_v2.cpp` is single thread
-   `test/pi_thread.cpp` is two threads

## reference:

-   <https://github.com/dlang/dmd/blob/master/samples/pi.d>

-   <https://en.wikipedia.org/wiki/Pi>

-   v1: $$\arctan(\frac{1}{2}) +\arctan(\frac{1}{3}) =\frac{\pi}{4}$$

-   v2: $$4\arctan(\frac{1}{5}) - \arctan(\frac{1}{239}) =\frac{\pi}{4}$$
