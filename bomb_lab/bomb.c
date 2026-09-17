/***************************************************************************
 * Dr. Evil's Insidious Bomb, Version 1.1
 * Copyright 2011, Dr. Evil Incorporated. All rights reserved.
 *
 * 许可协议：
 *
 * Dr. Evil Incorporated（下称"加害人"PERPETRATOR）在此明确授予你（下称
 * "受害人"VICTIM）使用本炸弹（下称 BOMB）的许可。这是一份限期许可，
 * 有效期至 VICTIM 死亡为止。PERPETRATOR 对 VICTIM 遭受的损害、挫败、
 * 精神失常、瞪成牛眼、腕管综合征、失眠或其他任何伤害概不负责——
 * 除非 PERPETRATOR 想蹭这份功劳，那另当别论。VICTIM 不得将本炸弹
 * 源代码分发给 PERPETRATOR 的任何敌人。任何 VICTIM 均不得调试、
 * 逆向工程、对它运行 "strings"、反编译、解密，或使用任何其他手段
 * 来获知并拆除 BOMB。操作本程序时不得穿着防 BOMB 服装。
 * PERPETRATOR 不会为 PERPETRATOR 缺乏幽默感而道歉。
 * 在法律禁止 BOMB 的地方，本许可证完全无效。
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "support.h"
#include "phases.h"

/* 
 * 写给自己的备忘：记得删掉这个文件，这样我的受害者就完全
 * 摸不着头脑，全都会在一场格外阴险的壮观爆炸中灰飞烟灭。
 * —— Dr. Evil 
 */

FILE *infile;

int main(int argc, char *argv[])
{
    char *input;

    /* 写给自己的备忘：记得把炸弹移植到 Windows 上，
     * 再配一个超炫的 GUI。 */

    /* 不带任何参数运行时，炸弹从标准输入逐行读取输入。 */
    if (argc == 1) {  
	infile = stdin;
    } 

    /* 带一个参数 <file> 运行时，炸弹先从 <file> 读到文件末尾，
     * 然后切回标准输入。于是每拆掉一个关卡，你就可以把该关的拆弹
     * 字符串追加进 <file>，省得每次重新敲一遍。 */
    else if (argc == 2) {
	if (!(infile = fopen(argv[1], "r"))) {
	    printf("%s: Error: Couldn't open %s\n", argv[0], argv[1]);
	    exit(8);
	}
    }

    /* 传给炸弹的命令行参数不能超过 1 个。 */
    else {
	printf("Usage: %s [<input_file>]\n", argv[0]);
	exit(8);
    }

    /* 干各种神神秘秘的勾当，让炸弹更难被拆除。 */
    initialize_bomb();

    printf("Welcome to my fiendish little bomb. You have 6 phases with\n");
    printf("which to blow yourself up. Have a nice day!\n");

    /* 嗯……六个关卡总该比一个关卡更保险吧！ */
    input = read_line();             /* 读取输入                    */
    phase_1(input);                  /* 执行该关卡                  */
    phase_defused();                 /* 糟糕！他们竟然破解了！
				      * 告诉我他们是怎么做到的。 */
    printf("Phase 1 defused. How about the next one?\n");

    /* 第二关更难。谁也琢磨不出这关该怎么拆…… */
    input = read_line();
    phase_2(input);
    phase_defused();
    printf("That's number 2.  Keep going!\n");

    /* 我觉得到现在为止太简单了。再上点更绕的代码，
     * 好把人搞晕。 */
    input = read_line();
    phase_3(input);
    phase_defused();
    printf("Halfway there!\n");

    /* 哦？你的数学有多好？来试试这道辣手的题！ */
    input = read_line();
    phase_4(input);
    phase_defused();
    printf("So you got that one.  Try this one.\n");
    
    /* 在内存里转啊转，转到哪儿停下，炸弹就在哪儿炸开！ */
    input = read_line();
    phase_5(input);
    phase_defused();
    printf("Good work!  On to the next...\n");

    /* 这一关永远不会被用到，因为没人能过得了前面几关。
     * 不过以防万一，还是把它做得格外难。 */
    input = read_line();
    phase_6(input);
    phase_defused();

    /* 哇，他们全解出来了！可是……是不是少了点什么？
     * 也许有哪一步被他们忽略了？哇哈哈哈！ */
    
    return 0;
}
