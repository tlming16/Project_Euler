all:pi.cpp 
	g++ -fPIC -shared -O3 -o pi_lib pi.cpp -std=c++11

pi_thread: 
	#test/pi_thread.cpp 
	g++ -O3  pi.cpp test/pi_thread.cpp -o pi_thread -std=c++11 

pi_v2:#test/pi_v2.cpp:
	g++ -O3 test/pi_v2.cpp -o pi_v2 -std=c++11

clean:
	rm -rf pi_lib pi_v2 pi_thread 
