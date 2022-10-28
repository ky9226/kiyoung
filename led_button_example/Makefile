obj-m += gpio_driver.o
RESULT = led_button_example
SRC = $(RESULT).c

all :
	make -C /home/seongho/working/kernel M=$(PWD) modules
	aarch64-linux-gnu-gcc -o $(RESULT) $(SRC)

clean :
	make -C $(HOME)/working/kernel M=$(PWD) clean
	rm -f $(RESULT)
