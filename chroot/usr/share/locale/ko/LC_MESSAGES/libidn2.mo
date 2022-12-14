??    *      l  ;   ?      ?  ?   ?  ?   ?  ?   >  c   ?     A     Z  R  g  N   ?  &   	  O   0     ?  #   ?  !   ?  *   ?  D   ?  @   D	  %   ?	  &   ?	  &   ?	  (   ?	     "
     =
  6   I
     ?
  (   ?
  '   ?
  4   ?
  4     &   I  /   p  /   ?  7   ?  -     %   6  %   \  "   ?     ?  .   ?  #   ?  '        6  ?  >  ?   -  ?     ?   ?  ?   t  %   ?       ?  0  ?   ?  7   T  K   ?     ?  -   ?  0     5   M  X   ?  U   ?  E   2  :   x  8   ?  >   ?  /   +     [  M   i     ?  <   ?  E     P   K  P   ?  7   ?  E   %  E   k  >   ?  G   ?  @   8  A   y  5   ?     ?  @     4   M  F   ?     ?                	   )                                 #          
                            !         '                  (                                         $          "          *             &   %          --usestd3asciirules   Enable STD3 ASCII rules
      --no-alabelroundtrip  Disable A-label roundtrip for lookups
      --debug               Print debugging information
      --quiet               Silent operation
   -T, --tr46t               Enable TR46 transitional processing
  -N, --tr46nt              Enable TR46 non-transitional processing
      --no-tr46             Disable TR46 processing
   -d, --decode              Decode (punycode) domain name
  -l, --lookup              Lookup domain name (default)
  -r, --register            Register label
   -h, --help                Print help and exit
  -V, --version             Print version and exit
 A-label roundtrip failed Charset: %s
 Command line interface to the Libidn2 implementation of IDNA2008.

All strings are expected to be encoded in the locale charset.

To process a string that starts with `-', for example `-foo', use `--'
to signal the end of parameters, as in `idn2 --quiet -- -foo'.

Mandatory arguments to long options are mandatory for short options too.
 Internationalized Domain Name (IDNA2008) convert STRINGS, or standard input.

 Try `%s --help' for more information.
 Type each input string on a line by itself, terminated by a newline character.
 Unknown error Usage: %s [OPTION]... [STRINGS]...
 could not convert string to UTF-8 could not determine locale encoding format domain label has character forbidden in non-transitional mode (TR46) domain label has character forbidden in transitional mode (TR46) domain label has forbidden dot (TR46) domain label longer than 63 characters domain name longer than 255 characters input A-label and U-label does not match input A-label is not valid input error libiconv required for non-UTF-8 character encoding: %s out of memory punycode conversion resulted in overflow punycode encoded data will be too large string contains a context-j character with null rule string contains a context-o character with null rule string contains a disallowed character string contains a forbidden context-j character string contains a forbidden context-o character string contains a forbidden leading combining character string contains forbidden two hyphens pattern string contains invalid punycode data string contains unassigned code point string could not be NFC normalized string encoding error string has forbidden bi-directional properties string is not in Unicode NFC format string start/ends with forbidden hyphen success Project-Id-Version: libidn2 2.3.3
Report-Msgid-Bugs-To: bug-libidn2@gnu.org
PO-Revision-Date: 2022-07-12 17:49+0900
Last-Translator: Seong-ho Cho <darkcircle.0426@gmail.com>
Language-Team: Korean <translation-team-ko@googlegroups.com>
Language: ko
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=1; plural=0;
X-Generator: Poedit 3.1.1
X-Poedit-SourceCharset: UTF-8
       --usestd3asciirules   STD3 ASCII 규칙 활성
      --no-alabelroundtrip  검색 목적 A-레이블 라운드트리핑 비활성
      --debug               디버깅 정보 출력
      --quiet               조용하게 처리
   -T, --tr46t               TR46 변환 처리 활성
  -N, --tr46nt              TR46 비변환 처리 활성
      --no-tr46             TR46 처리 비활성
   -d, --decode              도메인 이름 디코딩 (퓨니코드)
  -l, --lookup              도메인 이름 검색 (기본 동작)
  -r, --register            레이블 등록
   -h, --help                도움말을 출력하고 나갑니다
  -V, --version             버전을 출력하고 나갑니다
 A-레이블 라운드트리핑 실패 문자세트: %s
 IDNA2008의 libidn2 구현체 명령행 인터페이스입니다.

모든 문자열은 로캘 문자세트로 변환한 상태임을 가정합니다.

예를 들어 `-foo' 처럼 `-'으로 시작하는 문자열을 처리하려면,
매개변수 끝을 알리는 `--' 옵션을, `idn2 --quiet -- -foo'처럼
사용하십시오.

긴 옵션의 필수 인자는 짧은 옵션에 대해서도 마찬가지입니다.
 <문자열> 또는 표준 입력으로부터 입력을 받아 처리하는 국제화 도메인 이름 (IDNA2008) 구현체입니다.

 자세한 정보는 `%s --help'를 입력하십시오.
 개행 문자로 끝나는 문자열을 각 줄 별로 입력하십시오.
 알 수 없는 오류 사용법: %s [<옵션>]... [<문자열>]...
 문자열을 UTF-8로 변환할 수 없습니다 로캘 인코딩 형식을 확인할 수 없습니다 도메인 레이블에 비변환 모드에서 금지하는 문자가 있습니다 (TR46) 도메인 레이블에 변환 모드에서 금지하는 문자가 있습니다 (TR46) 도메인 레이블에 금지하는 점 문자가 있습니다 (TR46) 도메인 레이블 문자 갯수가 63보다 많습니다 도메인 이름 문자 갯수가 255보다 많습니다 입력 A-레이블과 U-레이블이 일치하지 않습니다 입력 A-레이블이 적절하지 않습니다 입력 오류 비 UTF-8 문자 인코딩을 수행하려면 libiconv가 필요합니다: %s 메모리 부족 퓨니코드 변환시 오버플로우가 발생했습니다 퓨니코드 인코딩 데이터가 상당히 커질 수 있습니다 문자열에 널 규칙이 들어간 컨텍스트-j 문자가 들어있습니다 문자열에 널 규칙이 들어간 컨텍스트-o 문자가 들어있습니다 문자열에 허용하지 않는 문자가 있습니다 문자열에 금지하는 컨텍스트-j 문자가 들어있습니다 문자열에 금지하는 컨택스트-o 문자가 들어있습니다 문자열에 금지하는 행간 결합 문자가 있습니다 문자열에 금지하는 이중 하이픈 패턴이 들어있습니다 문자열에 부적절한 퓨니코드 데이터가 있습니다 문자열에 할당하지 않은 코드 포인트가 있습니다 문자열을 NFC 정규화 처리할 수 없습니다 문자열 인코딩 오류 문자열에 금지하는 양방향 속성이 들어있습니다 문자열이 유니코드 NFC 형식이 아닙니다 문자열이 금지하는 하이픈으로 시작하거나 끝납니다 성공 