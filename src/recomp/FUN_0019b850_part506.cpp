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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part506(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2921a0u: goto label_2921a0;
        case 0x2921a4u: goto label_2921a4;
        case 0x2921a8u: goto label_2921a8;
        case 0x2921acu: goto label_2921ac;
        case 0x2921b0u: goto label_2921b0;
        case 0x2921b4u: goto label_2921b4;
        case 0x2921b8u: goto label_2921b8;
        case 0x2921bcu: goto label_2921bc;
        case 0x2921c0u: goto label_2921c0;
        case 0x2921c4u: goto label_2921c4;
        case 0x2921c8u: goto label_2921c8;
        case 0x2921ccu: goto label_2921cc;
        case 0x2921d0u: goto label_2921d0;
        case 0x2921d4u: goto label_2921d4;
        case 0x2921d8u: goto label_2921d8;
        case 0x2921dcu: goto label_2921dc;
        case 0x2921e0u: goto label_2921e0;
        case 0x2921e4u: goto label_2921e4;
        case 0x2921e8u: goto label_2921e8;
        case 0x2921ecu: goto label_2921ec;
        case 0x2921f0u: goto label_2921f0;
        case 0x2921f4u: goto label_2921f4;
        case 0x2921f8u: goto label_2921f8;
        case 0x2921fcu: goto label_2921fc;
        case 0x292200u: goto label_292200;
        case 0x292204u: goto label_292204;
        case 0x292208u: goto label_292208;
        case 0x29220cu: goto label_29220c;
        case 0x292210u: goto label_292210;
        case 0x292214u: goto label_292214;
        case 0x292218u: goto label_292218;
        case 0x29221cu: goto label_29221c;
        case 0x292220u: goto label_292220;
        case 0x292224u: goto label_292224;
        case 0x292228u: goto label_292228;
        case 0x29222cu: goto label_29222c;
        case 0x292230u: goto label_292230;
        case 0x292234u: goto label_292234;
        case 0x292238u: goto label_292238;
        case 0x29223cu: goto label_29223c;
        case 0x292240u: goto label_292240;
        case 0x292244u: goto label_292244;
        case 0x292248u: goto label_292248;
        case 0x29224cu: goto label_29224c;
        case 0x292250u: goto label_292250;
        case 0x292254u: goto label_292254;
        case 0x292258u: goto label_292258;
        case 0x29225cu: goto label_29225c;
        case 0x292260u: goto label_292260;
        case 0x292264u: goto label_292264;
        case 0x292268u: goto label_292268;
        case 0x29226cu: goto label_29226c;
        case 0x292270u: goto label_292270;
        case 0x292274u: goto label_292274;
        case 0x292278u: goto label_292278;
        case 0x29227cu: goto label_29227c;
        case 0x292280u: goto label_292280;
        case 0x292284u: goto label_292284;
        case 0x292288u: goto label_292288;
        case 0x29228cu: goto label_29228c;
        case 0x292290u: goto label_292290;
        case 0x292294u: goto label_292294;
        case 0x292298u: goto label_292298;
        case 0x29229cu: goto label_29229c;
        case 0x2922a0u: goto label_2922a0;
        case 0x2922a4u: goto label_2922a4;
        case 0x2922a8u: goto label_2922a8;
        case 0x2922acu: goto label_2922ac;
        case 0x2922b0u: goto label_2922b0;
        case 0x2922b4u: goto label_2922b4;
        case 0x2922b8u: goto label_2922b8;
        case 0x2922bcu: goto label_2922bc;
        case 0x2922c0u: goto label_2922c0;
        case 0x2922c4u: goto label_2922c4;
        case 0x2922c8u: goto label_2922c8;
        case 0x2922ccu: goto label_2922cc;
        case 0x2922d0u: goto label_2922d0;
        case 0x2922d4u: goto label_2922d4;
        case 0x2922d8u: goto label_2922d8;
        case 0x2922dcu: goto label_2922dc;
        case 0x2922e0u: goto label_2922e0;
        case 0x2922e4u: goto label_2922e4;
        case 0x2922e8u: goto label_2922e8;
        case 0x2922ecu: goto label_2922ec;
        case 0x2922f0u: goto label_2922f0;
        case 0x2922f4u: goto label_2922f4;
        case 0x2922f8u: goto label_2922f8;
        case 0x2922fcu: goto label_2922fc;
        case 0x292300u: goto label_292300;
        case 0x292304u: goto label_292304;
        case 0x292308u: goto label_292308;
        case 0x29230cu: goto label_29230c;
        case 0x292310u: goto label_292310;
        case 0x292314u: goto label_292314;
        case 0x292318u: goto label_292318;
        case 0x29231cu: goto label_29231c;
        case 0x292320u: goto label_292320;
        case 0x292324u: goto label_292324;
        case 0x292328u: goto label_292328;
        case 0x29232cu: goto label_29232c;
        case 0x292330u: goto label_292330;
        case 0x292334u: goto label_292334;
        case 0x292338u: goto label_292338;
        case 0x29233cu: goto label_29233c;
        case 0x292340u: goto label_292340;
        case 0x292344u: goto label_292344;
        case 0x292348u: goto label_292348;
        case 0x29234cu: goto label_29234c;
        case 0x292350u: goto label_292350;
        case 0x292354u: goto label_292354;
        case 0x292358u: goto label_292358;
        case 0x29235cu: goto label_29235c;
        case 0x292360u: goto label_292360;
        case 0x292364u: goto label_292364;
        case 0x292368u: goto label_292368;
        case 0x29236cu: goto label_29236c;
        case 0x292370u: goto label_292370;
        case 0x292374u: goto label_292374;
        case 0x292378u: goto label_292378;
        case 0x29237cu: goto label_29237c;
        case 0x292380u: goto label_292380;
        case 0x292384u: goto label_292384;
        case 0x292388u: goto label_292388;
        case 0x29238cu: goto label_29238c;
        case 0x292390u: goto label_292390;
        case 0x292394u: goto label_292394;
        case 0x292398u: goto label_292398;
        case 0x29239cu: goto label_29239c;
        case 0x2923a0u: goto label_2923a0;
        case 0x2923a4u: goto label_2923a4;
        case 0x2923a8u: goto label_2923a8;
        case 0x2923acu: goto label_2923ac;
        case 0x2923b0u: goto label_2923b0;
        case 0x2923b4u: goto label_2923b4;
        case 0x2923b8u: goto label_2923b8;
        case 0x2923bcu: goto label_2923bc;
        case 0x2923c0u: goto label_2923c0;
        case 0x2923c4u: goto label_2923c4;
        case 0x2923c8u: goto label_2923c8;
        case 0x2923ccu: goto label_2923cc;
        case 0x2923d0u: goto label_2923d0;
        case 0x2923d4u: goto label_2923d4;
        case 0x2923d8u: goto label_2923d8;
        case 0x2923dcu: goto label_2923dc;
        case 0x2923e0u: goto label_2923e0;
        case 0x2923e4u: goto label_2923e4;
        case 0x2923e8u: goto label_2923e8;
        case 0x2923ecu: goto label_2923ec;
        case 0x2923f0u: goto label_2923f0;
        case 0x2923f4u: goto label_2923f4;
        case 0x2923f8u: goto label_2923f8;
        case 0x2923fcu: goto label_2923fc;
        case 0x292400u: goto label_292400;
        case 0x292404u: goto label_292404;
        case 0x292408u: goto label_292408;
        case 0x29240cu: goto label_29240c;
        case 0x292410u: goto label_292410;
        case 0x292414u: goto label_292414;
        case 0x292418u: goto label_292418;
        case 0x29241cu: goto label_29241c;
        case 0x292420u: goto label_292420;
        case 0x292424u: goto label_292424;
        case 0x292428u: goto label_292428;
        case 0x29242cu: goto label_29242c;
        case 0x292430u: goto label_292430;
        case 0x292434u: goto label_292434;
        case 0x292438u: goto label_292438;
        case 0x29243cu: goto label_29243c;
        case 0x292440u: goto label_292440;
        case 0x292444u: goto label_292444;
        case 0x292448u: goto label_292448;
        case 0x29244cu: goto label_29244c;
        case 0x292450u: goto label_292450;
        case 0x292454u: goto label_292454;
        case 0x292458u: goto label_292458;
        case 0x29245cu: goto label_29245c;
        case 0x292460u: goto label_292460;
        case 0x292464u: goto label_292464;
        case 0x292468u: goto label_292468;
        case 0x29246cu: goto label_29246c;
        case 0x292470u: goto label_292470;
        case 0x292474u: goto label_292474;
        case 0x292478u: goto label_292478;
        case 0x29247cu: goto label_29247c;
        case 0x292480u: goto label_292480;
        case 0x292484u: goto label_292484;
        case 0x292488u: goto label_292488;
        case 0x29248cu: goto label_29248c;
        case 0x292490u: goto label_292490;
        case 0x292494u: goto label_292494;
        case 0x292498u: goto label_292498;
        case 0x29249cu: goto label_29249c;
        case 0x2924a0u: goto label_2924a0;
        case 0x2924a4u: goto label_2924a4;
        case 0x2924a8u: goto label_2924a8;
        case 0x2924acu: goto label_2924ac;
        case 0x2924b0u: goto label_2924b0;
        case 0x2924b4u: goto label_2924b4;
        case 0x2924b8u: goto label_2924b8;
        case 0x2924bcu: goto label_2924bc;
        case 0x2924c0u: goto label_2924c0;
        case 0x2924c4u: goto label_2924c4;
        case 0x2924c8u: goto label_2924c8;
        case 0x2924ccu: goto label_2924cc;
        case 0x2924d0u: goto label_2924d0;
        case 0x2924d4u: goto label_2924d4;
        case 0x2924d8u: goto label_2924d8;
        case 0x2924dcu: goto label_2924dc;
        case 0x2924e0u: goto label_2924e0;
        case 0x2924e4u: goto label_2924e4;
        case 0x2924e8u: goto label_2924e8;
        case 0x2924ecu: goto label_2924ec;
        case 0x2924f0u: goto label_2924f0;
        case 0x2924f4u: goto label_2924f4;
        case 0x2924f8u: goto label_2924f8;
        case 0x2924fcu: goto label_2924fc;
        case 0x292500u: goto label_292500;
        case 0x292504u: goto label_292504;
        case 0x292508u: goto label_292508;
        case 0x29250cu: goto label_29250c;
        case 0x292510u: goto label_292510;
        case 0x292514u: goto label_292514;
        case 0x292518u: goto label_292518;
        case 0x29251cu: goto label_29251c;
        case 0x292520u: goto label_292520;
        case 0x292524u: goto label_292524;
        case 0x292528u: goto label_292528;
        case 0x29252cu: goto label_29252c;
        case 0x292530u: goto label_292530;
        case 0x292534u: goto label_292534;
        case 0x292538u: goto label_292538;
        case 0x29253cu: goto label_29253c;
        case 0x292540u: goto label_292540;
        case 0x292544u: goto label_292544;
        case 0x292548u: goto label_292548;
        case 0x29254cu: goto label_29254c;
        case 0x292550u: goto label_292550;
        case 0x292554u: goto label_292554;
        case 0x292558u: goto label_292558;
        case 0x29255cu: goto label_29255c;
        case 0x292560u: goto label_292560;
        case 0x292564u: goto label_292564;
        case 0x292568u: goto label_292568;
        case 0x29256cu: goto label_29256c;
        case 0x292570u: goto label_292570;
        case 0x292574u: goto label_292574;
        case 0x292578u: goto label_292578;
        case 0x29257cu: goto label_29257c;
        case 0x292580u: goto label_292580;
        case 0x292584u: goto label_292584;
        case 0x292588u: goto label_292588;
        case 0x29258cu: goto label_29258c;
        case 0x292590u: goto label_292590;
        case 0x292594u: goto label_292594;
        case 0x292598u: goto label_292598;
        case 0x29259cu: goto label_29259c;
        case 0x2925a0u: goto label_2925a0;
        case 0x2925a4u: goto label_2925a4;
        case 0x2925a8u: goto label_2925a8;
        case 0x2925acu: goto label_2925ac;
        case 0x2925b0u: goto label_2925b0;
        case 0x2925b4u: goto label_2925b4;
        case 0x2925b8u: goto label_2925b8;
        case 0x2925bcu: goto label_2925bc;
        case 0x2925c0u: goto label_2925c0;
        case 0x2925c4u: goto label_2925c4;
        case 0x2925c8u: goto label_2925c8;
        case 0x2925ccu: goto label_2925cc;
        case 0x2925d0u: goto label_2925d0;
        case 0x2925d4u: goto label_2925d4;
        case 0x2925d8u: goto label_2925d8;
        case 0x2925dcu: goto label_2925dc;
        case 0x2925e0u: goto label_2925e0;
        case 0x2925e4u: goto label_2925e4;
        case 0x2925e8u: goto label_2925e8;
        case 0x2925ecu: goto label_2925ec;
        case 0x2925f0u: goto label_2925f0;
        case 0x2925f4u: goto label_2925f4;
        case 0x2925f8u: goto label_2925f8;
        case 0x2925fcu: goto label_2925fc;
        case 0x292600u: goto label_292600;
        case 0x292604u: goto label_292604;
        case 0x292608u: goto label_292608;
        case 0x29260cu: goto label_29260c;
        case 0x292610u: goto label_292610;
        case 0x292614u: goto label_292614;
        case 0x292618u: goto label_292618;
        case 0x29261cu: goto label_29261c;
        case 0x292620u: goto label_292620;
        case 0x292624u: goto label_292624;
        case 0x292628u: goto label_292628;
        case 0x29262cu: goto label_29262c;
        case 0x292630u: goto label_292630;
        case 0x292634u: goto label_292634;
        case 0x292638u: goto label_292638;
        case 0x29263cu: goto label_29263c;
        case 0x292640u: goto label_292640;
        case 0x292644u: goto label_292644;
        case 0x292648u: goto label_292648;
        case 0x29264cu: goto label_29264c;
        case 0x292650u: goto label_292650;
        case 0x292654u: goto label_292654;
        case 0x292658u: goto label_292658;
        case 0x29265cu: goto label_29265c;
        case 0x292660u: goto label_292660;
        case 0x292664u: goto label_292664;
        case 0x292668u: goto label_292668;
        case 0x29266cu: goto label_29266c;
        case 0x292670u: goto label_292670;
        case 0x292674u: goto label_292674;
        case 0x292678u: goto label_292678;
        case 0x29267cu: goto label_29267c;
        case 0x292680u: goto label_292680;
        case 0x292684u: goto label_292684;
        case 0x292688u: goto label_292688;
        case 0x29268cu: goto label_29268c;
        case 0x292690u: goto label_292690;
        case 0x292694u: goto label_292694;
        case 0x292698u: goto label_292698;
        case 0x29269cu: goto label_29269c;
        case 0x2926a0u: goto label_2926a0;
        case 0x2926a4u: goto label_2926a4;
        case 0x2926a8u: goto label_2926a8;
        case 0x2926acu: goto label_2926ac;
        case 0x2926b0u: goto label_2926b0;
        case 0x2926b4u: goto label_2926b4;
        case 0x2926b8u: goto label_2926b8;
        case 0x2926bcu: goto label_2926bc;
        case 0x2926c0u: goto label_2926c0;
        case 0x2926c4u: goto label_2926c4;
        case 0x2926c8u: goto label_2926c8;
        case 0x2926ccu: goto label_2926cc;
        case 0x2926d0u: goto label_2926d0;
        case 0x2926d4u: goto label_2926d4;
        case 0x2926d8u: goto label_2926d8;
        case 0x2926dcu: goto label_2926dc;
        case 0x2926e0u: goto label_2926e0;
        case 0x2926e4u: goto label_2926e4;
        case 0x2926e8u: goto label_2926e8;
        case 0x2926ecu: goto label_2926ec;
        case 0x2926f0u: goto label_2926f0;
        case 0x2926f4u: goto label_2926f4;
        case 0x2926f8u: goto label_2926f8;
        case 0x2926fcu: goto label_2926fc;
        case 0x292700u: goto label_292700;
        case 0x292704u: goto label_292704;
        case 0x292708u: goto label_292708;
        case 0x29270cu: goto label_29270c;
        case 0x292710u: goto label_292710;
        case 0x292714u: goto label_292714;
        case 0x292718u: goto label_292718;
        case 0x29271cu: goto label_29271c;
        case 0x292720u: goto label_292720;
        case 0x292724u: goto label_292724;
        case 0x292728u: goto label_292728;
        case 0x29272cu: goto label_29272c;
        case 0x292730u: goto label_292730;
        case 0x292734u: goto label_292734;
        case 0x292738u: goto label_292738;
        case 0x29273cu: goto label_29273c;
        case 0x292740u: goto label_292740;
        case 0x292744u: goto label_292744;
        case 0x292748u: goto label_292748;
        case 0x29274cu: goto label_29274c;
        case 0x292750u: goto label_292750;
        case 0x292754u: goto label_292754;
        case 0x292758u: goto label_292758;
        case 0x29275cu: goto label_29275c;
        case 0x292760u: goto label_292760;
        case 0x292764u: goto label_292764;
        case 0x292768u: goto label_292768;
        case 0x29276cu: goto label_29276c;
        case 0x292770u: goto label_292770;
        case 0x292774u: goto label_292774;
        case 0x292778u: goto label_292778;
        case 0x29277cu: goto label_29277c;
        case 0x292780u: goto label_292780;
        case 0x292784u: goto label_292784;
        case 0x292788u: goto label_292788;
        case 0x29278cu: goto label_29278c;
        case 0x292790u: goto label_292790;
        case 0x292794u: goto label_292794;
        case 0x292798u: goto label_292798;
        case 0x29279cu: goto label_29279c;
        case 0x2927a0u: goto label_2927a0;
        case 0x2927a4u: goto label_2927a4;
        case 0x2927a8u: goto label_2927a8;
        case 0x2927acu: goto label_2927ac;
        case 0x2927b0u: goto label_2927b0;
        case 0x2927b4u: goto label_2927b4;
        case 0x2927b8u: goto label_2927b8;
        case 0x2927bcu: goto label_2927bc;
        case 0x2927c0u: goto label_2927c0;
        case 0x2927c4u: goto label_2927c4;
        case 0x2927c8u: goto label_2927c8;
        case 0x2927ccu: goto label_2927cc;
        case 0x2927d0u: goto label_2927d0;
        case 0x2927d4u: goto label_2927d4;
        case 0x2927d8u: goto label_2927d8;
        case 0x2927dcu: goto label_2927dc;
        case 0x2927e0u: goto label_2927e0;
        case 0x2927e4u: goto label_2927e4;
        case 0x2927e8u: goto label_2927e8;
        case 0x2927ecu: goto label_2927ec;
        case 0x2927f0u: goto label_2927f0;
        case 0x2927f4u: goto label_2927f4;
        case 0x2927f8u: goto label_2927f8;
        case 0x2927fcu: goto label_2927fc;
        case 0x292800u: goto label_292800;
        case 0x292804u: goto label_292804;
        case 0x292808u: goto label_292808;
        case 0x29280cu: goto label_29280c;
        case 0x292810u: goto label_292810;
        case 0x292814u: goto label_292814;
        case 0x292818u: goto label_292818;
        case 0x29281cu: goto label_29281c;
        case 0x292820u: goto label_292820;
        case 0x292824u: goto label_292824;
        case 0x292828u: goto label_292828;
        case 0x29282cu: goto label_29282c;
        case 0x292830u: goto label_292830;
        case 0x292834u: goto label_292834;
        case 0x292838u: goto label_292838;
        case 0x29283cu: goto label_29283c;
        case 0x292840u: goto label_292840;
        case 0x292844u: goto label_292844;
        case 0x292848u: goto label_292848;
        case 0x29284cu: goto label_29284c;
        case 0x292850u: goto label_292850;
        case 0x292854u: goto label_292854;
        case 0x292858u: goto label_292858;
        case 0x29285cu: goto label_29285c;
        case 0x292860u: goto label_292860;
        case 0x292864u: goto label_292864;
        case 0x292868u: goto label_292868;
        case 0x29286cu: goto label_29286c;
        case 0x292870u: goto label_292870;
        case 0x292874u: goto label_292874;
        case 0x292878u: goto label_292878;
        case 0x29287cu: goto label_29287c;
        case 0x292880u: goto label_292880;
        case 0x292884u: goto label_292884;
        case 0x292888u: goto label_292888;
        case 0x29288cu: goto label_29288c;
        case 0x292890u: goto label_292890;
        case 0x292894u: goto label_292894;
        case 0x292898u: goto label_292898;
        case 0x29289cu: goto label_29289c;
        case 0x2928a0u: goto label_2928a0;
        case 0x2928a4u: goto label_2928a4;
        case 0x2928a8u: goto label_2928a8;
        case 0x2928acu: goto label_2928ac;
        case 0x2928b0u: goto label_2928b0;
        case 0x2928b4u: goto label_2928b4;
        case 0x2928b8u: goto label_2928b8;
        case 0x2928bcu: goto label_2928bc;
        case 0x2928c0u: goto label_2928c0;
        case 0x2928c4u: goto label_2928c4;
        case 0x2928c8u: goto label_2928c8;
        case 0x2928ccu: goto label_2928cc;
        case 0x2928d0u: goto label_2928d0;
        case 0x2928d4u: goto label_2928d4;
        case 0x2928d8u: goto label_2928d8;
        case 0x2928dcu: goto label_2928dc;
        case 0x2928e0u: goto label_2928e0;
        case 0x2928e4u: goto label_2928e4;
        case 0x2928e8u: goto label_2928e8;
        case 0x2928ecu: goto label_2928ec;
        case 0x2928f0u: goto label_2928f0;
        case 0x2928f4u: goto label_2928f4;
        case 0x2928f8u: goto label_2928f8;
        case 0x2928fcu: goto label_2928fc;
        case 0x292900u: goto label_292900;
        case 0x292904u: goto label_292904;
        case 0x292908u: goto label_292908;
        case 0x29290cu: goto label_29290c;
        case 0x292910u: goto label_292910;
        case 0x292914u: goto label_292914;
        case 0x292918u: goto label_292918;
        case 0x29291cu: goto label_29291c;
        case 0x292920u: goto label_292920;
        case 0x292924u: goto label_292924;
        case 0x292928u: goto label_292928;
        case 0x29292cu: goto label_29292c;
        case 0x292930u: goto label_292930;
        case 0x292934u: goto label_292934;
        case 0x292938u: goto label_292938;
        case 0x29293cu: goto label_29293c;
        case 0x292940u: goto label_292940;
        case 0x292944u: goto label_292944;
        case 0x292948u: goto label_292948;
        case 0x29294cu: goto label_29294c;
        case 0x292950u: goto label_292950;
        case 0x292954u: goto label_292954;
        case 0x292958u: goto label_292958;
        case 0x29295cu: goto label_29295c;
        case 0x292960u: goto label_292960;
        case 0x292964u: goto label_292964;
        case 0x292968u: goto label_292968;
        case 0x29296cu: goto label_29296c;
        default: return;
    }

