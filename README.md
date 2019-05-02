# cpp-simple-make

* สร้าง header file (ไฟล์ .h) ที่มีแต่ function prototype 
* สร้าง c++ file (ไฟล์ .cpp) ที่มี implementation ของ prototype และ include header file ด้วย
* compile เป็น object file (ไฟล์ .o) 
	`$ g++ -c Student.cpp -o Student.o`

-------

* นำ header file ไปใช้ใน main (main.cpp)
* compile main เป็น object file (main.o) 
	`$ g++ -c main.cpp -o main.o`

-------

* นำ object file ทั้งหมด มาสร้างโปรแกรม (ได้ไฟล์ .exe) 
	`$ g++ Student.o main.o -o main`

-------

* รวม command line ทั้งหมด เป็น Makefile
