??    /      ?  C           8     B   R  A   ?  6   ?  H     I   W  F   ?  9   ?  7   "  6   Z  M   ?  L   ?  O   ,  H   |  {   ?     A  ,   ]     ?  .   ?  '   ?  (   	     *	     J	  ?   W	  e   1
  :   ?
    ?
  ?  ?  ?  ?     ^     s  <   ?  1   ?  &   ?          )  "   >  9   a  I   ?  ?   ?     ?     ?     ?     ?     ?     ?  ?  ?  8   ?  :   ?  :   4  9   o  I   ?  I   ?  D   =  7   ?  7   ?  5   ?  D   (  >   m  V   ?  I     \   M     ?  (   ?     ?  -     "   ;  %   ^  %   ?     ?  ?   ?  R   ?  .   ?  
    ?  )  O  ?     0     D  ?   U     ?  .        G     V  #   l  ;   ?  K   ?  ?         ?      ?      ?      ?      ?   	   ?                                                                     "   /                
             	      +         '          .   !       #            ,   %                 (   )         -                      *          &          $      -E                        (ignored for compatibility)
   -V, --version               output version information and exit
   -V, --version             display version information and exit
   -c, --context=CONTEXT     specify context for MSGID
   -d, --domain=TEXTDOMAIN   retrieve translated message from TEXTDOMAIN
   -d, --domain=TEXTDOMAIN   retrieve translated messages from TEXTDOMAIN
   -e                        enable expansion of some escape sequences
   -h, --help                  display this help and exit
   -h, --help                display this help and exit
   -n                        suppress trailing newline
   -v, --variables             output the variables occurring in SHELL-FORMAT
   COUNT                     choose singular/plural form based on this value
   MSGID MSGID-PLURAL        translate MSGID (singular) / MSGID-PLURAL (plural)
   [TEXTDOMAIN]              retrieve translated message from TEXTDOMAIN
   [TEXTDOMAIN] MSGID        retrieve translated message corresponding
                            to MSGID from TEXTDOMAIN
 %s: invalid option -- '%c'
 %s: option '%s%s' doesn't allow an argument
 %s: option '%s%s' is ambiguous
 %s: option '%s%s' is ambiguous; possibilities: %s: option '%s%s' requires an argument
 %s: option requires an argument -- '%c'
 %s: unrecognized option '%s%s'
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <%s>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
 Display native language translation of a textual message whose grammatical
form depends on a number.
 Display native language translation of a textual message.
 If the TEXTDOMAIN parameter is not given, the domain is determined from the
environment variable TEXTDOMAIN.  If the message catalog is not found in the
regular directory, another location can be specified with the environment
variable TEXTDOMAINDIR.
Standard search directory: %s
 If the TEXTDOMAIN parameter is not given, the domain is determined from the
environment variable TEXTDOMAIN.  If the message catalog is not found in the
regular directory, another location can be specified with the environment
variable TEXTDOMAINDIR.
When used with the -s option the program behaves like the 'echo' command.
But it does not simply copy its arguments to stdout.  Instead those messages
found in the selected catalog are translated.
Standard search directory: %s
 In normal operation mode, standard input is copied to standard output,
with references to environment variables of the form $VARIABLE or ${VARIABLE}
being replaced with the corresponding values.  If a SHELL-FORMAT is given,
only those environment variables that are referenced in SHELL-FORMAT are
substituted; otherwise all environment variables references occurring in
standard input are substituted.
 Informative output:
 Operation mode:
 Report bugs in the bug tracker at <%s>
or by email to <%s>.
 Substitutes the values of environment variables.
 Try '%s --help' for more information.
 Ulrich Drepper Unknown system error Usage: %s [OPTION] [SHELL-FORMAT]
 Usage: %s [OPTION] [TEXTDOMAIN] MSGID MSGID-PLURAL COUNT
 Usage: %s [OPTION] [[TEXTDOMAIN] MSGID]
or:    %s [OPTION] -s [MSGID]...
 When --variables is used, standard input is ignored, and the output consists
