#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part49(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1662a0u: goto label_1662a0;
        case 0x1662a4u: goto label_1662a4;
        case 0x1662a8u: goto label_1662a8;
        case 0x1662acu: goto label_1662ac;
        case 0x1662b0u: goto label_1662b0;
        case 0x1662b4u: goto label_1662b4;
        case 0x1662b8u: goto label_1662b8;
        case 0x1662bcu: goto label_1662bc;
        case 0x1662c0u: goto label_1662c0;
        case 0x1662c4u: goto label_1662c4;
        case 0x1662c8u: goto label_1662c8;
        case 0x1662ccu: goto label_1662cc;
        case 0x1662d0u: goto label_1662d0;
        case 0x1662d4u: goto label_1662d4;
        case 0x1662d8u: goto label_1662d8;
        case 0x1662dcu: goto label_1662dc;
        case 0x1662e0u: goto label_1662e0;
        case 0x1662e4u: goto label_1662e4;
        case 0x1662e8u: goto label_1662e8;
        case 0x1662ecu: goto label_1662ec;
        case 0x1662f0u: goto label_1662f0;
        case 0x1662f4u: goto label_1662f4;
        case 0x1662f8u: goto label_1662f8;
        case 0x1662fcu: goto label_1662fc;
        case 0x166300u: goto label_166300;
        case 0x166304u: goto label_166304;
        case 0x166308u: goto label_166308;
        case 0x16630cu: goto label_16630c;
        case 0x166310u: goto label_166310;
        case 0x166314u: goto label_166314;
        case 0x166318u: goto label_166318;
        case 0x16631cu: goto label_16631c;
        case 0x166320u: goto label_166320;
        case 0x166324u: goto label_166324;
        case 0x166328u: goto label_166328;
        case 0x16632cu: goto label_16632c;
        case 0x166330u: goto label_166330;
        case 0x166334u: goto label_166334;
        case 0x166338u: goto label_166338;
        case 0x16633cu: goto label_16633c;
        case 0x166340u: goto label_166340;
        case 0x166344u: goto label_166344;
        case 0x166348u: goto label_166348;
        case 0x16634cu: goto label_16634c;
        case 0x166350u: goto label_166350;
        case 0x166354u: goto label_166354;
        case 0x166358u: goto label_166358;
        case 0x16635cu: goto label_16635c;
        case 0x166360u: goto label_166360;
        case 0x166364u: goto label_166364;
        case 0x166368u: goto label_166368;
        case 0x16636cu: goto label_16636c;
        case 0x166370u: goto label_166370;
        case 0x166374u: goto label_166374;
        case 0x166378u: goto label_166378;
        case 0x16637cu: goto label_16637c;
        case 0x166380u: goto label_166380;
        case 0x166384u: goto label_166384;
        case 0x166388u: goto label_166388;
        case 0x16638cu: goto label_16638c;
        case 0x166390u: goto label_166390;
        case 0x166394u: goto label_166394;
        case 0x166398u: goto label_166398;
        case 0x16639cu: goto label_16639c;
        case 0x1663a0u: goto label_1663a0;
        case 0x1663a4u: goto label_1663a4;
        case 0x1663a8u: goto label_1663a8;
        case 0x1663acu: goto label_1663ac;
        case 0x1663b0u: goto label_1663b0;
        case 0x1663b4u: goto label_1663b4;
        case 0x1663b8u: goto label_1663b8;
        case 0x1663bcu: goto label_1663bc;
        case 0x1663c0u: goto label_1663c0;
        case 0x1663c4u: goto label_1663c4;
        case 0x1663c8u: goto label_1663c8;
        case 0x1663ccu: goto label_1663cc;
        case 0x1663d0u: goto label_1663d0;
        case 0x1663d4u: goto label_1663d4;
        case 0x1663d8u: goto label_1663d8;
        case 0x1663dcu: goto label_1663dc;
        case 0x1663e0u: goto label_1663e0;
        case 0x1663e4u: goto label_1663e4;
        case 0x1663e8u: goto label_1663e8;
        case 0x1663ecu: goto label_1663ec;
        case 0x1663f0u: goto label_1663f0;
        case 0x1663f4u: goto label_1663f4;
        case 0x1663f8u: goto label_1663f8;
        case 0x1663fcu: goto label_1663fc;
        case 0x166400u: goto label_166400;
        case 0x166404u: goto label_166404;
        case 0x166408u: goto label_166408;
        case 0x16640cu: goto label_16640c;
        case 0x166410u: goto label_166410;
        case 0x166414u: goto label_166414;
        case 0x166418u: goto label_166418;
        case 0x16641cu: goto label_16641c;
        case 0x166420u: goto label_166420;
        case 0x166424u: goto label_166424;
        case 0x166428u: goto label_166428;
        case 0x16642cu: goto label_16642c;
        case 0x166430u: goto label_166430;
        case 0x166434u: goto label_166434;
        case 0x166438u: goto label_166438;
        case 0x16643cu: goto label_16643c;
        case 0x166440u: goto label_166440;
        case 0x166444u: goto label_166444;
        case 0x166448u: goto label_166448;
        case 0x16644cu: goto label_16644c;
        case 0x166450u: goto label_166450;
        case 0x166454u: goto label_166454;
        case 0x166458u: goto label_166458;
        case 0x16645cu: goto label_16645c;
        case 0x166460u: goto label_166460;
        case 0x166464u: goto label_166464;
        case 0x166468u: goto label_166468;
        case 0x16646cu: goto label_16646c;
        case 0x166470u: goto label_166470;
        case 0x166474u: goto label_166474;
        case 0x166478u: goto label_166478;
        case 0x16647cu: goto label_16647c;
        case 0x166480u: goto label_166480;
        case 0x166484u: goto label_166484;
        case 0x166488u: goto label_166488;
        case 0x16648cu: goto label_16648c;
        case 0x166490u: goto label_166490;
        case 0x166494u: goto label_166494;
        case 0x166498u: goto label_166498;
        case 0x16649cu: goto label_16649c;
        case 0x1664a0u: goto label_1664a0;
        case 0x1664a4u: goto label_1664a4;
        case 0x1664a8u: goto label_1664a8;
        case 0x1664acu: goto label_1664ac;
        case 0x1664b0u: goto label_1664b0;
        case 0x1664b4u: goto label_1664b4;
        case 0x1664b8u: goto label_1664b8;
        case 0x1664bcu: goto label_1664bc;
        case 0x1664c0u: goto label_1664c0;
        case 0x1664c4u: goto label_1664c4;
        case 0x1664c8u: goto label_1664c8;
        case 0x1664ccu: goto label_1664cc;
        case 0x1664d0u: goto label_1664d0;
        case 0x1664d4u: goto label_1664d4;
        case 0x1664d8u: goto label_1664d8;
        case 0x1664dcu: goto label_1664dc;
        case 0x1664e0u: goto label_1664e0;
        case 0x1664e4u: goto label_1664e4;
        case 0x1664e8u: goto label_1664e8;
        case 0x1664ecu: goto label_1664ec;
        case 0x1664f0u: goto label_1664f0;
        case 0x1664f4u: goto label_1664f4;
        case 0x1664f8u: goto label_1664f8;
        case 0x1664fcu: goto label_1664fc;
        case 0x166500u: goto label_166500;
        case 0x166504u: goto label_166504;
        case 0x166508u: goto label_166508;
        case 0x16650cu: goto label_16650c;
        case 0x166510u: goto label_166510;
        case 0x166514u: goto label_166514;
        case 0x166518u: goto label_166518;
        case 0x16651cu: goto label_16651c;
        case 0x166520u: goto label_166520;
        case 0x166524u: goto label_166524;
        case 0x166528u: goto label_166528;
        case 0x16652cu: goto label_16652c;
        case 0x166530u: goto label_166530;
        case 0x166534u: goto label_166534;
        case 0x166538u: goto label_166538;
        case 0x16653cu: goto label_16653c;
        case 0x166540u: goto label_166540;
        case 0x166544u: goto label_166544;
        case 0x166548u: goto label_166548;
        case 0x16654cu: goto label_16654c;
        case 0x166550u: goto label_166550;
        case 0x166554u: goto label_166554;
        case 0x166558u: goto label_166558;
        case 0x16655cu: goto label_16655c;
        case 0x166560u: goto label_166560;
        case 0x166564u: goto label_166564;
        case 0x166568u: goto label_166568;
        case 0x16656cu: goto label_16656c;
        case 0x166570u: goto label_166570;
        case 0x166574u: goto label_166574;
        case 0x166578u: goto label_166578;
        case 0x16657cu: goto label_16657c;
        case 0x166580u: goto label_166580;
        case 0x166584u: goto label_166584;
        case 0x166588u: goto label_166588;
        case 0x16658cu: goto label_16658c;
        case 0x166590u: goto label_166590;
        case 0x166594u: goto label_166594;
        case 0x166598u: goto label_166598;
        case 0x16659cu: goto label_16659c;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665a4u: goto label_1665a4;
        case 0x1665a8u: goto label_1665a8;
        case 0x1665acu: goto label_1665ac;
        case 0x1665b0u: goto label_1665b0;
        case 0x1665b4u: goto label_1665b4;
        case 0x1665b8u: goto label_1665b8;
        case 0x1665bcu: goto label_1665bc;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665c4u: goto label_1665c4;
        case 0x1665c8u: goto label_1665c8;
        case 0x1665ccu: goto label_1665cc;
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        case 0x166628u: goto label_166628;
        case 0x16662cu: goto label_16662c;
        case 0x166630u: goto label_166630;
        case 0x166634u: goto label_166634;
        case 0x166638u: goto label_166638;
        case 0x16663cu: goto label_16663c;
        case 0x166640u: goto label_166640;
        case 0x166644u: goto label_166644;
        case 0x166648u: goto label_166648;
        case 0x16664cu: goto label_16664c;
        case 0x166650u: goto label_166650;
        case 0x166654u: goto label_166654;
        case 0x166658u: goto label_166658;
        case 0x16665cu: goto label_16665c;
        case 0x166660u: goto label_166660;
        case 0x166664u: goto label_166664;
        case 0x166668u: goto label_166668;
        case 0x16666cu: goto label_16666c;
        case 0x166670u: goto label_166670;
        case 0x166674u: goto label_166674;
        case 0x166678u: goto label_166678;
        case 0x16667cu: goto label_16667c;
        case 0x166680u: goto label_166680;
        case 0x166684u: goto label_166684;
        case 0x166688u: goto label_166688;
        case 0x16668cu: goto label_16668c;
        case 0x166690u: goto label_166690;
        case 0x166694u: goto label_166694;
        case 0x166698u: goto label_166698;
        case 0x16669cu: goto label_16669c;
        case 0x1666a0u: goto label_1666a0;
        case 0x1666a4u: goto label_1666a4;
        case 0x1666a8u: goto label_1666a8;
        case 0x1666acu: goto label_1666ac;
        case 0x1666b0u: goto label_1666b0;
        case 0x1666b4u: goto label_1666b4;
        case 0x1666b8u: goto label_1666b8;
        case 0x1666bcu: goto label_1666bc;
        case 0x1666c0u: goto label_1666c0;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666c8u: goto label_1666c8;
        case 0x1666ccu: goto label_1666cc;
        case 0x1666d0u: goto label_1666d0;
        case 0x1666d4u: goto label_1666d4;
        case 0x1666d8u: goto label_1666d8;
        case 0x1666dcu: goto label_1666dc;
        case 0x1666e0u: goto label_1666e0;
        case 0x1666e4u: goto label_1666e4;
        case 0x1666e8u: goto label_1666e8;
        case 0x1666ecu: goto label_1666ec;
        case 0x1666f0u: goto label_1666f0;
        case 0x1666f4u: goto label_1666f4;
        case 0x1666f8u: goto label_1666f8;
        case 0x1666fcu: goto label_1666fc;
        case 0x166700u: goto label_166700;
        case 0x166704u: goto label_166704;
        case 0x166708u: goto label_166708;
        case 0x16670cu: goto label_16670c;
        case 0x166710u: goto label_166710;
        case 0x166714u: goto label_166714;
        case 0x166718u: goto label_166718;
        case 0x16671cu: goto label_16671c;
        case 0x166720u: goto label_166720;
        case 0x166724u: goto label_166724;
        case 0x166728u: goto label_166728;
        case 0x16672cu: goto label_16672c;
        case 0x166730u: goto label_166730;
        case 0x166734u: goto label_166734;
        case 0x166738u: goto label_166738;
        case 0x16673cu: goto label_16673c;
        case 0x166740u: goto label_166740;
        case 0x166744u: goto label_166744;
        case 0x166748u: goto label_166748;
        case 0x16674cu: goto label_16674c;
        case 0x166750u: goto label_166750;
        case 0x166754u: goto label_166754;
        case 0x166758u: goto label_166758;
        case 0x16675cu: goto label_16675c;
        case 0x166760u: goto label_166760;
        case 0x166764u: goto label_166764;
        case 0x166768u: goto label_166768;
        case 0x16676cu: goto label_16676c;
        case 0x166770u: goto label_166770;
        case 0x166774u: goto label_166774;
        case 0x166778u: goto label_166778;
        case 0x16677cu: goto label_16677c;
        case 0x166780u: goto label_166780;
        case 0x166784u: goto label_166784;
        case 0x166788u: goto label_166788;
        case 0x16678cu: goto label_16678c;
        case 0x166790u: goto label_166790;
        case 0x166794u: goto label_166794;
        case 0x166798u: goto label_166798;
        case 0x16679cu: goto label_16679c;
        case 0x1667a0u: goto label_1667a0;
        case 0x1667a4u: goto label_1667a4;
        case 0x1667a8u: goto label_1667a8;
        case 0x1667acu: goto label_1667ac;
        case 0x1667b0u: goto label_1667b0;
        case 0x1667b4u: goto label_1667b4;
        case 0x1667b8u: goto label_1667b8;
        case 0x1667bcu: goto label_1667bc;
        case 0x1667c0u: goto label_1667c0;
        case 0x1667c4u: goto label_1667c4;
        case 0x1667c8u: goto label_1667c8;
        case 0x1667ccu: goto label_1667cc;
        case 0x1667d0u: goto label_1667d0;
        case 0x1667d4u: goto label_1667d4;
        case 0x1667d8u: goto label_1667d8;
        case 0x1667dcu: goto label_1667dc;
        case 0x1667e0u: goto label_1667e0;
        case 0x1667e4u: goto label_1667e4;
        case 0x1667e8u: goto label_1667e8;
        case 0x1667ecu: goto label_1667ec;
        case 0x1667f0u: goto label_1667f0;
        case 0x1667f4u: goto label_1667f4;
        case 0x1667f8u: goto label_1667f8;
        case 0x1667fcu: goto label_1667fc;
        case 0x166800u: goto label_166800;
        case 0x166804u: goto label_166804;
        case 0x166808u: goto label_166808;
        case 0x16680cu: goto label_16680c;
        case 0x166810u: goto label_166810;
        case 0x166814u: goto label_166814;
        case 0x166818u: goto label_166818;
        case 0x16681cu: goto label_16681c;
        case 0x166820u: goto label_166820;
        case 0x166824u: goto label_166824;
        case 0x166828u: goto label_166828;
        case 0x16682cu: goto label_16682c;
        case 0x166830u: goto label_166830;
        case 0x166834u: goto label_166834;
        case 0x166838u: goto label_166838;
        case 0x16683cu: goto label_16683c;
        case 0x166840u: goto label_166840;
        case 0x166844u: goto label_166844;
        case 0x166848u: goto label_166848;
        case 0x16684cu: goto label_16684c;
        case 0x166850u: goto label_166850;
        case 0x166854u: goto label_166854;
        case 0x166858u: goto label_166858;
        case 0x16685cu: goto label_16685c;
        case 0x166860u: goto label_166860;
        case 0x166864u: goto label_166864;
        case 0x166868u: goto label_166868;
        case 0x16686cu: goto label_16686c;
        case 0x166870u: goto label_166870;
        case 0x166874u: goto label_166874;
        case 0x166878u: goto label_166878;
        case 0x16687cu: goto label_16687c;
        case 0x166880u: goto label_166880;
        case 0x166884u: goto label_166884;
        case 0x166888u: goto label_166888;
        case 0x16688cu: goto label_16688c;
        case 0x166890u: goto label_166890;
        case 0x166894u: goto label_166894;
        case 0x166898u: goto label_166898;
        case 0x16689cu: goto label_16689c;
        case 0x1668a0u: goto label_1668a0;
        case 0x1668a4u: goto label_1668a4;
        case 0x1668a8u: goto label_1668a8;
        case 0x1668acu: goto label_1668ac;
        case 0x1668b0u: goto label_1668b0;
        case 0x1668b4u: goto label_1668b4;
        case 0x1668b8u: goto label_1668b8;
        case 0x1668bcu: goto label_1668bc;
        case 0x1668c0u: goto label_1668c0;
        case 0x1668c4u: goto label_1668c4;
        case 0x1668c8u: goto label_1668c8;
        case 0x1668ccu: goto label_1668cc;
        case 0x1668d0u: goto label_1668d0;
        case 0x1668d4u: goto label_1668d4;
        case 0x1668d8u: goto label_1668d8;
        case 0x1668dcu: goto label_1668dc;
        case 0x1668e0u: goto label_1668e0;
        case 0x1668e4u: goto label_1668e4;
        case 0x1668e8u: goto label_1668e8;
        case 0x1668ecu: goto label_1668ec;
        case 0x1668f0u: goto label_1668f0;
        case 0x1668f4u: goto label_1668f4;
        case 0x1668f8u: goto label_1668f8;
        case 0x1668fcu: goto label_1668fc;
        case 0x166900u: goto label_166900;
        case 0x166904u: goto label_166904;
        case 0x166908u: goto label_166908;
        case 0x16690cu: goto label_16690c;
        case 0x166910u: goto label_166910;
        case 0x166914u: goto label_166914;
        case 0x166918u: goto label_166918;
        case 0x16691cu: goto label_16691c;
        case 0x166920u: goto label_166920;
        case 0x166924u: goto label_166924;
        case 0x166928u: goto label_166928;
        case 0x16692cu: goto label_16692c;
        case 0x166930u: goto label_166930;
        case 0x166934u: goto label_166934;
        case 0x166938u: goto label_166938;
        case 0x16693cu: goto label_16693c;
        case 0x166940u: goto label_166940;
        case 0x166944u: goto label_166944;
        case 0x166948u: goto label_166948;
        case 0x16694cu: goto label_16694c;
        case 0x166950u: goto label_166950;
        case 0x166954u: goto label_166954;
        case 0x166958u: goto label_166958;
        case 0x16695cu: goto label_16695c;
        case 0x166960u: goto label_166960;
        case 0x166964u: goto label_166964;
        case 0x166968u: goto label_166968;
        case 0x16696cu: goto label_16696c;
        case 0x166970u: goto label_166970;
        case 0x166974u: goto label_166974;
        case 0x166978u: goto label_166978;
        case 0x16697cu: goto label_16697c;
        case 0x166980u: goto label_166980;
        case 0x166984u: goto label_166984;
        case 0x166988u: goto label_166988;
        case 0x16698cu: goto label_16698c;
        case 0x166990u: goto label_166990;
        case 0x166994u: goto label_166994;
        case 0x166998u: goto label_166998;
        case 0x16699cu: goto label_16699c;
        case 0x1669a0u: goto label_1669a0;
        case 0x1669a4u: goto label_1669a4;
        case 0x1669a8u: goto label_1669a8;
        case 0x1669acu: goto label_1669ac;
        case 0x1669b0u: goto label_1669b0;
        case 0x1669b4u: goto label_1669b4;
        case 0x1669b8u: goto label_1669b8;
        case 0x1669bcu: goto label_1669bc;
        case 0x1669c0u: goto label_1669c0;
        case 0x1669c4u: goto label_1669c4;
        case 0x1669c8u: goto label_1669c8;
        case 0x1669ccu: goto label_1669cc;
        case 0x1669d0u: goto label_1669d0;
        case 0x1669d4u: goto label_1669d4;
        case 0x1669d8u: goto label_1669d8;
        case 0x1669dcu: goto label_1669dc;
        case 0x1669e0u: goto label_1669e0;
        case 0x1669e4u: goto label_1669e4;
        case 0x1669e8u: goto label_1669e8;
        case 0x1669ecu: goto label_1669ec;
        case 0x1669f0u: goto label_1669f0;
        case 0x1669f4u: goto label_1669f4;
        case 0x1669f8u: goto label_1669f8;
        case 0x1669fcu: goto label_1669fc;
        case 0x166a00u: goto label_166a00;
        case 0x166a04u: goto label_166a04;
        case 0x166a08u: goto label_166a08;
        case 0x166a0cu: goto label_166a0c;
        case 0x166a10u: goto label_166a10;
        case 0x166a14u: goto label_166a14;
        case 0x166a18u: goto label_166a18;
        case 0x166a1cu: goto label_166a1c;
        case 0x166a20u: goto label_166a20;
        case 0x166a24u: goto label_166a24;
        case 0x166a28u: goto label_166a28;
        case 0x166a2cu: goto label_166a2c;
        case 0x166a30u: goto label_166a30;
        case 0x166a34u: goto label_166a34;
        case 0x166a38u: goto label_166a38;
        case 0x166a3cu: goto label_166a3c;
        case 0x166a40u: goto label_166a40;
        case 0x166a44u: goto label_166a44;
        case 0x166a48u: goto label_166a48;
        case 0x166a4cu: goto label_166a4c;
        case 0x166a50u: goto label_166a50;
        case 0x166a54u: goto label_166a54;
        case 0x166a58u: goto label_166a58;
        case 0x166a5cu: goto label_166a5c;
        case 0x166a60u: goto label_166a60;
        case 0x166a64u: goto label_166a64;
        case 0x166a68u: goto label_166a68;
        case 0x166a6cu: goto label_166a6c;
        default: return;
    }

