??    t      ?  ?   \      ?	  ?   ?	  ?   ?
  ?  ?    o  ?   ?  ?  }  U  4  ?  ?  ?  F  F  ?     2     F     e  &   }     ?  -   ?     ?  !        0     L     h  ,   }     ?  .   ?  '   ?  (   !     J  %   j     ?     ?     ?     ?     ?  *   ?       ?     &   ?     ?     ?     	     %  $   =     b     t     ?  ?   ?     Q     b     k     ?     ?  <   ?  #   ?          +     B  "   V     y     ?  &   ?     ?     ?     ?     ?       )         J  ?   _     Y  ;   p  3   ?  /   ?  +      '   <   #   d      ?      ?      ?   \   ?      1!     3!  4   P!     ?!  !   ?!  -   ?!  .   ?!     #"     ?"     Z"     r"     ?"     ?"     ?"     ?"     ?"     ?"     #     #     ,#     4#  $   G#     l#  ,   ?#  *   ?#     ?#     ?#     ?#     $     $     4$     K$  -   W$  ?   ?$     ?$     ?$  ?  ?$  ?   ?&  ?   f'  ?  I(  $  %*  ?   J+  ?  7,  w  .  ?  ?/  ?  e1  K  "3     n4     ?4     ?4     ?4     ?4  %   ?4     "5  (   95     b5     }5     ?5  %   ?5     ?5  *   ?5  "   6  %   <6  !   b6     ?6     ?6     ?6     ?6     ?6     ?6  +   ?6     7  ?   *7  !   ?7     ?7     ?7     
8      8     88     W8     m8     ?8  ?   ?8     g9  	   t9     ~9     ?9     ?9  M   ?9     :     *:  '   @:  Z   h:  2   ?:     ?:     ?:  5   ;     F;     \;     r;  $   ?;     ?;  +   ?;     ?;  r  ?;     r=  G   ?=  =   ?=  7   >  2   I>  -   |>  (   ?>  "   ?>     ?>     ?  m   &?     ??     ??  2   ??  !   ??     	@  !   (@  7   J@     ?@     ?@     ?@     ?@     ?@     ?@     A     +A     8A     HA     UA  	   kA     uA     ?A  #   ?A     ?A  '   ?A     B      B     2B     DB     VB     lB     ?B     ?B  1   ?B  B   ?B     )C     6C     t       O   '   e          Z      T   J              	       X   h   R   #       U              ?       q   (   6           E   [   H   -   D                o   ^       .          I              s       i   ;   S       =   m             d   f             G   0   _               n   &       )   k      *   3   N       r       %   `      j   $   @   C   
           Q   >   \   a   /   L       "             +       <   7      5       M      K      B   Y      1   4              g      p      !       :       l             b           V   W   2   9          A   F      ]   ,   P       8   c        
Context control:
  -B, --before-context=NUM  print NUM lines of leading context
  -A, --after-context=NUM   print NUM lines of trailing context
  -C, --context=NUM         print NUM lines of output context
 
Miscellaneous:
  -s, --no-messages         suppress error messages
  -v, --invert-match        select non-matching lines
  -V, --version             display version information and exit
      --help                display this help text and exit
 
