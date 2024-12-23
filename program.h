//Osman Oğuzhan Kırık b231210372 1c
//Mehmet Ali Tüfekçi b221210383 1b
//Sıla Çanga G231210372 2c
//Aleyna Çakır G231210370 2a
//Halil İbrahim Sarıtemur B221210352 1a

#ifndef PROGRAM_H
#define PROGRAM_H

// Maksimum komut uzunlu�u ve arg�man say�s�
#define MAX_CMD_LENGTH 1024
#define MAX_ARGS 100

// G�m�l� komutlar i�in fonksiyon bildirimleri
int kocsh_help(char** args);
int kocsh_quit(char** args);

// Komut yorumlama ve �al��ma fonksiyonlar�
char** komutYorumla(char* line);
int calistir(char** args);
int tekliKomutCalistir(char** args);
int girisYonlendirme(char** args);
int cikisYonlendirme(char** args);

// Eksik fonksiyonlar (arka plan ve pipe i�lemleri i�in)
int arkaPlandaCalistir(char** args); // & sembol� ile arka planda �al��ma
int boruCalistir(char** args);       // | sembol� ile pipe i�lemi

// Sinyal i�leyici fonksiyonu
void sig_chld(int signo);

#endif // PROGRAM_H

