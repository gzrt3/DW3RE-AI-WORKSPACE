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


void FUN_0019b850_part512(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x295080u: goto label_295080;
        case 0x295084u: goto label_295084;
        case 0x295088u: goto label_295088;
        case 0x29508cu: goto label_29508c;
        case 0x295090u: goto label_295090;
        case 0x295094u: goto label_295094;
        case 0x295098u: goto label_295098;
        case 0x29509cu: goto label_29509c;
        case 0x2950a0u: goto label_2950a0;
        case 0x2950a4u: goto label_2950a4;
        case 0x2950a8u: goto label_2950a8;
        case 0x2950acu: goto label_2950ac;
        case 0x2950b0u: goto label_2950b0;
        case 0x2950b4u: goto label_2950b4;
        case 0x2950b8u: goto label_2950b8;
        case 0x2950bcu: goto label_2950bc;
        case 0x2950c0u: goto label_2950c0;
        case 0x2950c4u: goto label_2950c4;
        case 0x2950c8u: goto label_2950c8;
        case 0x2950ccu: goto label_2950cc;
        case 0x2950d0u: goto label_2950d0;
        case 0x2950d4u: goto label_2950d4;
        case 0x2950d8u: goto label_2950d8;
        case 0x2950dcu: goto label_2950dc;
        case 0x2950e0u: goto label_2950e0;
        case 0x2950e4u: goto label_2950e4;
        case 0x2950e8u: goto label_2950e8;
        case 0x2950ecu: goto label_2950ec;
        case 0x2950f0u: goto label_2950f0;
        case 0x2950f4u: goto label_2950f4;
        case 0x2950f8u: goto label_2950f8;
        case 0x2950fcu: goto label_2950fc;
        case 0x295100u: goto label_295100;
        case 0x295104u: goto label_295104;
        case 0x295108u: goto label_295108;
        case 0x29510cu: goto label_29510c;
        case 0x295110u: goto label_295110;
        case 0x295114u: goto label_295114;
        case 0x295118u: goto label_295118;
        case 0x29511cu: goto label_29511c;
        case 0x295120u: goto label_295120;
        case 0x295124u: goto label_295124;
        case 0x295128u: goto label_295128;
        case 0x29512cu: goto label_29512c;
        case 0x295130u: goto label_295130;
        case 0x295134u: goto label_295134;
        case 0x295138u: goto label_295138;
        case 0x29513cu: goto label_29513c;
        case 0x295140u: goto label_295140;
        case 0x295144u: goto label_295144;
        case 0x295148u: goto label_295148;
        case 0x29514cu: goto label_29514c;
        case 0x295150u: goto label_295150;
        case 0x295154u: goto label_295154;
        case 0x295158u: goto label_295158;
        case 0x29515cu: goto label_29515c;
        case 0x295160u: goto label_295160;
        case 0x295164u: goto label_295164;
        case 0x295168u: goto label_295168;
        case 0x29516cu: goto label_29516c;
        case 0x295170u: goto label_295170;
        case 0x295174u: goto label_295174;
        case 0x295178u: goto label_295178;
        case 0x29517cu: goto label_29517c;
        case 0x295180u: goto label_295180;
        case 0x295184u: goto label_295184;
        case 0x295188u: goto label_295188;
        case 0x29518cu: goto label_29518c;
        case 0x295190u: goto label_295190;
        case 0x295194u: goto label_295194;
        case 0x295198u: goto label_295198;
        case 0x29519cu: goto label_29519c;
        case 0x2951a0u: goto label_2951a0;
        case 0x2951a4u: goto label_2951a4;
        case 0x2951a8u: goto label_2951a8;
        case 0x2951acu: goto label_2951ac;
        case 0x2951b0u: goto label_2951b0;
        case 0x2951b4u: goto label_2951b4;
        case 0x2951b8u: goto label_2951b8;
        case 0x2951bcu: goto label_2951bc;
        case 0x2951c0u: goto label_2951c0;
        case 0x2951c4u: goto label_2951c4;
        case 0x2951c8u: goto label_2951c8;
        case 0x2951ccu: goto label_2951cc;
        case 0x2951d0u: goto label_2951d0;
        case 0x2951d4u: goto label_2951d4;
        case 0x2951d8u: goto label_2951d8;
        case 0x2951dcu: goto label_2951dc;
        case 0x2951e0u: goto label_2951e0;
        case 0x2951e4u: goto label_2951e4;
        case 0x2951e8u: goto label_2951e8;
        case 0x2951ecu: goto label_2951ec;
        case 0x2951f0u: goto label_2951f0;
        case 0x2951f4u: goto label_2951f4;
        case 0x2951f8u: goto label_2951f8;
        case 0x2951fcu: goto label_2951fc;
        case 0x295200u: goto label_295200;
        case 0x295204u: goto label_295204;
        case 0x295208u: goto label_295208;
        case 0x29520cu: goto label_29520c;
        case 0x295210u: goto label_295210;
        case 0x295214u: goto label_295214;
        case 0x295218u: goto label_295218;
        case 0x29521cu: goto label_29521c;
        case 0x295220u: goto label_295220;
        case 0x295224u: goto label_295224;
        case 0x295228u: goto label_295228;
        case 0x29522cu: goto label_29522c;
        case 0x295230u: goto label_295230;
        case 0x295234u: goto label_295234;
        case 0x295238u: goto label_295238;
        case 0x29523cu: goto label_29523c;
        case 0x295240u: goto label_295240;
        case 0x295244u: goto label_295244;
        case 0x295248u: goto label_295248;
        case 0x29524cu: goto label_29524c;
        case 0x295250u: goto label_295250;
        case 0x295254u: goto label_295254;
        case 0x295258u: goto label_295258;
        case 0x29525cu: goto label_29525c;
        case 0x295260u: goto label_295260;
        case 0x295264u: goto label_295264;
        case 0x295268u: goto label_295268;
        case 0x29526cu: goto label_29526c;
        case 0x295270u: goto label_295270;
        case 0x295274u: goto label_295274;
        case 0x295278u: goto label_295278;
        case 0x29527cu: goto label_29527c;
        case 0x295280u: goto label_295280;
        case 0x295284u: goto label_295284;
        case 0x295288u: goto label_295288;
        case 0x29528cu: goto label_29528c;
        case 0x295290u: goto label_295290;
        case 0x295294u: goto label_295294;
        case 0x295298u: goto label_295298;
        case 0x29529cu: goto label_29529c;
        case 0x2952a0u: goto label_2952a0;
        case 0x2952a4u: goto label_2952a4;
        case 0x2952a8u: goto label_2952a8;
        case 0x2952acu: goto label_2952ac;
        case 0x2952b0u: goto label_2952b0;
        case 0x2952b4u: goto label_2952b4;
        case 0x2952b8u: goto label_2952b8;
        case 0x2952bcu: goto label_2952bc;
        case 0x2952c0u: goto label_2952c0;
        case 0x2952c4u: goto label_2952c4;
        case 0x2952c8u: goto label_2952c8;
        case 0x2952ccu: goto label_2952cc;
        case 0x2952d0u: goto label_2952d0;
        case 0x2952d4u: goto label_2952d4;
        case 0x2952d8u: goto label_2952d8;
        case 0x2952dcu: goto label_2952dc;
        case 0x2952e0u: goto label_2952e0;
        case 0x2952e4u: goto label_2952e4;
        case 0x2952e8u: goto label_2952e8;
        case 0x2952ecu: goto label_2952ec;
        case 0x2952f0u: goto label_2952f0;
        case 0x2952f4u: goto label_2952f4;
        case 0x2952f8u: goto label_2952f8;
        case 0x2952fcu: goto label_2952fc;
        case 0x295300u: goto label_295300;
        case 0x295304u: goto label_295304;
        case 0x295308u: goto label_295308;
        case 0x29530cu: goto label_29530c;
        case 0x295310u: goto label_295310;
        case 0x295314u: goto label_295314;
        case 0x295318u: goto label_295318;
        case 0x29531cu: goto label_29531c;
        case 0x295320u: goto label_295320;
        case 0x295324u: goto label_295324;
        case 0x295328u: goto label_295328;
        case 0x29532cu: goto label_29532c;
        case 0x295330u: goto label_295330;
        case 0x295334u: goto label_295334;
        case 0x295338u: goto label_295338;
        case 0x29533cu: goto label_29533c;
        case 0x295340u: goto label_295340;
        case 0x295344u: goto label_295344;
        case 0x295348u: goto label_295348;
        case 0x29534cu: goto label_29534c;
        case 0x295350u: goto label_295350;
        case 0x295354u: goto label_295354;
        case 0x295358u: goto label_295358;
        case 0x29535cu: goto label_29535c;
        case 0x295360u: goto label_295360;
        case 0x295364u: goto label_295364;
        case 0x295368u: goto label_295368;
        case 0x29536cu: goto label_29536c;
        case 0x295370u: goto label_295370;
        case 0x295374u: goto label_295374;
        case 0x295378u: goto label_295378;
        case 0x29537cu: goto label_29537c;
        case 0x295380u: goto label_295380;
        case 0x295384u: goto label_295384;
        case 0x295388u: goto label_295388;
        case 0x29538cu: goto label_29538c;
        case 0x295390u: goto label_295390;
        case 0x295394u: goto label_295394;
        case 0x295398u: goto label_295398;
        case 0x29539cu: goto label_29539c;
        case 0x2953a0u: goto label_2953a0;
        case 0x2953a4u: goto label_2953a4;
        case 0x2953a8u: goto label_2953a8;
        case 0x2953acu: goto label_2953ac;
        case 0x2953b0u: goto label_2953b0;
        case 0x2953b4u: goto label_2953b4;
        case 0x2953b8u: goto label_2953b8;
        case 0x2953bcu: goto label_2953bc;
        case 0x2953c0u: goto label_2953c0;
        case 0x2953c4u: goto label_2953c4;
        case 0x2953c8u: goto label_2953c8;
        case 0x2953ccu: goto label_2953cc;
        case 0x2953d0u: goto label_2953d0;
        case 0x2953d4u: goto label_2953d4;
        case 0x2953d8u: goto label_2953d8;
        case 0x2953dcu: goto label_2953dc;
        case 0x2953e0u: goto label_2953e0;
        case 0x2953e4u: goto label_2953e4;
        case 0x2953e8u: goto label_2953e8;
        case 0x2953ecu: goto label_2953ec;
        case 0x2953f0u: goto label_2953f0;
        case 0x2953f4u: goto label_2953f4;
        case 0x2953f8u: goto label_2953f8;
        case 0x2953fcu: goto label_2953fc;
        case 0x295400u: goto label_295400;
        case 0x295404u: goto label_295404;
        case 0x295408u: goto label_295408;
        case 0x29540cu: goto label_29540c;
        case 0x295410u: goto label_295410;
        case 0x295414u: goto label_295414;
        case 0x295418u: goto label_295418;
        case 0x29541cu: goto label_29541c;
        case 0x295420u: goto label_295420;
        case 0x295424u: goto label_295424;
        case 0x295428u: goto label_295428;
        case 0x29542cu: goto label_29542c;
        case 0x295430u: goto label_295430;
        case 0x295434u: goto label_295434;
        case 0x295438u: goto label_295438;
        case 0x29543cu: goto label_29543c;
        case 0x295440u: goto label_295440;
        case 0x295444u: goto label_295444;
        case 0x295448u: goto label_295448;
        case 0x29544cu: goto label_29544c;
        case 0x295450u: goto label_295450;
        case 0x295454u: goto label_295454;
        case 0x295458u: goto label_295458;
        case 0x29545cu: goto label_29545c;
        case 0x295460u: goto label_295460;
        case 0x295464u: goto label_295464;
        case 0x295468u: goto label_295468;
        case 0x29546cu: goto label_29546c;
        case 0x295470u: goto label_295470;
        case 0x295474u: goto label_295474;
        case 0x295478u: goto label_295478;
        case 0x29547cu: goto label_29547c;
        case 0x295480u: goto label_295480;
        case 0x295484u: goto label_295484;
        case 0x295488u: goto label_295488;
        case 0x29548cu: goto label_29548c;
        case 0x295490u: goto label_295490;
        case 0x295494u: goto label_295494;
        case 0x295498u: goto label_295498;
        case 0x29549cu: goto label_29549c;
        case 0x2954a0u: goto label_2954a0;
        case 0x2954a4u: goto label_2954a4;
        case 0x2954a8u: goto label_2954a8;
        case 0x2954acu: goto label_2954ac;
        case 0x2954b0u: goto label_2954b0;
        case 0x2954b4u: goto label_2954b4;
        case 0x2954b8u: goto label_2954b8;
        case 0x2954bcu: goto label_2954bc;
        case 0x2954c0u: goto label_2954c0;
        case 0x2954c4u: goto label_2954c4;
        case 0x2954c8u: goto label_2954c8;
        case 0x2954ccu: goto label_2954cc;
        case 0x2954d0u: goto label_2954d0;
        case 0x2954d4u: goto label_2954d4;
        case 0x2954d8u: goto label_2954d8;
        case 0x2954dcu: goto label_2954dc;
        case 0x2954e0u: goto label_2954e0;
        case 0x2954e4u: goto label_2954e4;
        case 0x2954e8u: goto label_2954e8;
        case 0x2954ecu: goto label_2954ec;
        case 0x2954f0u: goto label_2954f0;
        case 0x2954f4u: goto label_2954f4;
        case 0x2954f8u: goto label_2954f8;
        case 0x2954fcu: goto label_2954fc;
        case 0x295500u: goto label_295500;
        case 0x295504u: goto label_295504;
        case 0x295508u: goto label_295508;
        case 0x29550cu: goto label_29550c;
        case 0x295510u: goto label_295510;
        case 0x295514u: goto label_295514;
        case 0x295518u: goto label_295518;
        case 0x29551cu: goto label_29551c;
        case 0x295520u: goto label_295520;
        case 0x295524u: goto label_295524;
        case 0x295528u: goto label_295528;
        case 0x29552cu: goto label_29552c;
        case 0x295530u: goto label_295530;
        case 0x295534u: goto label_295534;
        case 0x295538u: goto label_295538;
        case 0x29553cu: goto label_29553c;
        case 0x295540u: goto label_295540;
        case 0x295544u: goto label_295544;
        case 0x295548u: goto label_295548;
        case 0x29554cu: goto label_29554c;
        case 0x295550u: goto label_295550;
        case 0x295554u: goto label_295554;
        case 0x295558u: goto label_295558;
        case 0x29555cu: goto label_29555c;
        case 0x295560u: goto label_295560;
        case 0x295564u: goto label_295564;
        case 0x295568u: goto label_295568;
        case 0x29556cu: goto label_29556c;
        case 0x295570u: goto label_295570;
        case 0x295574u: goto label_295574;
        case 0x295578u: goto label_295578;
        case 0x29557cu: goto label_29557c;
        case 0x295580u: goto label_295580;
        case 0x295584u: goto label_295584;
        case 0x295588u: goto label_295588;
        case 0x29558cu: goto label_29558c;
        case 0x295590u: goto label_295590;
        case 0x295594u: goto label_295594;
        case 0x295598u: goto label_295598;
        case 0x29559cu: goto label_29559c;
        case 0x2955a0u: goto label_2955a0;
        case 0x2955a4u: goto label_2955a4;
        case 0x2955a8u: goto label_2955a8;
        case 0x2955acu: goto label_2955ac;
        case 0x2955b0u: goto label_2955b0;
        case 0x2955b4u: goto label_2955b4;
        case 0x2955b8u: goto label_2955b8;
        case 0x2955bcu: goto label_2955bc;
        case 0x2955c0u: goto label_2955c0;
        case 0x2955c4u: goto label_2955c4;
        case 0x2955c8u: goto label_2955c8;
        case 0x2955ccu: goto label_2955cc;
        case 0x2955d0u: goto label_2955d0;
        case 0x2955d4u: goto label_2955d4;
        case 0x2955d8u: goto label_2955d8;
        case 0x2955dcu: goto label_2955dc;
        case 0x2955e0u: goto label_2955e0;
        case 0x2955e4u: goto label_2955e4;
        case 0x2955e8u: goto label_2955e8;
        case 0x2955ecu: goto label_2955ec;
        case 0x2955f0u: goto label_2955f0;
        case 0x2955f4u: goto label_2955f4;
        case 0x2955f8u: goto label_2955f8;
        case 0x2955fcu: goto label_2955fc;
        case 0x295600u: goto label_295600;
        case 0x295604u: goto label_295604;
        case 0x295608u: goto label_295608;
        case 0x29560cu: goto label_29560c;
        case 0x295610u: goto label_295610;
        case 0x295614u: goto label_295614;
        case 0x295618u: goto label_295618;
        case 0x29561cu: goto label_29561c;
        case 0x295620u: goto label_295620;
        case 0x295624u: goto label_295624;
        case 0x295628u: goto label_295628;
        case 0x29562cu: goto label_29562c;
        case 0x295630u: goto label_295630;
        case 0x295634u: goto label_295634;
        case 0x295638u: goto label_295638;
        case 0x29563cu: goto label_29563c;
        case 0x295640u: goto label_295640;
        case 0x295644u: goto label_295644;
        case 0x295648u: goto label_295648;
        case 0x29564cu: goto label_29564c;
        case 0x295650u: goto label_295650;
        case 0x295654u: goto label_295654;
        case 0x295658u: goto label_295658;
        case 0x29565cu: goto label_29565c;
        case 0x295660u: goto label_295660;
        case 0x295664u: goto label_295664;
        case 0x295668u: goto label_295668;
        case 0x29566cu: goto label_29566c;
        case 0x295670u: goto label_295670;
        case 0x295674u: goto label_295674;
        case 0x295678u: goto label_295678;
        case 0x29567cu: goto label_29567c;
        case 0x295680u: goto label_295680;
        case 0x295684u: goto label_295684;
        case 0x295688u: goto label_295688;
        case 0x29568cu: goto label_29568c;
        case 0x295690u: goto label_295690;
        case 0x295694u: goto label_295694;
        case 0x295698u: goto label_295698;
        case 0x29569cu: goto label_29569c;
        case 0x2956a0u: goto label_2956a0;
        case 0x2956a4u: goto label_2956a4;
        case 0x2956a8u: goto label_2956a8;
        case 0x2956acu: goto label_2956ac;
        case 0x2956b0u: goto label_2956b0;
        case 0x2956b4u: goto label_2956b4;
        case 0x2956b8u: goto label_2956b8;
        case 0x2956bcu: goto label_2956bc;
        case 0x2956c0u: goto label_2956c0;
        case 0x2956c4u: goto label_2956c4;
        case 0x2956c8u: goto label_2956c8;
        case 0x2956ccu: goto label_2956cc;
        case 0x2956d0u: goto label_2956d0;
        case 0x2956d4u: goto label_2956d4;
        case 0x2956d8u: goto label_2956d8;
        case 0x2956dcu: goto label_2956dc;
        case 0x2956e0u: goto label_2956e0;
        case 0x2956e4u: goto label_2956e4;
        case 0x2956e8u: goto label_2956e8;
        case 0x2956ecu: goto label_2956ec;
        case 0x2956f0u: goto label_2956f0;
        case 0x2956f4u: goto label_2956f4;
        case 0x2956f8u: goto label_2956f8;
        case 0x2956fcu: goto label_2956fc;
        case 0x295700u: goto label_295700;
        case 0x295704u: goto label_295704;
        case 0x295708u: goto label_295708;
        case 0x29570cu: goto label_29570c;
        case 0x295710u: goto label_295710;
        case 0x295714u: goto label_295714;
        case 0x295718u: goto label_295718;
        case 0x29571cu: goto label_29571c;
        case 0x295720u: goto label_295720;
        case 0x295724u: goto label_295724;
        case 0x295728u: goto label_295728;
        case 0x29572cu: goto label_29572c;
        case 0x295730u: goto label_295730;
        case 0x295734u: goto label_295734;
        case 0x295738u: goto label_295738;
        case 0x29573cu: goto label_29573c;
        case 0x295740u: goto label_295740;
        case 0x295744u: goto label_295744;
        case 0x295748u: goto label_295748;
        case 0x29574cu: goto label_29574c;
        case 0x295750u: goto label_295750;
        case 0x295754u: goto label_295754;
        case 0x295758u: goto label_295758;
        case 0x29575cu: goto label_29575c;
        case 0x295760u: goto label_295760;
        case 0x295764u: goto label_295764;
        case 0x295768u: goto label_295768;
        case 0x29576cu: goto label_29576c;
        case 0x295770u: goto label_295770;
        case 0x295774u: goto label_295774;
        case 0x295778u: goto label_295778;
        case 0x29577cu: goto label_29577c;
        case 0x295780u: goto label_295780;
        case 0x295784u: goto label_295784;
        case 0x295788u: goto label_295788;
        case 0x29578cu: goto label_29578c;
        case 0x295790u: goto label_295790;
        case 0x295794u: goto label_295794;
        case 0x295798u: goto label_295798;
        case 0x29579cu: goto label_29579c;
        case 0x2957a0u: goto label_2957a0;
        case 0x2957a4u: goto label_2957a4;
        case 0x2957a8u: goto label_2957a8;
        case 0x2957acu: goto label_2957ac;
        case 0x2957b0u: goto label_2957b0;
        case 0x2957b4u: goto label_2957b4;
        case 0x2957b8u: goto label_2957b8;
        case 0x2957bcu: goto label_2957bc;
        case 0x2957c0u: goto label_2957c0;
        case 0x2957c4u: goto label_2957c4;
        case 0x2957c8u: goto label_2957c8;
        case 0x2957ccu: goto label_2957cc;
        case 0x2957d0u: goto label_2957d0;
        case 0x2957d4u: goto label_2957d4;
        case 0x2957d8u: goto label_2957d8;
        case 0x2957dcu: goto label_2957dc;
        case 0x2957e0u: goto label_2957e0;
        case 0x2957e4u: goto label_2957e4;
        case 0x2957e8u: goto label_2957e8;
        case 0x2957ecu: goto label_2957ec;
        case 0x2957f0u: goto label_2957f0;
        case 0x2957f4u: goto label_2957f4;
        case 0x2957f8u: goto label_2957f8;
        case 0x2957fcu: goto label_2957fc;
        case 0x295800u: goto label_295800;
        case 0x295804u: goto label_295804;
        case 0x295808u: goto label_295808;
        case 0x29580cu: goto label_29580c;
        case 0x295810u: goto label_295810;
        case 0x295814u: goto label_295814;
        case 0x295818u: goto label_295818;
        case 0x29581cu: goto label_29581c;
        case 0x295820u: goto label_295820;
        case 0x295824u: goto label_295824;
        case 0x295828u: goto label_295828;
        case 0x29582cu: goto label_29582c;
        case 0x295830u: goto label_295830;
        case 0x295834u: goto label_295834;
        case 0x295838u: goto label_295838;
        case 0x29583cu: goto label_29583c;
        case 0x295840u: goto label_295840;
        case 0x295844u: goto label_295844;
        case 0x295848u: goto label_295848;
        case 0x29584cu: goto label_29584c;
        default: return;
    }