label_2921a0:
    // 0x2921a0: 0x75ec  .word       0x000075EC                   # dadd        $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2921a4:
    // 0x2921a4: 0x19  multu       $zero, $zero
    ctx->pc = 0x2921a4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2921a8:
    // 0x2921a8: 0xc060  .word       0x0000C060                   # add         $t8, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2921ac:
    // 0x2921ac: 0x0  nop
    ctx->pc = 0x2921acu;
    // NOP
label_2921b0:
    // 0x2921b0: 0x7605  .word       0x00007605                   # INVALID     $zero, $zero, 0x7605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2921B0 raw=0x00007605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2921b4:
    // 0x2921b4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2921b4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2921b8:
    // 0x2921b8: 0xd0e0  .word       0x0000D0E0                   # add         $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2921bc:
    // 0x2921bc: 0x0  nop
    ctx->pc = 0x2921bcu;
    // NOP
label_2921c0:
    // 0x2921c0: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2921c4:
    // 0x2921c4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x2921c4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2921c8:
    // 0x2921c8: 0xc8f0  tge         $zero, $zero, 803
    ctx->pc = 0x2921c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2921cc:
    // 0x2921cc: 0x0  nop
    ctx->pc = 0x2921ccu;
    // NOP
label_2921d0:
    // 0x2921d0: 0x763a  dsrl        $t6, $zero, 24
    ctx->pc = 0x2921d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 24);
