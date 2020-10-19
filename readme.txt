qt compile:
1:./configure -release -opensource -no-openssl -no-opengl -skip qtdeclarative
2:copy /usr/local/Qt5.6.0/plugins/platforms  -> qt_project
3:vim ~/.bashrc   add   export DISPLAY=localhost:0   source ~/.bashrc(this is set xserver windows must run xserver)
4:run qmake -project to jenerate .pro file
5:add QT+= (modules) to add modules 
6:add SOURCES += xxx.cpp add HEADERS += xxx.h
7:qmake -makefile *.pro to jenerate Makefile
8:run make to build
