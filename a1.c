#include "./code.h"



void interpret(ins_t code[]) {
  int stack[64], top = 0;
  int mem[64] = {};
}

ins_t code[] = {
    {READ, {0}},
    {READ, {1}},
    {PUSH, {0}},
    {PUSH, {1}},
    {ADD},
    {WRITE},
    {HALT}
};

int main(void) {
    interpret(code);
    return 0;  
}