/* 
 * CS:APP Data Lab 
 * 
 * <请在这里填写你的姓名和学号>
 * 
 * bits.c - 本实验解答的源文件。
 *          这就是你要交给助教的文件。
 *
 * 警告：不要包含 <stdio.h> 头文件，它会让 dlc 编译器出错。
 * 调试时你仍然可以在不包含 <stdio.h> 的情况下使用 printf，
 * 只是可能会收到编译器警告。一般情况下忽略编译器警告不是好习惯，
 * 但在这里没关系。  
 */

#if 0
/*
 * 学生须知：
 *
 * 第一步：仔细阅读以下说明。
 */

你将通过编辑本源文件中的这一组函数，来完成 Data Lab 的解答。

整数编码规则：
 
  把每个函数中的 "return" 语句替换为一行或多行实现该函数的 C 代码。
  你的代码必须符合以下风格：
 
  int Funct(arg1, arg2, ...) {
      /* 简要说明你的实现思路 */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  每个 "Expr" 是只使用以下内容的表达式：
  1. 0 到 255（0xFF）的整数常量（含两端）。不允许使用 0xffffffff
     这类大常量。
  2. 函数参数和局部变量（不能使用全局变量）。
  3. 一元整数运算符 ! ~
  4. 二元整数运算符 & ^ | + << >>

  有些题目对允许使用的运算符限制得更严。每个 "Expr" 可以由多个运算符
  组成，不要求一行只能有一个运算符。

  明确禁止：
  1. 使用任何控制结构，如 if、do、while、for、switch 等。
  2. 定义或使用任何宏。
  3. 在本文件中定义任何额外的函数。
  4. 调用任何函数。
  5. 使用任何其他运算，如 &&、||、- 或 ?:。
  6. 使用任何形式的强制类型转换。
  7. 使用 int 之外的任何数据类型。这意味着你不能使用数组、结构体
     或联合体。


  你可以假设你的机器：
  1. 整数采用 32 位补码表示。
  2. 执行算术右移。
  3. 移位量小于 0 或大于 31 时，移位行为不可预测。


可接受的编码风格示例：
  /*
   * pow2plus1 - 返回 2^x + 1，其中 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* 利用移位的能力计算 2 的幂 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - 返回 2^x + 4，其中 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* 利用移位的能力计算 2 的幂 */
     int result = (1 << x);
     result += 4;
     return result;
  }

浮点编码规则

对于要求你实现浮点运算的题目，编码规则没那么严格。你可以使用循环和
条件控制，可以同时使用 int 与 unsigned，可以使用任意的整数与无符号
常量，也可以对 int 或 unsigned 数据做任意算术、逻辑或比较运算。

明确禁止：
  1. 定义或使用任何宏。
  2. 在本文件中定义任何额外的函数。
  3. 调用任何函数。
  4. 使用任何形式的强制类型转换。
  5. 使用 int 或 unsigned 之外的任何数据类型。这意味着你不能使用
     数组、结构体或联合体。
  6. 使用任何浮点数据类型、运算或常量。


注意事项：
  1. 用 dlc（data lab checker，讲义中有说明）编译器检查你的解答是否合法。
  2. 每个函数都有一个允许使用的最大运算数上限（整数、逻辑或比较运算）。
     该上限由 dlc 检查。注意赋值（'='）不计入其中，想写多少条都不会被扣分。
  3. 用 btest 测试框架检查函数是否正确。
  4. 用 BDD checker 对你写的函数做形式化验证。
  5. 每个函数的最大运算数写在它自己的头部注释里。如果讲义中给出的上限
     与本文件中的不一致，以本文件为准。

/*
 * 第二步：按照编码规则修改下面这些函数。
 * 
 *   重要。为避免评分时出现意外：
 *   1. 用 dlc 编译器检查你的解答是否符合编码规则。
 *   2. 用 BDD checker 形式化验证你的解答是否给出正确的答案。
 */


#endif
//1
/* 
 * bitXor - 只用 ~ 和 & 实现 x^y  
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
  return 2;
}
/* 
 * tmin - 返回最小的补码整数  
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {

  return 2;

}
//2
/*
 * isTmax - 若 x 是最大的补码数则返回 1，否则返回 0  
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x) {
  return 2;
}
/* 
 * allOddBits - 若字中所有奇数位都为 1 则返回 1
 *   位从 0（最低有效位）编号到 31（最高有效位）
 *   示例：allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x) {
  return 2;
}
/* 
 * negate - 返回 -x 
 *   示例：negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  return 2;
}
//3
/* 
 * isAsciiDigit - 若 0x30 <= x <= 0x39（字符 '0' 到 '9' 的 ASCII 码）则返回 1
 *   示例：isAsciiDigit(0x35) = 1.
 *         isAsciiDigit(0x3a) = 0.
 *         isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
  return 2;
}
/* 
 * conditional - 等价于 x ? y : z 
 *   示例：conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
  return 2;
}
/* 
 * isLessOrEqual - 若 x <= y 则返回 1，否则返回 0 
 *   示例：isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
  return 2;
}
//4
/* 
 * logicalNeg - 用除 ! 之外的全部合法运算符实现 ! 运算符
 *   示例：logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int logicalNeg(int x) {
  return 2;
}
/* howManyBits - 返回用补码表示 x 所需的最少位数
 *  示例：howManyBits(12) = 5
 *        howManyBits(298) = 10
 *        howManyBits(-5) = 4
 *        howManyBits(0)  = 1
 *        howManyBits(-1) = 1
 *        howManyBits(0x80000000) = 32
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 90
 *  Rating: 4
 */
int howManyBits(int x) {
  return 0;
}
//float
/* 
 * floatScale2 - 返回表达式 2*f 的位级等价结果，f 是浮点参数。
 *   参数和结果都以 unsigned int 传递，但都要按单精度浮点数的
 *   位级表示来解释。
 *   当参数是 NaN 时，返回参数本身
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned floatScale2(unsigned uf) {
  return 2;
}
/* 
 * floatFloat2Int - 返回表达式 (int) f 的位级等价结果，f 是浮点参数。
 *   参数以 unsigned int 传递，但要按单精度浮点数的位级表示
 *   来解释。
 *   任何超出范围的值（包括 NaN 和无穷大）都应返回 0x80000000u。
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int floatFloat2Int(unsigned uf) {
  return 2;
}
/* 
 * floatPower2 - 对任意 32 位整数 x，返回表达式 2.0^x
 *   （2.0 的 x 次幂）的位级等价结果。
 *
 *   返回的无符号值应与单精度浮点数 2.0^x 的位表示完全相同。
 *   若结果太小、无法用非规格化数表示，返回 0；若太大，返回 +INF。
 * 
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. Also if, while 
 *   Max ops: 30 
 *   Rating: 4
 */
unsigned floatPower2(int x) {
    return 2;
}
