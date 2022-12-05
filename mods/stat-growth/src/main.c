#include <common.h>

// struct CurrentButton {
//   char l2;
//   char r2;
//   char l1;
//   char r1;
//   char tri;
//   char cir;
//   char x;
//   char sqr;
//   char select;
//   char l3;
//   char r3;
//   char start;
//   char up;
//   char right;
//   char down;
//   char left;
// };

// struct CurrentButton button;

// void Buttons() {
//   char *ptr_button = (char *)&button;
//   for (char i = 0; i < 16; i++) {
//     *(ptr_button + i) = (current_button >> i) % 2 + (held_button >> i) % 2;
//   }
// }

void Do_Stuff() { jump_impulse = 1000 + gems_total / 2; }