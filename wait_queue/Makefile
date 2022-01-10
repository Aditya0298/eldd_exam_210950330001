obj-m := sema_driver.o

KERNELDIR = /lib/modules/$(shell uname -r)/build

PWD := $(shell pwd)

default:
		$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
		gcc -o prog_writer prog_writer.c
		gcc -o prog_reader prog_reader.c

install:
		$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install

clean:
		$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
		rm writer reader