label_1662a0:
    // 0x1662a0: 0x100001fb  b           . + 4 + (0x1FB << 2)
label_1662a4:
    if (ctx->pc == 0x1662A4u) {
        ctx->pc = 0x1662A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662A0u;
        // 0x1662a4: 0xa6600050  sh          $zero, 0x50($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1662A8u;
        goto label_1662a8;
    }
    ctx->pc = 0x1662A0u;
    {
        const bool branch_taken_0x1662a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662A0u;
        // 0x1662a4: 0xa6600050  sh          $zero, 0x50($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662a0) {
            ctx->pc = 0x166A90u;
            { ctx->pc = 0x166a90; return; }
        }
    }
    ctx->pc = 0x1662A8u;
label_1662a8:
    // 0x1662a8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1662a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1662ac:
    // 0x1662ac: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1662acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_1662b0:
    // 0x1662b0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1662b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_1662b4:
    // 0x1662b4: 0x3c040c00  lui         $a0, 0xC00
    ctx->pc = 0x1662b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
label_1662b8:
    // 0x1662b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1662b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1662bc:
    // 0x1662bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1662bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1662c0:
    // 0x1662c0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1662c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1662c4:
    // 0x1662c4: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1662c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1662c8:
    // 0x1662c8: 0xc6020098  lwc1        $f2, 0x98($s0)
    ctx->pc = 0x1662c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1662cc:
    // 0x1662cc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1662ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1662d0:
    // 0x1662d0: 0xe6010098  swc1        $f1, 0x98($s0)
    ctx->pc = 0x1662d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_1662d4:
    // 0x1662d4: 0x96620050  lhu         $v0, 0x50($s3)
    ctx->pc = 0x1662d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_1662d8:
    // 0x1662d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1662d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1662dc:
    // 0x1662dc: 0xa6620050  sh          $v0, 0x50($s3)
    ctx->pc = 0x1662dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 2));