label_295080:
    // 0x295080: 0x1720d  break       1, 456
    ctx->pc = 0x295080u;
    runtime->handleBreak(rdram, ctx);
label_295084:
    // 0x295084: 0x1b5  .word       0x000001B5                   # INVALID     $zero, $zero, 0x1B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295084u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295084 raw=0x000001B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295088:
    // 0x295088: 0xda250  .word       0x000DA250                   # mfhi        $s4 # 000D0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295088u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_29508c:
    // 0x29508c: 0x0  nop
    ctx->pc = 0x29508cu;
    // NOP
label_295090:
    // 0x295090: 0x173c2  srl         $t6, $at, 15
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_295094:
    // 0x295094: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_295098:
    // 0x295098: 0x2ff84  .word       0x0002FF84                   # sllv        $ra, $v0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295098u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29509c:
    // 0x29509c: 0x0  nop
    ctx->pc = 0x29509cu;
    // NOP
label_2950a0:
    // 0x2950a0: 0x17422  .word       0x00017422                   # neg         $t6, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2950a4:
    // 0x2950a4: 0x16a  .word       0x0000016A                   # slt         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2950a8:
    // 0x2950a8: 0xb4f3c  dsll32      $t1, $t3, 28
    ctx->pc = 0x2950a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) << (32 + 28));
