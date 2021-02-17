CFLAGS = -Wall

#TODO link (-o) all object files into the executable myexe
myexe: fileio.o utils.o proj_refactor_file.o
	g++ fileio.o utils.o proj_refactor_file.o -o myexe
	
	
#rebuild object file if fileio.cpp, or fileio.h or constants.h changes
#compile the .cpp file to an object file (-c)
fileio.o: ../fileio/fileio.cpp ../includes/fileio.h ../includes/constants.h
	g++ $(CFLAGS) -c ../fileio/fileio.cpp
	
#TODO 
utils.o: ../utils/utils.cpp ../includes/utils.h ../includes/constants.h
	g++ $(CFLAGS) -c ../utils/utils.cpp
	
#TODO
proj_refactor_file.o: proj_refactor_file.cpp ../includes/constants.h ../includes/fileio.h ../includes/utils.h
	g++ $(CFLAGS) -c proj_refactor_file.cpp

#TODO type 'make clean' to remove myexe and all .o files	
clean:
	rm *.o .gch myexe 