label_1662e0:
    // 0x1662e0: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x1662e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1662e4:
    // 0x1662e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1662e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1662e8:
    // 0x1662e8: 0x0  nop
    ctx->pc = 0x1662e8u;
    // NOP
label_1662ec:
    // 0x1662ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1662f0:
    if (ctx->pc == 0x1662F0u) {
        ctx->pc = 0x1662F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662ECu;
        // 0x1662f0: 0x3c034300  lui         $v1, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1662F4u;
        goto label_1662f4;
    }
    ctx->pc = 0x1662ECu;
    {
        const bool branch_taken_0x1662ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1662F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662ECu;
        // 0x1662f0: 0x3c034300  lui         $v1, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662ec) {
            ctx->pc = 0x166304u;
            goto label_166304;
        }
    }
    ctx->pc = 0x1662F4u;
label_1662f4:
    // 0x1662f4: 0x96620050  lhu         $v0, 0x50($s3)
    ctx->pc = 0x1662f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_1662f8:
    // 0x1662f8: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1662f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
label_1662fc:
    // 0x1662fc: 0x142001e4  bnez        $at, . + 4 + (0x1E4 << 2)
label_166300:
    if (ctx->pc == 0x166300u) {
        ctx->pc = 0x166304u;
        goto label_166304;
    }
    ctx->pc = 0x1662FCu;
    {
        const bool branch_taken_0x1662fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1662fc) {
            ctx->pc = 0x166A90u;
            { ctx->pc = 0x166a90; return; }
        }
    }
    ctx->pc = 0x166304u;
label_166304:
    // 0x166304: 0x3c02f3ff  lui         $v0, 0xF3FF
    ctx->pc = 0x166304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62463 << 16));
label_166308:
    // 0x166308: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x166308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_16630c:
    // 0x16630c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_166310:
    // 0x166310: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_166314:
    // 0x166314: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x166314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_166318:
    // 0x166318: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x166318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_16631c:
    // 0x16631c: 0xa6600050  sh          $zero, 0x50($s3)
    ctx->pc = 0x16631cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
label_166320:
    // 0x166320: 0x96620052  lhu         $v0, 0x52($s3)
    ctx->pc = 0x166320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_166324:
    // 0x166324: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166328:
    // 0x166328: 0x100001d9  b           . + 4 + (0x1D9 << 2)
label_16632c:
    if (ctx->pc == 0x16632Cu) {
        ctx->pc = 0x16632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166328u;
        // 0x16632c: 0xa6620052  sh          $v0, 0x52($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166330u;
        goto label_166330;
    }
    ctx->pc = 0x166328u;
    {
        const bool branch_taken_0x166328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166328u;
        // 0x16632c: 0xa6620052  sh          $v0, 0x52($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166328) {
            ctx->pc = 0x166A90u;
            { ctx->pc = 0x166a90; return; }
        }
    }
    ctx->pc = 0x166330u;
label_166330:
    // 0x166330: 0x96620050  lhu         $v0, 0x50($s3)
    ctx->pc = 0x166330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_166334:
    // 0x166334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166338:
    // 0x166338: 0xa6620050  sh          $v0, 0x50($s3)
    ctx->pc = 0x166338u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 2));
label_16633c:
    // 0x16633c: 0x96640050  lhu         $a0, 0x50($s3)
    ctx->pc = 0x16633cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_166340:
    // 0x166340: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_166344:
    if (ctx->pc == 0x166344u) {
        ctx->pc = 0x166344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166340u;
        // 0x166344: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166348u;
        goto label_166348;
    }
    ctx->pc = 0x166340u;
    {
        const bool branch_taken_0x166340 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x166344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166340u;
        // 0x166344: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166340) {
            ctx->pc = 0x166354u;
            goto label_166354;
        }
    }
    ctx->pc = 0x166348u;
label_166348:
    // 0x166348: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x166348u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16634c:
    // 0x16634c: 0x10000007  b           . + 4 + (0x7 << 2)
label_166350:
    if (ctx->pc == 0x166350u) {
        ctx->pc = 0x166350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16634Cu;
        // 0x166350: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166354u;
        goto label_166354;
    }
    ctx->pc = 0x16634Cu;
    {
        const bool branch_taken_0x16634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16634Cu;
        // 0x166350: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16634c) {
            ctx->pc = 0x16636Cu;
            goto label_16636c;
        }
    }
    ctx->pc = 0x166354u;
label_166354:
    // 0x166354: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x166354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_166358:
    // 0x166358: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16635c:
    // 0x16635c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16635cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166360:
    // 0x166360: 0x0  nop
    ctx->pc = 0x166360u;
    // NOP
label_166364:
    // 0x166364: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x166364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_166368:
    // 0x166368: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x166368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_16636c:
    // 0x16636c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_166370:
    if (ctx->pc == 0x166370u) {
        ctx->pc = 0x166370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16636Cu;
        // 0x166370: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166374u;
        goto label_166374;
    }
    ctx->pc = 0x16636Cu;
    {
        const bool branch_taken_0x16636c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x166370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16636Cu;
        // 0x166370: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16636c) {
            ctx->pc = 0x166380u;
            goto label_166380;
        }
    }
    ctx->pc = 0x166374u;
label_166374:
    // 0x166374: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x166374u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166378:
    // 0x166378: 0x10000007  b           . + 4 + (0x7 << 2)
label_16637c:
    if (ctx->pc == 0x16637Cu) {
        ctx->pc = 0x16637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166378u;
        // 0x16637c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166380u;
        goto label_166380;
    }
    ctx->pc = 0x166378u;
    {
        const bool branch_taken_0x166378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166378u;
        // 0x16637c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166378) {
            ctx->pc = 0x166398u;
            goto label_166398;
        }
    }
    ctx->pc = 0x166380u;
label_166380:
    // 0x166380: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x166380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_166384:
    // 0x166384: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_166388:
    // 0x166388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x166388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16638c:
    // 0x16638c: 0x0  nop
    ctx->pc = 0x16638cu;
    // NOP
label_166390:
    // 0x166390: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_166394:
    // 0x166394: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x166394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_166398:
    // 0x166398: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x166398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16639c:
    // 0x16639c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x16639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1663a0:
    // 0x1663a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1663a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1663a4:
    // 0x1663a4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1663a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_1663a8:
    // 0x1663a8: 0x96640050  lhu         $a0, 0x50($s3)
    ctx->pc = 0x1663a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_1663ac:
    // 0x1663ac: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_1663b0:
    if (ctx->pc == 0x1663B0u) {
        ctx->pc = 0x1663B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663ACu;
        // 0x1663b0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663B4u;
        goto label_1663b4;
    }
    ctx->pc = 0x1663ACu;
    {
        const bool branch_taken_0x1663ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1663B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663ACu;
        // 0x1663b0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663ac) {
            ctx->pc = 0x1663C0u;
            goto label_1663c0;
        }
    }
    ctx->pc = 0x1663B4u;
label_1663b4:
    // 0x1663b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1663b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1663b8:
    // 0x1663b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1663bc:
    if (ctx->pc == 0x1663BCu) {
        ctx->pc = 0x1663BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663B8u;
        // 0x1663bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663C0u;
        goto label_1663c0;
    }
    ctx->pc = 0x1663B8u;
    {
        const bool branch_taken_0x1663b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663B8u;
        // 0x1663bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663b8) {
            ctx->pc = 0x1663D8u;
            goto label_1663d8;
        }
    }
    ctx->pc = 0x1663C0u;
label_1663c0:
    // 0x1663c0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1663c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1663c4:
    // 0x1663c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1663c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1663c8:
    // 0x1663c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1663c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1663cc:
    // 0x1663cc: 0x0  nop
    ctx->pc = 0x1663ccu;
    // NOP
label_1663d0:
    // 0x1663d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1663d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1663d4:
    // 0x1663d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1663d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1663d8:
    // 0x1663d8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_1663dc:
    if (ctx->pc == 0x1663DCu) {
        ctx->pc = 0x1663DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663D8u;
        // 0x1663dc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663E0u;
        goto label_1663e0;
    }
    ctx->pc = 0x1663D8u;
    {
        const bool branch_taken_0x1663d8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1663DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663D8u;
        // 0x1663dc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663d8) {
            ctx->pc = 0x1663ECu;
            goto label_1663ec;
        }
    }
    ctx->pc = 0x1663E0u;
