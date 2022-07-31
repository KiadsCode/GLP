copy runtime\freeglut.dll build\Debug
copy runtime\glew32.dll build\Debug
copy runtime\glfw3.dll build\Debug
cd build
cmake --build .
pause