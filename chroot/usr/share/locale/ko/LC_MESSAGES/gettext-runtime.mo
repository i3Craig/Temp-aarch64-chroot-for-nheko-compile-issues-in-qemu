??    /      ?  C           8     B   R  A   ?  6   ?  H     I   W  F   ?  9   ?  7   "  6   Z  M   ?  L   ?  O   ,  H   |  {   ?     A  ,   ]     ?  .   ?  '   ?  (   	     *	     J	  ?   W	  e   1
  :   ?
    ?
  ?  ?  ?  ?     ^     s  <   ?  1   ?  &   ?          )  "   >  9   a  I   ?  ?   ?     ?     ?     ?     ?     ?     ?  ?  ?  E   ?  I   ?  G   8  J   ?  S   ?  S     P   s  I   ?  G     E   V  R   ?  W   ?  Z   G  R   ?  ?   ?     }  9   ?  /   ?  D     /   J  4   z  '   ?     ?  ?   ?  o   ?  F   .  !  u    ?  ?  ?            0   ^   @   &   ?   9   ?       !     !  (   /!  H   X!  Z   ?!  ?   ?!     ?"  (   ?"     ?"     ?"     ?"     #                                                                    "   /                
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
 error while reading "%s" missing arguments standard input too many arguments write error Project-Id-Version: GNU gettext-runtime 0.20.2
Report-Msgid-Bugs-To: bug-gettext@gnu.org
PO-Revision-Date: 2020-04-16 19:30+0900
Last-Translator: Changwoo Ryu <cwryu@debian.org>
Language-Team: Korean <translation-team-ko@googlegroups.com>
Language: ko
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8-bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=1; plural=0;
   -E                        (아무 효과 없음, 호환성 옵션)
   -V, --version               버전 정보를 표시하고 끝납니다
   -V, --version             버전 정보를 표시하고 끝납니다
   -c, --context=<문맥>      <MSGID>에 대한 문맥을 지정합니다
   -d, --domain=<TEXTDOMAIN> <TEXTDOMAIN>에서 번역 메시지를 가져옵니다
   -d, --domain=<TEXTDOMAIN> <TEXTDOMAIN>에서 번역 메시지를 가져옵니다
   -e                        이스케이프 시퀀스 확장을 사용합니다
   -h, --help                  이 도움말을 표시하고 끝납니다
   -h, --help                이 도움말을 표시하고 끝납니다
   -n                        끝에 줄 바꿈을 하지 않습니다
   -v, --variables             <쉘-형식>에 나오는 변수를 출력합니다
   <개수>                    이 값에 따라 단수형/복수형을 선택합니다
   <MSGID> <MSGID-복수형>    <MSGID> (단수형) / <MSGID-복수형> (복수형) 번역
   [<TEXTDOMAIN>]            <도메인>에서 번역 메시지를 가져옵니다
   [<TEXTDOMAIN>] <MSGID>    <MSGID>에 해당하는 번역 메시지를 <TEXTDOMAIN>에서
                            가져옵니다
 %s: 잘못된 옵션 -- '%c'
 %s: '%s%s' 옵션은 인수를 허용하지 않습니다
 %s: '%s%s' 옵션은 모호한 옵션입니다
 %s: '%s%s' 옵션은 모호한 옵션입니다. 가능한 옵션은: %s: '%s%s' 옵션은 인수가 필요합니다
 %s: 이 옵션은 인수가 필요합니다 -- '%c'
 %s: 인식할 수 없는 옵션 '%s%s'
 Bruno Haible Copyright (C) %s Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <%s>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
 숫자에 따라 문법이 달라지는, 주어진 메시지에 대한 고유어 번역문을
표시합니다.
 주어진 메시지에 대한 고유어 번역문을 표시합니다.
 TEXTDOMAIN 매개변수가 주어지지 않으면 도메인은 TEXTDOMAIN 환경 변수로부터
결정됩니다.  메시지 목록이 일반적인 디렉터리에 있지 않으면 환경 변수
TEXTDOMAINDIR로 다른 위치를 지정할 수 있습니다.

표준 탐색 디렉터리: %s
 <TEXTDOMAIN> 인자가 주어지지 않으면, 도메인은 TEXTDOMAIN 
환경 변수로 결정됩니다.  메시지 목록이 일반적인 디렉터리에 
없다면, 환경 변수 TEXTDOMAINDIR로 다른 위치를 지정할 수 
있습니다.
-s 옵션이 쓰이면 프로그램은 'echo' 명령처럼 동작합니다. 그러나 
단순히 인수를 표준출력에 복사하지는 않습니다.  대신에 지정한 
목록에서 번역되어 있는 메시지만이 출력됩니다.
기본 탐색 디렉터리: %s
 일반 동작 모드에서는, 표준 입력을 표준 출력으로 복사합니다. 이 때, $변수 혹은
${변수} 형식의 환경 변수는 해당되는 환경 변수 값으로 치환합니다.  만약
<쉘-형식>을 쓰면, <쉘-형식>에서 사용한 환경 변수만 치환합니다. <쉘-형식>을
쓰지 않으면 표준 입력의 모든 환경 변수를 치환합니다.
 정보 출력:
 동작 모드:
 문제점을 버그 추적 시스템 (<%s>) 또는
전자메일로 (<%s>) 보내주십시오.
 환경 변수 값을 치환합니다.
 더 많은 정보를 보려면 '%s --help' 하십시오.
 Ulrich Drepper 알 수 없는 시스템 오류 사용법: %s [<옵션>] [<쉘-형식>]
 사용법: %s [<옵션>] [<TEXTDOMAIN>] <MSGID> <MSGID-PLURAL> <개수>
 사용법: %s [<옵션>] [[<TEXTDOMAIN>] <MSGID>]
혹은:   %s [<옵션>] -s [<MSGID>]...
 --variables 옵션을 사용하면, 표준 입력을 무시하고, <쉘-형식>에 참조된 환경 변수를
한 줄에 하나씩 출력합니다.
 %s이(가) 만들었습니다.
 "%s"을(를) 읽는 동안 오류 발생 인수가 빠졌음 표준 입력 인수가 너무 많음 쓰기 오류 