label_1663e0:
    // 0x1663e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1663e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1663e4:
    // 0x1663e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1663e8:
    if (ctx->pc == 0x1663E8u) {
        ctx->pc = 0x1663E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663E4u;
        // 0x1663e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663ECu;
        goto label_1663ec;
    }
    ctx->pc = 0x1663E4u;
    {
        const bool branch_taken_0x1663e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663E4u;
        // 0x1663e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663e4) {
            ctx->pc = 0x166404u;
            goto label_166404;
        }
    }
    ctx->pc = 0x1663ECu;
label_1663ec:
    // 0x1663ec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1663ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1663f0:
    // 0x1663f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1663f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1663f4:
    // 0x1663f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1663f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1663f8:
    // 0x1663f8: 0x0  nop
    ctx->pc = 0x1663f8u;
    // NOP
label_1663fc:
    // 0x1663fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1663fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_166400:
    // 0x166400: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x166400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_166404:
    // 0x166404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x166404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_166408:
    // 0x166408: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x166408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16640c:
    // 0x16640c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16640cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_166410:
    // 0x166410: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x166410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_166414:
    // 0x166414: 0x96640050  lhu         $a0, 0x50($s3)
    ctx->pc = 0x166414u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_166418:
    // 0x166418: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_16641c:
    if (ctx->pc == 0x16641Cu) {
        ctx->pc = 0x16641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166418u;
        // 0x16641c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166420u;
        goto label_166420;
    }
    ctx->pc = 0x166418u;
    {
        const bool branch_taken_0x166418 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166418u;
        // 0x16641c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166418) {
            ctx->pc = 0x16642Cu;
            goto label_16642c;
        }
    }
    ctx->pc = 0x166420u;
label_166420:
    // 0x166420: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x166420u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166424:
    // 0x166424: 0x10000007  b           . + 4 + (0x7 << 2)
label_166428:
    if (ctx->pc == 0x166428u) {
        ctx->pc = 0x166428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166424u;
        // 0x166428: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16642Cu;
        goto label_16642c;
    }
    ctx->pc = 0x166424u;
    {
        const bool branch_taken_0x166424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166424u;
        // 0x166428: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166424) {
            ctx->pc = 0x166444u;
            goto label_166444;
        }
    }
    ctx->pc = 0x16642Cu;
label_16642c:
    // 0x16642c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x16642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_166430:
    // 0x166430: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_166434:
    // 0x166434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x166434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166438:
    // 0x166438: 0x0  nop
    ctx->pc = 0x166438u;
    // NOP
label_16643c:
    // 0x16643c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16643cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_166440:
    // 0x166440: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x166440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_166444:
    // 0x166444: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_166448:
    if (ctx->pc == 0x166448u) {
        ctx->pc = 0x166448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166444u;
        // 0x166448: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16644Cu;
        goto label_16644c;
    }
    ctx->pc = 0x166444u;
    {
        const bool branch_taken_0x166444 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x166448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166444u;
        // 0x166448: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166444) {
            ctx->pc = 0x166458u;
            goto label_166458;
        }
    }
    ctx->pc = 0x16644Cu;
label_16644c:
    // 0x16644c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16644cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166450:
    // 0x166450: 0x10000007  b           . + 4 + (0x7 << 2)
label_166454:
    if (ctx->pc == 0x166454u) {
        ctx->pc = 0x166454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166450u;
        // 0x166454: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166458u;
        goto label_166458;
    }
    ctx->pc = 0x166450u;
    {
        const bool branch_taken_0x166450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166450u;
        // 0x166454: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166450) {
            ctx->pc = 0x166470u;
            goto label_166470;
        }
    }
    ctx->pc = 0x166458u;
label_166458:
    // 0x166458: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x166458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_16645c:
    // 0x16645c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16645cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_166460:
    // 0x166460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x166460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166464:
    // 0x166464: 0x0  nop
    ctx->pc = 0x166464u;
    // NOP
label_166468:
    // 0x166468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16646c:
    // 0x16646c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16646cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_166470:
    // 0x166470: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x166470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_166474:
    // 0x166474: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x166474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166478:
    // 0x166478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x166478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16647c:
    // 0x16647c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x16647cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_166480:
    // 0x166480: 0x96640050  lhu         $a0, 0x50($s3)
    ctx->pc = 0x166480u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_166484:
    // 0x166484: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_166488:
    if (ctx->pc == 0x166488u) {
        ctx->pc = 0x166488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166484u;
        // 0x166488: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16648Cu;
        goto label_16648c;
    }
    ctx->pc = 0x166484u;
    {
        const bool branch_taken_0x166484 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x166488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166484u;
        // 0x166488: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166484) {
            ctx->pc = 0x166498u;
            goto label_166498;
        }
    }
    ctx->pc = 0x16648Cu;
label_16648c:
    // 0x16648c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16648cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166490:
    // 0x166490: 0x10000007  b           . + 4 + (0x7 << 2)
label_166494:
    if (ctx->pc == 0x166494u) {
        ctx->pc = 0x166494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166490u;
        // 0x166494: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166498u;
        goto label_166498;
    }
    ctx->pc = 0x166490u;
    {
        const bool branch_taken_0x166490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166490u;
        // 0x166494: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166490) {
            ctx->pc = 0x1664B0u;
            goto label_1664b0;
        }
    }
    ctx->pc = 0x166498u;
label_166498:
    // 0x166498: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x166498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_16649c:
    // 0x16649c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1664a0:
    // 0x1664a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1664a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1664a4:
    // 0x1664a4: 0x0  nop
    ctx->pc = 0x1664a4u;
    // NOP
label_1664a8:
    // 0x1664a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1664a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1664ac:
    // 0x1664ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1664acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1664b0:
    // 0x1664b0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_1664b4:
    if (ctx->pc == 0x1664B4u) {
        ctx->pc = 0x1664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664B0u;
        // 0x1664b4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664B8u;
        goto label_1664b8;
    }
    ctx->pc = 0x1664B0u;
    {
        const bool branch_taken_0x1664b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664B0u;
        // 0x1664b4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664b0) {
            ctx->pc = 0x1664C4u;
            goto label_1664c4;
        }
    }
    ctx->pc = 0x1664B8u;
label_1664b8:
    // 0x1664b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1664b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1664bc:
    // 0x1664bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1664c0:
    if (ctx->pc == 0x1664C0u) {
        ctx->pc = 0x1664C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664BCu;
        // 0x1664c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664C4u;
        goto label_1664c4;
    }
    ctx->pc = 0x1664BCu;
    {
        const bool branch_taken_0x1664bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664BCu;
        // 0x1664c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664bc) {
            ctx->pc = 0x1664DCu;
            goto label_1664dc;
        }
    }
    ctx->pc = 0x1664C4u;
label_1664c4:
    // 0x1664c4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1664c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1664c8:
    // 0x1664c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1664c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1664cc:
    // 0x1664cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1664ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1664d0:
    // 0x1664d0: 0x0  nop
    ctx->pc = 0x1664d0u;
    // NOP
label_1664d4:
    // 0x1664d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1664d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1664d8:
    // 0x1664d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1664d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1664dc:
    // 0x1664dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1664dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1664e0:
    // 0x1664e0: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x1664e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1664e4:
    // 0x1664e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1664e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1664e8:
    // 0x1664e8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1664e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1664ec:
    // 0x1664ec: 0x0  nop
    ctx->pc = 0x1664ecu;
    // NOP
label_1664f0:
    // 0x1664f0: 0x45010167  bc1t        . + 4 + (0x167 << 2)
label_1664f4:
    if (ctx->pc == 0x1664F4u) {
        ctx->pc = 0x1664F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664F0u;
        // 0x1664f4: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664F8u;
        goto label_1664f8;
    }
    ctx->pc = 0x1664F0u;
    {
        const bool branch_taken_0x1664f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1664F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664F0u;
        // 0x1664f4: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664f0) {
            ctx->pc = 0x166A90u;
            { ctx->pc = 0x166a90; return; }
        }
    }
    ctx->pc = 0x1664F8u;
label_1664f8:
    // 0x1664f8: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x1664f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_1664fc:
    // 0x1664fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1664fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166500:
    // 0x166500: 0x0  nop
    ctx->pc = 0x166500u;
    // NOP
label_166504:
    // 0x166504: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x166504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166508:
    // 0x166508: 0x0  nop
    ctx->pc = 0x166508u;
    // NOP
label_16650c:
    // 0x16650c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_166510:
    if (ctx->pc == 0x166510u) {
        ctx->pc = 0x166510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16650Cu;
        // 0x166510: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166514u;
        goto label_166514;
    }
    ctx->pc = 0x16650Cu;
    {
        const bool branch_taken_0x16650c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16650Cu;
        // 0x166510: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16650c) {
            ctx->pc = 0x166580u;
            goto label_166580;
        }
    }
    ctx->pc = 0x166514u;
label_166514:
    // 0x166514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166518:
    // 0x166518: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x166518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_16651c:
    // 0x16651c: 0xc07586c  jal         func_1D61B0
label_166520:
    if (ctx->pc == 0x166520u) {
        ctx->pc = 0x166520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16651Cu;
        // 0x166520: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166524u;
        goto label_166524;
    }
    ctx->pc = 0x16651Cu;
    SET_GPR_U32(ctx, 31, 0x166524u);
    ctx->pc = 0x166520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16651Cu;
    // 0x166520: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x166524u;
label_166524:
    // 0x166524: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x166524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166528:
    // 0x166528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16652c:
    // 0x16652c: 0x278486a8  addiu       $a0, $gp, -0x7958
    ctx->pc = 0x16652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936232));
label_166530:
    // 0x166530: 0x0  nop
    ctx->pc = 0x166530u;
    // NOP
label_166534:
    // 0x166534: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x166534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_166538:
    // 0x166538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16653c:
    // 0x16653c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_166540:
    if (ctx->pc == 0x166540u) {
        ctx->pc = 0x166540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16653Cu;
        // 0x166540: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166544u;
        goto label_166544;
    }
    ctx->pc = 0x16653Cu;
    {
        const bool branch_taken_0x16653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16653Cu;
        // 0x166540: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16653c) {
            ctx->pc = 0x166558u;
            goto label_166558;
        }
    }
    ctx->pc = 0x166544u;
label_166544:
    // 0x166544: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x166544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_166548:
    // 0x166548: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x166548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_16654c:
    // 0x16654c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16654cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166550:
    // 0x166550: 0x10000006  b           . + 4 + (0x6 << 2)
label_166554:
    if (ctx->pc == 0x166554u) {
        ctx->pc = 0x166554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166550u;
        // 0x166554: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166558u;
        goto label_166558;
    }
    ctx->pc = 0x166550u;
    {
        const bool branch_taken_0x166550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166550u;
        // 0x166554: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166550) {
            ctx->pc = 0x16656Cu;
            goto label_16656c;
        }
    }
    ctx->pc = 0x166558u;
