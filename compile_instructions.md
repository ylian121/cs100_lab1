cs 100 - instructions to compile

clone the repo  
```sh
https://github.com/ylian121/cs100_lab1.git
```

run with command  
```sh
g++ -o area_calculator src/main1.cpp src/rectangle.cpp
./area_calculator
```

or

run with makefile  
```sh
$ cmake .
```
```sh
$ make
Scanning dependencies of target area_calculator
[ 33%] Building CXX object CMakeFiles/area_calculator.dir/src/main1.cpp.o
[ 66%] Building CXX object CMakeFiles/area_calculator.dir/src/rectangle.cpp.o
[100%] Linking CXX executable area_calculator
[100%] Built target area_calculator
```