label_2921d4:
    // 0x2921d4: 0x19  multu       $zero, $zero
    ctx->pc = 0x2921d4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2921d8:
    // 0x2921d8: 0xc5c0  sll         $t8, $zero, 23
    ctx->pc = 0x2921d8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2921dc:
    // 0x2921dc: 0x0  nop
    ctx->pc = 0x2921dcu;
    // NOP
label_2921e0:
    // 0x2921e0: 0x7653  .word       0x00007653                   # mtlo        $zero # 00007640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2921e4:
    // 0x2921e4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2921E4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2921e8:
    // 0x2921e8: 0x6e20  .word       0x00006E20                   # add         $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2921ec:
    // 0x2921ec: 0x0  nop
    ctx->pc = 0x2921ecu;
    // NOP
label_2921f0:
    // 0x2921f0: 0x7661  .word       0x00007661                   # addu        $t6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2921f4:
    // 0x2921f4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2921f4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2921f8:
    // 0x2921f8: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921f8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2921fc:
    // 0x2921fc: 0x0  nop
    ctx->pc = 0x2921fcu;
    // NOP
label_292200:
    // 0x292200: 0x766c  .word       0x0000766C                   # dadd        $t6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292204:
    // 0x292204: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292204u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292208:
    // 0x292208: 0xd510  .word       0x0000D510                   # mfhi        $k0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292208u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29220c:
    // 0x29220c: 0x0  nop
    ctx->pc = 0x29220cu;
    // NOP
label_292210:
    // 0x292210: 0x7687  .word       0x00007687                   # srav        $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292210u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292214:
    // 0x292214: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292214 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292218:
    // 0x292218: 0x6d50  .word       0x00006D50                   # mfhi        $t5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292218u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_29221c:
    // 0x29221c: 0x0  nop
    ctx->pc = 0x29221cu;
    // NOP
label_292220:
    // 0x292220: 0x7695  .word       0x00007695                   # INVALID     $zero, $zero, 0x7695 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x292220 raw=0x00007695"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292224:
    // 0x292224: 0x19  multu       $zero, $zero
    ctx->pc = 0x292224u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292228:
    // 0x292228: 0xc470  tge         $zero, $zero, 785
    ctx->pc = 0x292228u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29222c:
    // 0x29222c: 0x0  nop
    ctx->pc = 0x29222cu;
    // NOP
label_292230:
    // 0x292230: 0x76ae  .word       0x000076AE                   # dsub        $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292234:
    // 0x292234: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x292234u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_292238:
    // 0x292238: 0x9b30  tge         $zero, $zero, 620
    ctx->pc = 0x292238u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29223c:
    // 0x29223c: 0x0  nop
    ctx->pc = 0x29223cu;
    // NOP
label_292240:
    // 0x292240: 0x76c2  srl         $t6, $zero, 27
    ctx->pc = 0x292240u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_292244:
    // 0x292244: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x292244u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_292248:
    // 0x292248: 0x1db00  sll         $k1, $at, 12
    ctx->pc = 0x292248u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_29224c:
    // 0x29224c: 0x0  nop
    ctx->pc = 0x29224cu;
    // NOP
