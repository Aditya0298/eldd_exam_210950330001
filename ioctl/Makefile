obj-m := char_driver2.o

KDIR=/lib/modules/$(shell uname -r)/build/

PWD=$(shell pwd)

all:
		make -C $(KDIR) M=$(PWD) modules
		gcc -o prog_ioctl prog_ioctl.c
		gcc -o prog_read prog_read.c
		gcc -o prog_write prog_write.c

		
install:
		make -C $(KDIR) M=$(PWD) modules_install

clean:
		make -C $(KDIR) M=$(PWD) clean