label_2950ac:
    // 0x2950ac: 0x0  nop
    ctx->pc = 0x2950acu;
    // NOP
label_2950b0:
    // 0x2950b0: 0x1758c  .word       0x0001758C                   # syscall     470 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b0u;
    ctx->pc = 0x2950B4u;
runtime->handleSyscall(rdram, ctx, 0x5D6u);
label_2950b4:
    // 0x2950b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950b8:
    // 0x2950b8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2950bc:
    // 0x2950bc: 0x0  nop
    ctx->pc = 0x2950bcu;
    // NOP
label_2950c0:
    // 0x2950c0: 0x1758d  break       1, 470
    ctx->pc = 0x2950c0u;
    runtime->handleBreak(rdram, ctx);
label_2950c4:
    // 0x2950c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950c8:
    // 0x2950c8: 0x4c  syscall     1
    ctx->pc = 0x2950c8u;
    ctx->pc = 0x2950CCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_2950cc:
    // 0x2950cc: 0x0  nop
    ctx->pc = 0x2950ccu;
    // NOP
label_2950d0:
    // 0x2950d0: 0x1758e  .word       0x0001758E                   # INVALID     $zero, $at, 0x758E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2950D0 raw=0x0001758E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950d4:
    // 0x2950d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950d8:
    // 0x2950d8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2950d8u;
    
label_2950dc:
    // 0x2950dc: 0x0  nop
    ctx->pc = 0x2950dcu;
    // NOP
label_2950e0:
    // 0x2950e0: 0x1758f  .word       0x0001758F                   # sync.p # 00017000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2950e4:
    // 0x2950e4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2950e8:
    // 0x2950e8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2950ec:
    // 0x2950ec: 0x0  nop
    ctx->pc = 0x2950ecu;
    // NOP