Output control:
  -m, --max-count=NUM       stop after NUM selected lines
  -b, --byte-offset         print the byte offset with output lines
  -n, --line-number         print line number with output lines
      --line-buffered       flush output on every line
  -H, --with-filename       print file name with output lines
  -h, --no-filename         suppress the file name prefix on output
      --label=LABEL         use LABEL as the standard input file name prefix
       --include=GLOB        search only files that match GLOB (a file pattern)
      --exclude=GLOB        skip files that match GLOB
      --exclude-from=FILE   skip files that match any file pattern from FILE
      --exclude-dir=GLOB    skip directories that match GLOB
   -E, --extended-regexp     PATTERNS are extended regular expressions
  -F, --fixed-strings       PATTERNS are strings
  -G, --basic-regexp        PATTERNS are basic regular expressions
  -P, --perl-regexp         PATTERNS are Perl regular expressions
   -I                        equivalent to --binary-files=without-match
  -d, --directories=ACTION  how to handle directories;
                            ACTION is 'read', 'recurse', or 'skip'
  -D, --devices=ACTION      how to handle devices, FIFOs and sockets;
                            ACTION is 'read' or 'skip'
  -r, --recursive           like --directories=recurse
  -R, --dereference-recursive  likewise, but follow all symlinks
   -L, --files-without-match  print only names of FILEs with no selected lines
  -l, --files-with-matches  print only names of FILEs with selected lines
  -c, --count               print only a count of selected lines per FILE
  -T, --initial-tab         make tabs line up (if needed)
  -Z, --null                print 0 byte after FILE name
   -NUM                      same as --context=NUM
      --group-separator=SEP  print SEP on line between matches with context
      --no-group-separator  do not print separator for matches with context
      --color[=WHEN],
      --colour[=WHEN]       use markers to highlight the matching strings;
                            WHEN is 'always', 'never', or 'auto'
  -U, --binary              do not strip CR characters at EOL (MSDOS/Windows)

   -e, --regexp=PATTERNS     use PATTERNS for matching
  -f, --file=FILE           take PATTERNS from FILE
  -i, --ignore-case         ignore case distinctions in patterns and data
      --no-ignore-case      do not ignore case distinctions (default)
  -w, --word-regexp         match only whole words
  -x, --line-regexp         match only whole lines
  -z, --null-data           a data line ends in 0 byte, not newline
   -o, --only-matching       show only nonempty parts of lines that match
  -q, --quiet, --silent     suppress all normal output
      --binary-files=TYPE   assume that binary files are TYPE;
                            TYPE is 'binary', 'text', or 'without-match'
  -a, --text                equivalent to --binary-files=text
 %s home page: <%s>
 %s: PCRE detected recurse loop %s: binary file matches %s: exceeded PCRE's backtracking limit %s: exceeded PCRE's heap limit %s: exceeded PCRE's nested backtracking limit %s: exhausted PCRE JIT stack %s: input file is also the output %s: internal PCRE error: %d %s: invalid option -- '%c'
 %s: memory exhausted %s: option '%s%s' doesn't allow an argument
 %s: option '%s%s' is ambiguous
 %s: option '%s%s' is ambiguous; possibilities: %s: option '%s%s' requires an argument
 %s: option requires an argument -- '%c'
 %s: unrecognized option '%s%s'
 %s: warning: recursive directory loop ' (C) (standard input) * at start of expression + at start of expression -P supports only unibyte and UTF-8 locales ? at start of expression Example: %s -i 'hello world' menu.h main.c
PATTERNS can contain multiple patterns separated by newlines.

