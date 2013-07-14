DIRS	= lesson_1 lesson_2 lesson_3 lesson_4 \
lesson05 lesson06 lesson07 lesson08 lesson09 lesson10\
lesson11 lesson36

all : objs

objs :
	@for dir in $(DIRS); do \
	make -C $$dir || exit $?;\
	done

clean :
	@for dir in $(DIRS); do \
	make -C $$dir clean; \
	done
