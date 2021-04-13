#uos1022-amd
all:codegen co 

codegen:
	gdbus-codegen --generate-c-code=Hello  --c-namespace hello --interface-prefix com.yft.hello. hello.xml

co:
	cp -rf Hello.h  Hello.c ./client
	cp -rf Hello.h  Hello.c ./server
	rm -rf Hello.h  Hello.c
	make -C ./client
	make -C ./server
clean:
	echo "clean"
	make clean  -C ./client
	make clean  -C ./server
	rm -rf ./client/Hello.h  ./client/Hello.c
	rm -rf ./server/Hello.h  ./server/Hello.c
