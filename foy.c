#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char str1[64];
  int a;
  srand((unsigned int)time(NULL));
  

  printf("文字列を入力しろ！ポッター！！---");


  fgets(str1, 64, stdin);

  //printf("%p", strstr(str1, "まる"));

  if(strstr(str1, "まる") != NULL){   

    if(rand() % 2 ==1){
      int i;
      for(char *p = &str1[0], i = 0; p < strstr(str1, "まる"); p++, i++){
        p = &str1[i];
        printf("%c", *p);
      }

     // printf("strstr = %p\n", strstr(str1, "まる"));
      printf("まーるかいて...\n");


    fflush(stdout);
    sleep(3);

   printf("                             `    `  .(igky7<!````~?7777twhmqe&(-..```  ``\n");
   printf("                          ` `  ` .(ghmmb=~  `            ` `_`_?t9s+-.    `\n");
   printf("                              .&wwy?c>~~_ `     `  `   `    ._`  ` ?7ukx.  `\n");
   printf("                       `  ...(w=`  (>--_    `              .<`  .`` ``_1i-    `  `\n");
   printf("                     ` ` (qk>j> ._(1jw:  `     `  `        (!           _<(.`     `\n");
   printf("                    `   .d#!.d0__(z(h{              `    `._    `  .((--  _1&-\n");
   printf("                   `  .(d#c.(ml_(v+v!      ``         `   _` `   .j9!?c~    ?o+``\n");
   printf("                     (dn#}_(dm{_+zr!``  ``     `              `      (<~   ` (1, `   `\n");
   printf("                  `.(dmmt (ldm>(dri_  `          `       ``   `` `  `   (<_   _1+.`\n");
   printf("             `` ` .dnmmr_(zzd#>jxf!` .-``   `     ` `` `    `` ___..-_  (<_~__  j>   `  `\n");
   printf("            `    (dmmmur<~jww$<(wt_ .z_   `` .` `     `  `  ``    ?7!`.(dc+(-<_ .1_`\n");
   printf("                (mmmmsxh<_jxk<~(?>  (o! ` `._~  `    `   ` .... ...```(7><7y><__ _z.  `\n");
   printf("             ` .dmmmm0xn:(woxi_~_(_.wi_  ____  .  `     .jghszu7tv>... `  .(<___  ?>   ``\n");
   printf("               (mmhhh0zs+<z2j$_  __(0<_  j~_-(<  .-_..-vty=!`       `  -`(< `(v! ` i_`\n");
   printf("               jnnywkz<xk_js+z<    (>__ (>(dh>-(ghrv<?`                  _-.- _-.  ~~   `\n");
   printf("            `  dmnkwwizx#i+<<<<_    <+<_({jb! (mm9!     ``  ` `         (jxmr+(?>_`.w~`\n");
   printf("             ` jmmmwhwok3jw-(<<-_`  (+< (:_` .(>``                       ?<_(+<(&w> <_\n");
   printf("               (mmwhhkw0o<1xy-(<_..._!` ` (mv<`                           <z<~?c`   ?t<<\n");
   printf("            `  (mnmmwwwkyw+dghk>(j+.-.`  `_`   ``                      `        . (_`  (_\n");
   printf("               .m#idhwi(hdzwmki_(z>(oi_.            `  `                      ``  <<<<((>      `  `\n");
   printf("             `  ?zwzzmnmnxwwmny+>`  ?:``` `                     `  `              `   <+:\n");
   printf("            `   `.wmdmmkwuvuxuxk!  .<.~           `  `  `  `          `      `  .z: . `.:\n");
   printf("              `   ?mrwmmkz+whixnl `.`` - ` `  ``  ` ` ``  ` ` `  `` `    `    ` `  (hr ({      `\n");
   printf("                   4nzdhrzdmmiowk_ .   ~``          _``` `  `   .jgwhmh>           .w:_(>\n");
   printf("            `      .wnmmnkxhzz1u#:.__` ~   `      ``       `` .jm9^``     `         ` -.z.        `\n");
   printf("              `  `  .whxmnk0oo>dkc;:~  _ ` _ ..  `  _ ````  .+m8!......  `         `` 1z>\n");
   printf("                     _txwmnkoi<zki+1c__   ..(z!`   __  ` .jghy<(dnsxwms!   `          (i~\n");
   printf("                    ` -ovhnnz<_jh$zwa+<  ._  ..(+- ~` ` -vb>_(dmmmmmm$~    `   `  `` .z!\n");
   printf("                     ``(vuhmwm+(xizjmh0<~j>_(u> !  `   .   .mqnmmmmk6!  `           (v`\n");
   printf("                   `     +jwmmh+uc1umejjjdhmz+uk-. `   ~_` ?whh0zuh$~              (;  ``\n");
   printf("                         (owozuwmnmmmmsowwnnqmki>+- ```-_    jwnmk>`            `  (}\n");
   printf("                          (hny?whnkqhmnmmmmmh@hawwhmx.    .  ?7tyy!  `         `   (r `\n");
   printf("                   `  `    _?mm+vwmmmmmmmnmm9twnhvwmnm-``.:_  `        `` `  `  `  ($        `  `\n");
   printf("                              ?uo+dhhkxuw9c<(jwnnxxwmms_ .;_       `  `         `` ,$  `\n");
   printf("                           `    ?urmmmho1&dk0<tmmmhwmmnl  ~_    (g..       ``   `  ,$     `       `\n");
   printf("                         `   `   (zozmmnku0z<-(zdmmhmmn$- __ `  (wmmqq&..   `      .{   `    `  `    `  `\n");
   printf("                                  _ozwmmnhkkki1zdmnmhmms_ _<_     ?7mmmmnm+.  ``  .dr-_(-..    `     `\n");
   printf("                                     vmmnmnr<__(dmmmhmn$_  <!  .(~   ~!?ohh>      ?wnkdmni:jmm+..`  `\n");
   printf("                                 `    ?mmmnni_ (dmmmhmmri_ (+j<!`    ` ` ?hl  ` .- .d0dmmnmxzxdml.\n");
   printf("                                       ?mmmnr_-jmmmmhmhwi_(dnr```   .jj.  v>  `.j!  .!?5dmmmnmmb=wm2 `  `` `  `\n");
   printf("                                        ?mmmnn+xxmmmmmnnw-_?vi(jgqhhv9=`` `  ` j:   (_  j<?wmhho-~1w&..  ``\n");
   printf("                                         ?mmmnkkwzhmmmmmmhhkdmmhhut=` `       (c` ` j:  ?>.dnm811uy(zu3-.  `\n");
   printf("                               `    `   .(hmmmmnk<zhmmmmnhhuvwmm9!   `   ``        .<`   .dmmn>(dwmn0-.dma,   `` `  `\n");
   printf("                                `` ` .(dmmn$?mmnnmki1xhkh0zzc~`            ``` ` `.<`  ` .wnmmzdmkdmnmmm9=i-.     `\n");
   printf("                                  ..(dmnmmmr-jvmmmmkqwmm#nqqhm&jj..` `` ``  `  ` (v!``   (mmmrdh#vwmmuxa&gsxhn. `\n");
   printf("                    `  `  `  `  .jqwmbhmmnmnk+__tmmhhmmhmnmbythby!`     `(_   .(z<` ` ` `(mmmcdnrdwnkdmmhmmb.+o+.    `  `  `\n");
   printf("                               .dmmnxwwmmmhm#i<  dm7?mmmmnno.` `_. `   .(:  .jz= `   `  .dmmhawmsmmmhw##<< jmhc_zg.   `\n");
   printf("                        `  ``.jmmmmmwwhmmmhn#oo-`jh_`-_?mmmnm&&-(qs. .j0: .+z>`  `   `  (mm#nmm81wwhhcxhmgqmbwme.?co-.``    `\n");
   printf("                   `  `  `  .dmmmmhwwmmmmmnmnkwm.(w2`   _?tmmmnnnmmnhm$`.du>``` `  `   .dmmbhmhadmmmmgmhwmhu>(hnm+(jwk-. `    `\n");
   printf("                          .jkmm#m#mhmmmm#mmhmmmnr xr   `.   ?thmhhy7!` .x{.    `` ` `` .mmnidmhwmmhmwwmmw6wudmm#9wkmncjwo.```\n");
   printf("                                 `  ..jgghnm-`     `            ...  `                         `  `  .gmh:  `\n");
   printf("                          ` `` ..(gqnmmby4mn%      `   `      ` (m$ `                    ``` `     .(mmd` `\n");
   printf("                         ` ..jgnmmby=!` .dm8`   `    `  ` ``    j#i`                        `   `.jmm9!   `\n");
   printf("                          -xmmb=!`    `.dmb`             `  ....dmhz+_                        `.(nmb>  `   `\n");
   printf("                            `          jm#!        `  `.(jgqhhmbmm#`                 ``  `    (dmb!\n");
   printf("                                   `  (mm\             jmmh9=~_.dm#                   `   ` .dmmm$\n");
   printf("                                `    (m#>            `      .(khhm#  `            ``  `   .gmm=(mk.  `\n");
   printf("                                    (m@!` `         ` `  ` (dm$`jm#                 `   .dmm=` ,mk`\n");
   printf("                                   .hb!    `      `    ` .jm@! `jm#                    (dm8!   (mk\n");
   printf("                                ` (md!                  .dm9!   jm#  `             `` dmb>   ` jmd  `\n");
   printf("                                .jm=`    `          ` `.h8! `   jm@`                  ~!` `    dm3\n");
   printf("                      `  ` `   .d9!`                            jmc                       `   .wm{\n");
   printf("                             .d9=   `                           (t!                           .mm}  `\n");
    }else{
      printf("まーるかいて...\n");


      fflush(stdout);
      sleep(3);
  
      printf("                                                                                     ..-Z7???77^_-..\n");
      printf("                                                                       ` .-Jz?7TTY71V=(~   `  ., ``     ?~\n");
      printf("                                                                   ..sT71J-+<<(_~__++v .!  .<<___ `  `    ?i.\n");
      printf("                                                             ` ..gY=zwVBkzo-(gmZ=!?!7?!?<_<.J-._    ..` ` !  .i.\n");
      printf("                                                            .+HHXWX6z74o++dB!       ` ._` `       ` ./<+1Z>-  ?-\n");
      printf("                                                          .QYzXy1T1vwzad9VI-__~~`   `` `      `````    ` _...,_. ?.\n");
      printf("                                                        (WY!(J-JZO(gH8XX$<--(! `                        ``` .<<+-` i.\n");
      printf("                                                    `.(Y!..(--?>(JWXQWM90yv!   `                          `   -<__  (.\n");
      printf("                                                    .v` .-x<(zI+WdW9SK0Z+=````_`                                <_<. _\n");
      printf("                                                   (C (??WHV5gMkWWHQ#OQI!`` `    `                               -_<.\n");
      printf("                                                ` .= _`(7BV4MMHWWUWkzXXVC      `                                   j.. `\n");
      printf("                                                .f`  .?T8XXM9WkkXSUwHkXI_       .                                   (<    `\n");
      printf("                                              `.= ~ .JSHgHM#dMMHWXWWQwXo--.  _ .(_  `     `    ``                    ._ (\n");
      printf("                                           `  (! .-ZNVMMWWNMMNHXXWWkXSOow<    ` ?1<_       `                          _<_``\n");
      printf("                                            .J! J>(#6yUHMBQMMM9UXWWXW0<uZGs3.. `     `  `   .u,    >  ` `  `   `  ..   (1. .\n");
      printf("                                         ` .V` J1d9Q#u0WdSdNMNXWWkXH0qkWHAsT6OVuJ...(dSJ-.__(j$    -  .z(jZC<((-z1iJ>. `(?_ _.\n");
      printf("                                          .f`.JjkXdC(1dMMNMMNkwXXXXVXWgHWgQVCXUXMAZWWWIv6?>uvjC_  .<  zuMBUOOZOv>._?n.   <_~.(-\n");
      printf("                                         .$~.ZdGVZ>.(dSWSdMM9QXkwwHHWM97! .(++,<+=z~<~zCIzIzz1<_  _~ (jCI++:?=!`     `+. I~ <. .`\n");
      printf("                                       `.D~(ydIv(!.(HZHHMMHHXX0wXWHV6<~`.--   _7TXKXWkWkXzOuxzz-`   (o+z?><<<_         . (~  ~ (_\n");
      printf("                                       .M$(zdD1z_-(d1dSdNMHy0OXqHMB<?<_(Xk>       (TWNXWWUSWHkz<    (<(1+dNgmm>    `    _(_   _ (.\n");
      printf("                                      .9K(z=W0Z!.JH>d0dMMHHHSUQHXUCz<<jHWyTC<`  _?<<dMHHHWpWHWR>    .<WwXB0z?1_   ?-  `  (I-   _ 1\n");
      printf("                                    `.t.$J+g@z<`(uXXHWMM#XkyWZWXUWVd6d0dHKGaj+g&gJ(+XHHHQHHHHNWo.    -<jWQNNNNNNa..    ` .C1.   ...\n");
      printf("                                    (3(K+<jWO6_.>jkdWMMMHbkWHUSXdI+ejwkBdNMMMMN6jKUUMMMMMMWWWHWO_      (H9TTSWNg8vT9l.    +?l     I\n");
      printf("                                   (3_dSv<dCz! (jNXSMMMMMSwkUWkWHHAdGzdMMkAxdheJ>  .dkMMHMHqHHWHx      _?YCAxv~j/7=`      (<?: `  .-\n");
      printf("                                 `.$(dSC1d@+>_.IJHXWMMNMMHWXWHHkM8WHWXWHM9Y<`      dHWMMWBXWHHkk>.     ~__  _~?!`         .+u-.    j.\n");
      printf("                                 .Y(OkZzzd6+_`?<MMHMNMMMNWgMMMHHpWNN0I!~~`~       (XWkNyWkkXVTUWI<         `  _~-          ((:      l\n");
      printf("                                .@.fdZ<(1Sz>~.zJMSdMNMMMMHHHHMNHHp0!~`           JzWNkU0UXWkwzHHR_   ` . _ `      _        ~_<.     (-\n");
      printf("                                d:d~Kz+1dSI< .IdNdBWMMMNWMMNHMHWyWHox_         .dwXHkHXNk0AkwWkwW0n-   ` `..                _?_ _    I\n");
      printf("                              `.#jt(#=>jDx<<`,0dNWdHHMMMMMMWMMMMMHwXO&-.     .-dHWHXWqkHHHmOvTzXv<zqs0+o--([                <_>  `   X\n");
      printf("                               dD9(d#O1QuI<  .vdHVMMMMMHMNHHHMHH@9WkC112.   .VMSVXHHWWHXdM91uggMMNNMHmdMMk<H-               (_z- .   d\n");
      printf("                              .Kdl(kZ<dRd>_  jzNQWSWMMMMM#HMHHMWWHwXw&QVn(uH6dHUWWUSwV0XMWK+dMMMMMMMSXMN0<<Z!      `        >_(l     d.\n");
      printf("                             `.88!dNC1XGs(.`.v(MMXdHWHdHMNHMHWHWHMKXWkWVzdXUXOWXWSXdHXXMNmvvXU9XWkHkdI?<_??!`              .r_-O_    (~\n");
      printf("                             .kdt(HSdr0v~>  .CdM6dBwMWHMNHMHHMMMHHwWUXkVuXXW9zwXkkWSXXWMqMMMMHWWBY???1~                    .$<<O<    ({\n");
      printf("                           ` J3wudWIzV?> <_ .(MHuwXWMHMMMMNHqHHkdM0XWHWkkXWXHAd8UWHXHVWH0uyWU=!__(_  (-                 ` `(#+(<:`  `(}\n");
      printf("                           `.8JSQkHx.+Z_(:  !(NWUrdNHMMMMMMmHMMHdNkdMXUWSwHWXpWHkkzdkWSXUU=`   ._(_  jy-.      `    `      dMr _:    J_\n");
      printf("                           .#j#dWdS>(#! (_  _JH8UXdHMMM#NMMHmWHWHHWWWAXAdHXUWWWXWXqMBBY!_   .~..dNMNgxdWI++.    `          JN>_ ~    (}\n");
      printf("                         `.dCdkMQHC+JD__z_`.`WHOwWWMMNMMHMMMkUNkSXkwWX0WXWX3zWHMH0<_!.(_  _+uMMMNQNNmHHWMMQe+.           ` WNI_      ,]\n");
      printf("                        `.H!j#dSd#zj#~.C<  ..H0jQWMMMMNMMMMMKdMHXWXWkW8OXKXXBVWSy_     (aJMMM9=<~` ?<``    ?77""  ```     .MMI_.     .[\n");
      printf("                     ` `.d!.dSKdM0zdC d<I..`jKOwMMM#MMMMQQMMHdHSwWHWwXmdKXkwOAdK0<      `.._<~_J+jJg+-,.                  ,MH$_!    `.$\n");
      printf("                        d>-(#dDdNZww_.D.~ _ dWWMMMMMMMMMMMMMMHHmwX0TBwW0dMWSyXyO+l       .<< ` .?zztX+c<-   `  `         `JMqZ_:     .$\n");
      printf("                       j%.jMXRdM0dUD (D?:_~.#1dMMNMMMMMMMMMNWMNWMWHdWmXkwWWSyZW0<O<  `.~`__    ?3(< (<+/                 `JSdD_~     .S\n");
      printf("                    ` J$_(MEdWd@wRZ!.HC+`__dkdMHMMMMH0XdMMMMMMHAWHwVWHHWkkdNyAzuo?G<.        `  (_                        dkdI~!      d_\n");
      printf("                     d3_(d#wNX#XOz% (#_<  (KdMMMMNNNNNMNHHHMNMMWkHkWXMNdSXvOO<Ozztz?CC_ .~                               .WWZ>._    ` z[\n");
      printf("                  ` JC_(jM3dWWH9zk! d.C..dQMMMMMM#MMMMNWHKMMHMMHHWWqHSOwXHVTUWXWkXkkv<~___                              (1wv<(:      .R\n");
      printf("                   J%_(Zd6j#XNy1z>`.#_({ (EMNMMNMNMMMMMMMMMHMMNNkWWHHMMMHNHkkUZdKdHkXkux_~      ``     `                 +<1<~({       O-\n");
      printf("                  (%_(xdD+dSkk1zj>.dt-J~.WdMMMMMMMMMMMMMNWWMHMNNWMkHdNuZWUHHMMHwwwQmeyOw+~-_--.     `  ..  `         ` `.<<+<(<_       ($\n");
      printf("               ` .$-~(dEzdNWX01>< +#(+C(dWMMNMMMN#MMMMMMNHNdNHHMMNWHUHOdkXXHHSdqHMH9XHWHmNa-_~~_._  ..___-.`` `   `   ` JV1l<(<_       `z,\n");
      printf("            `   ($~_(X8<1KUXDz3u_(M:(z_<JMMMMMMMMNMMMMMMMUHHXMH9MM@HNMHmXH8OWHHMMMQkWXUWHMMMMn(J&++vY<C<<____...  ` ` .Noz:j>_I          S.\n");
      printf("               .#(~(dY+1dSwK1z+: dt(w>~(MMMMMMMMMMMMMMMM#vNdHHWHHWMkUMMMMMMRXkdHgHWNNgNNH@HWkWXWM@Nsz&zwOzz-((-.+-.-.JNZIz!(w.<_       ` .h.\n");
      printf("               W<<(wZ+rdSzZz+z< (@_j%_(dNMMMMNMNHMMHWMMMKzdRAwQKWWkXHHHHMWMMMUmXHWWWkAQQHHMNH#MMMMMHHMMMMMWMMHHMkdXWMMMRIz< X_(<         `Jr\n");
      printf("            ` jl_(vv1zdDzXC(C(~.K>($((dMMMMMHMMHHMHMMMMMKzzM8zWHWWWkVBRwmOAQmdHWWkWHWMWMHWmqMMHQHMWNMMMNHMMMMSWY!  MNJdKXXI dr.<`   ``     d, `\n");
      printf("             .D(~Jz<zj#1d$_v<>.M%(y_(dWMNHHWBdHWN@WNMMMMK?WRSAXMkZWNHHUNVOWKWHkwHOUXqMHHQWMMMMMMMMMMWMMMMMUV=``    JNMmHvWk-+W_<_         .(W,\n");
      printf("           `.@(_(C<jvdCd@<v<< J8-Z!.JWMNHXXSXNykCjMMNdMMNJSvWHkQNKVXWHXXHNKI?TzOXXWVGdMHwXMHHHkWHkWMMHHH0I<..      JNUMMRreturn 0;\n");
      printf("                                 `  ..jgghnm-`     `            ...  `                         `  `  .gmh:  `\n");
      printf("                          ` `` ..(gqnmmby4mn%      `   `      ` (m$ `                    ``` `     .(mmd` `\n");
      printf("                         ` ..jgnmmby=!` .dm8`   `    `  ` ``    j#i`                        `   `.jmm9!   `\n");
      printf("                          -xmmb=!`    `.dmb`             `  ....dmhz+_                        `.(nmb>  `   `\n");
      printf("                            `          jm#!        `  `.(jgqhhmbmm#`                 ``  `    (dmb!\n");
      printf("                                   `  (mm\             jmmh9=~_.dm#                   `   ` .dmmm$\n");
      printf("                                `    (m#>            `      .(khhm#  `            ``  `   .gmm=(mk.  `\n");
      printf("                                    (m@!` `         ` `  ` (dm$`jm#                 `   .dmm=` ,mk`\n");
      printf("                                   .hb!    `      `    ` .jm@! `jm#                    (dm8!   (mk\n");
      printf("                                ` (md!                  .dm9!   jm#  `             `` dmb>   ` jmd  `\n");
      printf("                                .jm=`    `          ` `.h8! `   jm@`                  ~!` `    dm3\n");
      printf("                      `  ` `   .d9!`                            jmc                       `   .wm{\n");
      printf("                             .d9=   `                           (t!                           .mm}  `\n");
      }

  }else{
    printf("お前の入力文字列は\n%sだな？ポッター！！", str1);
  }

  return 0;
}