label_292250:
    // 0x292250: 0x76fe  dsrl32      $t6, $zero, 27
    ctx->pc = 0x292250u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (32 + 27));
label_292254:
    // 0x292254: 0xc  syscall     0
    ctx->pc = 0x292254u;
    ctx->pc = 0x292258u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_292258:
    // 0x292258: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292258u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29225c:
    // 0x29225c: 0x0  nop
    ctx->pc = 0x29225cu;
    // NOP
label_292260:
    // 0x292260: 0x770a  .word       0x0000770A                   # movz        $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292260u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_292264:
    // 0x292264: 0xd  break       0
    ctx->pc = 0x292264u;
    runtime->handleBreak(rdram, ctx);
label_292268:
    // 0x292268: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x292268u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_29226c:
    // 0x29226c: 0x0  nop
    ctx->pc = 0x29226cu;
    // NOP
label_292270:
    // 0x292270: 0x7717  .word       0x00007717                   # dsrav       $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292270u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292274:
    // 0x292274: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x292274u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_292278:
    // 0x292278: 0x5530  tge         $zero, $zero, 340
    ctx->pc = 0x292278u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29227c:
    // 0x29227c: 0x0  nop
    ctx->pc = 0x29227cu;
    // NOP
label_292280:
    // 0x292280: 0x7722  .word       0x00007722                   # neg         $t6, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292280u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_292284:
    // 0x292284: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292284u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292284 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292288:
    // 0x292288: 0x1c780  sll         $t8, $at, 30
    ctx->pc = 0x292288u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 1), 30));
label_29228c:
    // 0x29228c: 0x0  nop
    ctx->pc = 0x29228cu;
    // NOP
label_292290:
    // 0x292290: 0x775b  .word       0x0000775B                   # divu        $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292290u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292294:
    // 0x292294: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x292294u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x292294 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292298:
    // 0x292298: 0xf6e0  .word       0x0000F6E0                   # add         $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292298u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_29229c:
    // 0x29229c: 0x0  nop
    ctx->pc = 0x29229cu;
    // NOP
label_2922a0:
    // 0x2922a0: 0x777a  dsrl        $t6, $zero, 29
    ctx->pc = 0x2922a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 29);
label_2922a4:
    // 0x2922a4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x2922a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2922A4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2922a8:
    // 0x2922a8: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x2922a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2922ac:
    // 0x2922ac: 0x0  nop
    ctx->pc = 0x2922acu;
    // NOP
label_2922b0:
    // 0x2922b0: 0x7797  .word       0x00007797                   # dsrav       $t6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922b0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2922b4:
    // 0x2922b4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x2922b4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2922b8:
    // 0x2922b8: 0xcf20  .word       0x0000CF20                   # add         $t9, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2922bc:
    // 0x2922bc: 0x0  nop
    ctx->pc = 0x2922bcu;
    // NOP
label_2922c0:
    // 0x2922c0: 0x77b1  tgeu        $zero, $zero, 478
    ctx->pc = 0x2922c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2922c4:
    // 0x2922c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2922C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2922c8:
    // 0x2922c8: 0xa420  .word       0x0000A420                   # add         $s4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2922cc:
    // 0x2922cc: 0x0  nop
    ctx->pc = 0x2922ccu;
    // NOP
label_2922d0:
    // 0x2922d0: 0x77c6  .word       0x000077C6                   # srlv        $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2922d4:
    // 0x2922d4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x2922d4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2922d8:
    // 0x2922d8: 0xcad0  .word       0x0000CAD0                   # mfhi        $t9 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922d8u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2922dc:
    // 0x2922dc: 0x0  nop
    ctx->pc = 0x2922dcu;
    // NOP
label_2922e0:
    // 0x2922e0: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2922e4:
    // 0x2922e4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x2922e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2922e8:
    // 0x2922e8: 0x12a20  .word       0x00012A20                   # add         $a1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2922ec:
    // 0x2922ec: 0x0  nop
    ctx->pc = 0x2922ecu;
    // NOP
label_2922f0:
    // 0x2922f0: 0x7806  srlv        $t7, $zero, $zero
    ctx->pc = 0x2922f0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2922f4:
    // 0x2922f4: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2922F4 raw=0x00000041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2922f8:
    // 0x2922f8: 0x20430  tge         $zero, $v0, 16
    ctx->pc = 0x2922f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2922fc:
    // 0x2922fc: 0x0  nop
    ctx->pc = 0x2922fcu;
    // NOP
label_292300:
    // 0x292300: 0x7847  .word       0x00007847                   # srav        $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292300u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292304:
    // 0x292304: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x292304u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292308:
    // 0x292308: 0xcc90  .word       0x0000CC90                   # mfhi        $t9 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292308u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_29230c:
    // 0x29230c: 0x0  nop
    ctx->pc = 0x29230cu;
    // NOP
label_292310:
    // 0x292310: 0x7861  .word       0x00007861                   # addu        $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292310u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292314:
    // 0x292314: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292314u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292318:
    // 0x292318: 0xd500  sll         $k0, $zero, 20
    ctx->pc = 0x292318u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_29231c:
    // 0x29231c: 0x0  nop
    ctx->pc = 0x29231cu;
    // NOP
label_292320:
    // 0x292320: 0x787c  dsll32      $t7, $zero, 1
    ctx->pc = 0x292320u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (32 + 1));
label_292324:
    // 0x292324: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x292324u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_292328:
    // 0x292328: 0x215d0  .word       0x000215D0                   # mfhi        $v0 # 000205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292328u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29232c:
    // 0x29232c: 0x0  nop
    ctx->pc = 0x29232cu;
    // NOP
label_292330:
    // 0x292330: 0x78bf  dsra32      $t7, $zero, 2
    ctx->pc = 0x292330u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 2));
label_292334:
    // 0x292334: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x292334u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_292338:
    // 0x292338: 0x1ef90  .word       0x0001EF90                   # mfhi        $sp # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292338u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29233c:
    // 0x29233c: 0x0  nop
    ctx->pc = 0x29233cu;
    // NOP
label_292340:
    // 0x292340: 0x78fd  .word       0x000078FD                   # INVALID     $zero, $zero, 0x78FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292340 raw=0x000078FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292344:
    // 0x292344: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x292344u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292348:
    // 0x292348: 0xcdf0  tge         $zero, $zero, 823
    ctx->pc = 0x292348u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29234c:
    // 0x29234c: 0x0  nop
    ctx->pc = 0x29234cu;
    // NOP
label_292350:
    // 0x292350: 0x7917  .word       0x00007917                   # dsrav       $t7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292350u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292354:
    // 0x292354: 0x19  multu       $zero, $zero
    ctx->pc = 0x292354u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292358:
    // 0x292358: 0xc2e0  .word       0x0000C2E0                   # add         $t8, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292358u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29235c:
    // 0x29235c: 0x0  nop
    ctx->pc = 0x29235cu;
    // NOP
label_292360:
    // 0x292360: 0x7930  tge         $zero, $zero, 484
    ctx->pc = 0x292360u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292364:
    // 0x292364: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x292364u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292368:
    // 0x292368: 0x170f0  tge         $zero, $at, 451
    ctx->pc = 0x292368u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29236c:
    // 0x29236c: 0x0  nop
    ctx->pc = 0x29236cu;
    // NOP
label_292370:
    // 0x292370: 0x795f  .word       0x0000795F                   # ddivu       $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x292370 raw=0x0000795F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292374:
    // 0x292374: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x292374u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_292378:
    // 0x292378: 0x15830  tge         $zero, $at, 352
    ctx->pc = 0x292378u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29237c:
    // 0x29237c: 0x0  nop
    ctx->pc = 0x29237cu;
    // NOP
label_292380:
    // 0x292380: 0x798b  .word       0x0000798B                   # movn        $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292380u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_292384:
    // 0x292384: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x292384u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_292388:
    // 0x292388: 0x15c40  sll         $t3, $at, 17
    ctx->pc = 0x292388u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29238c:
    // 0x29238c: 0x0  nop
    ctx->pc = 0x29238cu;
    // NOP
label_292390:
    // 0x292390: 0x79b7  .word       0x000079B7                   # INVALID     $zero, $zero, 0x79B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292390 raw=0x000079B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292394:
    // 0x292394: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x292394u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292398:
    // 0x292398: 0x14e60  .word       0x00014E60                   # add         $t1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29239c:
    // 0x29239c: 0x0  nop
    ctx->pc = 0x29239cu;
    // NOP
label_2923a0:
    // 0x2923a0: 0x79e1  .word       0x000079E1                   # addu        $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2923a4:
    // 0x2923a4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x2923a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2923a8:
    // 0x2923a8: 0x12f40  sll         $a1, $at, 29
    ctx->pc = 0x2923a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 29));
label_2923ac:
    // 0x2923ac: 0x0  nop
    ctx->pc = 0x2923acu;
    // NOP
label_2923b0:
    // 0x2923b0: 0x7a07  .word       0x00007A07                   # srav        $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923b0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2923b4:
    // 0x2923b4: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x2923b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2923b8:
    // 0x2923b8: 0x19d50  .word       0x00019D50                   # mfhi        $s3 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923b8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2923bc:
    // 0x2923bc: 0x0  nop
    ctx->pc = 0x2923bcu;
    // NOP