of the environment variables that are referenced in SHELL-FORMAT, one per line.
 Written by %s.
 error while reading "%s" missing arguments standard input too many arguments write error Project-Id-Version: gettext-runtime 0.20.2
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2020-04-22 12:08-0400
Last-Translator: Boyuan Yang <073plan@gmail.com>
Language-Team: Chinese (simplified) <i18n-zh@googlegroups.com>
Language: zh_CN
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=1; plural=0;
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 2.3
   -E                        （为兼容性而忽略）
   -V, --version               输出版本信息并退出
   -V, --version               输出版本信息并退出
   -c, --context=上下文      指定 MSGID 的上下文
   -d, --domain=文本域       从指定<文本域>获取已翻译消息
   -d, --domain=文本域       从指定<文本域>获取已翻译消息
   -e                        启用对某些转义序列进行展开
   -h, --help                  显示此帮助并退出
   -h, --help                  显示此帮助并退出
   -n                        去除末尾的换行符
   -v, --variables             输出 SHELL格式 中出现的变量
   COUNT                     基于此值选择单复数形式
   MSGID MSGID-PLURAL        翻译 MSGID (单数形式) / MSGID-PLURAL (复数形式)
   [文本域]                  从指定<文本域>获取已翻译消息
   [文本域] MSGID            从指定<文本域>获取对应于 MSGID 的已翻译消息
 %s：无效选项 ─ %c
 %s：选项“%s%s”不允许带参数
 %s：选项“%s%s”有歧义
 %s：选项“%s%s”有歧义；可能是： %s：选项“%s%s”需要参数
 %s：选项需要一个参数 ─ %c
 %s：无法识别的选项“%s%s”
 Bruno Haible 版权所有 (C) %s Free Software Foundation, Inc.
授权协议 GPLv3+: GNU GPL 版本 3 或之后版本 <%s>
这是自由软件: 您有修改和再发布的自由。
本软件在法律允许的范围内不提供任何担保。
 显示某原文消息的本地语言翻译，而翻译的语法和数字有关。
 显示某原文消息的本地语言翻译。
 假如没有指定<文本域>参数，程序会根据 TEXTDOMAIN 环境变量来设定文本域。
假如消息一览表文件不在正常的目录下，可以用环境变量 TEXTDOMAINDIR 指定
消息一览表文件所在的位置。
标准的搜索目录为：%s
 假如没有指定<文本域>参数，程序会根据 TEXTDOMAIN 环境变量来设定<文本域>。
假如消息一览表文件不在正常的目录下，可以用环境变量 TEXTDOMAINDIR 指定
消息一览表文件所在的位置。
使用选项“-s”时此程序和“echo”命令类似。但它不是直接把参数复制至标准
输出，而是寻找消息一览表文件里翻译过的消息。
标准的搜索目录为：%s
 在普通操作模式下，会将标准输入复制到标准输出中，而以 $VARIABLE 或 ${VARIABLE}
格式给出的环境变量引用会被替换成相应的值。如果给出了 SHELL格式，则只有在该格式
中引用的环境变量会被替换；否则，标准输入中出现的全部环境变量引用都将被替换。
 信息性输出：
 操作模式：
 请将软件错误提交至 bug 跟踪系统 <%s>
或发送电子邮件到 <%s>。
请将翻译错误报告至简体中文邮件列表 <i18n-zh@googlegroups.com>。
 替换环境变量的值。
 试试“%s --help”来获取更多信息。
 Ulrich Drepper 未知的系统错误 用法：%s [选项] [SHELL格式]
 用法：%s [选项] [文本域] MSGID 复数-MSGID 数字
 用法：%s [选项] [[文本域] MSGID]
或：  %s [选项] -s [MSGID]...
 若使用了 --variables，则会忽略标准输入，而输出由 SHELL格式 引用的环境变量组成，
每行出现一个环境变量。
 由 %s 编写。
 读取“%s”时出错 缺少了参数 标准输入 参数过多 写错误 