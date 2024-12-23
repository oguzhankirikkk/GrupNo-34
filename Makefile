#Osman Oğuzhan Kırık b231210372 1c
#Mehmet Ali Tüfekçi b221210383 1b
#Sıla Çanga G231210372 2c
#Aleyna Çakır G231210370 2a
#Halil İbrahim Sarıtemur B221210352 1a

# Derleyici ve bayraklar
CC = gcc
CFLAGS = -Wall -g

# Çıktı dosyası
TARGET = program

# Kaynak ve başlık dosyaları
SRCS = program.c
HDRS = program.h

# Hedef: tüm projeyi derle
all: $(TARGET)

# Çıktı dosyasını oluştur
$(TARGET): $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Temizlik işlemi
clean:
	rm -f $(TARGET) *.o

# Yeniden derleme (önce temizler, sonra derler)
rebuild: clean all