label_2950f0:
    // 0x2950f0: 0x175b0  tge         $zero, $at, 470
    ctx->pc = 0x2950f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2950f4:
    // 0x2950f4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x2950f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2950f8:
    // 0x2950f8: 0xb8a0  .word       0x0000B8A0                   # add         $s7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2950fc:
    // 0x2950fc: 0x0  nop
    ctx->pc = 0x2950fcu;
    // NOP
label_295100:
    // 0x295100: 0x175c8  .word       0x000175C8                   # jr          $zero # 000175C0 <InstrIdType: CPU_SPECIAL>
label_295104:
    if (ctx->pc == 0x295104u) {
        ctx->pc = 0x295104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295100u;
        // 0x295104: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295108u;
        goto label_295108;
    }
    ctx->pc = 0x295100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295100u;
        // 0x295104: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295100u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295108u;
label_295108:
    // 0x295108: 0x950  .word       0x00000950                   # mfhi        $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295108u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29510c:
    // 0x29510c: 0x0  nop
    ctx->pc = 0x29510cu;
    // NOP
label_295110:
    // 0x295110: 0x175ca  .word       0x000175CA                   # movz        $t6, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295110u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295114:
    // 0x295114: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295114u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295118:
    // 0x295118: 0x1920  .word       0x00001920                   # add         $v1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295118u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29511c:
    // 0x29511c: 0x0  nop
    ctx->pc = 0x29511cu;
    // NOP
label_295120:
    // 0x295120: 0x175ce  .word       0x000175CE                   # INVALID     $zero, $at, 0x75CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x295120 raw=0x000175CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295124:
    // 0x295124: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x295124u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295128:
    // 0x295128: 0x5840c  .word       0x0005840C                   # syscall     528 # 00050000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295128u;
    ctx->pc = 0x29512Cu;
runtime->handleSyscall(rdram, ctx, 0x1610u);
label_29512c:
    // 0x29512c: 0x0  nop
    ctx->pc = 0x29512cu;
    // NOP
label_295130:
    // 0x295130: 0x1767f  dsra32      $t6, $at, 25
    ctx->pc = 0x295130u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (32 + 25));
label_295134:
    // 0x295134: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x295134u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_295138:
    // 0x295138: 0x15730  tge         $zero, $at, 348
    ctx->pc = 0x295138u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29513c:
    // 0x29513c: 0x0  nop
    ctx->pc = 0x29513cu;
    // NOP
label_295140:
    // 0x295140: 0x176aa  .word       0x000176AA                   # slt         $t6, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295140u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295144:
    // 0x295144: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x295144u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295148:
    // 0x295148: 0x16540  sll         $t4, $at, 21
    ctx->pc = 0x295148u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 21));
label_29514c:
    // 0x29514c: 0x0  nop
    ctx->pc = 0x29514cu;
    // NOP
label_295150:
    // 0x295150: 0x176d7  .word       0x000176D7                   # dsrav       $t6, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295150u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295154:
    // 0x295154: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295154u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295158:
    // 0x295158: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x295158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29515c:
    // 0x29515c: 0x0  nop
    ctx->pc = 0x29515cu;
    // NOP
label_295160:
    // 0x295160: 0x176db  .word       0x000176DB                   # divu        $t6, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295160u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_295164:
    // 0x295164: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295164u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295164 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295168:
    // 0x295168: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x295168u;
    
label_29516c:
    // 0x29516c: 0x0  nop
    ctx->pc = 0x29516cu;
    // NOP
label_295170:
    // 0x295170: 0x176dc  .word       0x000176DC                   # dmult       $zero, $at # 000076C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x295170 raw=0x000176DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295174:
    // 0x295174: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x295174u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295178:
    // 0x295178: 0x19f30  tge         $zero, $at, 636
    ctx->pc = 0x295178u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29517c:
    // 0x29517c: 0x0  nop
    ctx->pc = 0x29517cu;
    // NOP
label_295180:
    // 0x295180: 0x17710  .word       0x00017710                   # mfhi        $t6 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295180u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_295184:
    // 0x295184: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x295184u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_295188:
    // 0x295188: 0x940  sll         $at, $zero, 5
    ctx->pc = 0x295188u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_29518c:
    // 0x29518c: 0x0  nop
    ctx->pc = 0x29518cu;
    // NOP
label_295190:
    // 0x295190: 0x17712  .word       0x00017712                   # mflo        $t6 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295190u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_295194:
    // 0x295194: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295194u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295194 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295198:
    // 0x295198: 0x2060  .word       0x00002060                   # add         $a0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295198u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_29519c:
    // 0x29519c: 0x0  nop
    ctx->pc = 0x29519cu;
    // NOP
label_2951a0:
    // 0x2951a0: 0x17717  .word       0x00017717                   # dsrav       $t6, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951a0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2951a4:
    // 0x2951a4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2951a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2951a8:
    // 0x2951a8: 0x12d0  .word       0x000012D0                   # mfhi        $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2951ac:
    // 0x2951ac: 0x0  nop
    ctx->pc = 0x2951acu;
    // NOP
label_2951b0:
    // 0x2951b0: 0x1771a  .word       0x0001771A                   # div         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951b0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2951b4:
    // 0x2951b4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2951B4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951b8:
    // 0x2951b8: 0x2560  .word       0x00002560                   # add         $a0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2951bc:
    // 0x2951bc: 0x0  nop
    ctx->pc = 0x2951bcu;
    // NOP
label_2951c0:
    // 0x2951c0: 0x1771f  .word       0x0001771F                   # ddivu       $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2951C0 raw=0x0001771F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951c4:
    // 0x2951c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2951C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951c8:
    // 0x2951c8: 0x330  tge         $zero, $zero, 12
    ctx->pc = 0x2951c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2951cc:
    // 0x2951cc: 0x0  nop
    ctx->pc = 0x2951ccu;
    // NOP
label_2951d0:
    // 0x2951d0: 0x17720  .word       0x00017720                   # add         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2951d4:
    // 0x2951d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2951D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951d8:
    // 0x2951d8: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2951dc:
    // 0x2951dc: 0x0  nop
    ctx->pc = 0x2951dcu;
    // NOP
label_2951e0:
    // 0x2951e0: 0x17721  .word       0x00017721                   # addu        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2951e4:
    // 0x2951e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2951e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2951e8:
    // 0x2951e8: 0xb70  tge         $zero, $zero, 45
    ctx->pc = 0x2951e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2951ec:
    // 0x2951ec: 0x0  nop
    ctx->pc = 0x2951ecu;
    // NOP
label_2951f0:
    // 0x2951f0: 0x17723  .word       0x00017723                   # negu        $t6, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2951f4:
    // 0x2951f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2951F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951f8:
    // 0x2951f8: 0x3f0  tge         $zero, $zero, 15
    ctx->pc = 0x2951f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2951fc:
    // 0x2951fc: 0x0  nop
    ctx->pc = 0x2951fcu;
    // NOP
label_295200:
    // 0x295200: 0x17724  .word       0x00017724                   # and         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295200u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_295204:
    // 0x295204: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295204u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295204 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295208:
    // 0x295208: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295208u;
    
label_29520c:
    // 0x29520c: 0x0  nop
    ctx->pc = 0x29520cu;
    // NOP
label_295210:
    // 0x295210: 0x17725  .word       0x00017725                   # or          $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295210u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_295214:
    // 0x295214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295214 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295218:
    // 0x295218: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295218u;
    
label_29521c:
    // 0x29521c: 0x0  nop
    ctx->pc = 0x29521cu;
    // NOP
label_295220:
    // 0x295220: 0x17726  .word       0x00017726                   # xor         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295220u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_295224:
    // 0x295224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295224u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295228:
    // 0x295228: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295228u;
    
label_29522c:
    // 0x29522c: 0x0  nop
    ctx->pc = 0x29522cu;
    // NOP
label_295230:
    // 0x295230: 0x17727  .word       0x00017727                   # nor         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295230u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_295234:
    // 0x295234: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295234u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295234 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295238:
    // 0x295238: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295238u;
    
label_29523c:
    // 0x29523c: 0x0  nop
    ctx->pc = 0x29523cu;
    // NOP
label_295240:
    // 0x295240: 0x17728  .word       0x00017728                   # mfsa        $t6 # 00010700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295240u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_295244:
    // 0x295244: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295244u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295244 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295248:
    // 0x295248: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295248u;
    
label_29524c:
    // 0x29524c: 0x0  nop
    ctx->pc = 0x29524cu;
    // NOP
label_295250:
    // 0x295250: 0x17729  .word       0x00017729                   # mtsa        $zero # 00017700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295250u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_295254:
    // 0x295254: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295254u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295254 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295258:
    // 0x295258: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295258u;
    
