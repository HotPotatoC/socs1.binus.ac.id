#include <stdio.h>

// Alias type for signed long long int which is a 64-bit integer.
typedef signed long long int int64;

// Declare struct item containing quantity, name, and price
typedef struct {
  int quantity;
  char name[101];
  int price;
} item;

int main() {
  // Open file with the name "testdata.in" with read mode
  FILE *f = fopen("testdata.in", "r");
  if (f == NULL) {
    // If file is not found, return 1
    return 1;
  }

  int tc;
  fscanf(f, "%d", &tc);
  for (int t = 0; t < tc; t++) {
    int n;
    fscanf(f, "%d", &n);
    item items[n]; // Declare array with size of n
    for (int i = 0; i < n; i++) {
      // Read input with format {integer}#{string}@{integer}
      fscanf(f, "%d#%[^@]@%d", &items[i].quantity, items[i].name,
             &items[i].price);
    }

    // Declare a variable to store the total price
    int64 total = 0;
    for (int i = 0; i < n; i++)
      // Add the price of each item to the total price
      // Multiply the price by the quantity
      total += items[i].price * items[i].quantity;

    // calculate the discounted price by 15%
    int64 discounted_price = total * 0.15;

    // Print the discounted price
    printf("Customer #%d: Rp %lld\n", t + 1, total - discounted_price);
  }
  return 0;
}