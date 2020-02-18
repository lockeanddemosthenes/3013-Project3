TARGETS = catsvsdogs

CC=gcc

CFLAGS=-I -Werror -pthread

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
