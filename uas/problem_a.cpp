#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Membuat struct message dikarenakan data saling berhubungan dan akan digunakan
// kembali
typedef struct {
  int hours;
  int minutes;
  char content[10001];
} message;

int main() {
  int ans[2];
  // Mengisi array dengan nilai 0, untuk mengganti garbage value
  memset(ans, 0, sizeof(ans));

  for (int curr_msg = 0; curr_msg < 2; curr_msg++) {
    message msg;
    scanf("%d:%d>%[^\n]", &msg.hours, &msg.minutes, msg.content);

    // Menghapus digit terakhir yang akan menghasilkan digit pertama
    int first_pos = msg.minutes / 10;
    // Mengambil digit terakhir 25 mod 10 = 5
    int second_pos = msg.minutes % 10;

    int curr_pos = 0; // Current word index
    for (int i = 0; i < strlen(msg.content); i++) {
      if (curr_pos == first_pos || curr_pos == second_pos)
        // Mengubah character menjadi cipher a=1, b=2, ..., z=26
        if (msg.content[i] >= 'a' && msg.content[i] <= 'z') {
          ans[curr_msg] += msg.content[i] - 'a' + 1; // untuk lowercase
        } else if (msg.content[i] >= 'A' && msg.content[i] <= 'Z') {
          ans[curr_msg] += msg.content[i] - 'A' + 1; // untuk uppercase
        }

      // Jika ketemu spasi, maka current word index bertambah
      if (msg.content[i] == ' ')
        curr_pos++;
    }

    // Jika posisi pertama dan kedua sama, maka hanya dikali 2
    if (first_pos == second_pos) {
      ans[curr_msg] *= 2;
    }

    // Jika answer sama dengan 180 atau 360, maka ubah menjadi 180
    if (ans[curr_msg] % 180 == 0 && ans[curr_msg] != 0)
      ans[curr_msg] = 180;
    else
      // Jika answer tidak sama dengan 180 atau 360, maka modulo 180
      ans[curr_msg] = ans[curr_msg] % 180;

    // Jika jam lebih dari sama dengan 12 atau, jika ada kasus di mana
    // jam = 12, dan menit lebih dari 0, maka lakukan negasi kepada ans
    if (msg.hours >= 12 || (msg.hours == 12 && msg.minutes > 0)) {
      ans[curr_msg] *= -1;
    }
  }

  printf("Case #1: %d,%d\n", ans[0], ans[1]);
  return 0;
}