# Instructions for A1
解释器需要一个栈和一个内存数组

### READ addr
提示用户:
```
input a integer> 
```
提示语可以换成别的。
并读入一个整数到mem[addr]

### WRITE
把栈顶的元素出栈并且输出

### ADD
弹出栈顶两个元素，压入他们的和

### SUB
弹出栈顶两个元素，压入他们的差
是原栈顶下面那个元素减去栈顶，以后的二元运算都一样

### PUSH
把mem[addr]处的数值入栈

### POP
栈顶弹出

### HALT
退出执行