label_2923c0:
    // 0x2923c0: 0x7a3b  dsra        $t7, $zero, 8
    ctx->pc = 0x2923c0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 8);
label_2923c4:
    // 0x2923c4: 0x28  mfsa        $zero
    ctx->pc = 0x2923c4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2923c8:
    // 0x2923c8: 0x13d90  .word       0x00013D90                   # mfhi        $a3 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923c8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2923cc:
    // 0x2923cc: 0x0  nop
    ctx->pc = 0x2923ccu;
    // NOP
label_2923d0:
    // 0x2923d0: 0x7a63  .word       0x00007A63                   # negu        $t7, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2923d4:
    // 0x2923d4: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x2923d4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2923d8:
    // 0x2923d8: 0x14820  add         $t1, $zero, $at
    ctx->pc = 0x2923d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2923dc:
    // 0x2923dc: 0x0  nop
    ctx->pc = 0x2923dcu;
    // NOP
label_2923e0:
    // 0x2923e0: 0x7a8d  break       0, 490
    ctx->pc = 0x2923e0u;
    runtime->handleBreak(rdram, ctx);
label_2923e4:
    // 0x2923e4: 0x29  mtsa        $zero
    ctx->pc = 0x2923e4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2923e8:
    // 0x2923e8: 0x14010  .word       0x00014010                   # mfhi        $t0 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923e8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2923ec:
    // 0x2923ec: 0x0  nop
    ctx->pc = 0x2923ecu;
    // NOP
label_2923f0:
    // 0x2923f0: 0x7ab6  tne         $zero, $zero, 490
    ctx->pc = 0x2923f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2923f4:
    // 0x2923f4: 0x28  mfsa        $zero
    ctx->pc = 0x2923f4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2923f8:
    // 0x2923f8: 0x13bf0  tge         $zero, $at, 239
    ctx->pc = 0x2923f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2923fc:
    // 0x2923fc: 0x0  nop
    ctx->pc = 0x2923fcu;
    // NOP
label_292400:
    // 0x292400: 0x7ade  .word       0x00007ADE                   # ddiv        $t7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292400 raw=0x00007ADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292404:
    // 0x292404: 0x27  not         $zero, $zero
    ctx->pc = 0x292404u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292408:
    // 0x292408: 0x13430  tge         $zero, $at, 208
    ctx->pc = 0x292408u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29240c:
    // 0x29240c: 0x0  nop
    ctx->pc = 0x29240cu;
    // NOP
label_292410:
    // 0x292410: 0x7b05  .word       0x00007B05                   # INVALID     $zero, $zero, 0x7B05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292410 raw=0x00007B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292414:
    // 0x292414: 0x27  not         $zero, $zero
    ctx->pc = 0x292414u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292418:
    // 0x292418: 0x13260  .word       0x00013260                   # add         $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29241c:
    // 0x29241c: 0x0  nop
    ctx->pc = 0x29241cu;
    // NOP
label_292420:
    // 0x292420: 0x7b2c  .word       0x00007B2C                   # dadd        $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292420u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_292424:
    // 0x292424: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x292424u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292428:
    // 0x292428: 0x15450  .word       0x00015450                   # mfhi        $t2 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292428u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_29242c:
    // 0x29242c: 0x0  nop
    ctx->pc = 0x29242cu;
    // NOP
label_292430:
    // 0x292430: 0x7b57  .word       0x00007B57                   # dsrav       $t7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292430u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292434:
    // 0x292434: 0x29  mtsa        $zero
    ctx->pc = 0x292434u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292438:
    // 0x292438: 0x145e0  .word       0x000145E0                   # add         $t0, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292438u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_29243c:
    // 0x29243c: 0x0  nop
    ctx->pc = 0x29243cu;
    // NOP
label_292440:
    // 0x292440: 0x7b80  sll         $t7, $zero, 14
    ctx->pc = 0x292440u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_292444:
    // 0x292444: 0x27  not         $zero, $zero
    ctx->pc = 0x292444u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292448:
    // 0x292448: 0x130b0  tge         $zero, $at, 194
    ctx->pc = 0x292448u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29244c:
    // 0x29244c: 0x0  nop
    ctx->pc = 0x29244cu;
    // NOP
label_292450:
    // 0x292450: 0x7ba7  .word       0x00007BA7                   # not         $t7, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292450u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292454:
    // 0x292454: 0x28  mfsa        $zero
    ctx->pc = 0x292454u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292458:
    // 0x292458: 0x13d90  .word       0x00013D90                   # mfhi        $a3 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292458u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_29245c:
    // 0x29245c: 0x0  nop
    ctx->pc = 0x29245cu;
    // NOP
label_292460:
    // 0x292460: 0x7bcf  .word       0x00007BCF                   # sync # 00007800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292464:
    // 0x292464: 0x28  mfsa        $zero
    ctx->pc = 0x292464u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292468:
    // 0x292468: 0x13d10  .word       0x00013D10                   # mfhi        $a3 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292468u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_29246c:
    // 0x29246c: 0x0  nop
    ctx->pc = 0x29246cu;
    // NOP
label_292470:
    // 0x292470: 0x7bf7  .word       0x00007BF7                   # INVALID     $zero, $zero, 0x7BF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292470 raw=0x00007BF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292474:
    // 0x292474: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x292474u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_292478:
    // 0x292478: 0x12ed0  .word       0x00012ED0                   # mfhi        $a1 # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292478u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29247c:
    // 0x29247c: 0x0  nop
    ctx->pc = 0x29247cu;
    // NOP
label_292480:
    // 0x292480: 0x7c1d  .word       0x00007C1D                   # dmultu      $zero, $zero # 00007C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x292480 raw=0x00007C1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292484:
    // 0x292484: 0x28  mfsa        $zero
    ctx->pc = 0x292484u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292488:
    // 0x292488: 0x13980  sll         $a3, $at, 6
    ctx->pc = 0x292488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_29248c:
    // 0x29248c: 0x0  nop
    ctx->pc = 0x29248cu;
    // NOP
label_292490:
    // 0x292490: 0x7c45  .word       0x00007C45                   # INVALID     $zero, $zero, 0x7C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292490 raw=0x00007C45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292494:
    // 0x292494: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x292494u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292498:
    // 0x292498: 0x148d0  .word       0x000148D0                   # mfhi        $t1 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292498u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29249c:
    // 0x29249c: 0x0  nop
    ctx->pc = 0x29249cu;
    // NOP
label_2924a0:
    // 0x2924a0: 0x7c6f  .word       0x00007C6F                   # dsubu       $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2924a4:
    // 0x2924a4: 0x27  not         $zero, $zero
    ctx->pc = 0x2924a4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2924a8:
    // 0x2924a8: 0x13290  .word       0x00013290                   # mfhi        $a2 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924a8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2924ac:
    // 0x2924ac: 0x0  nop
    ctx->pc = 0x2924acu;
    // NOP
label_2924b0:
    // 0x2924b0: 0x7c96  .word       0x00007C96                   # dsrlv       $t7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2924b4:
    // 0x2924b4: 0x25  move        $zero, $zero
    ctx->pc = 0x2924b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2924b8:
    // 0x2924b8: 0x125b0  tge         $zero, $at, 150
    ctx->pc = 0x2924b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2924bc:
    // 0x2924bc: 0x0  nop
    ctx->pc = 0x2924bcu;
    // NOP
label_2924c0:
    // 0x2924c0: 0x7cbb  dsra        $t7, $zero, 18
    ctx->pc = 0x2924c0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 18);
label_2924c4:
    // 0x2924c4: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x2924c4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2924c8:
    // 0x2924c8: 0x14cb0  tge         $zero, $at, 306
    ctx->pc = 0x2924c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2924cc:
    // 0x2924cc: 0x0  nop
    ctx->pc = 0x2924ccu;
    // NOP
label_2924d0:
    // 0x2924d0: 0x7ce5  .word       0x00007CE5                   # move        $t7, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2924d4:
    // 0x2924d4: 0x27  not         $zero, $zero
    ctx->pc = 0x2924d4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2924d8:
    // 0x2924d8: 0x131d0  .word       0x000131D0                   # mfhi        $a2 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924d8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2924dc:
    // 0x2924dc: 0x0  nop
    ctx->pc = 0x2924dcu;
    // NOP
label_2924e0:
    // 0x2924e0: 0x7d0c  syscall     500
    ctx->pc = 0x2924e0u;
    ctx->pc = 0x2924E4u;
runtime->handleSyscall(rdram, ctx, 0x1F4u);
label_2924e4:
    // 0x2924e4: 0x29  mtsa        $zero
    ctx->pc = 0x2924e4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2924e8:
    // 0x2924e8: 0x143f0  tge         $zero, $at, 271
    ctx->pc = 0x2924e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2924ec:
    // 0x2924ec: 0x0  nop
    ctx->pc = 0x2924ecu;
    // NOP
