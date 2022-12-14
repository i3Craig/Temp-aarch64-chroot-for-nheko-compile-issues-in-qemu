??    t      ?  ?   \      ?	  ?   ?	  ?   ?
  ?  ?    o  ?   ?  ?  }  U  4  ?  ?  ?  F  F  ?     2     F     e  &   }     ?  -   ?     ?  !        0     L     h  ,   }     ?  .   ?  '   ?  (   !     J  %   j     ?     ?     ?     ?     ?  *   ?       ?     &   ?     ?     ?     	     %  $   =     b     t     ?  ?   ?     Q     b     k     ?     ?  <   ?  #   ?          +     B  "   V     y     ?  &   ?     ?     ?     ?     ?       )         J  ?   _     Y  ;   p  3   ?  /   ?  +      '   <   #   d      ?      ?      ?   \   ?      1!     3!  4   P!     ?!  !   ?!  -   ?!  .   ?!     #"     ?"     Z"     r"     ?"     ?"     ?"     ?"     ?"     ?"     #     #     ,#     4#  $   G#     l#  ,   ?#  *   ?#     ?#     ?#     ?#     $     $     4$     K$  -   W$  ?   ?$     ?$     ?$  ?  ?$  M  ?&  G  ?'  U  0)  r  ?+    ?,    .  ?  &0  '  ?1  g  4  ?  n6     %8  #   =8  !   a8  $   ?8  !   ?8  +   ?8     ?8  5   9     K9     f9     ?9  9   ?9  %   ?9  3   ?9  /   3:  4   c:  '   ?:  &   ?:     ?:     ?:     ?:  -   ?:  -   +;  3   Y;  -   ?;  ?   ?;  2   V<     ?<  !   ?<     ?<     ?<  !   ?<     =     (=     C=  ?   Y=     ;>     R>     g>     ?>     ?>  _   ?>  4   ?  $   T?     y?     ??  D   ??     ??  !   ??  7   @     V@  &   v@  &   ?@  %   ?@     ?@  3   A  +   <A  ?  hA  !   ZC  <   |C  =   ?C  9   ?C  5   1D  1   gD  .   ?D  )   ?D  %   ?D     E  ?   /E     ?E  !   ?E  J   ?E  *   *F     UF  7   sF  K   ?F  /   ?F  !   'G     IG     dG     zG     ?G     ?G     ?G  &   ?G     
H  $   H     CH     ZH  $   wH  ?   ?H  1   ?H  -   I  8   <I     uI     ?I     ?I  )   ?I  )   ?I     #J  
   @J  @   KJ  ?   ?J     K  &   K     t       O   '   e          Z      T   J              	       X   h   R   #       U              ?       q   (   6           E   [   H   -   D                o   ^       .          I              s       i   ;   S       =   m             d   f             G   0   _               n   &       )   k      *   3   N       r       %   `      j   $   @   C   
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
<https://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS>. ` ambiguous argument %s for %s character class syntax is [[:space:]], not [:space:] conflicting matchers specified exceeded PCRE's line length limit failed to return to initial working directory failed to set file descriptor text/binary mode input is too large to count invalid argument %s for %s invalid character class invalid content of \{\} invalid context length argument invalid matcher %s invalid max count memory exhausted no syntax specified program error regular expression too big stack overflow stray \ stray \ before %lc stray \ before unprintable character stray \ before white space the -P option only supports a single pattern unable to record current working directory unbalanced ( unbalanced ) unbalanced [ unfinished \ escape unknown binary-files type unknown devices method warning: %s warning: --unix-byte-offsets (-u) is obsolete warning: GREP_COLOR='%s' is deprecated; use GREP_COLORS='mt=%s' write error {...} at start of expression Project-Id-Version: GNU grep 3.7.98
Report-Msgid-Bugs-To: bug-grep@gnu.org
PO-Revision-Date: 2022-07-04 03:56+0900
Last-Translator: Seong-ho Cho <darkcircle.0426@gmail.com>
Language-Team: Korean <translation-team-ko@googlegroups.com>
Language: ko
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 2.3.1
 
문맥 제어:
  -B, --before-context=<갯수>  <갯수> 줄 수만큼 출력 내용의 앞부분을 출력합니다
  -A, --after-context=<갯수>   <갯수> 줄 수만큼 출력 내용의 뒷부분을 출력합니다
  -C, --context=<갯수>         <갯수> 줄 수 만큼 출력 내용 앞 뒤 부분을 모두 출력합니다 
 
기타:
  -s, --no-messages         오류 메시지 출력을 생략합니다
  -v, --invert-match        조건에 일치하지 않는 행을 선택합니다
  -V, --version             버전 정보를 나타내고 빠져 나갑니다
      --help                이 도움말 텍스트를 나타내고 빠져 나갑니다
 
