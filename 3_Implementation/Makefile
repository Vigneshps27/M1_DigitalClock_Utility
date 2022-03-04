SRC = digitalclock.c set_time.c current_time.c stop_watch.c
INC = digitalclock.h
target :  $(SRC) $(INC)
	gcc $(SRC) -o all.out
	
run : target
	./all.out

clean : 
	rm all.out