label_2924f0:
    // 0x2924f0: 0x7d35  .word       0x00007D35                   # INVALID     $zero, $zero, 0x7D35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2924F0 raw=0x00007D35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2924f4:
    // 0x2924f4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x2924f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2924f8:
    // 0x2924f8: 0x12b00  sll         $a1, $at, 12
    ctx->pc = 0x2924f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_2924fc:
    // 0x2924fc: 0x0  nop
    ctx->pc = 0x2924fcu;
    // NOP
label_292500:
    // 0x292500: 0x7d5b  .word       0x00007D5B                   # divu        $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292500u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292504:
    // 0x292504: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x292504u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292508:
    // 0x292508: 0x15240  sll         $t2, $at, 9
    ctx->pc = 0x292508u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_29250c:
    // 0x29250c: 0x0  nop
    ctx->pc = 0x29250cu;
    // NOP
label_292510:
    // 0x292510: 0x7d86  .word       0x00007D86                   # srlv        $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292510u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292514:
    // 0x292514: 0x28  mfsa        $zero
    ctx->pc = 0x292514u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292518:
    // 0x292518: 0x139f0  tge         $zero, $at, 231
    ctx->pc = 0x292518u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29251c:
    // 0x29251c: 0x0  nop
    ctx->pc = 0x29251cu;
    // NOP
label_292520:
    // 0x292520: 0x7dae  .word       0x00007DAE                   # dsub        $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292520u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_292524:
    // 0x292524: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x292524u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292528:
    // 0x292528: 0x19b50  .word       0x00019B50                   # mfhi        $s3 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292528u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_29252c:
    // 0x29252c: 0x0  nop
    ctx->pc = 0x29252cu;
    // NOP
label_292530:
    // 0x292530: 0x7de2  .word       0x00007DE2                   # neg         $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292530u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_292534:
    // 0x292534: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x292534u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292538:
    // 0x292538: 0x17370  tge         $zero, $at, 461
    ctx->pc = 0x292538u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29253c:
    // 0x29253c: 0x0  nop
    ctx->pc = 0x29253cu;
    // NOP
label_292540:
    // 0x292540: 0x7e11  .word       0x00007E11                   # mthi        $zero # 00007E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292540u;
    ctx->hi = GPR_U64(ctx, 0);
label_292544:
    // 0x292544: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x292544u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292548:
    // 0x292548: 0x177a0  .word       0x000177A0                   # add         $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_29254c:
    // 0x29254c: 0x0  nop
    ctx->pc = 0x29254cu;
    // NOP
label_292550:
    // 0x292550: 0x7e40  sll         $t7, $zero, 25
    ctx->pc = 0x292550u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_292554:
    // 0x292554: 0x29  mtsa        $zero
    ctx->pc = 0x292554u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292558:
    // 0x292558: 0x142d0  .word       0x000142D0                   # mfhi        $t0 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292558u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_29255c:
    // 0x29255c: 0x0  nop
    ctx->pc = 0x29255cu;
    // NOP
label_292560:
    // 0x292560: 0x7e69  .word       0x00007E69                   # mtsa        $zero # 00007E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292560u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292564:
    // 0x292564: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x292564u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292568:
    // 0x292568: 0x157a0  .word       0x000157A0                   # add         $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292568u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_29256c:
    // 0x29256c: 0x0  nop
    ctx->pc = 0x29256cu;
    // NOP
label_292570:
    // 0x292570: 0x7e94  .word       0x00007E94                   # dsllv       $t7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292570u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_292574:
    // 0x292574: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x292574u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292578:
    // 0x292578: 0x162a0  .word       0x000162A0                   # add         $t4, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292578u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_29257c:
    // 0x29257c: 0x0  nop
    ctx->pc = 0x29257cu;
    // NOP
label_292580:
    // 0x292580: 0x7ec1  .word       0x00007EC1                   # INVALID     $zero, $zero, 0x7EC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292580 raw=0x00007EC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292584:
    // 0x292584: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x292584u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292588:
    // 0x292588: 0x14d20  .word       0x00014D20                   # add         $t1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29258c:
    // 0x29258c: 0x0  nop
    ctx->pc = 0x29258cu;
    // NOP
label_292590:
    // 0x292590: 0x7eeb  .word       0x00007EEB                   # sltu        $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292590u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292594:
    // 0x292594: 0x27  not         $zero, $zero
    ctx->pc = 0x292594u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292598:
    // 0x292598: 0x13430  tge         $zero, $at, 208
    ctx->pc = 0x292598u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29259c:
    // 0x29259c: 0x0  nop
    ctx->pc = 0x29259cu;
    // NOP
label_2925a0:
    // 0x2925a0: 0x7f12  .word       0x00007F12                   # mflo        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925a0u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_2925a4:
    // 0x2925a4: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2925a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2925a8:
    // 0x2925a8: 0x16f60  .word       0x00016F60                   # add         $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2925ac:
    // 0x2925ac: 0x0  nop
    ctx->pc = 0x2925acu;
    // NOP
label_2925b0:
    // 0x2925b0: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x2925b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2925b4:
    // 0x2925b4: 0x29  mtsa        $zero
    ctx->pc = 0x2925b4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925b8:
    // 0x2925b8: 0x14680  sll         $t0, $at, 26
    ctx->pc = 0x2925b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_2925bc:
    // 0x2925bc: 0x0  nop
    ctx->pc = 0x2925bcu;
    // NOP
label_2925c0:
    // 0x2925c0: 0x7f69  .word       0x00007F69                   # mtsa        $zero # 00007F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2925c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925c4:
    // 0x2925c4: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x2925c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2925c8:
    // 0x2925c8: 0x174b0  tge         $zero, $at, 466
    ctx->pc = 0x2925c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2925cc:
    // 0x2925cc: 0x0  nop
    ctx->pc = 0x2925ccu;
    // NOP
label_2925d0:
    // 0x2925d0: 0x7f98  .word       0x00007F98                   # mult        $t7, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2925d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2925d4:
    // 0x2925d4: 0x29  mtsa        $zero
    ctx->pc = 0x2925d4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925d8:
    // 0x2925d8: 0x14320  .word       0x00014320                   # add         $t0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2925dc:
    // 0x2925dc: 0x0  nop
    ctx->pc = 0x2925dcu;
    // NOP
label_2925e0:
    // 0x2925e0: 0x7fc1  .word       0x00007FC1                   # INVALID     $zero, $zero, 0x7FC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2925E0 raw=0x00007FC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2925e4:
    // 0x2925e4: 0x28  mfsa        $zero
    ctx->pc = 0x2925e4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2925e8:
    // 0x2925e8: 0x13cf0  tge         $zero, $at, 243
    ctx->pc = 0x2925e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2925ec:
    // 0x2925ec: 0x0  nop
    ctx->pc = 0x2925ecu;
    // NOP
label_2925f0:
    // 0x2925f0: 0x7fe9  .word       0x00007FE9                   # mtsa        $zero # 00007FC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2925f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925f4:
    // 0x2925f4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2925F4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2925f8:
    // 0x2925f8: 0x6810  mfhi        $t5
    ctx->pc = 0x2925f8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2925fc:
    // 0x2925fc: 0x0  nop
    ctx->pc = 0x2925fcu;
    // NOP
label_292600:
    // 0x292600: 0x7ff7  .word       0x00007FF7                   # INVALID     $zero, $zero, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292600 raw=0x00007FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292604:
    // 0x292604: 0xd  break       0
    ctx->pc = 0x292604u;
    runtime->handleBreak(rdram, ctx);
label_292608:
    // 0x292608: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292608u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_29260c:
    // 0x29260c: 0x0  nop
    ctx->pc = 0x29260cu;
    // NOP
label_292610:
    // 0x292610: 0x8004  sllv        $s0, $zero, $zero
    ctx->pc = 0x292610u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292614:
    // 0x292614: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292614u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292614 raw=0x00000077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292618:
    // 0x292618: 0x3b500  sll         $s6, $v1, 20
    ctx->pc = 0x292618u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
label_29261c:
    // 0x29261c: 0x0  nop
    ctx->pc = 0x29261cu;
    // NOP
label_292620:
    // 0x292620: 0x807b  dsra        $s0, $zero, 1
    ctx->pc = 0x292620u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> 1);
label_292624:
    // 0x292624: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292624u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292628:
    // 0x292628: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29262c:
    // 0x29262c: 0x0  nop
    ctx->pc = 0x29262cu;
    // NOP
label_292630:
    // 0x292630: 0x807d  .word       0x0000807D                   # INVALID     $zero, $zero, -0x7F83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292630 raw=0x0000807D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292634:
    // 0x292634: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292634u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292638:
    // 0x292638: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292638u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29263c:
    // 0x29263c: 0x0  nop
    ctx->pc = 0x29263cu;
    // NOP
label_292640:
    // 0x292640: 0x807f  dsra32      $s0, $zero, 1
    ctx->pc = 0x292640u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 1));
label_292644:
    // 0x292644: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x292644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_292648:
    // 0x292648: 0x3d5d0  .word       0x0003D5D0                   # mfhi        $k0 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292648u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29264c:
    // 0x29264c: 0x0  nop
    ctx->pc = 0x29264cu;
    // NOP
label_292650:
    // 0x292650: 0x80fa  dsrl        $s0, $zero, 3
    ctx->pc = 0x292650u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 3);
label_292654:
    // 0x292654: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292654u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292658:
    // 0x292658: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29265c:
    // 0x29265c: 0x0  nop
    ctx->pc = 0x29265cu;
    // NOP