label_29525c:
    // 0x29525c: 0x0  nop
    ctx->pc = 0x29525cu;
    // NOP
label_295260:
    // 0x295260: 0x1772a  .word       0x0001772A                   # slt         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295260u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295264:
    // 0x295264: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295264u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295264 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295268:
    // 0x295268: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295268u;
    
label_29526c:
    // 0x29526c: 0x0  nop
    ctx->pc = 0x29526cu;
    // NOP
label_295270:
    // 0x295270: 0x1772b  .word       0x0001772B                   # sltu        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295270u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_295274:
    // 0x295274: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295274 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295278:
    // 0x295278: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295278u;
    
label_29527c:
    // 0x29527c: 0x0  nop
    ctx->pc = 0x29527cu;
    // NOP
label_295280:
    // 0x295280: 0x1772c  .word       0x0001772C                   # dadd        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295280u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_295284:
    // 0x295284: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295284u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295284 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295288:
    // 0x295288: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295288u;
    
label_29528c:
    // 0x29528c: 0x0  nop
    ctx->pc = 0x29528cu;
    // NOP
label_295290:
    // 0x295290: 0x1772d  .word       0x0001772D                   # daddu       $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295290u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_295294:
    // 0x295294: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295294u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295294 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295298:
    // 0x295298: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295298u;
    
label_29529c:
    // 0x29529c: 0x0  nop
    ctx->pc = 0x29529cu;
    // NOP
label_2952a0:
    // 0x2952a0: 0x1772e  .word       0x0001772E                   # dsub        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2952a4:
    // 0x2952a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952a8:
    // 0x2952a8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952a8u;
    
label_2952ac:
    // 0x2952ac: 0x0  nop
    ctx->pc = 0x2952acu;
    // NOP
label_2952b0:
    // 0x2952b0: 0x1772f  .word       0x0001772F                   # dsubu       $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2952b4:
    // 0x2952b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952b8:
    // 0x2952b8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952b8u;
    
label_2952bc:
    // 0x2952bc: 0x0  nop
    ctx->pc = 0x2952bcu;
    // NOP
label_2952c0:
    // 0x2952c0: 0x17730  tge         $zero, $at, 476
    ctx->pc = 0x2952c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952c4:
    // 0x2952c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952c8:
    // 0x2952c8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952c8u;
    
label_2952cc:
    // 0x2952cc: 0x0  nop
    ctx->pc = 0x2952ccu;
    // NOP
label_2952d0:
    // 0x2952d0: 0x17731  tgeu        $zero, $at, 476
    ctx->pc = 0x2952d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952d4:
    // 0x2952d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952d8:
    // 0x2952d8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952d8u;
    
label_2952dc:
    // 0x2952dc: 0x0  nop
    ctx->pc = 0x2952dcu;
    // NOP
label_2952e0:
    // 0x2952e0: 0x17732  tlt         $zero, $at, 476
    ctx->pc = 0x2952e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952e4:
    // 0x2952e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952e8:
    // 0x2952e8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952e8u;
    
label_2952ec:
    // 0x2952ec: 0x0  nop
    ctx->pc = 0x2952ecu;
    // NOP
label_2952f0:
    // 0x2952f0: 0x17733  tltu        $zero, $at, 476
    ctx->pc = 0x2952f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952f4:
    // 0x2952f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952f8:
    // 0x2952f8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952f8u;
    
label_2952fc:
    // 0x2952fc: 0x0  nop
    ctx->pc = 0x2952fcu;
    // NOP
label_295300:
    // 0x295300: 0x17734  teq         $zero, $at, 476
    ctx->pc = 0x295300u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295304:
    // 0x295304: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295304 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295308:
    // 0x295308: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295308u;
    
label_29530c:
    // 0x29530c: 0x0  nop
    ctx->pc = 0x29530cu;
    // NOP
label_295310:
    // 0x295310: 0x17735  .word       0x00017735                   # INVALID     $zero, $at, 0x7735 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295310 raw=0x00017735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295314:
    // 0x295314: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295314u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295314 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295318:
    // 0x295318: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295318u;
    
label_29531c:
    // 0x29531c: 0x0  nop
    ctx->pc = 0x29531cu;
    // NOP
label_295320:
    // 0x295320: 0x17736  tne         $zero, $at, 476
    ctx->pc = 0x295320u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295324:
    // 0x295324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295324 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295328:
    // 0x295328: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295328u;
    
label_29532c:
    // 0x29532c: 0x0  nop
    ctx->pc = 0x29532cu;
    // NOP
label_295330:
    // 0x295330: 0x17737  .word       0x00017737                   # INVALID     $zero, $at, 0x7737 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x295330 raw=0x00017737"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295334:
    // 0x295334: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295334 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295338:
    // 0x295338: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295338u;
    
label_29533c:
    // 0x29533c: 0x0  nop
    ctx->pc = 0x29533cu;
    // NOP
label_295340:
    // 0x295340: 0x17738  dsll        $t6, $at, 28
    ctx->pc = 0x295340u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << 28);
label_295344:
    // 0x295344: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295344 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295348:
    // 0x295348: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295348u;
    
label_29534c:
    // 0x29534c: 0x0  nop
    ctx->pc = 0x29534cu;
    // NOP
label_295350:
    // 0x295350: 0x17739  .word       0x00017739                   # INVALID     $zero, $at, 0x7739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295350 raw=0x00017739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295354:
    // 0x295354: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295354u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295354 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295358:
    // 0x295358: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295358u;
    
label_29535c:
    // 0x29535c: 0x0  nop
    ctx->pc = 0x29535cu;
    // NOP
label_295360:
    // 0x295360: 0x1773a  dsrl        $t6, $at, 28
    ctx->pc = 0x295360u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> 28);
label_295364:
    // 0x295364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295368:
    // 0x295368: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295368u;
    
label_29536c:
    // 0x29536c: 0x0  nop
    ctx->pc = 0x29536cu;
    // NOP
label_295370:
    // 0x295370: 0x1773b  dsra        $t6, $at, 28
    ctx->pc = 0x295370u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> 28);
label_295374:
    // 0x295374: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295374u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295374 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295378:
    // 0x295378: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295378u;
    
label_29537c:
    // 0x29537c: 0x0  nop
    ctx->pc = 0x29537cu;
    // NOP
label_295380:
    // 0x295380: 0x1773c  dsll32      $t6, $at, 28
    ctx->pc = 0x295380u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (32 + 28));
label_295384:
    // 0x295384: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295384u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295384 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295388:
    // 0x295388: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295388u;
    
label_29538c:
    // 0x29538c: 0x0  nop
    ctx->pc = 0x29538cu;
    // NOP
label_295390:
    // 0x295390: 0x1773d  .word       0x0001773D                   # INVALID     $zero, $at, 0x773D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x295390 raw=0x0001773D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295394:
    // 0x295394: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295394 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295398:
    // 0x295398: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295398u;
    
label_29539c:
    // 0x29539c: 0x0  nop
    ctx->pc = 0x29539cu;
    // NOP
label_2953a0:
    // 0x2953a0: 0x1773e  dsrl32      $t6, $at, 28
    ctx->pc = 0x2953a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> (32 + 28));
label_2953a4:
    // 0x2953a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953a8:
    // 0x2953a8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953a8u;
    
label_2953ac:
    // 0x2953ac: 0x0  nop
    ctx->pc = 0x2953acu;
    // NOP
label_2953b0:
    // 0x2953b0: 0x1773f  dsra32      $t6, $at, 28
    ctx->pc = 0x2953b0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (32 + 28));
label_2953b4:
    // 0x2953b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953b8:
    // 0x2953b8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953b8u;
    
label_2953bc:
    // 0x2953bc: 0x0  nop
    ctx->pc = 0x2953bcu;
    // NOP
label_2953c0:
    // 0x2953c0: 0x17740  sll         $t6, $at, 29
    ctx->pc = 0x2953c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 1), 29));
label_2953c4:
    // 0x2953c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953c8:
    // 0x2953c8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953c8u;
    
label_2953cc:
    // 0x2953cc: 0x0  nop
    ctx->pc = 0x2953ccu;
    // NOP
label_2953d0:
    // 0x2953d0: 0x17741  .word       0x00017741                   # INVALID     $zero, $at, 0x7741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953D0 raw=0x00017741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953d4:
    // 0x2953d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953d8:
    // 0x2953d8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953d8u;
    
label_2953dc:
    // 0x2953dc: 0x0  nop
    ctx->pc = 0x2953dcu;
    // NOP
label_2953e0:
    // 0x2953e0: 0x17742  srl         $t6, $at, 29
    ctx->pc = 0x2953e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), 29));
label_2953e4:
    // 0x2953e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953e8:
    // 0x2953e8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953e8u;
    