label_166558:
    // 0x166558: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x166558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16655c:
    // 0x16655c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x16655cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_166560:
    // 0x166560: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_166564:
    if (ctx->pc == 0x166564u) {
        ctx->pc = 0x166564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166560u;
        // 0x166564: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166568u;
        goto label_166568;
    }
    ctx->pc = 0x166560u;
    {
        const bool branch_taken_0x166560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166560u;
        // 0x166564: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166560) {
            ctx->pc = 0x166530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166530;
        }
    }
    ctx->pc = 0x166568u;
label_166568:
    // 0x166568: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16656c:
    // 0x16656c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_166570:
    if (ctx->pc == 0x166570u) {
        ctx->pc = 0x166570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16656Cu;
        // 0x166570: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166574u;
        goto label_166574;
    }
    ctx->pc = 0x16656Cu;
    {
        const bool branch_taken_0x16656c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16656Cu;
        // 0x166570: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16656c) {
            ctx->pc = 0x166580u;
            goto label_166580;
        }
    }
    ctx->pc = 0x166574u;
label_166574:
    // 0x166574: 0x8c246238  lw          $a0, 0x6238($at)
    ctx->pc = 0x166574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25144)));
label_166578:
    // 0x166578: 0xc05ac40  jal         func_16B100
label_16657c:
    if (ctx->pc == 0x16657Cu) {
        ctx->pc = 0x16657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166578u;
        // 0x16657c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166580u;
        goto label_166580;
    }
    ctx->pc = 0x166578u;
    SET_GPR_U32(ctx, 31, 0x166580u);
    ctx->pc = 0x16657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166578u;
    // 0x16657c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    { ctx->pc = 0x16b100; return; }
    ctx->pc = 0x166580u;
label_166580:
    // 0x166580: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_166584:
    // 0x166584: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x166584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_166588:
    // 0x166588: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_16658c:
    if (ctx->pc == 0x16658Cu) {
        ctx->pc = 0x16658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166588u;
        // 0x16658c: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166590u;
        goto label_166590;
    }
    ctx->pc = 0x166588u;
    {
        const bool branch_taken_0x166588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166588u;
        // 0x16658c: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166588) {
            ctx->pc = 0x166618u;
            goto label_166618;
        }
    }
    ctx->pc = 0x166590u;
label_166590:
    // 0x166590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166594:
    // 0x166594: 0x0  nop
    ctx->pc = 0x166594u;
    // NOP
label_166598:
    // 0x166598: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x166598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16659c:
    // 0x16659c: 0x0  nop
    ctx->pc = 0x16659cu;
    // NOP
label_1665a0:
    // 0x1665a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1665a4:
    if (ctx->pc == 0x1665A4u) {
        ctx->pc = 0x1665A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665A0u;
        // 0x1665a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665A8u;
        goto label_1665a8;
    }
    ctx->pc = 0x1665A0u;
    {
        const bool branch_taken_0x1665a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1665A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665A0u;
        // 0x1665a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665a0) {
            ctx->pc = 0x1665C0u;
            goto label_1665c0;
        }
    }
    ctx->pc = 0x1665A8u;
label_1665a8:
    // 0x1665a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1665ac:
    // 0x1665ac: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1665acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1665b0:
    // 0x1665b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1665b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1665b4:
    // 0x1665b4: 0xc07586c  jal         func_1D61B0
label_1665b8:
    if (ctx->pc == 0x1665B8u) {
        ctx->pc = 0x1665B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665B4u;
        // 0x1665b8: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665BCu;
        goto label_1665bc;
    }
    ctx->pc = 0x1665B4u;
    SET_GPR_U32(ctx, 31, 0x1665BCu);
    ctx->pc = 0x1665B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665B4u;
    // 0x1665b8: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x1665BCu;
label_1665bc:
    // 0x1665bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1665bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1665c0:
    // 0x1665c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1665c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1665c4:
    // 0x1665c4: 0x278486a8  addiu       $a0, $gp, -0x7958
    ctx->pc = 0x1665c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936232));
label_1665c8:
    // 0x1665c8: 0x0  nop
    ctx->pc = 0x1665c8u;
    // NOP
label_1665cc:
    // 0x1665cc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1665ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1665d0:
    // 0x1665d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1665d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1665d4:
    // 0x1665d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1665d8:
    if (ctx->pc == 0x1665D8u) {
        ctx->pc = 0x1665D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665D4u;
        // 0x1665d8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665DCu;
        goto label_1665dc;
    }
    ctx->pc = 0x1665D4u;
    {
        const bool branch_taken_0x1665d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1665D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665D4u;
        // 0x1665d8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665d4) {
            ctx->pc = 0x1665F0u;
            goto label_1665f0;
        }
    }
    ctx->pc = 0x1665DCu;
label_1665dc:
    // 0x1665dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1665e0:
    // 0x1665e0: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x1665e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1665e4:
    // 0x1665e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1665e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1665e8:
    // 0x1665e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1665ec:
    if (ctx->pc == 0x1665ECu) {
        ctx->pc = 0x1665ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665E8u;
        // 0x1665ec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665F0u;
        goto label_1665f0;
    }
    ctx->pc = 0x1665E8u;
    {
        const bool branch_taken_0x1665e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665E8u;
        // 0x1665ec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665e8) {
            ctx->pc = 0x166604u;
            goto label_166604;
        }
    }
    ctx->pc = 0x1665F0u;
label_1665f0:
    // 0x1665f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1665f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1665f4:
    // 0x1665f4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1665f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1665f8:
    // 0x1665f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1665fc:
    if (ctx->pc == 0x1665FCu) {
        ctx->pc = 0x1665FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665F8u;
        // 0x1665fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166600u;
        goto label_166600;
    }
    ctx->pc = 0x1665F8u;
    {
        const bool branch_taken_0x1665f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1665FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665F8u;
        // 0x1665fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665f8) {
            ctx->pc = 0x1665C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1665c8;
        }
    }
    ctx->pc = 0x166600u;
label_166600:
    // 0x166600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166604:
    // 0x166604: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_166608:
    if (ctx->pc == 0x166608u) {
        ctx->pc = 0x166608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166604u;
        // 0x166608: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16660Cu;
        goto label_16660c;
    }
    ctx->pc = 0x166604u;
    {
        const bool branch_taken_0x166604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166604u;
        // 0x166608: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166604) {
            ctx->pc = 0x166618u;
            goto label_166618;
        }
    }
    ctx->pc = 0x16660Cu;
label_16660c:
    // 0x16660c: 0x8c246238  lw          $a0, 0x6238($at)
    ctx->pc = 0x16660cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25144)));
label_166610:
    // 0x166610: 0xc05ac40  jal         func_16B100
label_166614:
    if (ctx->pc == 0x166614u) {
        ctx->pc = 0x166614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166610u;
        // 0x166614: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166618u;
        goto label_166618;
    }
    ctx->pc = 0x166610u;
    SET_GPR_U32(ctx, 31, 0x166618u);
    ctx->pc = 0x166614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166610u;
    // 0x166614: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    { ctx->pc = 0x16b100; return; }
    ctx->pc = 0x166618u;
label_166618:
    // 0x166618: 0x96620052  lhu         $v0, 0x52($s3)
    ctx->pc = 0x166618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_16661c:
    // 0x16661c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166620:
    // 0x166620: 0xa6620052  sh          $v0, 0x52($s3)
    ctx->pc = 0x166620u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
label_166624:
    // 0x166624: 0x1000011a  b           . + 4 + (0x11A << 2)
label_166628:
    if (ctx->pc == 0x166628u) {
        ctx->pc = 0x166628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166624u;
        // 0x166628: 0xa6600050  sh          $zero, 0x50($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16662Cu;
        goto label_16662c;
    }
    ctx->pc = 0x166624u;
    {
        const bool branch_taken_0x166624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166624u;
        // 0x166628: 0xa6600050  sh          $zero, 0x50($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166624) {
            ctx->pc = 0x166A90u;
            { ctx->pc = 0x166a90; return; }
        }
    }
    ctx->pc = 0x16662Cu;
label_16662c:
    // 0x16662c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_166630:
    // 0x166630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x166630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166634:
    // 0x166634: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x166634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_166638:
    // 0x166638: 0xc043274  jal         func_10C9D0
label_16663c:
    if (ctx->pc == 0x16663Cu) {
        ctx->pc = 0x16663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166638u;
        // 0x16663c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166640u;
        goto label_166640;
    }
    ctx->pc = 0x166638u;
    SET_GPR_U32(ctx, 31, 0x166640u);
    ctx->pc = 0x16663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166638u;
    // 0x16663c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x166638u, 0x166640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166640u;
label_166640:
    // 0x166640: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_166644:
    if (ctx->pc == 0x166644u) {
        ctx->pc = 0x166648u;
        goto label_166648;
    }
    ctx->pc = 0x166640u;
    {
        const bool branch_taken_0x166640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166640) {
            ctx->pc = 0x166728u;
            goto label_166728;
        }
    }
    ctx->pc = 0x166648u;
label_166648:
    // 0x166648: 0x96620050  lhu         $v0, 0x50($s3)
    ctx->pc = 0x166648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_16664c:
    // 0x16664c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_166650:
    // 0x166650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166654:
    // 0x166654: 0xc066e44  jal         func_19B910
label_166658:
    if (ctx->pc == 0x166658u) {
        ctx->pc = 0x166658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166654u;
        // 0x166658: 0xa6620050  sh          $v0, 0x50($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16665Cu;
        goto label_16665c;
    }
    ctx->pc = 0x166654u;
    SET_GPR_U32(ctx, 31, 0x16665Cu);
    ctx->pc = 0x166658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166654u;
    // 0x166658: 0xa6620050  sh          $v0, 0x50($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x16665Cu;
label_16665c:
    // 0x16665c: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x16665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_166660:
    // 0x166660: 0xc06d51e  jal         func_1B5478
label_166664:
    if (ctx->pc == 0x166664u) {
        ctx->pc = 0x166664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166660u;
        // 0x166664: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166668u;
        goto label_166668;
    }
    ctx->pc = 0x166660u;
    SET_GPR_U32(ctx, 31, 0x166668u);
    ctx->pc = 0x166664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166660u;
    // 0x166664: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x166668u;
label_166668:
    // 0x166668: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x166668u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16666c:
    // 0x16666c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16666cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_166670:
    // 0x166670: 0x4600bb07  neg.s       $f12, $f23
    ctx->pc = 0x166670u;
    ctx->f[12] = FPU_NEG_S(ctx->f[23]);
label_166674:
    // 0x166674: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_166678:
    // 0x166678: 0xc066ec0  jal         func_19BB00
label_16667c:
    if (ctx->pc == 0x16667Cu) {
        ctx->pc = 0x16667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166678u;
        // 0x16667c: 0xe60c0054  swc1        $f12, 0x54($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166680u;
        goto label_166680;
    }
    ctx->pc = 0x166678u;
    SET_GPR_U32(ctx, 31, 0x166680u);
    ctx->pc = 0x16667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166678u;
    // 0x16667c: 0xe60c0054  swc1        $f12, 0x54($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x166680u;
