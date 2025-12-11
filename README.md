# C Programlama Projeleri Portfolyosu

Bu repo, C programlama dilini öğrenme ve pratik yapma sürecinde geliştirilmiş çeşitli projeleri, algoritmaları ve veri yapısı örneklerini içerir. Projeler, konularına ve karmaşıklık seviyelerine göre kategorize edilmiştir.

## 📂 Klasör Yapısı ve İçerik

Proje dosyaları aşağıdaki ana başlıklar altında toplanmıştır:

### 1. 🧮 Temel Algoritmalar (`Temel_Algoritmalar/`)
Programlamaya giriş seviyesindeki matematiksel ve mantıksal işlemler.
*   **deger_degistirme.c**: İki değişkenin değerini takas eden algoritma (Swap).
*   **matematiksel_islem.c**: Temel aritmetik işlemler.
*   **sayi_tahmin.c**: Rastgele sayı üretimi ile sayı tahmin oyunu.
*   **not_hesaplayici.c**: Vize/Final notlarına göre ortalama hesaplama.
*   **rakam_sayici.c**: Girilen sayının basamaklarındaki rakamların adetlerini bulur (Quiz Çözümü).
*   **palindrom_sayi_kontrol.c**: Sayısal palindrom kontrolü (Palindrom Sayı Yapıcı).

### 2. 📝 Diziler ve String İşlemleri (`Diziler_ve_Stringler/`)
Metin manipülasyonu ve dizi algoritmaları üzerine çalışmalar.
*   **dizi_ters_cevirici.c**: Bir dizinin elemanlarını tersine çevirme.
*   **katli_diziler.c / katli_diziler2.c**: Çok boyutlu dizi (matris) örnekleri.
*   **palindrom_string.c**: Bir kelimenin tersten okunuşunun aynı olup olmadığını kontrol etme.
*   **kelime_sayisi.c**: Girilen metindeki kelime sayısını bulma.
*   **gelismis_dizi_islemleri.c**: Dizi oluşturma, sıralama (Bubble Sort), arama ve matematiksel işlemler (Diziler Toplama Kampı).
*   **matris_koordinat_yazdirma.c**: Matris indislerini koordinat sistemi olarak yazdırır.

### 3. 🗂 Veri Yönetimi ve Struct Yapıları (`Veri_Yonetimi_ve_Struct/`)
`struct` yapısı kullanılarak oluşturulmuş mini yönetim sistemleri.
*   **telofon_rehberi.c**: Kişi ekleme, silme ve arama özellikli telefon rehberi uygulaması.
*   **kitaplık_yönetici.c**: Kütüphane kitap takip ve ödünç alma sistemi.
*   **parsonel_bilgi_kayit_sistemi.c**: Çalışan bilgilerini tutan yapı örneği.
*   **struct_ilk.c**: Struct yapısına giriş örneği.

### 4. 💾 Bellek ve Dosya İşlemleri (`Bellek_ve_Dosya_Islemleri/`)
İleri seviye bellek yönetimi ve dosya okuma/yazma örnekleri.
*   **veritabani.c**: Verileri metin dosyasına (`.txt`) kaydeden ve okuyan basit bir kayıt sistemi.
*   **sifreleme.c**: Temel metin şifreleme/çözme algoritması.
*   **dinamikbellek.c**: `malloc` ve `free` kullanımı ile dinamik bellek yönetimi.

## 🚀 Nasıl Çalıştırılır?

Projeleri derlemek ve çalıştırmak için `gcc` derleyicisi önerilir. Terminalinizi proje klasörüne açtıktan sonra aşağıdaki komut kalıbını kullanabilirsiniz:

```bash
# Örnek: Telefon Rehberini derlemek için
gcc Veri_Yonetimi_ve_Struct/telofon_rehberi.c -o rehber

# Çalıştırmak için (Linux/Mac)
./rehber

# Çalıştırmak için (Windows)
rehber.exe
```

## 🛠 Kullanılan Teknolojiler
*   C Programlama Dili (C99 Standartları)
*   GCC Compiler
*   Standart Kütüphaneler (`stdio.h`, `stdlib.h`, `string.h`, `math.h`)

---
*Bu proje eğitim amaçlı oluşturulmuştur.*