label_2953ec:
    // 0x2953ec: 0x0  nop
    ctx->pc = 0x2953ecu;
    // NOP
label_2953f0:
    // 0x2953f0: 0x17743  sra         $t6, $at, 29
    ctx->pc = 0x2953f0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), 29));
label_2953f4:
    // 0x2953f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953f8:
    // 0x2953f8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953f8u;
    
label_2953fc:
    // 0x2953fc: 0x0  nop
    ctx->pc = 0x2953fcu;
    // NOP
label_295400:
    // 0x295400: 0x17744  .word       0x00017744                   # sllv        $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295400u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295404:
    // 0x295404: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295404 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295408:
    // 0x295408: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295408u;
    
label_29540c:
    // 0x29540c: 0x0  nop
    ctx->pc = 0x29540cu;
    // NOP
label_295410:
    // 0x295410: 0x17745  .word       0x00017745                   # INVALID     $zero, $at, 0x7745 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295410 raw=0x00017745"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295414:
    // 0x295414: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295414u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295414 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295418:
    // 0x295418: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295418u;
    
label_29541c:
    // 0x29541c: 0x0  nop
    ctx->pc = 0x29541cu;
    // NOP
label_295420:
    // 0x295420: 0x17746  .word       0x00017746                   # srlv        $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295420u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295424:
    // 0x295424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295428:
    // 0x295428: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295428u;
    
label_29542c:
    // 0x29542c: 0x0  nop
    ctx->pc = 0x29542cu;
    // NOP
label_295430:
    // 0x295430: 0x17747  .word       0x00017747                   # srav        $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295430u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295434:
    // 0x295434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295434 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295438:
    // 0x295438: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295438u;
    
label_29543c:
    // 0x29543c: 0x0  nop
    ctx->pc = 0x29543cu;
    // NOP
label_295440:
    // 0x295440: 0x17748  .word       0x00017748                   # jr          $zero # 00017740 <InstrIdType: CPU_SPECIAL>
label_295444:
    if (ctx->pc == 0x295444u) {
        ctx->pc = 0x295444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295440u;
        // 0x295444: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295444 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x295448u;
        goto label_295448;
    }
    ctx->pc = 0x295440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295440u;
        // 0x295444: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295444 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295440u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295448u;
label_295448:
    // 0x295448: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295448u;
    
label_29544c:
    // 0x29544c: 0x0  nop
    ctx->pc = 0x29544cu;
    // NOP
label_295450:
    // 0x295450: 0x17749  .word       0x00017749                   # jalr        $t6, $zero # 00010740 <InstrIdType: CPU_SPECIAL>
label_295454:
    if (ctx->pc == 0x295454u) {
        ctx->pc = 0x295454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295450u;
        // 0x295454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x295458u;
        goto label_295458;
    }
    ctx->pc = 0x295450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x295458u);
        ctx->pc = 0x295454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295450u;
        // 0x295454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295450u, 0x295458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295458u;
label_295458:
    // 0x295458: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295458u;
    
label_29545c:
    // 0x29545c: 0x0  nop
    ctx->pc = 0x29545cu;
    // NOP
label_295460:
    // 0x295460: 0x1774a  .word       0x0001774A                   # movz        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295460u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295464:
    // 0x295464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295468:
    // 0x295468: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295468u;
    
label_29546c:
    // 0x29546c: 0x0  nop
    ctx->pc = 0x29546cu;
    // NOP
label_295470:
    // 0x295470: 0x1774b  .word       0x0001774B                   # movn        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295470u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295474:
    // 0x295474: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295474u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295474 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295478:
    // 0x295478: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295478u;
    
label_29547c:
    // 0x29547c: 0x0  nop
    ctx->pc = 0x29547cu;
    // NOP
label_295480:
    // 0x295480: 0x1774c  .word       0x0001774C                   # syscall     477 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295480u;
    ctx->pc = 0x295484u;
runtime->handleSyscall(rdram, ctx, 0x5DDu);
label_295484:
    // 0x295484: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295484 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295488:
    // 0x295488: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295488u;
    
label_29548c:
    // 0x29548c: 0x0  nop
    ctx->pc = 0x29548cu;
    // NOP
label_295490:
    // 0x295490: 0x1774d  break       1, 477
    ctx->pc = 0x295490u;
    runtime->handleBreak(rdram, ctx);
label_295494:
    // 0x295494: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295494u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295494 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295498:
    // 0x295498: 0x570  tge         $zero, $zero, 21
    ctx->pc = 0x295498u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29549c:
    // 0x29549c: 0x0  nop
    ctx->pc = 0x29549cu;
    // NOP
label_2954a0:
    // 0x2954a0: 0x1774e  .word       0x0001774E                   # INVALID     $zero, $at, 0x774E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2954A0 raw=0x0001774E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954a4:
    // 0x2954a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954a8:
    // 0x2954a8: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x2954a8u;
    
label_2954ac:
    // 0x2954ac: 0x0  nop
    ctx->pc = 0x2954acu;
    // NOP
label_2954b0:
    // 0x2954b0: 0x1774f  .word       0x0001774F                   # sync.p # 00017000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2954b4:
    // 0x2954b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954b8:
    // 0x2954b8: 0x450  .word       0x00000450                   # mfhi        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2954bc:
    // 0x2954bc: 0x0  nop
    ctx->pc = 0x2954bcu;
    // NOP
label_2954c0:
    // 0x2954c0: 0x17750  .word       0x00017750                   # mfhi        $t6 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954c0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2954c4:
    // 0x2954c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954c8:
    // 0x2954c8: 0x240  sll         $zero, $zero, 9
    ctx->pc = 0x2954c8u;
    
label_2954cc:
    // 0x2954cc: 0x0  nop
    ctx->pc = 0x2954ccu;
    // NOP
label_2954d0:
    // 0x2954d0: 0x17751  .word       0x00017751                   # mthi        $zero # 00017740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2954d4:
    // 0x2954d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954d8:
    // 0x2954d8: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x2954d8u;
    
label_2954dc:
    // 0x2954dc: 0x0  nop
    ctx->pc = 0x2954dcu;
    // NOP
label_2954e0:
    // 0x2954e0: 0x17752  .word       0x00017752                   # mflo        $t6 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954e0u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_2954e4:
    // 0x2954e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954e8:
    // 0x2954e8: 0x570  tge         $zero, $zero, 21
    ctx->pc = 0x2954e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2954ec:
    // 0x2954ec: 0x0  nop
    ctx->pc = 0x2954ecu;
    // NOP
label_2954f0:
    // 0x2954f0: 0x17753  .word       0x00017753                   # mtlo        $zero # 00017740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2954f4:
    // 0x2954f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954f8:
    // 0x2954f8: 0x670  tge         $zero, $zero, 25
    ctx->pc = 0x2954f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2954fc:
    // 0x2954fc: 0x0  nop
    ctx->pc = 0x2954fcu;
    // NOP
label_295500:
    // 0x295500: 0x17754  .word       0x00017754                   # dsllv       $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295500u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_295504:
    // 0x295504: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295504u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295504 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295508:
    // 0x295508: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295508u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29550c:
    // 0x29550c: 0x0  nop
    ctx->pc = 0x29550cu;
    // NOP
label_295510:
    // 0x295510: 0x17755  .word       0x00017755                   # INVALID     $zero, $at, 0x7755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x295510 raw=0x00017755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295514:
    // 0x295514: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295514 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295518:
    // 0x295518: 0x3d0  .word       0x000003D0                   # mfhi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295518u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29551c:
    // 0x29551c: 0x0  nop
    ctx->pc = 0x29551cu;
    // NOP
label_295520:
    // 0x295520: 0x17756  .word       0x00017756                   # dsrlv       $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295524:
    // 0x295524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295528:
    // 0x295528: 0x260  .word       0x00000260                   # add         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295528u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29552c:
    // 0x29552c: 0x0  nop
    ctx->pc = 0x29552cu;
    // NOP
label_295530:
    // 0x295530: 0x17757  .word       0x00017757                   # dsrav       $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295530u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295534:
    // 0x295534: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295534u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295534 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295538:
    // 0x295538: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x295538u;
    
label_29553c:
    // 0x29553c: 0x0  nop
    ctx->pc = 0x29553cu;
    // NOP
label_295540:
    // 0x295540: 0x17758  .word       0x00017758                   # mult        $t6, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295544:
    // 0x295544: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295544u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295544 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295548:
    // 0x295548: 0x360  .word       0x00000360                   # add         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29554c:
    // 0x29554c: 0x0  nop
    ctx->pc = 0x29554cu;
    // NOP
label_295550:
    // 0x295550: 0x17759  .word       0x00017759                   # multu       $zero, $at # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295550u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295554:
    // 0x295554: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295554u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295554 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295558:
    // 0x295558: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29555c:
    // 0x29555c: 0x0  nop
    ctx->pc = 0x29555cu;
    // NOP