Pattern selection and interpretation:
 General help using GNU software: <%s>
 Invalid back reference Invalid character class name Invalid collation character Invalid content of \{\} Invalid preceding regular expression Invalid range end Invalid regular expression JIT internal error: %d License GPLv3+: GNU GPL version 3 or later <%s>.
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
 Memory exhausted No match No previous regular expression Packaged by %s
 Packaged by %s (%s)
 Perl matching not supported in a --disable-perl-regexp build Premature end of regular expression Regular expression too big Report %s bugs to: %s
 Report bugs to: %s
 Search for PATTERNS in each FILE.
 Success Trailing backslash Try '%s --help' for more information.
 Unknown system error Unmatched ( or \( Unmatched ) or \) Unmatched [, [^, [:, [., or [= Unmatched \{ Usage: %s [OPTION]... PATTERNS [FILE]...
 Valid arguments are: When FILE is '-', read standard input.  With no FILE, read '.' if
recursive, '-' otherwise.  With fewer than two FILEs, assume -h.
Exit status is 0 if any line is selected, 1 otherwise;
if any error occurs and -q is not given, the exit status is 2.
 Written by %s and %s.
 Written by %s, %s, %s,
%s, %s, %s, %s,
%s, %s, and others.
 Written by %s, %s, %s,
%s, %s, %s, %s,
%s, and %s.
 Written by %s, %s, %s,
%s, %s, %s, %s,
and %s.
 Written by %s, %s, %s,
%s, %s, %s, and %s.
 Written by %s, %s, %s,
%s, %s, and %s.
 Written by %s, %s, %s,
%s, and %s.
 Written by %s, %s, %s,
and %s.
 Written by %s, %s, and %s.
 Written by %s.
 Written by Mike Haertel and others; see
<https://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS>. ` ambiguous argument %s for %s character class syntax is [[:space:]], not [:space:] conflicting matchers specified exceeded PCRE's line length limit failed to return to initial working directory failed to set file descriptor text/binary mode input is too large to count invalid argument %s for %s invalid character class invalid content of \{\} invalid context length argument invalid matcher %s invalid max count memory exhausted no syntax specified program error regular expression too big stack overflow stray \ stray \ before %lc stray \ before unprintable character stray \ before white space the -P option only supports a single pattern unable to record current working directory unbalanced ( unbalanced ) unbalanced [ unfinished \ escape unknown binary-files type unknown devices method warning: %s warning: --unix-byte-offsets (-u) is obsolete warning: GREP_COLOR='%s' is deprecated; use GREP_COLORS='mt=%s' write error {...} at start of expression Project-Id-Version: grep 3.7.98
Report-Msgid-Bugs-To: bug-grep@gnu.org
PO-Revision-Date: 2022-07-04 10:07+0800
Last-Translator: Wenbin Lv <wenbin816@gmail.com>
Language-Team: Chinese (simplified) <i18n-zh@googlegroups.com>
Language: zh_CN
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 3.1
 
文件控制：
  -B, --before-context=数值  打印前面 <数值> 行上下文
  -A, --after-context=数值  打印后面 <数值> 行上下文
  -C, --context=数值        打印前后 <数值> 行上下文
 
杂项：
  -s, --no-messages         不显示错误信息
  -v, --invert-match        选中不匹配的行
  -V, --version             显示版本信息并退出
      --help                显示此帮助信息并退出
 
输出控制：
  -m, --max-count=数值      选中 <数值> 行后停止执行
  -b, --byte-offset         输出的同时打印字节偏移量
  -n, --line-number         输出的同时打印行号
      --line-buffered       每行输出后排空输出缓冲区
  -H, --with-filename       输出的同时打印文件名
  -h, --no-filename         输出时不显示文件名前缀
      --label=标签          使用指定 <标签> 作为标准输入文件名前缀
       --include=GLOB        只查找匹配 GLOB（含通配符的文件模式）的文件
      --exclude=GLOB        跳过匹配 GLOB 的文件
      --exclude-from=文件   跳过匹配 <文件> 内容中任一文件模式的文件
      --exclude-dir=GLOB    跳过匹配 GLOB 的目录
   -E, --extended-regexp     <模式> 是扩展正则表达式
  -F, --fixed-strings       <模式> 是字符串
  -G, --basic-regexp        <模式> 是基本正则表达式
  -P, --perl-regexp         <模式> 是 Perl 正则表达式
   -I                        等价于 --binary-files=without-match
  -d, --directories=动作    处理目录的方式；
                            <动作> 可以是 "read"、"recurse" 或 "skip"
  -D, --devices=动作        处理设备、FIFO 和套接字的方式；
                            <动作> 可以是 "read" 或 "skip"
  -r, --recursive           等价于 --directories=recurse
  -R, --dereference-recursive  同上，但跟随所有符号链接
   -L, --files-without-match  只打印没有被选中的行的 <文件> 的名称
  -l, --files-with-matches  只打印有被选中的行的 <文件> 的名称
  -c, --count               只打印每个 <文件> 的被选中的行的数量
  -T, --initial-tab         使制表符对齐（如有必要）
  -Z, --null                在 <文件> 名后打印 0 字节 (NUL)
   -数值                     等价于 --context=数值
      --group-separator=分隔符  在带有上下文的匹配块之间打印 <分隔符>
      --no-group-separator  不要在带有上下文的匹配块之间打印分隔符
      --color[=何时],
      --colour[=何时]       使用标记高亮匹配的字符串；
                            <何时> 可以是 "always"、"never" 或 "auto"
  -U, --binary              不要清除行尾的 CR 字符 (MSDOS/Windows)

   -e, --regexp=模式         使用指定的 <模式> 进行匹配
  -f, --file=文件           从指定的 <文件> 中获得 <模式>
  -i, --ignore-case         对于模式和数据，忽略大小写
      --no-ignore-case      不要忽略大小写（默认）
  -w, --word-regexp         仅匹配整个单词
  -x, --line-regexp         仅匹配整行
  -z, --null-data           数据行以 0 字节 (NUL) 结束，而非换行符
   -o, --only-matching       只显示行中非空的匹配部分
  -q, --quiet, --silent     不显示所有常规输出
      --binary-files=类型   假定二进制文件是 <类型>；
                            <类型> 可以是 "binary"、"text" 或 "without-match"
  -a, --text                等价于 --binary-files=text
 %s 的主页：<%s>
 %s: PCRE 检测到递归循环 %s: 匹配到二进制文件 %s: 超过 PCRE 的回溯限制 %s: 超过 PCRE 的堆限制 %s: 超过 PCRE 的嵌套回溯限制 %s: PCRE JIT 栈耗尽 %s: 输入文件同时也是输出文件 %s: PCRE 内部错误：%d %s: 无效的选项 -- "%c"
 %s: 内存耗尽 %s: 选项 "%s%s" 不允许带参数
 %s: 选项 "%s%s" 有歧义
 %s: 选项 "%s%s" 有歧义；可能是： %s: 选项 "%s%s" 必须带参数
 %s: 选项需要一个参数 -- "%c"
 %s: 无法识别的选项 "%s%s"
 %s: 警告：递归目录循环 " © （标准输入） 表达式以 * 开头 表达式以 + 开头 -P 仅支持单字节和 UTF-8 区域设置 表达式以 ? 开头 例如：%s -i 'hello world' menu.h main.c
<模式> 可以包含多个模式字符串，使用换行符进行分隔。

模式选择与解释：
 GNU 软件一般性帮助：<%s>
 无效的后向引用 无效的字符类名 无效的定序字符 \{\} 中的内容无效 前面的正则表达式无效 无效的范围端点 无效的正则表达式 JIT 内部错误：%d 许可证 GPLv3+：GNU 通用公共许可证第 3 版或更新版本 <%s>。
本软件是自由软件：您可以自由修改和重新发布它。
在法律允许的范围内，不提供任何保证。
 内存耗尽 无匹配 缺少前一个正则表达式 由 %s 打包
 由 %s (%s) 打包
 当前使用了 --disable-perl-regexp 的构建无法支持 Perl 匹配模式 正则表达式过早结束 正则表达式过长 请向 <%2$s> 报告 %1$s 的错误。
 请向 <%s> 报告软件错误。
请向 <i18n-zh@googlegroups.com> 报告翻译错误。
 在每个 <文件> 中查找指定的 <模式>。
 成功 末尾有反斜杠 请尝试执行 "%s --help" 来获取更多信息。
 未知的系统错误 未匹配的 ( 或 \( 未匹配的 ) 或 \) 未匹配的 [、[^、[:、[. 或 [= 未匹配的 \{ 用法：%s [选项]... 模式 [文件]...
 有效的参数有： 若 <文件> 为 "-"，则从标准输入读取。若没有指定 <文件>，则递归模式
下从 "." 读取，其他情况下从 "-" 读取。若指定的 <文件> 数量少于两个，
则默认启用 -h 选项。如果有任意行被选中，则退出状态为 0，否则
退出状态为 1；如果有错误发生，且未指定 -q 选项，则退出状态为 2。
 由 %s 和 %s 编写。
 由 %s、%s、%s、
%s、%s、%s、%s、
%s、%s 和其他人编写。
 由 %s、%s、%s、
%s、%s、%s、%s、
%s 和 %s 编写。
 由 %s、%s、%s、
%s、%s、%s、%s 和
%s 编写。
 由 %s、%s、%s、
%s、%s、%s 和 %s 编写。
 由 %s、%s、%s、
%s、%s 和 %s 编写。
 由 %s、%s、%s、
%s 和 %s 编写。
 由 %s、%s、%s 和
%s 编写。
 由 %s、%s 和 %s 编写。
 由 %s 编写。
 由 Mike Haerhtel 等人编写；作者信息请参见
<https://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS>。 " %2$s 的参数 %1$s 有歧义 字符类的语法是 [[:space:]],而非 [:space:] 指定了互相冲突的匹配器 超过 PCRE 的行长度限制 返回到初始工作目录失败 设置文件描述符为文本/二进制模式时失败 输入过大，无法计数 %2$s 的参数 %1$s 无效 无效的字符类 \{\}中内容无效 无效的上下文长度参数 无效的匹配器 %s 无效的最大计数 内存耗尽 未指定语法 程序错误 正则表达式太长 栈溢出 多余的 \ %lc 前有多余的 \ 不可打印字符前有多余的 \ 空白字符前有多余的 \ -P 选项仅支持单个模式字符串 无法记录当前工作目录 有未匹配的 ( 有未匹配的 ) 有未匹配的 [ 未结束的 \ 转义 未知的 --binary-files 类型 未知的设备处理方式 警告：%s 警告：--unix-byte-offsets (-u) 选项已废弃 警告：GREP_COLOR='%s' 已弃用；请使用 GREP_COLORS='mt=%s' 写入错误 表达式以 {...} 开头 