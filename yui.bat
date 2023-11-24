::del /Q /S 2_build
cd 2_build
cmake ..
cmake --build .
cd ../0_bin/x64
testxml.exe

pause