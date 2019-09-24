#include <Wire.h>                               // untuk berkomunikasi dengan perangkat I2C/TWI. pada aruino dengan SDA(jalur data) dan SCL(garis jam)
#include <LiquidCrystal_I2C.h>                  // untuk layar LCD I2C

LiquidCrystal_I2C lcd(0x27,20,4);               // Atur alamat LCD ke 0x27 untuk tampilan 16 karakter dan 2 baris

void setup()
{
  lcd.begin(16, 2);                             // Inisialisasi antarmuka ke layar LCD dan mementukan dimensi(lebar dan tinggi)layar
  lcd.init();                                   // Inisialisasi LCD
  lcd.backlight();                              // Menampilkan cahaya
}          
void loop()
{
    lcd.setCursor(0, 0);                        // Mengatur posisi yang akan di tulis
    lcd.print("     SATRIYA");                  // Mencetak teks ke LCD
    lcd.setCursor(1, 1);                        // Mengatur posisi yang akan di tulis
    lcd.print("   173050007");                  // Mencetak teks ke LCD
    delay(1000);                                // Tunggu
    lcd.clear();                                // Menghapus layar LCD
    
    lcd.setCursor(0, 0);                        // Mengatur posisi yang akan di tulis
    lcd.print("     ZAKY");                     // Mencetak teks ke LCD
    lcd.setCursor(1, 1);                        // Mengatur posisi yang akan di tulis
    lcd.print("   173050004");                  // Mencetak teks ke LCD
    delay(1000);                                // Tunggu
    lcd.clear();                                // Menghapus layar LCD
  
    lcd.setCursor(0, 0);                        // Mengatur posisi yang akan di tulis
    lcd.print("     JOHANNES");                 // Mencetak teks ke LCD
    lcd.setCursor(1, 1);                        // Mengatur posisi yang akan di tulis
    lcd.print("   173050002");                  // Mencetak teks ke LCD
    delay(1000);                                // Tunggu
    lcd.clear();                                // Menghapus layar LCD
  
    lcd.setCursor(3, 0);                        // Mengatur posisi yang akan di tulis
    lcd.print("MATA KULIAH");                   // Mencetak teks ke LCD
    lcd.setCursor(4, 1);                        // Mengatur posisi yang akan di tulis 
    lcd.print("INTEFACE");                      // Mencetak teks ke LCD
    delay(2000);                                // Tunggu
    lcd.clear();                                // Menghapus layar LCD

    lcd.setCursor(3, 0);                        // Mengatur posisi yang akan di tulis 
    lcd.print("PROJECT LCD");                   // Mencetak teks ke LCD
    lcd.setCursor(1, 1);                        // Mengatur posisi yang akan di tulis 
    lcd.print("SHIFT REGISTER");                // Mencetak teks ke LCD
    delay(2000);                                // Tunggu
    lcd.clear();                                // Menghapus layar LCD   

    lcd.setCursor(3, 0);                        // Mengatur posisi yang akan di tulis 
    lcd.print("INI CONTOH");                    // Mencetak teks ke LCD
    lcd.setCursor(1, 1);                        // Mengatur posisi yang akan di tulis 
    lcd.print("SHIFT REGISTER:");               // Mencetak teks ke LCD
    delay(1500);                                // Tunggu
    lcd.clear();                                // Menghapus layar LCD     

    int i;                                      // Inisialisasi variable integer
    int j;                                      // Inisialisasi variable integer
      lcd.setCursor(6, 0);                      // Mengatur posisi yang akan di tulis 
      lcd.print("SELAMAT DATANG");              // Mencetak teks ke LCD
      for (i = 0 ; i < 16; i++){
        lcd.scrollDisplayLeft();                // Menjalankan text kearah kiri 
        delay(1000);                            // Tunggu
      lcd.setCursor(0, 1);                      // Mengatur posisi yang akan di tulis    
      lcd.print("DI POLITEKNIK PAJAJARAN");     // Mencetak teks ke LCD
      for (i = 0 ; j < 16; j++){
        lcd.scrollDisplayRight();               // Menjalankan text kearah kanan
        delay(1000);                            // Tunggu
      }
      }
}