label_292660:
    // 0x292660: 0x80fc  dsll32      $s0, $zero, 3
    ctx->pc = 0x292660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (32 + 3));
label_292664:
    // 0x292664: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292664u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292668:
    // 0x292668: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292668u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29266c:
    // 0x29266c: 0x0  nop
    ctx->pc = 0x29266cu;
    // NOP
label_292670:
    // 0x292670: 0x80fe  dsrl32      $s0, $zero, 3
    ctx->pc = 0x292670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 3));
label_292674:
    // 0x292674: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x292674u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292678:
    // 0x292678: 0x39be0  .word       0x00039BE0                   # add         $s3, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292678u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_29267c:
    // 0x29267c: 0x0  nop
    ctx->pc = 0x29267cu;
    // NOP
label_292680:
    // 0x292680: 0x8172  tlt         $zero, $zero, 517
    ctx->pc = 0x292680u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292684:
    // 0x292684: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292684u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292688:
    // 0x292688: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29268c:
    // 0x29268c: 0x0  nop
    ctx->pc = 0x29268cu;
    // NOP
label_292690:
    // 0x292690: 0x8174  teq         $zero, $zero, 517
    ctx->pc = 0x292690u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292694:
    // 0x292694: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292694u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292698:
    // 0x292698: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292698u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29269c:
    // 0x29269c: 0x0  nop
    ctx->pc = 0x29269cu;
    // NOP
label_2926a0:
    // 0x2926a0: 0x8176  tne         $zero, $zero, 517
    ctx->pc = 0x2926a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926a4:
    // 0x2926a4: 0x89  .word       0x00000089                   # jalr        $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_2926a8:
    if (ctx->pc == 0x2926A8u) {
        ctx->pc = 0x2926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A4u;
        // 0x2926a8: 0x44170  tge         $zero, $a0, 261 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2926ACu;
        goto label_2926ac;
    }
    ctx->pc = 0x2926A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A4u;
        // 0x2926a8: 0x44170  tge         $zero, $a0, 261 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2926A4u, 0x2926ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2926ACu;
label_2926ac:
    // 0x2926ac: 0x0  nop
    ctx->pc = 0x2926acu;
    // NOP
label_2926b0:
    // 0x2926b0: 0x81ff  dsra32      $s0, $zero, 7
    ctx->pc = 0x2926b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 7));
label_2926b4:
    // 0x2926b4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926b8:
    // 0x2926b8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2926b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2926bc:
    // 0x2926bc: 0x0  nop
    ctx->pc = 0x2926bcu;
    // NOP
label_2926c0:
    // 0x2926c0: 0x8201  .word       0x00008201                   # INVALID     $zero, $zero, -0x7DFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2926c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2926C0 raw=0x00008201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2926c4:
    // 0x2926c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926c8:
    // 0x2926c8: 0xd80  sll         $at, $zero, 22
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2926cc:
    // 0x2926cc: 0x0  nop
    ctx->pc = 0x2926ccu;
    // NOP
label_2926d0:
    // 0x2926d0: 0x8203  sra         $s0, $zero, 8
    ctx->pc = 0x2926d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 8));
label_2926d4:
    // 0x2926d4: 0x71  tgeu        $zero, $zero, 1
    ctx->pc = 0x2926d4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926d8:
    // 0x2926d8: 0x38480  sll         $s0, $v1, 18
    ctx->pc = 0x2926d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_2926dc:
    // 0x2926dc: 0x0  nop
    ctx->pc = 0x2926dcu;
    // NOP
label_2926e0:
    // 0x2926e0: 0x8274  teq         $zero, $zero, 521
    ctx->pc = 0x2926e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926e4:
    // 0x2926e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926e8:
    // 0x2926e8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2926e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2926ec:
    // 0x2926ec: 0x0  nop
    ctx->pc = 0x2926ecu;
    // NOP
label_2926f0:
    // 0x2926f0: 0x8276  tne         $zero, $zero, 521
    ctx->pc = 0x2926f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926f4:
    // 0x2926f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926f8:
    // 0x2926f8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2926fc:
    // 0x2926fc: 0x0  nop
    ctx->pc = 0x2926fcu;
    // NOP
label_292700:
    // 0x292700: 0x8278  dsll        $s0, $zero, 9
    ctx->pc = 0x292700u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 9);
label_292704:
    // 0x292704: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292704 raw=0x00000085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292708:
    // 0x292708: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x292708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
label_29270c:
    // 0x29270c: 0x0  nop
    ctx->pc = 0x29270cu;
    // NOP
label_292710:
    // 0x292710: 0x82fd  .word       0x000082FD                   # INVALID     $zero, $zero, -0x7D03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292710 raw=0x000082FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292714:
    // 0x292714: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292714u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292718:
    // 0x292718: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29271c:
    // 0x29271c: 0x0  nop
    ctx->pc = 0x29271cu;
    // NOP
label_292720:
    // 0x292720: 0x82ff  dsra32      $s0, $zero, 11
    ctx->pc = 0x292720u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 11));
label_292724:
    // 0x292724: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292724u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292728:
    // 0x292728: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29272c:
    // 0x29272c: 0x0  nop
    ctx->pc = 0x29272cu;
    // NOP
label_292730:
    // 0x292730: 0x8301  .word       0x00008301                   # INVALID     $zero, $zero, -0x7CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292730 raw=0x00008301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292734:
    // 0x292734: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292734 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292738:
    // 0x292738: 0x40090  .word       0x00040090                   # mfhi        $zero # 00040080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292738u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29273c:
    // 0x29273c: 0x0  nop
    ctx->pc = 0x29273cu;
    // NOP
label_292740:
    // 0x292740: 0x8382  srl         $s0, $zero, 14
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_292744:
    // 0x292744: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292744u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292748:
    // 0x292748: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29274c:
    // 0x29274c: 0x0  nop
    ctx->pc = 0x29274cu;
    // NOP
label_292750:
    // 0x292750: 0x8384  .word       0x00008384                   # sllv        $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292754:
    // 0x292754: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292754u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292758:
    // 0x292758: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292758u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29275c:
    // 0x29275c: 0x0  nop
    ctx->pc = 0x29275cu;
    // NOP
label_292760:
    // 0x292760: 0x8386  .word       0x00008386                   # srlv        $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292764:
    // 0x292764: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x292764u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_292768:
    // 0x292768: 0x3b9b0  tge         $zero, $v1, 742
    ctx->pc = 0x292768u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29276c:
    // 0x29276c: 0x0  nop
    ctx->pc = 0x29276cu;
    // NOP
label_292770:
    // 0x292770: 0x83fe  dsrl32      $s0, $zero, 15
    ctx->pc = 0x292770u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 15));
label_292774:
    // 0x292774: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292774u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292778:
    // 0x292778: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29277c:
    // 0x29277c: 0x0  nop
    ctx->pc = 0x29277cu;
    // NOP
label_292780:
    // 0x292780: 0x8400  sll         $s0, $zero, 16
    ctx->pc = 0x292780u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_292784:
    // 0x292784: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292784u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292788:
    // 0x292788: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292788u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29278c:
    // 0x29278c: 0x0  nop
    ctx->pc = 0x29278cu;
    // NOP
label_292790:
    // 0x292790: 0x8402  srl         $s0, $zero, 16
    ctx->pc = 0x292790u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_292794:
    // 0x292794: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292798:
    // 0x292798: 0x37790  .word       0x00037790                   # mfhi        $t6 # 00030780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292798u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_29279c:
    // 0x29279c: 0x0  nop
    ctx->pc = 0x29279cu;
    // NOP
label_2927a0:
    // 0x2927a0: 0x8471  tgeu        $zero, $zero, 529
    ctx->pc = 0x2927a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2927a4:
    // 0x2927a4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927a8:
    // 0x2927a8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2927a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2927ac:
    // 0x2927ac: 0x0  nop
    ctx->pc = 0x2927acu;
    // NOP
label_2927b0:
    // 0x2927b0: 0x8473  tltu        $zero, $zero, 529
    ctx->pc = 0x2927b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2927b4:
    // 0x2927b4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927b8:
    // 0x2927b8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2927b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2927bc:
    // 0x2927bc: 0x0  nop
    ctx->pc = 0x2927bcu;
    // NOP
label_2927c0:
    // 0x2927c0: 0x8475  .word       0x00008475                   # INVALID     $zero, $zero, -0x7B8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2927C0 raw=0x00008475"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2927c4:
    // 0x2927c4: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2927C4 raw=0x00000077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2927c8:
    // 0x2927c8: 0x3b470  tge         $zero, $v1, 721
    ctx->pc = 0x2927c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2927cc:
    // 0x2927cc: 0x0  nop
    ctx->pc = 0x2927ccu;
    // NOP
label_2927d0:
    // 0x2927d0: 0x84ec  .word       0x000084EC                   # dadd        $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2927d4:
    // 0x2927d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927d8:
    // 0x2927d8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2927d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2927dc:
    // 0x2927dc: 0x0  nop
    ctx->pc = 0x2927dcu;
    // NOP