label_166680:
    // 0x166680: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x166680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_166684:
    // 0x166684: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x166684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_166688:
    // 0x166688: 0xc066d7a  jal         func_19B5E8
label_16668c:
    if (ctx->pc == 0x16668Cu) {
        ctx->pc = 0x16668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166688u;
        // 0x16668c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166690u;
        goto label_166690;
    }
    ctx->pc = 0x166688u;
    SET_GPR_U32(ctx, 31, 0x166690u);
    ctx->pc = 0x16668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166688u;
    // 0x16668c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x166690u;
label_166690:
    // 0x166690: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x166690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_166694:
    // 0x166694: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x166694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_166698:
    // 0x166698: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x166698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16669c:
    // 0x16669c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16669cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1666a0:
    // 0x1666a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1666a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1666a4:
    // 0x1666a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1666a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1666a8:
    // 0x1666a8: 0x0  nop
    ctx->pc = 0x1666a8u;
    // NOP
label_1666ac:
    // 0x1666ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1666acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1666b0:
    // 0x1666b0: 0x46001840  add.s       $f1, $f3, $f0
    ctx->pc = 0x1666b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1666b4:
    // 0x1666b4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1666b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1666b8:
    // 0x1666b8: 0x0  nop
    ctx->pc = 0x1666b8u;
    // NOP
label_1666bc:
    // 0x1666bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1666c0:
    if (ctx->pc == 0x1666C0u) {
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666C4u;
        goto label_1666c4;
    }
    ctx->pc = 0x1666BCu;
    {
        const bool branch_taken_0x1666bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666bc) {
            ctx->pc = 0x1666CCu;
            goto label_1666cc;
        }
    }
    ctx->pc = 0x1666C4u;
label_1666c4:
    // 0x1666c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1666c8:
    if (ctx->pc == 0x1666C8u) {
        ctx->pc = 0x1666C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666C4u;
        // 0x1666c8: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666CCu;
        goto label_1666cc;
    }
    ctx->pc = 0x1666C4u;
    {
        const bool branch_taken_0x1666c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666C4u;
        // 0x1666c8: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666c4) {
            ctx->pc = 0x1666F0u;
            goto label_1666f0;
        }
    }
    ctx->pc = 0x1666CCu;
label_1666cc:
    // 0x1666cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1666ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1666d0:
    // 0x1666d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1666d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1666d4:
    // 0x1666d4: 0x0  nop
    ctx->pc = 0x1666d4u;
    // NOP
label_1666d8:
    // 0x1666d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1666d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1666dc:
    // 0x1666dc: 0x0  nop
    ctx->pc = 0x1666dcu;
    // NOP
label_1666e0:
    // 0x1666e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1666e4:
    if (ctx->pc == 0x1666E4u) {
        ctx->pc = 0x1666E8u;
        goto label_1666e8;
    }
    ctx->pc = 0x1666E0u;
    {
        const bool branch_taken_0x1666e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1666e0) {
            ctx->pc = 0x1666F0u;
            goto label_1666f0;
        }
    }
    ctx->pc = 0x1666E8u;
label_1666e8:
    // 0x1666e8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1666ec:
    if (ctx->pc == 0x1666ECu) {
        ctx->pc = 0x1666ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666E8u;
        // 0x1666ec: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666F0u;
        goto label_1666f0;
    }
    ctx->pc = 0x1666E8u;
    {
        const bool branch_taken_0x1666e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666E8u;
        // 0x1666ec: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666e8) {
            ctx->pc = 0x1666F0u;
            goto label_1666f0;
        }
    }
    ctx->pc = 0x1666F0u;
label_1666f0:
    // 0x1666f0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1666f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1666f4:
    // 0x1666f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1666f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1666f8:
    // 0x1666f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1666f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1666fc:
    // 0x1666fc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1666fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_166700:
    // 0x166700: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166704:
    // 0x166704: 0xc066ec0  jal         func_19BB00
label_166708:
    if (ctx->pc == 0x166708u) {
        ctx->pc = 0x166708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166704u;
        // 0x166708: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16670Cu;
        goto label_16670c;
    }
    ctx->pc = 0x166704u;
    SET_GPR_U32(ctx, 31, 0x16670Cu);
    ctx->pc = 0x166708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166704u;
    // 0x166708: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x16670Cu;
label_16670c:
    // 0x16670c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x16670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_166710:
    // 0x166710: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x166710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_166714:
    // 0x166714: 0xc066d7a  jal         func_19B5E8
label_166718:
    if (ctx->pc == 0x166718u) {
        ctx->pc = 0x166718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166714u;
        // 0x166718: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16671Cu;
        goto label_16671c;
    }
    ctx->pc = 0x166714u;
    SET_GPR_U32(ctx, 31, 0x16671Cu);
    ctx->pc = 0x166718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166714u;
    // 0x166718: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x16671Cu;
label_16671c:
    // 0x16671c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x16671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_166720:
    // 0x166720: 0xc066daa  jal         func_19B6A8
label_166724:
    if (ctx->pc == 0x166724u) {
        ctx->pc = 0x166724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166720u;
        // 0x166724: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166728u;
        goto label_166728;
    }
    ctx->pc = 0x166720u;
    SET_GPR_U32(ctx, 31, 0x166728u);
    ctx->pc = 0x166724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166720u;
    // 0x166724: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x166728u;
label_166728:
    // 0x166728: 0x96620050  lhu         $v0, 0x50($s3)
    ctx->pc = 0x166728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_16672c:
    // 0x16672c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x16672cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_166730:
    // 0x166730: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
label_166734:
    if (ctx->pc == 0x166734u) {
        ctx->pc = 0x166734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166730u;
        // 0x166734: 0x3c034316  lui         $v1, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166738u;
        goto label_166738;
    }
    ctx->pc = 0x166730u;
    {
        const bool branch_taken_0x166730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166730u;
        // 0x166734: 0x3c034316  lui         $v1, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166730) {
            ctx->pc = 0x16694Cu;
            goto label_16694c;
        }
    }
    ctx->pc = 0x166738u;
label_166738:
    // 0x166738: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x166738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_16673c:
    // 0x16673c: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x16673cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_166740:
    // 0x166740: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x166740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_166744:
    // 0x166744: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x166744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_166748:
    // 0x166748: 0x96220056  lhu         $v0, 0x56($s1)
    ctx->pc = 0x166748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_16674c:
    // 0x16674c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x16674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_166750:
    // 0x166750: 0xa6220056  sh          $v0, 0x56($s1)
    ctx->pc = 0x166750u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 2));
label_166754:
    // 0x166754: 0x8c23bd74  lw          $v1, -0x428C($at)
    ctx->pc = 0x166754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950260)));
label_166758:
    // 0x166758: 0x938486b5  lbu         $a0, -0x794B($gp)
    ctx->pc = 0x166758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936245)));
label_16675c:
    // 0x16675c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x16675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_166760:
    // 0x166760: 0x8c228934  lw          $v0, -0x76CC($at)
    ctx->pc = 0x166760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936884)));
label_166764:
    // 0x166764: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x166764u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_166768:
    // 0x166768: 0x0  nop
    ctx->pc = 0x166768u;
    // NOP
label_16676c:
    // 0x16676c: 0x0  nop
    ctx->pc = 0x16676cu;
    // NOP
label_166770:
    // 0x166770: 0x1812  mflo        $v1
    ctx->pc = 0x166770u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_166774:
    // 0x166774: 0x1000000c  b           . + 4 + (0xC << 2)
label_166778:
    if (ctx->pc == 0x166778u) {
        ctx->pc = 0x166778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166774u;
        // 0x166778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16677Cu;
        goto label_16677c;
    }
    ctx->pc = 0x166774u;
    {
        const bool branch_taken_0x166774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166774u;
        // 0x166778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166774) {
            ctx->pc = 0x1667A8u;
            goto label_1667a8;
        }
    }
    ctx->pc = 0x16677Cu;
label_16677c:
    // 0x16677c: 0xc41007  srav        $v0, $a0, $a2
    ctx->pc = 0x16677cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_166780:
    // 0x166780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_166784:
    // 0x166784: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_166788:
    if (ctx->pc == 0x166788u) {
        ctx->pc = 0x166788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166784u;
        // 0x166788: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16678Cu;
        goto label_16678c;
    }
    ctx->pc = 0x166784u;
    {
        const bool branch_taken_0x166784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166784u;
        // 0x166788: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166784) {
            ctx->pc = 0x1667A4u;
            goto label_1667a4;
        }
    }
    ctx->pc = 0x16678Cu;
label_16678c:
    // 0x16678c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166790:
    // 0x166790: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_166794:
    // 0x166794: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x166794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_166798:
    // 0x166798: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x166798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_16679c:
    // 0x16679c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1667a0:
    if (ctx->pc == 0x1667A0u) {
        ctx->pc = 0x1667A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16679Cu;
        // 0x1667a0: 0xa38286b5  sb          $v0, -0x794B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936245), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667A4u;
        goto label_1667a4;
    }
    ctx->pc = 0x16679Cu;
    {
        const bool branch_taken_0x16679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16679Cu;
        // 0x1667a0: 0xa38286b5  sb          $v0, -0x794B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936245), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16679c) {
            ctx->pc = 0x1667BCu;
            goto label_1667bc;
        }
    }
    ctx->pc = 0x1667A4u;
label_1667a4:
    // 0x1667a4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1667a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1667a8:
    // 0x1667a8: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1667a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1667ac:
    // 0x1667ac: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1667acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1667b0:
    // 0x1667b0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1667b4:
    if (ctx->pc == 0x1667B4u) {
        ctx->pc = 0x1667B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667B0u;
        // 0x1667b4: 0x3246000f  andi        $a2, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667B8u;
        goto label_1667b8;
    }
    ctx->pc = 0x1667B0u;
    {
        const bool branch_taken_0x1667b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1667B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667B0u;
        // 0x1667b4: 0x3246000f  andi        $a2, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667b0) {
            ctx->pc = 0x16677Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16677c;
        }
    }
    ctx->pc = 0x1667B8u;
label_1667b8:
    // 0x1667b8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1667b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1667bc:
    // 0x1667bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1667bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1667c0:
    // 0x1667c0: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
label_1667c4:
    if (ctx->pc == 0x1667C4u) {
        ctx->pc = 0x1667C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667C0u;
        // 0x1667c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667C8u;
        goto label_1667c8;
    }
    ctx->pc = 0x1667C0u;
    {
        const bool branch_taken_0x1667c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1667C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667C0u;
        // 0x1667c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667c0) {
            ctx->pc = 0x1667E8u;
            goto label_1667e8;
        }
    }
    ctx->pc = 0x1667C8u;
label_1667c8:
    // 0x1667c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1667c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1667cc:
    // 0x1667cc: 0xc059744  jal         func_165D10
