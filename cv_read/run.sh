/bin/rm build &> /dev/null

mkdir build
cd build
cmake ..
make
./cv_read
