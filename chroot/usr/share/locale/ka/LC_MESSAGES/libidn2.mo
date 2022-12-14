??    )      d  ;   ?      ?  ?   ?  ?   u  ?   .  c   ?     1     J  R  W  N   ?  &   ?  O         p  #   ~  !   ?  *   ?  D   ?  @   4	  %   u	  &   ?	  &   ?	  (   ?	     
     -
     9
  (   G
  '   p
  4   ?
  4   ?
  &     /   )  /   Y  7   ?  -   ?  %   ?  %     "   ;     ^  .   t  #   ?  '   ?     ?  ?  ?  \  ?  R    0  m  ?   ?  I   q     ?  ?  ?  ?   h  Z   T  ?   ?  (   ?  i   ?  f     y   ?  ?   ?  ?   ?  k   O  n   ?  x   *  Z   ?  C   ?  .   B  C   q  f   ?  }     ?   ?  ?   .   `   ?   j   #!  j   ?!  ?   ?!  z   ?"  s   
#  y   ~#  c   ?#  M   \$     ?$  J   *%  }   u%     ?%                	   (                                 "          
                                     &                  '                                          #          !          )             %   $          --usestd3asciirules   Enable STD3 ASCII rules
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
 could not convert string to UTF-8 could not determine locale encoding format domain label has character forbidden in non-transitional mode (TR46) domain label has character forbidden in transitional mode (TR46) domain label has forbidden dot (TR46) domain label longer than 63 characters domain name longer than 255 characters input A-label and U-label does not match input A-label is not valid input error out of memory punycode conversion resulted in overflow punycode encoded data will be too large string contains a context-j character with null rule string contains a context-o character with null rule string contains a disallowed character string contains a forbidden context-j character string contains a forbidden context-o character string contains a forbidden leading combining character string contains forbidden two hyphens pattern string contains invalid punycode data string contains unassigned code point string could not be NFC normalized string encoding error string has forbidden bi-directional properties string is not in Unicode NFC format string start/ends with forbidden hyphen success Project-Id-Version: libidn2 2.3.1
Report-Msgid-Bugs-To: bug-libidn2@gnu.org
PO-Revision-Date: 2022-04-16 10:17+0200
Last-Translator: Temuri Doghonadze <temuri.doghonadze@gmail.com>
Language-Team: Georgian <(nothing)>
Language: ka
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: Poedit 3.0.1
       --usestd3asciirules   STD3 ASCII წესების ჩართვა
      -no-alabelroundtrip  გადასაწყვეტად A-label-ის შემობრუნების გამორთვა
      --debug                     დამატებითი ინფორმაციის გამოტანა
   -T, --tr46t           TR46 ტრანზაქციული დამუშავების ჩართვა
  -N, --tr46nt        TR46 არატრანზაქციული დამუშავების ჩართვა
         --no-tr46    TR46-ის დამუშავების გამორთვა
   -d, --decode         დომენის სახელის გაშიფვრა
  -l, --lookup           დომენის სახელის გადაწყვეტა (ნაგულისხმები)
  -r, --register          ჭდის რეგისტრაცია
  -h, --help           დახმარების გამოტანა და გამოსვლა
  -V, --version      ვერსიის გამოტანა და გამოსვლა
 A-label-ის შემობრუნების შეცდომა კოდირება: %s
 ბრძანების ხაზი IDNA2008-ის Libidn2 განხორციელებისთვის.

მოსალოდნელია, რომ ყველა სტრიქონი დაშიფრული იქნება ლოკალური სიმბოლოების სიმრავლეში.

სტრიქონის დასამუშავებლად, რომელიც იწყება `-'-ით, მაგალითად, `-foo', გამოიყენეთ `--'
პარამეტრების დასრულების სიგნალი, როგორც `idn2 --quiet -- -foo'.

გრძელი ვარიანტების სავალდებულო არგუმენტები სავალდებულოა მოკლე ვარიანტებისთვისაც.
 ინტერნაციონალური დომენის სახელები (IDNA2008). გადაიყვანეთ სტრიქონები ან სტანდარტული შეტანა.

 მეტი ინფორმაციისთვის სცადეთ '%s --help'
 შეიყვანეთ თითოეული სტრიქონი ცალკე ხაზზე, რომელიც ახალი ხაზს სიმბოლოთი სრულდება.
 უცნობი შეცდომა გამოყენება: %s [პარამეტრი] ... [სტრიქონები]...
 სტრიქონის UTF-8-სი გადაყვანა შეუძლებელია ენის კოდირების ფორმატის დადგენა შეუძლებელია დომენის ჭდე არატრანზაქციული რეჟიმისთვის აკრძალულ სმბოლოებს შეიცავს (TR46) დომენის ჭდე გადასვლად აკრძალულ სიმბოლოებს შეიცავს (TR46) დომენის ჭდე აკრძალულ წერტილს შეიცავს (TR46) დომენის ჭდე 63 სიმბოლოზე გრძელი ვერ იქნება დომენის სახელი 255 სიმბოლოზე გრძელი ვერ იქნება შეყვანილი A-label-ი და U-label-ი არ ემთხვევა შეყვანილი A-label-ი არასწორია შეყვანის შეცდომა არასაკმარისი მეხსიერება punycode-ში გადაყვანამ გადავსება გამოიწვია punycode-ით დაშიფრული მონაცემები ძალიან დიდი იქნება სტრიქონი აკრძალულ context-j სიმბოლოს შეიცავს ნულოვანი წესით სტრიქონი აკრძალულ context-o სიმბოლოს შეიცავს ნულოვანი წესით სტრიქონი აკრძალულ სიმბოლოს შეიცავს სტრიქონი აკრძალულ context-j სიმბოლოს შეიცავს სტრიქონი აკრძალულ context-o სიმბოლოს შეიცავს სტრიქონი აკრძალულ საწყის შემაერთებელ სიმბოლოს შეიცავს სტრიქონი აკრძალულ ორ-ჰარეიან შაბლონს შეიცავს სტრიქონი არასწორ punycode-ის მონაცემებს შეიცავს სტრიქონი მიუნიჭებელ კოდის წერტილებს შეიცავს სტრიქონის NFC ნორმალიზება შეუძლებელია სტრიქონის კოდირების შეცდომა სტრიქონს გააჩნია აკრძალული ორმხრივი თვისებები სტრიქონი Unicode NFC ფორმატში არაა სტრიქონი იწყება და მთავრდება აკრძალული ჰარეთი წარმატება 