label_1667d0:
    if (ctx->pc == 0x1667D0u) {
        ctx->pc = 0x1667D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667CCu;
        // 0x1667d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667D4u;
        goto label_1667d4;
    }
    ctx->pc = 0x1667CCu;
    SET_GPR_U32(ctx, 31, 0x1667D4u);
    ctx->pc = 0x1667D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667CCu;
    // 0x1667d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D10u;
    { ctx->pc = 0x165d10; return; }
    ctx->pc = 0x1667D4u;
label_1667d4:
    // 0x1667d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1667d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1667d8:
    // 0x1667d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1667d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1667dc:
    // 0x1667dc: 0xc05967c  jal         func_1659F0
label_1667e0:
    if (ctx->pc == 0x1667E0u) {
        ctx->pc = 0x1667E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667DCu;
        // 0x1667e0: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667E4u;
        goto label_1667e4;
    }
    ctx->pc = 0x1667DCu;
    SET_GPR_U32(ctx, 31, 0x1667E4u);
    ctx->pc = 0x1667E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667DCu;
    // 0x1667e0: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    { ctx->pc = 0x1659f0; return; }
    ctx->pc = 0x1667E4u;
label_1667e4:
    // 0x1667e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1667e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1667e8:
    // 0x1667e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1667e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1667ec:
    // 0x1667ec: 0x278486a8  addiu       $a0, $gp, -0x7958
    ctx->pc = 0x1667ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936232));
label_1667f0:
    // 0x1667f0: 0x0  nop
    ctx->pc = 0x1667f0u;
    // NOP
label_1667f4:
    // 0x1667f4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1667f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1667f8:
    // 0x1667f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1667f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1667fc:
    // 0x1667fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_166800:
    if (ctx->pc == 0x166800u) {
        ctx->pc = 0x166800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667FCu;
        // 0x166800: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166804u;
        goto label_166804;
    }
    ctx->pc = 0x1667FCu;
    {
        const bool branch_taken_0x1667fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667FCu;
        // 0x166800: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667fc) {
            ctx->pc = 0x166818u;
            goto label_166818;
        }
    }
    ctx->pc = 0x166804u;
label_166804:
    // 0x166804: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x166804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_166808:
    // 0x166808: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x166808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_16680c:
    // 0x16680c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166810:
    // 0x166810: 0x10000006  b           . + 4 + (0x6 << 2)
label_166814:
    if (ctx->pc == 0x166814u) {
        ctx->pc = 0x166814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166810u;
        // 0x166814: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166818u;
        goto label_166818;
    }
    ctx->pc = 0x166810u;
    {
        const bool branch_taken_0x166810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166810u;
        // 0x166814: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166810) {
            ctx->pc = 0x16682Cu;
            goto label_16682c;
        }
    }
    ctx->pc = 0x166818u;
label_166818:
    // 0x166818: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x166818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16681c:
    // 0x16681c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x16681cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_166820:
    // 0x166820: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_166824:
    if (ctx->pc == 0x166824u) {
        ctx->pc = 0x166824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166820u;
        // 0x166824: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166828u;
        goto label_166828;
    }
    ctx->pc = 0x166820u;
    {
        const bool branch_taken_0x166820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166820u;
        // 0x166824: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166820) {
            ctx->pc = 0x1667F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1667f0;
        }
    }
    ctx->pc = 0x166828u;
label_166828:
    // 0x166828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16682c:
    // 0x16682c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_166830:
    if (ctx->pc == 0x166830u) {
        ctx->pc = 0x166830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16682Cu;
        // 0x166830: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166834u;
        goto label_166834;
    }
    ctx->pc = 0x16682Cu;
    {
        const bool branch_taken_0x16682c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16682Cu;
        // 0x166830: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16682c) {
            ctx->pc = 0x166848u;
            goto label_166848;
        }
    }
    ctx->pc = 0x166834u;
label_166834:
    // 0x166834: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x166834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_166838:
    // 0x166838: 0x8c246244  lw          $a0, 0x6244($at)
    ctx->pc = 0x166838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25156)));
label_16683c:
    // 0x16683c: 0xc05ac40  jal         func_16B100
label_166840:
    if (ctx->pc == 0x166840u) {
        ctx->pc = 0x166840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16683Cu;
        // 0x166840: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166844u;
        goto label_166844;
    }
    ctx->pc = 0x16683Cu;
    SET_GPR_U32(ctx, 31, 0x166844u);
    ctx->pc = 0x166840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16683Cu;
    // 0x166840: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    { ctx->pc = 0x16b100; return; }
    ctx->pc = 0x166844u;
label_166844:
    // 0x166844: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x166844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_166848:
    // 0x166848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16684c:
    // 0x16684c: 0x0  nop
    ctx->pc = 0x16684cu;
    // NOP
label_166850:
    // 0x166850: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x166850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166854:
    // 0x166854: 0x0  nop
    ctx->pc = 0x166854u;
    // NOP
label_166858:
    // 0x166858: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16685c:
    if (ctx->pc == 0x16685Cu) {
        ctx->pc = 0x16685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166858u;
        // 0x16685c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166860u;
        goto label_166860;
    }
    ctx->pc = 0x166858u;
    {
        const bool branch_taken_0x166858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166858u;
        // 0x16685c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166858) {
            ctx->pc = 0x166870u;
            goto label_166870;
        }
    }
    ctx->pc = 0x166860u;
label_166860:
    // 0x166860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166864:
    // 0x166864: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x166864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_166868:
    // 0x166868: 0xc07586c  jal         func_1D61B0
label_16686c:
    if (ctx->pc == 0x16686Cu) {
        ctx->pc = 0x16686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166868u;
        // 0x16686c: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166870u;
        goto label_166870;
    }
    ctx->pc = 0x166868u;
    SET_GPR_U32(ctx, 31, 0x166870u);
    ctx->pc = 0x16686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166868u;
    // 0x16686c: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x166870u;
label_166870:
    // 0x166870: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x166870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_166874:
    // 0x166874: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x166874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_166878:
    // 0x166878: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16687c:
    if (ctx->pc == 0x16687Cu) {
        ctx->pc = 0x16687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166878u;
        // 0x16687c: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166880u;
        goto label_166880;
    }
    ctx->pc = 0x166878u;
    {
        const bool branch_taken_0x166878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166878u;
        // 0x16687c: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166878) {
            ctx->pc = 0x1668A8u;
            goto label_1668a8;
        }
    }
    ctx->pc = 0x166880u;
label_166880:
    // 0x166880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166884:
    // 0x166884: 0x0  nop
    ctx->pc = 0x166884u;
    // NOP
label_166888:
    // 0x166888: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x166888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16688c:
    // 0x16688c: 0x0  nop
    ctx->pc = 0x16688cu;
    // NOP
label_166890:
    // 0x166890: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_166894:
    if (ctx->pc == 0x166894u) {
        ctx->pc = 0x166894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166890u;
        // 0x166894: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166898u;
        goto label_166898;
    }
    ctx->pc = 0x166890u;
    {
        const bool branch_taken_0x166890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166890u;
        // 0x166894: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166890) {
            ctx->pc = 0x1668A8u;
            goto label_1668a8;
        }
    }
    ctx->pc = 0x166898u;
label_166898:
    // 0x166898: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x166898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_16689c:
    // 0x16689c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1668a0:
    // 0x1668a0: 0xc07586c  jal         func_1D61B0
label_1668a4:
    if (ctx->pc == 0x1668A4u) {
        ctx->pc = 0x1668A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668A0u;
        // 0x1668a4: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668A8u;
        goto label_1668a8;
    }
    ctx->pc = 0x1668A0u;
    SET_GPR_U32(ctx, 31, 0x1668A8u);
    ctx->pc = 0x1668A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668A0u;
    // 0x1668a4: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x1668A8u;
label_1668a8:
    // 0x1668a8: 0x9263004c  lbu         $v1, 0x4C($s3)
    ctx->pc = 0x1668a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_1668ac:
    // 0x1668ac: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x1668acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_1668b0:
    // 0x1668b0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1668b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_1668b4:
    // 0x1668b4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x1668b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1668b8:
    // 0x1668b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1668b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1668bc:
    // 0x1668bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1668c0:
    if (ctx->pc == 0x1668C0u) {
        ctx->pc = 0x1668C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668BCu;
        // 0x1668c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668C4u;
        goto label_1668c4;
    }
    ctx->pc = 0x1668BCu;
    {
        const bool branch_taken_0x1668bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1668C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668BCu;
        // 0x1668c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668bc) {
            ctx->pc = 0x1668CCu;
            goto label_1668cc;
        }
    }
    ctx->pc = 0x1668C4u;
label_1668c4:
    // 0x1668c4: 0x10000087  b           . + 4 + (0x87 << 2)
label_1668c8:
    if (ctx->pc == 0x1668C8u) {
        ctx->pc = 0x1668C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668C4u;
        // 0x1668c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668CCu;
        goto label_1668cc;
    }
    ctx->pc = 0x1668C4u;
    {
        const bool branch_taken_0x1668c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668C4u;
        // 0x1668c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668c4) {
            ctx->pc = 0x166AE4u;
            { ctx->pc = 0x166ae4; return; }
        }
    }
    ctx->pc = 0x1668CCu;
label_1668cc:
    // 0x1668cc: 0xa6600050  sh          $zero, 0x50($s3)
    ctx->pc = 0x1668ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
label_1668d0:
    // 0x1668d0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1668d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1668d4:
    // 0x1668d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1668d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1668d8:
    // 0x1668d8: 0xc066e26  jal         func_19B898
label_1668dc:
    if (ctx->pc == 0x1668DCu) {
        ctx->pc = 0x1668DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668D8u;
        // 0x1668dc: 0xa6600052  sh          $zero, 0x52($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668E0u;
        goto label_1668e0;
    }
    ctx->pc = 0x1668D8u;
    SET_GPR_U32(ctx, 31, 0x1668E0u);
    ctx->pc = 0x1668DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668D8u;
    // 0x1668dc: 0xa6600052  sh          $zero, 0x52($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1668E0u;
label_1668e0:
    // 0x1668e0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1668e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1668e4:
    // 0x1668e4: 0xc066e26  jal         func_19B898
label_1668e8:
    if (ctx->pc == 0x1668E8u) {
        ctx->pc = 0x1668E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668E4u;
        // 0x1668e8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668ECu;
        goto label_1668ec;
    }
    ctx->pc = 0x1668E4u;
    SET_GPR_U32(ctx, 31, 0x1668ECu);
    ctx->pc = 0x1668E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668E4u;
    // 0x1668e8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1668ECu;
label_1668ec:
    // 0x1668ec: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1668ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1668f0:
    // 0x1668f0: 0xc066e26  jal         func_19B898
label_1668f4:
    if (ctx->pc == 0x1668F4u) {
        ctx->pc = 0x1668F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668F0u;
        // 0x1668f4: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668F8u;
        goto label_1668f8;
    }
    ctx->pc = 0x1668F0u;
    SET_GPR_U32(ctx, 31, 0x1668F8u);
    ctx->pc = 0x1668F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668F0u;
    // 0x1668f4: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1668F8u;
