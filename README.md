# C Programming Projects Portfolio

[🇹🇷 Türkçe](#-türkçe) | [🇬🇧 English](#-english)

---

<a name="-türkçe"></a>
## 🇹🇷 Türkçe

Bu repo, C programlama dilini öğrenme ve pratik yapma sürecinde geliştirilmiş çeşitli projeleri, algoritmaları ve veri yapısı örneklerini içerir. Projeler, konularına ve karmaşıklık seviyelerine göre kategorize edilmiştir.

### 📂 Klasör Yapısı ve İçerik

Proje dosyaları aşağıdaki ana başlıklar altında toplanmıştır:

#### 1. 🧮 Temel Algoritmalar (`Temel_Algoritmalar/`)
Programlamaya giriş seviyesindeki matematiksel ve mantıksal işlemler.
*   **deger_degistirme.c**: İki değişkenin değerini takas eden algoritma (Swap).
*   **matematiksel_islem.c**: Temel aritmetik işlemler.
*   **sayi_tahmin.c**: Rastgele sayı üretimi ile sayı tahmin oyunu.
*   **not_hesaplayici.c**: Vize/Final notlarına göre ortalama hesaplama.
*   **rakam_sayici.c**: Girilen sayının basamaklarındaki rakamların adetlerini bulur.
*   **palindrom_sayi_kontrol.c**: Sayısal palindrom kontrolü.

#### 2. 📝 Diziler ve String İşlemleri (`Diziler_ve_Stringler/`)
Metin manipülasyonu ve dizi algoritmaları üzerine çalışmalar.
*   **dizi_ters_cevirici.c**: Bir dizinin elemanlarını tersine çevirme.
*   **katli_diziler.c / katli_diziler2.c**: Çok boyutlu dizi (matris) örnekleri.
*   **palindrom_string.c**: Bir kelimenin tersten okunuşunun aynı olup olmadığını kontrol etme.
*   **kelime_sayisi.c**: Girilen metindeki kelime sayısını bulma.
*   **gelismis_dizi_islemleri.c**: Dizi oluşturma, sıralama (Bubble Sort), arama ve matematiksel işlemler.
*   **matris_koordinat_yazdirma.c**: Matris indislerini koordinat sistemi olarak yazdırır.

#### 3. 🗂 Veri Yönetimi ve Struct Yapıları (`Veri_Yonetimi_ve_Struct/`)
`struct` yapısı kullanılarak oluşturulmuş mini yönetim sistemleri ve veri yapıları.
*   **telefon_rehberi.c**: Kişi ekleme, silme ve arama özellikli telefon rehberi uygulaması.
*   **kitaplik_yonetici.c**: Kütüphane kitap takip ve ödünç alma sistemi.
*   **personel_bilgi_kayit_sistemi.c**: Çalışan bilgilerini tutan yapı örneği.
*   **struct_ilk.c**: Struct yapısına giriş örneği.
*   **agac_olusturma.c**: Basit bir ikili ağaç (binary tree) oluşturma ve yazdırma örneği.
*   **liste_olusturma.c**: Bağlı liste (linked list) oluşturma ve üzerinde gezinme örneği.

#### 4. 💾 Bellek ve Dosya İşlemleri (`Bellek_ve_Dosya_Islemleri/`)
İleri seviye bellek yönetimi ve dosya okuma/yazma örnekleri.
*   **veritabani.c**: Verileri metin dosyasına (`.txt`) kaydeden ve okuyan basit bir kayıt sistemi.
*   **sifreleme.c**: Temel metin şifreleme/çözme algoritması.
*   **dinamikbellek.c**: `malloc` ve `free` kullanımı ile dinamik bellek yönetimi.

### 🚀 Nasıl Çalıştırılır?

Projeleri derlemek ve çalıştırmak için `gcc` derleyicisi önerilir.

```bash
# Örnek: Telefon Rehberini derlemek için
gcc Veri_Yonetimi_ve_Struct/telefon_rehberi.c -o rehber

# Çalıştırmak için (Linux/Mac)
./rehber

# Çalıştırmak için (Windows)
rehber.exe
```

---

<a name="-english"></a>
## 🇬🇧 English

This repository contains various projects, algorithms, and data structure examples developed during the process of learning and practicing the C programming language. The projects are categorized by topic and complexity level.

### 📂 Folder Structure and Content

The project files are grouped under the following main headings:

#### 1. 🧮 Basic Algorithms (`Temel_Algoritmalar/`)
Mathematical and logical operations at the introductory level of programming.
*   **deger_degistirme.c**: Algorithm to swap the values of two variables.
*   **matematiksel_islem.c**: Basic arithmetic operations.
*   **sayi_tahmin.c**: Number guessing game with random number generation.
*   **not_hesaplayici.c**: Grade average calculation based on Midterm/Final scores.
*   **rakam_sayici.c**: Calculates the count of digits in an entered number.
*   **palindrom_sayi_kontrol.c**: Numeric palindrome check.

#### 2. 📝 Arrays and String Operations (`Diziler_ve_Stringler/`)
Studies on text manipulation and array algorithms.
*   **dizi_ters_cevirici.c**: Reversing the elements of an array.
*   **katli_diziler.c / katli_diziler2.c**: Examples of multi-dimensional arrays (matrices).
*   **palindrom_string.c**: Checking if a word reads the same backwards.
*   **kelime_sayisi.c**: Finding the word count in an entered text.
*   **gelismis_dizi_islemleri.c**: Array creation, sorting (Bubble Sort), searching, and mathematical operations.
*   **matris_koordinat_yazdirma.c**: Prints matrix indices as a coordinate system.

#### 3. 🗂 Data Management and Structs (`Veri_Yonetimi_ve_Struct/`)
Mini management systems and data structures created using `struct`.
*   **telefon_rehberi.c**: Phonebook application with add, delete, and search features.
*   **kitaplik_yonetici.c**: Library book tracking and borrowing system.
*   **personel_bilgi_kayit_sistemi.c**: Structure example holding employee information.
*   **struct_ilk.c**: Introduction to Structs.
*   **agac_olusturma.c**: Simple binary tree creation and printing example.
*   **liste_olusturma.c**: Linked list creation and traversal example.

#### 4. 💾 Memory and File Operations (`Bellek_ve_Dosya_Islemleri/`)
Advanced memory management and file read/write examples.
*   **veritabani.c**: Simple record system that saves and reads data to/from a text file (`.txt`).
*   **sifreleme.c**: Basic text encryption/decryption algorithm.
*   **dinamikbellek.c**: Dynamic memory management using `malloc` and `free`.

### 🚀 How to Run?

It is recommended to use the `gcc` compiler to compile and run the projects.

```bash
# Example: To compile the Phonebook
gcc Veri_Yonetimi_ve_Struct/telefon_rehberi.c -o rehber

# To run (Linux/Mac)
./rehber

# To run (Windows)
rehber.exe
```

### 🛠 Technologies Used
*   C Programming Language (C99 Standards)
*   GCC Compiler
*   Standard Libraries (`stdio.h`, `stdlib.h`, `string.h`, `math.h`)
