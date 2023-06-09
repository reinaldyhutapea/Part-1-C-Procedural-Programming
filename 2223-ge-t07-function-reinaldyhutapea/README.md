[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-8d59dc4de5201274e310e4c54b9627a8934c3b88527886e3b421487c677d23eb.svg)](https://classroom.github.com/a/81HXe8q2)
## Function
Pada tugas kali ini anda akan mengembangkan beberapa fungsi dengan spesifikasi yang telah ditentukan.

### Academic
Butet baru saja bertemu dengan salah seorang dosen pemrograman yang memintanya untuk mengembangkan suatu program sederhana yang menyimulasikan entitas-entitas di lingkup akademik. Sebenarnya, sang dosen telah mengembangkan desain dasar dari simulator dan Butet hanya diminta untuk mengimplementasikannya. Sebagai langkah awal, simulator hanya akan menangani entitas mata kuliah (```course```), mahasiswa (```student```), dan rencana studi (```enrollment```).

Berikut adalah rincian entitas dalam simulator:
1. Sebuah ```course``` memiliki kode mata kuliah (```code```), nama mata kuliah (```name```), kredit (```credit```), dan nilai minimum (```passing grade```). Aturan besaran nilai kredit adalah ```0 < credit <= 8```.
2. Seorang ```student``` memiliki NIM (```id```), nama mahasiswa (```name```), angkatan (```year```), dan program studi (```study program```).
3. Sebuah ```enrollment``` adalah relasi yang menghubungkan ```course``` dan ```student```. Sebuah ```course``` dapat dikontrak oleh banyak ```student``` dan seorang ```student``` dapat mengontrak banyak ```course```. Suatu ```enrollment``` terikat pada suatu ```semester``` di suatu tahun akademik ```academic year```. Sebuah ```enrellment``` memiliki sebuah ```course```, ```student```, ```academic year```, ```semester```, dan nilai yang diperoleh mahasiswa bersangkutan (```grade```).
4. Terdapat tiga semester, ganjil (```odd```), genap (```even```), dan pendek (```short```).
5. Terdapat delapan opsi nilai huruf (```grade```): **A**, **AB**, **B**, **BC**, **C**, **D**, **E**, **T**. Untuk mengantisipasi situasi di mana nilai belum dimasukkan, maka by default di-set dengan ```None```. Untuk setiap nilai huruf dapat dikonversi menjadi nilai angka **4.0**, **3.5**, **3.0**, **2.5**, **2.0**, **1.0**, dan **0.0**. Untuk nilai huruf **T** dan ketika nilai belum diberikan maka akan diberi nilai angka **0.0**.

Simulator diharapkan memiliki fitur-fitur dasar sebagai berikut:
1. Membuat sebuah ```course``` dengan menggunakan fungsi ```create_course(...)```.
2. Menampilkan informasi dari sebuah ```course``` ke ```stdout``` dengan menggunakan fungsi ```print_course(...)```.
3. Membuat seorang ```student``` dengan menggunakan fungsi ```create_student(...)```.
4. Menampilkan informasi dari seorang ```student``` ke ```stdout``` dengan menggunakan fungsi ```print_student(...)```.
5. Membuat sebuah ```enrollment``` dengan menggunakan fungsi ```create_enrollment(...)```.
6. Menampilkan informasi dari sebuah ```enrollment``` ke ```stdout``` dengan menggunakan fungsi ```print_enrollment(...)```.

Memperhatikan kompleksitas persoalan, Butet kemudian meminta bantuan dari sang sahabat, Ucok. Setelah mendengar penjelasan Butet, tanpa berpikir dua kali, ia pun bersedia membantu.

### Solution Design
Semua entitas telah didefinisikan pada berkas ```academic.h```. Entitas ```course```, ```student```, dan ```enrollment``` didefinisikan dalam bentuk structures, sementara opsi nilai (```grade```) dan ```semester``` didefinisikan dalam bentuk enumerations. Pada ```academic.h``` juga telah dituliskan spesifikasi dari fungsi-fungsi yang harus dikembangkan untuk menyelesaikan tugas ini.

Butet hanya diperbolehkan untuk mengubah berkas ```academic.c``` saja. Pada berkas tersebut berisi implementasi dari spesifikasi. Implementasi yang dikerjakan Butet harus merujuk pada spesifikasi.

### Output Formats
Berikut adalah format keluaran untuk setiap upaya menampilkan informasi dari entitas:
1. ```print_course(...)``` akan menampilkan kode mata kuliah, nama mata kuliah, kredit, dan nilai minimum dalam bentuk nilai huruf. Keempat data tersebut ditulis dalam satu baris keluaran dengan simbol pipe ```|``` sebagai separator.
2. ```print_student(...)``` akan menampilkan NIM, nama mahasiswa, angkatan, dan program studi. Keempat data tersebut ditulis dalam satu baris keluaran dengan simbol pipe ```|``` sebagai separator.
3. ```print_enrollment(...)``` akan menampilkan kode mata kuliah, NIM mahasiswa, tahun akademik, semester dan performa yang diraih. Performa adalah hasil perkalian antara kredit dari mata kuliah dan nilai (angka) yang diperoleh. Performa dituli dalam format dua digit nilai presisi. Keempat data tersebut ditulis dalam satu baris keluaran dengan simbol pipe ```|``` sebagai separator.

### Compilation
Proses kompilasi harus menyertakan program dan ```academic.c``` yang berisi implementasi dari spesifikasi. Berikut ini adalah contoh perintah untuk mengkompilasi ```t07_00.c```.

```
> gcc t07_00.c academic.c -o t07_00
```

Dari kompilasi akan dihasilkan sebuah berkas executable ```t07_00```.

### Case 0 (t07_00.c, 0 points)
Case ini digunakan sebagai contoh yang didemonstrasikan. Berikut adalah keluaran yang diharapkan.

```
10S1002|Procedural Programming|2|D

```

### Case 1 (t07_01.c, 30 points)
Berikut adalah keluaran yang diharapkan.

```
12S22999|Wiro Sableng|2022|Information Systems

```

### Case 2 (t07_02.c, 30 points)
Berikut adalah keluaran yang diharapkan.

```
10S1002|Procedural Programming|2|D
12S22999|Wiro Sableng|2022|Information Systems
10S1002|12S22999|None|0.00
10S1002|12S22999|AB|7.00

```

### Case 3 (t07_03.c, 40 points)
Berikut adalah keluaran yang diharapkan.

```
12S1102|Visual Programming|2|D
10S1002|Procedural Programming|2|D
12S22999|Wiro Sableng|2022|Information Systems
12S1102|12S22999|None|0.00
10S1002|12S22999|None|0.00
12S1102|12S22999|A|8.00
10S1002|12S22999|AB|7.00

```

## Submission
1. academic.c
2. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