label_1668f8:
    // 0x1668f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1668f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1668fc:
    // 0x1668fc: 0xc066e26  jal         func_19B898
label_166900:
    if (ctx->pc == 0x166900u) {
        ctx->pc = 0x166900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668FCu;
        // 0x166900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166904u;
        goto label_166904;
    }
    ctx->pc = 0x1668FCu;
    SET_GPR_U32(ctx, 31, 0x166904u);
    ctx->pc = 0x166900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668FCu;
    // 0x166900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x166904u;
label_166904:
    // 0x166904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166908:
    // 0x166908: 0x3c020c00  lui         $v0, 0xC00
    ctx->pc = 0x166908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3072 << 16));
label_16690c:
    // 0x16690c: 0xa263004e  sb          $v1, 0x4E($s3)
    ctx->pc = 0x16690cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 3));
label_166910:
    // 0x166910: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x166910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_166914:
    // 0x166914: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x166914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_166918:
    // 0x166918: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x166918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_16691c:
    // 0x16691c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_166920:
    // 0x166920: 0xc066e44  jal         func_19B910
label_166924:
    if (ctx->pc == 0x166924u) {
        ctx->pc = 0x166924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166920u;
        // 0x166924: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166928u;
        goto label_166928;
    }
    ctx->pc = 0x166920u;
    SET_GPR_U32(ctx, 31, 0x166928u);
    ctx->pc = 0x166924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166920u;
    // 0x166924: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x166928u;
label_166928:
    // 0x166928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16692c:
    // 0x16692c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x16692cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_166930:
    // 0x166930: 0xc066e1a  jal         func_19B868
label_166934:
    if (ctx->pc == 0x166934u) {
        ctx->pc = 0x166934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166930u;
        // 0x166934: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166938u;
        goto label_166938;
    }
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 31, 0x166938u);
    ctx->pc = 0x166934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166930u;
    // 0x166934: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x166938u;
label_166938:
    // 0x166938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16693c:
    // 0x16693c: 0xc041b88  jal         func_106E20
label_166940:
    if (ctx->pc == 0x166940u) {
        ctx->pc = 0x166940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16693Cu;
        // 0x166940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166944u;
        goto label_166944;
    }
    ctx->pc = 0x16693Cu;
    SET_GPR_U32(ctx, 31, 0x166944u);
    ctx->pc = 0x166940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16693Cu;
    // 0x166940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E20u, 0x16693Cu, 0x166944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166944u;
label_166944:
    // 0x166944: 0x10000066  b           . + 4 + (0x66 << 2)
label_166948:
    if (ctx->pc == 0x166948u) {
        ctx->pc = 0x166948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166944u;
        // 0x166948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16694Cu;
        goto label_16694c;
    }
    ctx->pc = 0x166944u;
    {
        const bool branch_taken_0x166944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166944u;
        // 0x166948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166944) {
            ctx->pc = 0x166AE0u;
            { ctx->pc = 0x166ae0; return; }
        }
    }
    ctx->pc = 0x16694Cu;
label_16694c:
    // 0x16694c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_166950:
    // 0x166950: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166954:
    // 0x166954: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x166954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_166958:
    // 0x166958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16695c:
    // 0x16695c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x16695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_166960:
    // 0x166960: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x166960u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_166964:
    // 0x166964: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x166964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_166968:
    // 0x166968: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x166968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_16696c:
    // 0x16696c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x16696cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_166970:
    // 0x166970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x166970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166974:
    // 0x166974: 0x0  nop
    ctx->pc = 0x166974u;
    // NOP
label_166978:
    // 0x166978: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x166978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_16697c:
    // 0x16697c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x16697cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_166980:
    // 0x166980: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x166980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_166984:
    // 0x166984: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x166984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_166988:
    // 0x166988: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16698c:
    // 0x16698c: 0xc066e14  jal         func_19B850
label_166990:
    if (ctx->pc == 0x166990u) {
        ctx->pc = 0x166990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16698Cu;
        // 0x166990: 0xe6140074  swc1        $f20, 0x74($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166994u;
        goto label_166994;
    }
    ctx->pc = 0x16698Cu;
    SET_GPR_U32(ctx, 31, 0x166994u);
    ctx->pc = 0x166990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16698Cu;
    // 0x166990: 0xe6140074  swc1        $f20, 0x74($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x166994u;
label_166994:
    // 0x166994: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x166994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_166998:
    // 0x166998: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x166998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_16699c:
    // 0x16699c: 0xc066e02  jal         func_19B808
label_1669a0:
    if (ctx->pc == 0x1669A0u) {
        ctx->pc = 0x1669A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16699Cu;
        // 0x1669a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669A4u;
        goto label_1669a4;
    }
    ctx->pc = 0x16699Cu;
    SET_GPR_U32(ctx, 31, 0x1669A4u);
    ctx->pc = 0x1669A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16699Cu;
    // 0x1669a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1669A4u;
label_1669a4:
    // 0x1669a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1669a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1669a8:
    // 0x1669a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1669a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1669ac:
    // 0x1669ac: 0xc066e02  jal         func_19B808
label_1669b0:
    if (ctx->pc == 0x1669B0u) {
        ctx->pc = 0x1669B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669ACu;
        // 0x1669b0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669B4u;
        goto label_1669b4;
    }
    ctx->pc = 0x1669ACu;
    SET_GPR_U32(ctx, 31, 0x1669B4u);
    ctx->pc = 0x1669B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669ACu;
    // 0x1669b0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1669B4u;
label_1669b4:
    // 0x1669b4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1669b8:
    // 0x1669b8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1669b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1669bc:
    // 0x1669bc: 0xc066e02  jal         func_19B808
label_1669c0:
    if (ctx->pc == 0x1669C0u) {
        ctx->pc = 0x1669C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669BCu;
        // 0x1669c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669C4u;
        goto label_1669c4;
    }
    ctx->pc = 0x1669BCu;
    SET_GPR_U32(ctx, 31, 0x1669C4u);
    ctx->pc = 0x1669C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669BCu;
    // 0x1669c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1669C4u;
label_1669c4:
    // 0x1669c4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1669c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1669c8:
    // 0x1669c8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1669c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1669cc:
    // 0x1669cc: 0xc066e02  jal         func_19B808
label_1669d0:
    if (ctx->pc == 0x1669D0u) {
        ctx->pc = 0x1669D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669CCu;
        // 0x1669d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669D4u;
        goto label_1669d4;
    }
    ctx->pc = 0x1669CCu;
    SET_GPR_U32(ctx, 31, 0x1669D4u);
    ctx->pc = 0x1669D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669CCu;
    // 0x1669d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1669D4u;
label_1669d4:
    // 0x1669d4: 0xc66d0018  lwc1        $f13, 0x18($s3)
    ctx->pc = 0x1669d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1669d8:
    // 0x1669d8: 0xc06d51e  jal         func_1B5478
label_1669dc:
    if (ctx->pc == 0x1669DCu) {
        ctx->pc = 0x1669DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669D8u;
        // 0x1669dc: 0xc66c0010  lwc1        $f12, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669E0u;
        goto label_1669e0;
    }
    ctx->pc = 0x1669D8u;
    SET_GPR_U32(ctx, 31, 0x1669E0u);
    ctx->pc = 0x1669DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669D8u;
    // 0x1669dc: 0xc66c0010  lwc1        $f12, 0x10($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1669E0u;
label_1669e0:
    // 0x1669e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1669e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1669e4:
    // 0x1669e4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1669e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_1669e8:
    // 0x1669e8: 0xc066da0  jal         func_19B680
label_1669ec:
    if (ctx->pc == 0x1669ECu) {
        ctx->pc = 0x1669ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669E8u;
        // 0x1669ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669F0u;
        goto label_1669f0;
    }
    ctx->pc = 0x1669E8u;
    SET_GPR_U32(ctx, 31, 0x1669F0u);
    ctx->pc = 0x1669ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669E8u;
    // 0x1669ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x1669F0u;
label_1669f0:
    // 0x1669f0: 0x0  nop
    ctx->pc = 0x1669f0u;
    // NOP
label_1669f4:
    // 0x1669f4: 0x0  nop
    ctx->pc = 0x1669f4u;
    // NOP
label_1669f8:
    // 0x1669f8: 0x46000084  c1          0x84
    ctx->pc = 0x1669f8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_1669fc:
    // 0x1669fc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1669fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_166a00:
    // 0x166a00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166a04:
    // 0x166a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166a08:
    // 0x166a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166a0c:
    // 0x166a0c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x166a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166a10:
    // 0x166a10: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x166a10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_166a14:
    // 0x166a14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x166a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_166a18:
    // 0x166a18: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x166a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_166a1c:
    // 0x166a1c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x166a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_166a20:
    // 0x166a20: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x166a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_166a24:
    // 0x166a24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166a28:
    // 0x166a28: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x166a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_166a2c:
    // 0x166a2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x166a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_166a30:
    // 0x166a30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166a34:
    // 0x166a34: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x166a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_166a38:
    // 0x166a38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166a3c:
    // 0x166a3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x166a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_166a40:
    // 0x166a40: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x166a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_166a44:
    // 0x166a44: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x166a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166a48:
    // 0x166a48: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x166a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166a4c:
    // 0x166a4c: 0x0  nop
    ctx->pc = 0x166a4cu;
    // NOP
label_166a50:
    // 0x166a50: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_166a54:
    if (ctx->pc == 0x166A54u) {
        ctx->pc = 0x166A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A50u;
        // 0x166a54: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A58u;
        goto label_166a58;
    }
    ctx->pc = 0x166A50u;
    {
        const bool branch_taken_0x166a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A50u;
        // 0x166a54: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a50) {
            ctx->pc = 0x166A64u;
            goto label_166a64;
        }
    }
    ctx->pc = 0x166A58u;
label_166a58:
    // 0x166a58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x166a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_166a5c:
    // 0x166a5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_166a60:
    if (ctx->pc == 0x166A60u) {
        ctx->pc = 0x166A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A5Cu;
        // 0x166a60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A64u;
        goto label_166a64;
    }
    ctx->pc = 0x166A5Cu;
    {
        const bool branch_taken_0x166a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A5Cu;
        // 0x166a60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a5c) {
            ctx->pc = 0x166A80u;
            { ctx->pc = 0x166a80; return; }
        }
    }
    ctx->pc = 0x166A64u;
label_166a64:
    // 0x166a64: 0x0  nop
    ctx->pc = 0x166a64u;
    // NOP
label_166a68:
    // 0x166a68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x166a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166a6c:
    // 0x166a6c: 0x0  nop
    ctx->pc = 0x166a6cu;
    // NOP
    ctx->pc = 0x166a70u;
    return;
}
