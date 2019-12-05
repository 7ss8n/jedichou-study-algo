#default target
.PHONY: all
all: hello.exe

#rule to build hello.exe
hello.exe: hello.cpp
	cl -nologo -EHsc -GR -Zc:forScope -Zc:wchar_t -Fehello hello.cpp

# 在Windows上需要使用"\"，当前目录还是用"."
.PHONY: install
install: hello.exe
	mkdir bin
	copy hello.exe .\bin\hello.exe

.PHONY: clean
clean:
	del hello.exe
	del *~
	del *.obj
	rmdir /s /q bin