label_2927e0:
    // 0x2927e0: 0x84ee  .word       0x000084EE                   # dsub        $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2927e4:
    // 0x2927e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2927e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2927e8:
    // 0x2927e8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2927e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2927ec:
    // 0x2927ec: 0x0  nop
    ctx->pc = 0x2927ecu;
    // NOP
label_2927f0:
    // 0x2927f0: 0x84f0  tge         $zero, $zero, 531
    ctx->pc = 0x2927f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2927f4:
    // 0x2927f4: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2927F4 raw=0x0000005E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2927f8:
    // 0x2927f8: 0x2e9e0  .word       0x0002E9E0                   # add         $sp, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2927f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_2927fc:
    // 0x2927fc: 0x0  nop
    ctx->pc = 0x2927fcu;
    // NOP
label_292800:
    // 0x292800: 0x854e  .word       0x0000854E                   # INVALID     $zero, $zero, -0x7AB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292800 raw=0x0000854E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292804:
    // 0x292804: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292804u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292808:
    // 0x292808: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29280c:
    // 0x29280c: 0x0  nop
    ctx->pc = 0x29280cu;
    // NOP
label_292810:
    // 0x292810: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292810u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_292814:
    // 0x292814: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292814u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292818:
    // 0x292818: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292818u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29281c:
    // 0x29281c: 0x0  nop
    ctx->pc = 0x29281cu;
    // NOP
label_292820:
    // 0x292820: 0x8552  .word       0x00008552                   # mflo        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292820u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_292824:
    // 0x292824: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292824 raw=0x00000079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292828:
    // 0x292828: 0x3c0f0  tge         $zero, $v1, 771
    ctx->pc = 0x292828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29282c:
    // 0x29282c: 0x0  nop
    ctx->pc = 0x29282cu;
    // NOP
label_292830:
    // 0x292830: 0x85cb  .word       0x000085CB                   # movn        $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292830u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_292834:
    // 0x292834: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292838:
    // 0x292838: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29283c:
    // 0x29283c: 0x0  nop
    ctx->pc = 0x29283cu;
    // NOP
label_292840:
    // 0x292840: 0x85cd  break       0, 535
    ctx->pc = 0x292840u;
    runtime->handleBreak(rdram, ctx);
label_292844:
    // 0x292844: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292844u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292848:
    // 0x292848: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292848u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29284c:
    // 0x29284c: 0x0  nop
    ctx->pc = 0x29284cu;
    // NOP
label_292850:
    // 0x292850: 0x85cf  .word       0x000085CF                   # sync.p # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292854:
    // 0x292854: 0x7a  dsrl        $zero, $zero, 1
    ctx->pc = 0x292854u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 1);
label_292858:
    // 0x292858: 0x3c970  tge         $zero, $v1, 805
    ctx->pc = 0x292858u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29285c:
    // 0x29285c: 0x0  nop
    ctx->pc = 0x29285cu;
    // NOP
label_292860:
    // 0x292860: 0x8649  .word       0x00008649                   # jalr        $s0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
label_292864:
    if (ctx->pc == 0x292864u) {
        ctx->pc = 0x292864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292860u;
        // 0x292864: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292868u;
        goto label_292868;
    }
    ctx->pc = 0x292860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x292868u);
        ctx->pc = 0x292864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292860u;
        // 0x292864: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292860u, 0x292868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292868u;
label_292868:
    // 0x292868: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29286c:
    // 0x29286c: 0x0  nop
    ctx->pc = 0x29286cu;
    // NOP
label_292870:
    // 0x292870: 0x864b  .word       0x0000864B                   # movn        $s0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292870u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_292874:
    // 0x292874: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292878:
    // 0x292878: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292878u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29287c:
    // 0x29287c: 0x0  nop
    ctx->pc = 0x29287cu;
    // NOP
label_292880:
    // 0x292880: 0x864d  break       0, 537
    ctx->pc = 0x292880u;
    runtime->handleBreak(rdram, ctx);
label_292884:
    // 0x292884: 0x8f  sync
    ctx->pc = 0x292884u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292888:
    // 0x292888: 0x47060  .word       0x00047060                   # add         $t6, $zero, $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_29288c:
    // 0x29288c: 0x0  nop
    ctx->pc = 0x29288cu;
    // NOP
label_292890:
    // 0x292890: 0x86dc  .word       0x000086DC                   # dmult       $zero, $zero # 000086C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292890 raw=0x000086DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292894:
    // 0x292894: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292898:
    // 0x292898: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29289c:
    // 0x29289c: 0x0  nop
    ctx->pc = 0x29289cu;
    // NOP
label_2928a0:
    // 0x2928a0: 0x86de  .word       0x000086DE                   # ddiv        $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2928A0 raw=0x000086DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2928a4:
    // 0x2928a4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2928a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2928a8:
    // 0x2928a8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2928ac:
    // 0x2928ac: 0x0  nop
    ctx->pc = 0x2928acu;
    // NOP
label_2928b0:
    // 0x2928b0: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2928b4:
    // 0x2928b4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2928b4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2928b8:
    // 0x2928b8: 0x18c40  sll         $s1, $at, 17
    ctx->pc = 0x2928b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_2928bc:
    // 0x2928bc: 0x0  nop
    ctx->pc = 0x2928bcu;
    // NOP
label_2928c0:
    // 0x2928c0: 0x8712  .word       0x00008712                   # mflo        $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928c0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_2928c4:
    // 0x2928c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2928c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2928c8:
    // 0x2928c8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2928c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2928cc:
    // 0x2928cc: 0x0  nop
    ctx->pc = 0x2928ccu;
    // NOP
label_2928d0:
    // 0x2928d0: 0x8714  .word       0x00008714                   # dsllv       $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2928d4:
    // 0x2928d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2928D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2928d8:
    // 0x2928d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2928d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2928dc:
    // 0x2928dc: 0x0  nop
    ctx->pc = 0x2928dcu;
    // NOP
label_2928e0:
    // 0x2928e0: 0x8715  .word       0x00008715                   # INVALID     $zero, $zero, -0x78EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2928E0 raw=0x00008715"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2928e4:
    // 0x2928e4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2928e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2928e8:
    // 0x2928e8: 0x18c00  sll         $s1, $at, 16
    ctx->pc = 0x2928e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_2928ec:
    // 0x2928ec: 0x0  nop
    ctx->pc = 0x2928ecu;
    // NOP
label_2928f0:
    // 0x2928f0: 0x8747  .word       0x00008747                   # srav        $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2928f0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2928f4:
    // 0x2928f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2928f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2928f8:
    // 0x2928f8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2928fc:
    // 0x2928fc: 0x0  nop
    ctx->pc = 0x2928fcu;
    // NOP
label_292900:
    // 0x292900: 0x8749  .word       0x00008749                   # jalr        $s0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_292904:
    if (ctx->pc == 0x292904u) {
        ctx->pc = 0x292904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292900u;
        // 0x292904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292904 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x292908u;
        goto label_292908;
    }
    ctx->pc = 0x292900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x292908u);
        ctx->pc = 0x292904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292900u;
        // 0x292904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292904 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292900u, 0x292908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292908u;
label_292908:
    // 0x292908: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x292908u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29290c:
    // 0x29290c: 0x0  nop
    ctx->pc = 0x29290cu;
    // NOP
label_292910:
    // 0x292910: 0x874a  .word       0x0000874A                   # movz        $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292910u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_292914:
    // 0x292914: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x292914u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292918:
    // 0x292918: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x292918u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_29291c:
    // 0x29291c: 0x0  nop
    ctx->pc = 0x29291cu;
    // NOP
label_292920:
    // 0x292920: 0x87bd  .word       0x000087BD                   # INVALID     $zero, $zero, -0x7843 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292920 raw=0x000087BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292924:
    // 0x292924: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292924u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292928:
    // 0x292928: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29292c:
    // 0x29292c: 0x0  nop
    ctx->pc = 0x29292cu;
    // NOP
label_292930:
    // 0x292930: 0x87bf  dsra32      $s0, $zero, 30
    ctx->pc = 0x292930u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 30));
label_292934:
    // 0x292934: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292934u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292938:
    // 0x292938: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292938u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29293c:
    // 0x29293c: 0x0  nop
    ctx->pc = 0x29293cu;
    // NOP
label_292940:
    // 0x292940: 0x87c1  .word       0x000087C1                   # INVALID     $zero, $zero, -0x783F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292940 raw=0x000087C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292944:
    // 0x292944: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x292944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292948:
    // 0x292948: 0x57a10  .word       0x00057A10                   # mfhi        $t7 # 00050200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292948u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29294c:
    // 0x29294c: 0x0  nop
    ctx->pc = 0x29294cu;
    // NOP
label_292950:
    // 0x292950: 0x8871  tgeu        $zero, $zero, 545
    ctx->pc = 0x292950u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292954:
    // 0x292954: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292958:
    // 0x292958: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29295c:
    // 0x29295c: 0x0  nop
    ctx->pc = 0x29295cu;
    // NOP
label_292960:
    // 0x292960: 0x8873  tltu        $zero, $zero, 545
    ctx->pc = 0x292960u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292964:
    // 0x292964: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292964u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292968:
    // 0x292968: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292968u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29296c:
    // 0x29296c: 0x0  nop
    ctx->pc = 0x29296cu;
    // NOP
    ctx->pc = 0x292970u;
    return;
}