label_295560:
    // 0x295560: 0x1775a  .word       0x0001775A                   # div         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295560u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_295564:
    // 0x295564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295568:
    // 0x295568: 0x240  sll         $zero, $zero, 9
    ctx->pc = 0x295568u;
    
label_29556c:
    // 0x29556c: 0x0  nop
    ctx->pc = 0x29556cu;
    // NOP
label_295570:
    // 0x295570: 0x1775b  .word       0x0001775B                   # divu        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295570u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_295574:
    // 0x295574: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295574 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295578:
    // 0x295578: 0x3f0  tge         $zero, $zero, 15
    ctx->pc = 0x295578u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29557c:
    // 0x29557c: 0x0  nop
    ctx->pc = 0x29557cu;
    // NOP
label_295580:
    // 0x295580: 0x1775c  .word       0x0001775C                   # dmult       $zero, $at # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x295580 raw=0x0001775C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295584:
    // 0x295584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295584 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295588:
    // 0x295588: 0x580  sll         $zero, $zero, 22
    ctx->pc = 0x295588u;
    
label_29558c:
    // 0x29558c: 0x0  nop
    ctx->pc = 0x29558cu;
    // NOP
label_295590:
    // 0x295590: 0x1775d  .word       0x0001775D                   # dmultu      $zero, $at # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295590 raw=0x0001775D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295594:
    // 0x295594: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295594u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295594 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295598:
    // 0x295598: 0x260  .word       0x00000260                   # add         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29559c:
    // 0x29559c: 0x0  nop
    ctx->pc = 0x29559cu;
    // NOP
label_2955a0:
    // 0x2955a0: 0x1775e  .word       0x0001775E                   # ddiv        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2955A0 raw=0x0001775E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955a4:
    // 0x2955a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955a8:
    // 0x2955a8: 0x310  .word       0x00000310                   # mfhi        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2955ac:
    // 0x2955ac: 0x0  nop
    ctx->pc = 0x2955acu;
    // NOP
label_2955b0:
    // 0x2955b0: 0x1775f  .word       0x0001775F                   # ddivu       $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2955B0 raw=0x0001775F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955b4:
    // 0x2955b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955b8:
    // 0x2955b8: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2955bc:
    // 0x2955bc: 0x0  nop
    ctx->pc = 0x2955bcu;
    // NOP
label_2955c0:
    // 0x2955c0: 0x17760  .word       0x00017760                   # add         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2955c4:
    // 0x2955c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955c8:
    // 0x2955c8: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x2955c8u;
    
label_2955cc:
    // 0x2955cc: 0x0  nop
    ctx->pc = 0x2955ccu;
    // NOP
label_2955d0:
    // 0x2955d0: 0x17761  .word       0x00017761                   # addu        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2955d4:
    // 0x2955d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955d8:
    // 0x2955d8: 0x2f0  tge         $zero, $zero, 11
    ctx->pc = 0x2955d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2955dc:
    // 0x2955dc: 0x0  nop
    ctx->pc = 0x2955dcu;
    // NOP
label_2955e0:
    // 0x2955e0: 0x17762  .word       0x00017762                   # neg         $t6, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2955e4:
    // 0x2955e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955e8:
    // 0x2955e8: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x2955e8u;
    
label_2955ec:
    // 0x2955ec: 0x0  nop
    ctx->pc = 0x2955ecu;
    // NOP
label_2955f0:
    // 0x2955f0: 0x17763  .word       0x00017763                   # negu        $t6, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2955f4:
    // 0x2955f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955f8:
    // 0x2955f8: 0x310  .word       0x00000310                   # mfhi        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955f8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2955fc:
    // 0x2955fc: 0x0  nop
    ctx->pc = 0x2955fcu;
    // NOP
label_295600:
    // 0x295600: 0x17764  .word       0x00017764                   # and         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295600u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_295604:
    // 0x295604: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295604u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295604 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295608:
    // 0x295608: 0x570  tge         $zero, $zero, 21
    ctx->pc = 0x295608u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29560c:
    // 0x29560c: 0x0  nop
    ctx->pc = 0x29560cu;
    // NOP
label_295610:
    // 0x295610: 0x17765  .word       0x00017765                   # or          $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295610u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_295614:
    // 0x295614: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295614u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295614 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295618:
    // 0x295618: 0x480  sll         $zero, $zero, 18
    ctx->pc = 0x295618u;
    
label_29561c:
    // 0x29561c: 0x0  nop
    ctx->pc = 0x29561cu;
    // NOP
label_295620:
    // 0x295620: 0x17766  .word       0x00017766                   # xor         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295620u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_295624:
    // 0x295624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295624 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295628:
    // 0x295628: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x295628u;
    
label_29562c:
    // 0x29562c: 0x0  nop
    ctx->pc = 0x29562cu;
    // NOP
label_295630:
    // 0x295630: 0x17767  .word       0x00017767                   # nor         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295630u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_295634:
    // 0x295634: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295634u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295634 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295638:
    // 0x295638: 0x360  .word       0x00000360                   # add         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295638u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29563c:
    // 0x29563c: 0x0  nop
    ctx->pc = 0x29563cu;
    // NOP
label_295640:
    // 0x295640: 0x17768  .word       0x00017768                   # mfsa        $t6 # 00010740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295640u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_295644:
    // 0x295644: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295644u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295644 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295648:
    // 0x295648: 0x480  sll         $zero, $zero, 18
    ctx->pc = 0x295648u;
    
label_29564c:
    // 0x29564c: 0x0  nop
    ctx->pc = 0x29564cu;
    // NOP
label_295650:
    // 0x295650: 0x17769  .word       0x00017769                   # mtsa        $zero # 00017740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295650u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_295654:
    // 0x295654: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295654u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295654 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295658:
    // 0x295658: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295658u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29565c:
    // 0x29565c: 0x0  nop
    ctx->pc = 0x29565cu;
    // NOP
label_295660:
    // 0x295660: 0x1776a  .word       0x0001776A                   # slt         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295660u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295664:
    // 0x295664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295664 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295668:
    // 0x295668: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x295668u;
    
label_29566c:
    // 0x29566c: 0x0  nop
    ctx->pc = 0x29566cu;
    // NOP
label_295670:
    // 0x295670: 0x1776b  .word       0x0001776B                   # sltu        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295670u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_295674:
    // 0x295674: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295674u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295678:
    // 0x295678: 0x1c90  .word       0x00001C90                   # mfhi        $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295678u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29567c:
    // 0x29567c: 0x0  nop
    ctx->pc = 0x29567cu;
    // NOP
label_295680:
    // 0x295680: 0x1776f  .word       0x0001776F                   # dsubu       $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295680u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_295684:
    // 0x295684: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295684u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295684 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295688:
    // 0x295688: 0x25b0  tge         $zero, $zero, 150
    ctx->pc = 0x295688u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29568c:
    // 0x29568c: 0x0  nop
    ctx->pc = 0x29568cu;
    // NOP
label_295690:
    // 0x295690: 0x17774  teq         $zero, $at, 477
    ctx->pc = 0x295690u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295694:
    // 0x295694: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x295694u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_295698:
    // 0x295698: 0xd70  tge         $zero, $zero, 53
    ctx->pc = 0x295698u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29569c:
    // 0x29569c: 0x0  nop
    ctx->pc = 0x29569cu;
    // NOP
label_2956a0:
    // 0x2956a0: 0x17776  tne         $zero, $at, 477
    ctx->pc = 0x2956a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2956a4:
    // 0x2956a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2956a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956a8:
    // 0x2956a8: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2956ac:
    // 0x2956ac: 0x0  nop
    ctx->pc = 0x2956acu;
    // NOP
label_2956b0:
    // 0x2956b0: 0x1777a  dsrl        $t6, $at, 29
    ctx->pc = 0x2956b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> 29);
label_2956b4:
    // 0x2956b4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2956b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2956b8:
    // 0x2956b8: 0x16b0  tge         $zero, $zero, 90
    ctx->pc = 0x2956b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956bc:
    // 0x2956bc: 0x0  nop
    ctx->pc = 0x2956bcu;
    // NOP
label_2956c0:
    // 0x2956c0: 0x1777d  .word       0x0001777D                   # INVALID     $zero, $at, 0x777D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2956C0 raw=0x0001777D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2956c4:
    // 0x2956c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2956C4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2956c8:
    // 0x2956c8: 0x25b0  tge         $zero, $zero, 150
    ctx->pc = 0x2956c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956cc:
    // 0x2956cc: 0x0  nop
    ctx->pc = 0x2956ccu;
    // NOP
