#include <stdio.h>
// template merge sort
void merge(int arr[], int s, int mid, int e) {
  int s1 = s;
  int s2 = mid + 1;
  int e1 = mid;
  int e2 = e;
  int temp[100000];
  int index = s;

  while (s1 <= e1 && s2 <= e2) {
    if (arr[s1] < arr[s2]) {
      temp[index++] = arr[s1++];
    } else {
      temp[index++] = arr[s2++];
    }
  }

  while (s1 <= e1) {
    temp[index++] = arr[s1++];
  }
  while (s2 <= e2) {
    temp[index++] = arr[s2++];
  }

  for (int i = s; i <= e; i++) {
    arr[i] = temp[i];
  }
}

void split(int arr[], int s, int e) {
  if (s < e) {
    int mid = (s + e) / 2;
    split(arr, s, mid);
    split(arr, mid + 1, e);
    merge(arr, s, mid, e);
  }
}

int main() {
  int A;
  scanf("%d", &A);
  int i, j;
  for (i = 0; i < A; i++) {
    int B;
    int Lsearch;
    scanf("%d", &B);

    int MMR[B];
    for (j = 0; j < B; j++) {
      scanf("%d", &MMR[j]);
    }
    split(MMR, 0, B - 1);
    scanf("%d", &Lsearch);

    int temp = -1;
    for (j = 0; j < B; j++) {
      if (MMR[j] == Lsearch) {
        temp = j;
        break;
      }
    }

    if (temp == -1) {
      printf("CASE #%d: -1 -1\n", i + 1);
    } else if (temp == B - 1) {
      printf("CASE #%d: %d %d\n", i + 1, MMR[temp - 1], MMR[temp]);
    } else {
      printf("CASE #%d: %d %d\n", i + 1, MMR[temp], MMR[temp + 1]);
    }
  }

  return 0;
}

/*
3
10
3246 4255 4873 5004 5095 6001 6692 7100 7610 9712
9712
8
4957 5444 5464 5634 6149 6622 8313 9492
4957
6
5393 6021 7233 8115 8118 9304
9999
*/