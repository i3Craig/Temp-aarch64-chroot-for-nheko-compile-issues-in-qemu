??    /      ?  C           8     B   R  A   ?  6   ?  H     I   W  F   ?  9   ?  7   "  6   Z  M   ?  L   ?  O   ,  H   |  {   ?     A  ,   ]     ?  .   ?  '   ?  (   	     *	     J	  ?   W	  e   1
  :   ?
    ?
  ?  ?  ?  ?     ^     s  <   ?  1   ?  &   ?          )  "   >  9   a  I   ?  ?   ?     ?     ?     ?     ?     ?     ?  ?  ?  8   ?  :   ?  8   8  9   q  I   ?  I   ?  >   ?  =   ~  ;   ?  /   ?  P   (  @   y  L   ?  I     Y   Q     ?  %   ?  "   ?  9     (   L  )   u  "   ?     ?  ?   ?  L   ?  1   ?  ?     ?  	  (  ?     ?     ?  R   ?     <  (   Y     ?     ?  $   ?  >   ?  N     ?   W     ?     ?           '      4      A                                                                     "   /                
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
PO-Revision-Date: 2020-04-16 23:51+0800
Last-Translator: Yi-Jyun Pan <pan93412@gmail.com>
Language-Team: Chinese (traditional) <zh-l10n@lists.linux.org.tw>
Language: zh_TW
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=1; plural=0;
X-Generator: Poedit 2.3
   -E                        （忽略，僅作相容）
   -V, --version               輸出版本資訊並結束
   -V, --version             顯示版本資訊並結束
   -c, --context=上下文      指定 MSGID 的上下文
   -d, --domain=文字領域     從 <文字領域> 取得已翻譯訊息
   -d, --domain=文字領域     從 <文字領域> 取得已翻譯訊息
   -e                        啟用部份跳脫序列的擴充
   -h, --help                  顯示此說明訊息後結束
   -h, --help                顯示此說明訊息後結束
   -n                        隱藏尾端換行
   -v, --variables             顯示 <SHELL-格式> 中出現過的環境變數
   數量                      基於此值選擇單複數型態
   MSGID MSGID-複數          翻譯 MSGID (單數) / MSGID-複數 (複數)
   [文字領域]                從 <文字領域> 取得已翻譯訊息
   [文字領域] MSGID          從 <文字領域> 取得對應 MSGID 的已翻譯訊息
 %s：選項無效 --「%c」
 %s：選項「%s%s」不能有參數
 %s：選項「%s%s」模稜兩可
 %s：選項「%s%s」模稜兩可；可能選項包括： %s：選項「%s%s」需要一個參數
 %s：選項需要一個參數 --「%c」
 %s：無法識別選項「%s%s」
 Bruno Haible 著作權所有 (C) %s 自由軟體基金會
GPLv3+ 授權：GNU GPL 第三版或更新版本 <%s>。
此為自由軟體：您能修改與重散布它。
在法律允許的範圍內沒有任何擔保。
 顯示某文字訊息的原生語言翻譯，其文法受單複數影響。
 顯示某個文字訊息的原生語言翻譯。
 若未指定 <文字領域> 參數，將會依 TEXTDOMAIN 環境變數決定 <文字領域> 的值。
如果訊息資料檔未在正常目錄中找到，則可使用 TEXTDOMAINDIR 環境變數指定其他路徑。
標準搜尋路徑：%s
 若未指定 <文字領域> 參數，將會依 TEXTDOMAIN 環境變數決定 <文字領域> 的值。
如果未在正常目錄中找到訊息資料檔，則可透過 TEXTDOMAINDIR 環境變數指定其他路徑。
使用 -s 選項時，程式將如「echo」指令般運作，但不單單只是把參數複製到標準輸出，
而是輸出選取資料檔中的已翻譯訊息。
標準搜尋路徑：%s
 在正常模式下，會從標準輸入讀取資料，並將內容中的環境變數 (像 $VARIABLE 或
${VARIABLE}) 轉換為該變數的值，並在標準輸出顯示結果。如果指定了 SHELL-格式，
則只替換 SHELL-格式 中指定的變數，否則所有環境變數都會替換。
 資訊輸出：
 操作模式：
 請在位於 <%s> 的臭蟲追蹤系統回報臭蟲
或寄電子郵件至 <%s>。
 替換環境變數的值。
 輸入「%s --help」取得更多資訊
 Ulrich Drepper 未知系統錯誤 用法：%s [選項] [SHELL-格式]
 用法：%s [選項] [文字領域] MSGID MSGID-複數 數量
 用法：%s [選項] [[文字領域] MSGID]
或：  %s [選項] -s [MSGID]...
 如果使用 --variables 選項，將會忽略標準輸入，只會讀取 SHELL-格式 中的
環境變數並顯示變數名稱，每個一行。
 由 %s 編寫。
 讀取「%s」時發生錯誤 缺少參數 標準輸入 參數過多 寫入時發生錯誤 