출력 제어:
  -m, --max-count=<횟수>    <횟수> 만큼 행을 찾아내고 나면 멈춤
  -b, --byte-offset         출력 행의 바이트 오프셋을 출력합니다
  -n, --line-number         출력 행의 행 번호를 출력합니다
      --line-buffered       모든 행의 출력을 플러싱합니다
  -H, --with-filename       출력 행에 파일 이름을 출력합니다
  -h, --no-filename         출력 행 앞부분의 파일 이름 표시를 생략합니다 
      --label=<레이블>      <레이블>을 표준 입력 앞부분의 파일 이름으로 사용합니다
       --include=<글롭>        <글롭>(파일 패턴)에 일치하는 파일만 검색합니다
      --exclude=<글롭>        <글롭>에 일치하는 파일을 건너뜁니다
      --exclude-from=<파일>   <파일>과 파일 패턴이 일치하는 파일을 건너뜁니다
      --exclude-dir=<글롭>    <글롭>과 일치하는 디렉터리를 건너뜁니다
   -E, --extended-regexp     <패턴>은 확장 정규 표현식입니다
  -F, --fixed-strings       <패턴>은 단순 문자열입니다
  -G, --basic-regexp        <패턴>은 기본 정규 표현식입니다
  -P, --perl-regexp         <패턴>은 펄 정규 표현식입니다
   -I                        --binary-files=without-match 옵션과 동일
  -d, --directories=<동작>  디렉터리 처리 방식
                            <동작> 값은 'read', 'recurse', 'skip' 중 하나입니다
  -D, --devices=<동작>      장치, FIFO, 소켓 처리 방식
                            <동작> 값은 'read', 'skip' 중 하나입니다
  -r, --recursive           --directories=recurse와 유사
  -R, --dereference-recursive  위 옵션과 비슷하지만 모든 심볼릭 링크를 따라갑니다
   -L, --files-without-match 일치하는 행이 없으면 <파일>의 이름만 출력합니다
  -l, --files-with-matches  일치하는 행이 있는 <파일>의 이름만 출력합니다
  -c, --count               <파일>에 일치하는 행 갯수만 출력합니다
  -T, --initial-tab         (필요한 경우) 행 별로 탭을 표시합니다
  -Z, --null                <파일> 이름 뒤에 0 바이트 값을 출력합니다
   -NUM                      --context=<갯수>와 동일
      --group-separator=<구분자>  문맥상 일치하는 행을 <구분자> 출력으로 구분
      --no-group-separator  일치 문맥에 대한 구분자를 출력하지 않습니다
      --color[=<시기>],
      --colour[=<시기>]     일치하는 문자열 강조시 마커를 활용합니다
                            <시기>의 값은 'always', 'never', 'auto' 중 하나입니다
  -U, --binary              개행 문자에서 CR 문자를 빼내지 않음(MSDOS/윈도우)

   -e, --regexp=<패턴>       일치하는 부분을 찾을 <패턴> 기준을 활용합니다
  -f, --file=<파일>         <파일>에서 <패턴>에 일치하는 부분을 취합니다
  -i, --ignore-case         대소문자 구분을 무시합니다
      --no-ignore-case      대소문자 구분을 유지합니다(기본값)
  -w, --word-regexp         주어진 단어와 완벽하게 일치하는 부분만
  -x, --line-regexp         주어진 행 내용과 완벽하게 일치하는 부분만
  -z, --null-data           데이터 행의 끝은 개행 문자가 아닌 0바이트 값으로 끝납니다
   -o, --only-matching       조건에 일치하는 행이 비어있지 않은 결과만 나타냅니다
  -q, --quiet, --silent     모든 일반 출력 동작을 생략합니다
      --binary-files=<형식>   바이너리 파일을 지정한 <형식>으로 간주합니다
                            <형식> 값은 'binary', 'text', 'without-match' 중 하나입니다
  -a, --text                --binary-files=text 옵션과 동일
 %s 홈 페이지: <%s>
 %s: PCRE에서 재귀 순환 발견 %s: 바이너리 파일 일치함 %s: PCRE 후위 추적 한계 초과 %s: PCRE 힙 영역 한계 초과 %s: PCRE 중첩 후위 추적 한계 초과 %s: PCRE JIT 스택 가득 참 %s: 입력 파일은 출력 대상이기도 합니다 %s: 내부 PCRE 오류: %d %s: 잘못된 옵션 -- '%c'
 %s: 메모리가 바닥남 %s: '%s%s' 옵션은 인자를 허용하지 않습니다
 %s: '%s%s' 옵션이 모호합니다
 %s: '%s%s' 옵션이 모호합니다 가능한 값: %s: '%s%s' 옵션은 인자가 필요합니다
 %s: 이 옵션은 인자가 필요합니다 -- '%c'
 %s: 인식할 수 없는 옵션 '%s%s'
 %s: 경고: 재귀 디렉터리 순환 ' (C) (표준 입력) 정규 표현식 시작 부분에 * 연산자 정규 표현식 시작 부분에 + 연산자 -P 유니바이트, UTF-8 로캘만 지원합니다 정규 표현식 시작 부분에 ? 연산자 예제: %s -i 'hello world' menu.h main.c
