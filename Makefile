
TAGET = spidev_demo
SOURCE = $(TAGET).c
CC = arm-linux-gcc

all:
	$(CC) $(SOURCE) -o $(TAGET)
	sudo cp $(TAGET)  /media/sf_VirtualBox  -rf
	sync

clean:
	rm -rf $(TAGET)
	sync