label_2956d0:
    // 0x2956d0: 0x17782  srl         $t6, $at, 30
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), 30));
label_2956d4:
    // 0x2956d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2956d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956d8:
    // 0x2956d8: 0x1970  tge         $zero, $zero, 101
    ctx->pc = 0x2956d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956dc:
    // 0x2956dc: 0x0  nop
    ctx->pc = 0x2956dcu;
    // NOP
label_2956e0:
    // 0x2956e0: 0x17786  .word       0x00017786                   # srlv        $t6, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2956e4:
    // 0x2956e4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2956e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956e8:
    // 0x2956e8: 0x28c0  sll         $a1, $zero, 3
    ctx->pc = 0x2956e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2956ec:
    // 0x2956ec: 0x0  nop
    ctx->pc = 0x2956ecu;
    // NOP
label_2956f0:
    // 0x2956f0: 0x1778c  .word       0x0001778C                   # syscall     478 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2956f0u;
    ctx->pc = 0x2956F4u;
runtime->handleSyscall(rdram, ctx, 0x5DEu);
label_2956f4:
    // 0x2956f4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2956f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2956f8:
    // 0x2956f8: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x2956f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2956fc:
    // 0x2956fc: 0x0  nop
    ctx->pc = 0x2956fcu;
    // NOP
label_295700:
    // 0x295700: 0x17792  .word       0x00017792                   # mflo        $t6 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295700u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_295704:
    // 0x295704: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295704u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295708:
    // 0x295708: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295708u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29570c:
    // 0x29570c: 0x0  nop
    ctx->pc = 0x29570cu;
    // NOP
label_295710:
    // 0x295710: 0x17798  .word       0x00017798                   # mult        $t6, $zero, $at # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295714:
    // 0x295714: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295714u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295718:
    // 0x295718: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295718u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29571c:
    // 0x29571c: 0x0  nop
    ctx->pc = 0x29571cu;
    // NOP
label_295720:
    // 0x295720: 0x1779e  .word       0x0001779E                   # ddiv        $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x295720 raw=0x0001779E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295724:
    // 0x295724: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295724u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295728:
    // 0x295728: 0x2f30  tge         $zero, $zero, 188
    ctx->pc = 0x295728u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29572c:
    // 0x29572c: 0x0  nop
    ctx->pc = 0x29572cu;
    // NOP
label_295730:
    // 0x295730: 0x177a4  .word       0x000177A4                   # and         $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295730u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_295734:
    // 0x295734: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295734u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295738:
    // 0x295738: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295738u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29573c:
    // 0x29573c: 0x0  nop
    ctx->pc = 0x29573cu;
    // NOP
label_295740:
    // 0x295740: 0x177aa  .word       0x000177AA                   # slt         $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295740u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295744:
    // 0x295744: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295744u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295748:
    // 0x295748: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295748u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29574c:
    // 0x29574c: 0x0  nop
    ctx->pc = 0x29574cu;
    // NOP
label_295750:
    // 0x295750: 0x177b0  tge         $zero, $at, 478
    ctx->pc = 0x295750u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295754:
    // 0x295754: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295754u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295758:
    // 0x295758: 0x2e80  sll         $a1, $zero, 26
    ctx->pc = 0x295758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_29575c:
    // 0x29575c: 0x0  nop
    ctx->pc = 0x29575cu;
    // NOP
label_295760:
    // 0x295760: 0x177b6  tne         $zero, $at, 478
    ctx->pc = 0x295760u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295764:
    // 0x295764: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x295764u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_295768:
    // 0x295768: 0xa60  .word       0x00000A60                   # add         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295768u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29576c:
    // 0x29576c: 0x0  nop
    ctx->pc = 0x29576cu;
    // NOP
label_295770:
    // 0x295770: 0x177b8  dsll        $t6, $at, 30
    ctx->pc = 0x295770u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << 30);
label_295774:
    // 0x295774: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x295774u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_295778:
    // 0x295778: 0x1370  tge         $zero, $zero, 77
    ctx->pc = 0x295778u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29577c:
    // 0x29577c: 0x0  nop
    ctx->pc = 0x29577cu;
    // NOP
label_295780:
    // 0x295780: 0x177bb  dsra        $t6, $at, 30
    ctx->pc = 0x295780u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> 30);
label_295784:
    // 0x295784: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295788:
    // 0x295788: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x295788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29578c:
    // 0x29578c: 0x0  nop
    ctx->pc = 0x29578cu;
    // NOP
label_295790:
    // 0x295790: 0x177c1  .word       0x000177C1                   # INVALID     $zero, $at, 0x77C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295790 raw=0x000177C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295794:
    // 0x295794: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295794u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295798:
    // 0x295798: 0x2f10  .word       0x00002F10                   # mfhi        $a1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295798u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29579c:
    // 0x29579c: 0x0  nop
    ctx->pc = 0x29579cu;
    // NOP
label_2957a0:
    // 0x2957a0: 0x177c7  .word       0x000177C7                   # srav        $t6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957a0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2957a4:
    // 0x2957a4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2957a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957a8:
    // 0x2957a8: 0x31f0  tge         $zero, $zero, 199
    ctx->pc = 0x2957a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2957ac:
    // 0x2957ac: 0x0  nop
    ctx->pc = 0x2957acu;
    // NOP
label_2957b0:
    // 0x2957b0: 0x177ce  .word       0x000177CE                   # INVALID     $zero, $at, 0x77CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2957B0 raw=0x000177CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2957b4:
    // 0x2957b4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2957b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957b8:
    // 0x2957b8: 0x2f30  tge         $zero, $zero, 188
    ctx->pc = 0x2957b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2957bc:
    // 0x2957bc: 0x0  nop
    ctx->pc = 0x2957bcu;
    // NOP
label_2957c0:
    // 0x2957c0: 0x177d4  .word       0x000177D4                   # dsllv       $t6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2957c4:
    // 0x2957c4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2957c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2957c8:
    // 0x2957c8: 0x1690  .word       0x00001690                   # mfhi        $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2957cc:
    // 0x2957cc: 0x0  nop
    ctx->pc = 0x2957ccu;
    // NOP
label_2957d0:
    // 0x2957d0: 0x177d7  .word       0x000177D7                   # dsrav       $t6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957d0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2957d4:
    // 0x2957d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957d8:
    // 0x2957d8: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2957dc:
    // 0x2957dc: 0x0  nop
    ctx->pc = 0x2957dcu;
    // NOP
label_2957e0:
    // 0x2957e0: 0x177db  .word       0x000177DB                   # divu        $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957e0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2957e4:
    // 0x2957e4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2957e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957e8:
    // 0x2957e8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2957e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2957ec:
    // 0x2957ec: 0x0  nop
    ctx->pc = 0x2957ecu;
    // NOP
label_2957f0:
    // 0x2957f0: 0x177e1  .word       0x000177E1                   # addu        $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2957f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2957f4:
    // 0x2957f4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2957f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2957f8:
    // 0x2957f8: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2957f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2957fc:
    // 0x2957fc: 0x0  nop
    ctx->pc = 0x2957fcu;
    // NOP
label_295800:
    // 0x295800: 0x177e7  .word       0x000177E7                   # nor         $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295800u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_295804:
    // 0x295804: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x295804u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_295808:
    // 0x295808: 0x1390  .word       0x00001390                   # mfhi        $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295808u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29580c:
    // 0x29580c: 0x0  nop
    ctx->pc = 0x29580cu;
    // NOP
label_295810:
    // 0x295810: 0x177ea  .word       0x000177EA                   # slt         $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295810u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295814:
    // 0x295814: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x295814u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_295818:
    // 0x295818: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x295818u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29581c:
    // 0x29581c: 0x0  nop
    ctx->pc = 0x29581cu;
    // NOP
label_295820:
    // 0x295820: 0x177ed  .word       0x000177ED                   # daddu       $t6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295820u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_295824:
    // 0x295824: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295824 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295828:
    // 0x295828: 0x22b0  tge         $zero, $zero, 138
    ctx->pc = 0x295828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29582c:
    // 0x29582c: 0x0  nop
    ctx->pc = 0x29582cu;
    // NOP
label_295830:
    // 0x295830: 0x177f2  tlt         $zero, $at, 479
    ctx->pc = 0x295830u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295834:
    // 0x295834: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295834u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295838:
    // 0x295838: 0x2f10  .word       0x00002F10                   # mfhi        $a1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295838u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29583c:
    // 0x29583c: 0x0  nop
    ctx->pc = 0x29583cu;
    // NOP
label_295840:
    // 0x295840: 0x177f8  dsll        $t6, $at, 31
    ctx->pc = 0x295840u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << 31);
label_295844:
    // 0x295844: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x295844u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295848:
    // 0x295848: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x295848u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29584c:
    // 0x29584c: 0x0  nop
    ctx->pc = 0x29584cu;
    // NOP
    ctx->pc = 0x295850u;
    return;
}
