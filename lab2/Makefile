all: z1\z1.exe z22\z22.exe z3\z3.exe z4\z4.exe z5\z5.exe z6\z6.exe z7\z7.exe z8\z8.exe z9\z9.exe task10\task10.exe
z1\z1.exe: z1\Task1.cpp
	cl /Fez1\z1.exe z1\Task1.cpp
z22\z22.exe: z22\Task2.cpp
	cl /Fez22\z22.exe z22\Task2.cpp
z3\z3.exe: z3\Task3.cpp
	cl /Fez3\z3.exe z3\Task3.cpp
z4\z4.exe: z4\Task4.cpp
	cl /Fez4\z4.exe z4\Task4.cpp
z5\z5.exe: z5\Task5.cpp
	cl /Fez5\z5.exe z5\Task5.cpp
z6\z6.exe: z6\Task6_main.cpp z6\Task6_func.cpp
	cl /Fez6\z6.exe z6\Task6_main.cpp z6\Task6_func.cpp
z7\z7.exe: z7\Task7_main.cpp z7\Task7_func.cpp
	cl /Fez7\z7.exe z7\Task7_main.cpp z7\Task7_func.cpp
z8\z8.exe: z8\Task8_main.cpp z8\Task8_func.cpp
	cl /Fez8\z8.exe z8\Task8_main.cpp z8\Task8_func.cpp
z9\z9.exe: z9\Task9_main.cpp z9\Task9_func.cpp
	cl /Fez9\z9.exe z9\Task9_main.cpp z9\Task9_func.cpp
task10\task10.exe: Task9_func.obj Task9_main.obj
	lib  /out:task10_lib.lib Task9_func.obj
	link /out:task10\task10.exe Task9_main.obj Task10_lib.lib
clean:
	del /s /q *.exe
	del /s /q *.obj
	del /s /q *.lib