<패턴>에는 개행 문자로 구분한 여러 패턴을 넣을 수 있습니다.

패턴 선택 및 해석:

 GNU 소프트웨어 활용 일반 도움말: <%s>
 잘못된 후위 참조 잘못된 문자 클래스 이름 잘못된 조합 문자 잘못된 \{\} 내용 잘못된 선행 정규 표현식 잘못된 범위 끝 잘못된 정규 표현식 JIT 내부 오류: %d GPLv3+ 라이선스: GNU GPL 버전 3 이상 <%s>.
이 프로그램은 자유 소프트웨어입니다: 자유롭게 바꾸고 재배포할 수 있습니다.
법률이 허용하는 모든 범위내의 보증은 없습니다.
 메모리가 바닥남 일치 항목 없음 이전 정규 표현식 없음 %s이(가) 패키징 함
 %s이(가) 패키징 함 (%s)
 --disable-perl-regexp 빌드에서는 Perl 문자열 일치 기능을 지원하지 않습니다 정규 표현식 마감 표현이 앞서있습니다 정규 표현식이 너무 깁니다 %s 버그 보고 주소: %s
 버그 보고 주소: %s
 각 <파일>에서 <패턴>에 일치하는 행을 검색합니다.
 성공 백 슬래시 문자가 따라옴 자세한 정보는 '%s --help'를 입력하십시오.
 알 수 없는 시스템 오류 일치하지 않는 ( 또는 \( 괄호 일치하지 않는 ) 또는 \) 괄호 일치하지 않는 [, [^, [:, [., [= 일치하지 않는 \{ 괄호 사용법: %s [<옵션>]... <패턴> [<파일>]...
 유효한 인자는 다음과 같습니다: <파일> 값이 '-' 이면, 표준 입력을 읽습니다.  <파일>에 아무런 값이 없다면,
재귀 탐색 옵션을 주었을 경우 현재 디렉터리를,  그렇지 않으면 '-' 값을 설정함
으로 가정합니다. <파일> 갯수가 한개일 경우 -h 옵션을 준 것으로 가정합니다.
조건 일치 행이 나오면, 끝내기 상태 값은 0을, 그렇지 않으면 1을 반환합니다.
오류가 나타났거나 -q 옵션을 주지 않았다면, 2를 반환합니다.
 %s와(과) %s이(가) 작성함.
 %s, %s, %s,
%s, %s, %s,
%s, %s, %s
외 다수가 작성함.
 %s와(과) %s, %s,
%s, %s, %s,
%s, %s, %s이(가) 작성함.
 %s와(과) %s, %s,
%s, %s, %s,
%s, %s이(가) 작성함.
 %s와(과) %s, %s,
%s, %s, %s,
%s이(가) 작성함.
 %s와(과) %s, %s,
%s, %s, %s이(가) 작성함.
 %s와(과) %s, %s,
%s, %s이(가) 작성함.

 %s와(과) %s, %s,
%s이(가) 작성함.
 %s와(과) %s, %s이(가) 작성함.
 %s이(가) 작성함.
 Mike Haertel 등이 작성함. 기타 작성자 정보는
<https://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS> 링크를 참고하십시오. ` %2$s 대상 모호한 인자 %1$s 문자 클래스 표기 방식은 [:space:]가 아닌 [[:space:]]입니다 비교 기준을 중복 지정했습니다 PCRE 행 길이 한계 초과 초기 작업 디렉터리 반환에 실패했습니다 텍스트/바이너리 모드 파일 서술자 설정에 실패했습니다 입력 행 수를 세기에 너무 많습니다 %2$s 대상 잘못된 인자 %1$s 잘못된 문자 클래스 잘못된 \{\} 내용 잘못된 내용 길이 인자 잘못된 비교 기준 %s 잘못된 최대 갯수 메모리가 바닥남 문법을 지정하지 않았습니다 프로그램 오류 정규 표현식이 너무 깁니다 스택 오버플로우 위치를 벗어난 \ 문자 %lc 전 위치를 벗어난 \ 문자 출력할 수 없는 문자 이전 위치를 벗어난 \ 문자 공백 문자 이전 위치를 벗어난 \ 문자 -P 옵션은 단일 패턴만 지원합니다 현재 작업 디렉터리를 기록할 수 없습니다 짝이 맞지 않는 ( 괄호 짝이 맞지 않는 ) 괄호 짝이 맞지 않는 [ 괄호 끝나지 않은 \ 이스케이프 문자 알 수 없는 바이너리 파일 형식 알 수 없는 장치 방식 경고: %s 경고: --unix-byte-offsets (-u) 옵션은 오래되었습니다 경고: GREP_COLOR='%s' 환경 변수는 더 이상 사용하지 않습니다. GREP_COLORS='mt=%s' 변수를 사용하십시오. 기록 오류 정규 표현식 시작 부분에 {..} 