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


void FUN_0019b850_part354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x247e20u: goto label_247e20;
        case 0x247e24u: goto label_247e24;
        case 0x247e28u: goto label_247e28;
        case 0x247e2cu: goto label_247e2c;
        case 0x247e30u: goto label_247e30;
        case 0x247e34u: goto label_247e34;
        case 0x247e38u: goto label_247e38;
        case 0x247e3cu: goto label_247e3c;
        case 0x247e40u: goto label_247e40;
        case 0x247e44u: goto label_247e44;
        case 0x247e48u: goto label_247e48;
        case 0x247e4cu: goto label_247e4c;
        case 0x247e50u: goto label_247e50;
        case 0x247e54u: goto label_247e54;
        case 0x247e58u: goto label_247e58;
        case 0x247e5cu: goto label_247e5c;
        case 0x247e60u: goto label_247e60;
        case 0x247e64u: goto label_247e64;
        case 0x247e68u: goto label_247e68;
        case 0x247e6cu: goto label_247e6c;
        case 0x247e70u: goto label_247e70;
        case 0x247e74u: goto label_247e74;
        case 0x247e78u: goto label_247e78;
        case 0x247e7cu: goto label_247e7c;
        case 0x247e80u: goto label_247e80;
        case 0x247e84u: goto label_247e84;
        case 0x247e88u: goto label_247e88;
        case 0x247e8cu: goto label_247e8c;
        case 0x247e90u: goto label_247e90;
        case 0x247e94u: goto label_247e94;
        case 0x247e98u: goto label_247e98;
        case 0x247e9cu: goto label_247e9c;
        case 0x247ea0u: goto label_247ea0;
        case 0x247ea4u: goto label_247ea4;
        case 0x247ea8u: goto label_247ea8;
        case 0x247eacu: goto label_247eac;
        case 0x247eb0u: goto label_247eb0;
        case 0x247eb4u: goto label_247eb4;
        case 0x247eb8u: goto label_247eb8;
        case 0x247ebcu: goto label_247ebc;
        case 0x247ec0u: goto label_247ec0;
        case 0x247ec4u: goto label_247ec4;
        case 0x247ec8u: goto label_247ec8;
        case 0x247eccu: goto label_247ecc;
        case 0x247ed0u: goto label_247ed0;
        case 0x247ed4u: goto label_247ed4;
        case 0x247ed8u: goto label_247ed8;
        case 0x247edcu: goto label_247edc;
        case 0x247ee0u: goto label_247ee0;
        case 0x247ee4u: goto label_247ee4;
        case 0x247ee8u: goto label_247ee8;
        case 0x247eecu: goto label_247eec;
        case 0x247ef0u: goto label_247ef0;
        case 0x247ef4u: goto label_247ef4;
        case 0x247ef8u: goto label_247ef8;
        case 0x247efcu: goto label_247efc;
        case 0x247f00u: goto label_247f00;
        case 0x247f04u: goto label_247f04;
        case 0x247f08u: goto label_247f08;
        case 0x247f0cu: goto label_247f0c;
        case 0x247f10u: goto label_247f10;
        case 0x247f14u: goto label_247f14;
        case 0x247f18u: goto label_247f18;
        case 0x247f1cu: goto label_247f1c;
        case 0x247f20u: goto label_247f20;
        case 0x247f24u: goto label_247f24;
        case 0x247f28u: goto label_247f28;
        case 0x247f2cu: goto label_247f2c;
        case 0x247f30u: goto label_247f30;
        case 0x247f34u: goto label_247f34;
        case 0x247f38u: goto label_247f38;
        case 0x247f3cu: goto label_247f3c;
        case 0x247f40u: goto label_247f40;
        case 0x247f44u: goto label_247f44;
        case 0x247f48u: goto label_247f48;
        case 0x247f4cu: goto label_247f4c;
        case 0x247f50u: goto label_247f50;
        case 0x247f54u: goto label_247f54;
        case 0x247f58u: goto label_247f58;
        case 0x247f5cu: goto label_247f5c;
        case 0x247f60u: goto label_247f60;
        case 0x247f64u: goto label_247f64;
        case 0x247f68u: goto label_247f68;
        case 0x247f6cu: goto label_247f6c;
        case 0x247f70u: goto label_247f70;
        case 0x247f74u: goto label_247f74;
        case 0x247f78u: goto label_247f78;
        case 0x247f7cu: goto label_247f7c;
        case 0x247f80u: goto label_247f80;
        case 0x247f84u: goto label_247f84;
        case 0x247f88u: goto label_247f88;
        case 0x247f8cu: goto label_247f8c;
        case 0x247f90u: goto label_247f90;
        case 0x247f94u: goto label_247f94;
        case 0x247f98u: goto label_247f98;
        case 0x247f9cu: goto label_247f9c;
        case 0x247fa0u: goto label_247fa0;
        case 0x247fa4u: goto label_247fa4;
        case 0x247fa8u: goto label_247fa8;
        case 0x247facu: goto label_247fac;
        case 0x247fb0u: goto label_247fb0;
        case 0x247fb4u: goto label_247fb4;
        case 0x247fb8u: goto label_247fb8;
        case 0x247fbcu: goto label_247fbc;
        case 0x247fc0u: goto label_247fc0;
        case 0x247fc4u: goto label_247fc4;
        case 0x247fc8u: goto label_247fc8;
        case 0x247fccu: goto label_247fcc;
        case 0x247fd0u: goto label_247fd0;
        case 0x247fd4u: goto label_247fd4;
        case 0x247fd8u: goto label_247fd8;
        case 0x247fdcu: goto label_247fdc;
        case 0x247fe0u: goto label_247fe0;
        case 0x247fe4u: goto label_247fe4;
        case 0x247fe8u: goto label_247fe8;
        case 0x247fecu: goto label_247fec;
        case 0x247ff0u: goto label_247ff0;
        case 0x247ff4u: goto label_247ff4;
        case 0x247ff8u: goto label_247ff8;
        case 0x247ffcu: goto label_247ffc;
        case 0x248000u: goto label_248000;
        case 0x248004u: goto label_248004;
        case 0x248008u: goto label_248008;
        case 0x24800cu: goto label_24800c;
        case 0x248010u: goto label_248010;
        case 0x248014u: goto label_248014;
        case 0x248018u: goto label_248018;
        case 0x24801cu: goto label_24801c;
        case 0x248020u: goto label_248020;
        case 0x248024u: goto label_248024;
        case 0x248028u: goto label_248028;
        case 0x24802cu: goto label_24802c;
        case 0x248030u: goto label_248030;
        case 0x248034u: goto label_248034;
        case 0x248038u: goto label_248038;
        case 0x24803cu: goto label_24803c;
        case 0x248040u: goto label_248040;
        case 0x248044u: goto label_248044;
        case 0x248048u: goto label_248048;
        case 0x24804cu: goto label_24804c;
        case 0x248050u: goto label_248050;
        case 0x248054u: goto label_248054;
        case 0x248058u: goto label_248058;
        case 0x24805cu: goto label_24805c;
        case 0x248060u: goto label_248060;
        case 0x248064u: goto label_248064;
        case 0x248068u: goto label_248068;
        case 0x24806cu: goto label_24806c;
        case 0x248070u: goto label_248070;
        case 0x248074u: goto label_248074;
        case 0x248078u: goto label_248078;
        case 0x24807cu: goto label_24807c;
        case 0x248080u: goto label_248080;
        case 0x248084u: goto label_248084;
        case 0x248088u: goto label_248088;
        case 0x24808cu: goto label_24808c;
        case 0x248090u: goto label_248090;
        case 0x248094u: goto label_248094;
        case 0x248098u: goto label_248098;
        case 0x24809cu: goto label_24809c;
        case 0x2480a0u: goto label_2480a0;
        case 0x2480a4u: goto label_2480a4;
        case 0x2480a8u: goto label_2480a8;
        case 0x2480acu: goto label_2480ac;
        case 0x2480b0u: goto label_2480b0;
        case 0x2480b4u: goto label_2480b4;
        case 0x2480b8u: goto label_2480b8;
        case 0x2480bcu: goto label_2480bc;
        case 0x2480c0u: goto label_2480c0;
        case 0x2480c4u: goto label_2480c4;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480ccu: goto label_2480cc;
        case 0x2480d0u: goto label_2480d0;
        case 0x2480d4u: goto label_2480d4;
        case 0x2480d8u: goto label_2480d8;
        case 0x2480dcu: goto label_2480dc;
        case 0x2480e0u: goto label_2480e0;
        case 0x2480e4u: goto label_2480e4;
        case 0x2480e8u: goto label_2480e8;
        case 0x2480ecu: goto label_2480ec;
        case 0x2480f0u: goto label_2480f0;
        case 0x2480f4u: goto label_2480f4;
        case 0x2480f8u: goto label_2480f8;
        case 0x2480fcu: goto label_2480fc;
        case 0x248100u: goto label_248100;
        case 0x248104u: goto label_248104;
        case 0x248108u: goto label_248108;
        case 0x24810cu: goto label_24810c;
        case 0x248110u: goto label_248110;
        case 0x248114u: goto label_248114;
        case 0x248118u: goto label_248118;
        case 0x24811cu: goto label_24811c;
        case 0x248120u: goto label_248120;
        case 0x248124u: goto label_248124;
        case 0x248128u: goto label_248128;
        case 0x24812cu: goto label_24812c;
        case 0x248130u: goto label_248130;
        case 0x248134u: goto label_248134;
        case 0x248138u: goto label_248138;
        case 0x24813cu: goto label_24813c;
        case 0x248140u: goto label_248140;
        case 0x248144u: goto label_248144;
        case 0x248148u: goto label_248148;
        case 0x24814cu: goto label_24814c;
        case 0x248150u: goto label_248150;
        case 0x248154u: goto label_248154;
        case 0x248158u: goto label_248158;
        case 0x24815cu: goto label_24815c;
        case 0x248160u: goto label_248160;
        case 0x248164u: goto label_248164;
        case 0x248168u: goto label_248168;
        case 0x24816cu: goto label_24816c;
        case 0x248170u: goto label_248170;
        case 0x248174u: goto label_248174;
        case 0x248178u: goto label_248178;
        case 0x24817cu: goto label_24817c;
        case 0x248180u: goto label_248180;
        case 0x248184u: goto label_248184;
        case 0x248188u: goto label_248188;
        case 0x24818cu: goto label_24818c;
        case 0x248190u: goto label_248190;
        case 0x248194u: goto label_248194;
        case 0x248198u: goto label_248198;
        case 0x24819cu: goto label_24819c;
        case 0x2481a0u: goto label_2481a0;
        case 0x2481a4u: goto label_2481a4;
        case 0x2481a8u: goto label_2481a8;
        case 0x2481acu: goto label_2481ac;
        case 0x2481b0u: goto label_2481b0;
        case 0x2481b4u: goto label_2481b4;
        case 0x2481b8u: goto label_2481b8;
        case 0x2481bcu: goto label_2481bc;
        case 0x2481c0u: goto label_2481c0;
        case 0x2481c4u: goto label_2481c4;
        case 0x2481c8u: goto label_2481c8;
        case 0x2481ccu: goto label_2481cc;
        case 0x2481d0u: goto label_2481d0;
        case 0x2481d4u: goto label_2481d4;
        case 0x2481d8u: goto label_2481d8;
        case 0x2481dcu: goto label_2481dc;
        case 0x2481e0u: goto label_2481e0;
        case 0x2481e4u: goto label_2481e4;
        case 0x2481e8u: goto label_2481e8;
        case 0x2481ecu: goto label_2481ec;
        case 0x2481f0u: goto label_2481f0;
        case 0x2481f4u: goto label_2481f4;
        case 0x2481f8u: goto label_2481f8;
        case 0x2481fcu: goto label_2481fc;
        case 0x248200u: goto label_248200;
        case 0x248204u: goto label_248204;
        case 0x248208u: goto label_248208;
        case 0x24820cu: goto label_24820c;
        case 0x248210u: goto label_248210;
        case 0x248214u: goto label_248214;
        case 0x248218u: goto label_248218;
        case 0x24821cu: goto label_24821c;
        case 0x248220u: goto label_248220;
        case 0x248224u: goto label_248224;
        case 0x248228u: goto label_248228;
        case 0x24822cu: goto label_24822c;
        case 0x248230u: goto label_248230;
        case 0x248234u: goto label_248234;
        case 0x248238u: goto label_248238;
        case 0x24823cu: goto label_24823c;
        case 0x248240u: goto label_248240;
        case 0x248244u: goto label_248244;
        case 0x248248u: goto label_248248;
        case 0x24824cu: goto label_24824c;
        case 0x248250u: goto label_248250;
        case 0x248254u: goto label_248254;
        case 0x248258u: goto label_248258;
        case 0x24825cu: goto label_24825c;
        case 0x248260u: goto label_248260;
        case 0x248264u: goto label_248264;
        case 0x248268u: goto label_248268;
        case 0x24826cu: goto label_24826c;
        case 0x248270u: goto label_248270;
        case 0x248274u: goto label_248274;
        case 0x248278u: goto label_248278;
        case 0x24827cu: goto label_24827c;
        case 0x248280u: goto label_248280;
        case 0x248284u: goto label_248284;
        case 0x248288u: goto label_248288;
        case 0x24828cu: goto label_24828c;
        case 0x248290u: goto label_248290;
        case 0x248294u: goto label_248294;
        case 0x248298u: goto label_248298;
        case 0x24829cu: goto label_24829c;
        case 0x2482a0u: goto label_2482a0;
        case 0x2482a4u: goto label_2482a4;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482acu: goto label_2482ac;
        case 0x2482b0u: goto label_2482b0;
        case 0x2482b4u: goto label_2482b4;
        case 0x2482b8u: goto label_2482b8;
        case 0x2482bcu: goto label_2482bc;
        case 0x2482c0u: goto label_2482c0;
        case 0x2482c4u: goto label_2482c4;
        case 0x2482c8u: goto label_2482c8;
        case 0x2482ccu: goto label_2482cc;
        case 0x2482d0u: goto label_2482d0;
        case 0x2482d4u: goto label_2482d4;
        case 0x2482d8u: goto label_2482d8;
        case 0x2482dcu: goto label_2482dc;
        case 0x2482e0u: goto label_2482e0;
        case 0x2482e4u: goto label_2482e4;
        case 0x2482e8u: goto label_2482e8;
        case 0x2482ecu: goto label_2482ec;
        case 0x2482f0u: goto label_2482f0;
        case 0x2482f4u: goto label_2482f4;
        case 0x2482f8u: goto label_2482f8;
        case 0x2482fcu: goto label_2482fc;
        case 0x248300u: goto label_248300;
        case 0x248304u: goto label_248304;
        case 0x248308u: goto label_248308;
        case 0x24830cu: goto label_24830c;
        case 0x248310u: goto label_248310;
        case 0x248314u: goto label_248314;
        case 0x248318u: goto label_248318;
        case 0x24831cu: goto label_24831c;
        case 0x248320u: goto label_248320;
        case 0x248324u: goto label_248324;
        case 0x248328u: goto label_248328;
        case 0x24832cu: goto label_24832c;
        case 0x248330u: goto label_248330;
        case 0x248334u: goto label_248334;
        case 0x248338u: goto label_248338;
        case 0x24833cu: goto label_24833c;
        case 0x248340u: goto label_248340;
        case 0x248344u: goto label_248344;
        case 0x248348u: goto label_248348;
        case 0x24834cu: goto label_24834c;
        case 0x248350u: goto label_248350;
        case 0x248354u: goto label_248354;
        case 0x248358u: goto label_248358;
        case 0x24835cu: goto label_24835c;
        case 0x248360u: goto label_248360;
        case 0x248364u: goto label_248364;
        case 0x248368u: goto label_248368;
        case 0x24836cu: goto label_24836c;
        case 0x248370u: goto label_248370;
        case 0x248374u: goto label_248374;
        case 0x248378u: goto label_248378;
        case 0x24837cu: goto label_24837c;
        case 0x248380u: goto label_248380;
        case 0x248384u: goto label_248384;
        case 0x248388u: goto label_248388;
        case 0x24838cu: goto label_24838c;
        case 0x248390u: goto label_248390;
        case 0x248394u: goto label_248394;
        case 0x248398u: goto label_248398;
        case 0x24839cu: goto label_24839c;
        case 0x2483a0u: goto label_2483a0;
        case 0x2483a4u: goto label_2483a4;
        case 0x2483a8u: goto label_2483a8;
        case 0x2483acu: goto label_2483ac;
        case 0x2483b0u: goto label_2483b0;
        case 0x2483b4u: goto label_2483b4;
        case 0x2483b8u: goto label_2483b8;
        case 0x2483bcu: goto label_2483bc;
        case 0x2483c0u: goto label_2483c0;
        case 0x2483c4u: goto label_2483c4;
        case 0x2483c8u: goto label_2483c8;
        case 0x2483ccu: goto label_2483cc;
        case 0x2483d0u: goto label_2483d0;
        case 0x2483d4u: goto label_2483d4;
        case 0x2483d8u: goto label_2483d8;
        case 0x2483dcu: goto label_2483dc;
        case 0x2483e0u: goto label_2483e0;
        case 0x2483e4u: goto label_2483e4;
        case 0x2483e8u: goto label_2483e8;
        case 0x2483ecu: goto label_2483ec;
        case 0x2483f0u: goto label_2483f0;
        case 0x2483f4u: goto label_2483f4;
        case 0x2483f8u: goto label_2483f8;
        case 0x2483fcu: goto label_2483fc;
        case 0x248400u: goto label_248400;
        case 0x248404u: goto label_248404;
        case 0x248408u: goto label_248408;
        case 0x24840cu: goto label_24840c;
        case 0x248410u: goto label_248410;
        case 0x248414u: goto label_248414;
        case 0x248418u: goto label_248418;
        case 0x24841cu: goto label_24841c;
        case 0x248420u: goto label_248420;
        case 0x248424u: goto label_248424;
        case 0x248428u: goto label_248428;
        case 0x24842cu: goto label_24842c;
        case 0x248430u: goto label_248430;
        case 0x248434u: goto label_248434;
        case 0x248438u: goto label_248438;
        case 0x24843cu: goto label_24843c;
        case 0x248440u: goto label_248440;
        case 0x248444u: goto label_248444;
        case 0x248448u: goto label_248448;
        case 0x24844cu: goto label_24844c;
        case 0x248450u: goto label_248450;
        case 0x248454u: goto label_248454;
        case 0x248458u: goto label_248458;
        case 0x24845cu: goto label_24845c;
        case 0x248460u: goto label_248460;
        case 0x248464u: goto label_248464;
        case 0x248468u: goto label_248468;
        case 0x24846cu: goto label_24846c;
        case 0x248470u: goto label_248470;
        case 0x248474u: goto label_248474;
        case 0x248478u: goto label_248478;
        case 0x24847cu: goto label_24847c;
        case 0x248480u: goto label_248480;
        case 0x248484u: goto label_248484;
        case 0x248488u: goto label_248488;
        case 0x24848cu: goto label_24848c;
        case 0x248490u: goto label_248490;
        case 0x248494u: goto label_248494;
        case 0x248498u: goto label_248498;
        case 0x24849cu: goto label_24849c;
        case 0x2484a0u: goto label_2484a0;
        case 0x2484a4u: goto label_2484a4;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484acu: goto label_2484ac;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c0u: goto label_2484c0;
        case 0x2484c4u: goto label_2484c4;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484ccu: goto label_2484cc;
        case 0x2484d0u: goto label_2484d0;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484d8u: goto label_2484d8;
        case 0x2484dcu: goto label_2484dc;
        case 0x2484e0u: goto label_2484e0;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484ecu: goto label_2484ec;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f4u: goto label_2484f4;
        case 0x2484f8u: goto label_2484f8;
        case 0x2484fcu: goto label_2484fc;
        case 0x248500u: goto label_248500;
        case 0x248504u: goto label_248504;
        case 0x248508u: goto label_248508;
        case 0x24850cu: goto label_24850c;
        case 0x248510u: goto label_248510;
        case 0x248514u: goto label_248514;
        case 0x248518u: goto label_248518;
        case 0x24851cu: goto label_24851c;
        case 0x248520u: goto label_248520;
        case 0x248524u: goto label_248524;
        case 0x248528u: goto label_248528;
        case 0x24852cu: goto label_24852c;
        case 0x248530u: goto label_248530;
        case 0x248534u: goto label_248534;
        case 0x248538u: goto label_248538;
        case 0x24853cu: goto label_24853c;
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485bcu: goto label_2485bc;
        case 0x2485c0u: goto label_2485c0;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485c8u: goto label_2485c8;
        case 0x2485ccu: goto label_2485cc;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485d4u: goto label_2485d4;
        case 0x2485d8u: goto label_2485d8;
        case 0x2485dcu: goto label_2485dc;
        case 0x2485e0u: goto label_2485e0;
        case 0x2485e4u: goto label_2485e4;
        case 0x2485e8u: goto label_2485e8;
        case 0x2485ecu: goto label_2485ec;
        default: return;
    }

label_247e20:
    // 0x247e20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x247e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e24:
    // 0x247e24: 0x24a57930  addiu       $a1, $a1, 0x7930
    ctx->pc = 0x247e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31024));
label_247e28:
    // 0x247e28: 0xc18f544  jal         func_63D510
label_247e2c:
    if (ctx->pc == 0x247E2Cu) {
        ctx->pc = 0x247E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E28u;
        // 0x247e2c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E30u;
        goto label_247e30;
    }
    ctx->pc = 0x247E28u;
    SET_GPR_U32(ctx, 31, 0x247E30u);
    ctx->pc = 0x247E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E28u;
    // 0x247e2c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63D510u, 0x247E28u, 0x247E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E30u;
label_247e30:
    // 0x247e30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x247e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247e34:
    // 0x247e34: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_247e38:
    if (ctx->pc == 0x247E38u) {
        ctx->pc = 0x247E3Cu;
        goto label_247e3c;
    }
    ctx->pc = 0x247E34u;
    {
        const bool branch_taken_0x247e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x247e34) {
            ctx->pc = 0x247E70u;
            goto label_247e70;
        }
    }
    ctx->pc = 0x247E3Cu;
label_247e3c:
    // 0x247e3c: 0x8e231058  lw          $v1, 0x1058($s1)
    ctx->pc = 0x247e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4184)));
label_247e40:
    // 0x247e40: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x247e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247e44:
    // 0x247e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x247e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_247e48:
    // 0x247e48: 0xae231058  sw          $v1, 0x1058($s1)
    ctx->pc = 0x247e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4184), GPR_U32(ctx, 3));
label_247e4c:
    // 0x247e4c: 0x8e231058  lw          $v1, 0x1058($s1)
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4184)));
label_247e50:
    // 0x247e50: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_247e54:
    if (ctx->pc == 0x247E54u) {
        ctx->pc = 0x247E58u;
        goto label_247e58;
    }
    ctx->pc = 0x247E50u;
    {
        const bool branch_taken_0x247e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x247e50) {
            ctx->pc = 0x247E5Cu;
            goto label_247e5c;
        }
    }
    ctx->pc = 0x247E58u;
label_247e58:
    // 0x247e58: 0xae201058  sw          $zero, 0x1058($s1)
    ctx->pc = 0x247e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4184), GPR_U32(ctx, 0));
label_247e5c:
    // 0x247e5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x247e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_247e60:
    // 0x247e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e64:
    // 0x247e64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247e68:
    // 0x247e68: 0x320f809  jalr        $t9
label_247e6c:
    if (ctx->pc == 0x247E6Cu) {
        ctx->pc = 0x247E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E68u;
        // 0x247e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E70u;
        goto label_247e70;
    }
    ctx->pc = 0x247E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247E70u);
        ctx->pc = 0x247E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E68u;
        // 0x247e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E68u, 0x247E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247E70u;
label_247e70:
    // 0x247e70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_247e74:
    // 0x247e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247e78:
    // 0x247e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_247e7c:
    // 0x247e7c: 0x3e00008  jr          $ra
label_247e80:
    if (ctx->pc == 0x247E80u) {
        ctx->pc = 0x247E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E7Cu;
        // 0x247e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E84u;
        goto label_247e84;
    }
    ctx->pc = 0x247E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E7Cu;
        // 0x247e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247E84u;
label_247e84:
    // 0x247e84: 0x0  nop
    ctx->pc = 0x247e84u;
    // NOP
label_247e88:
    // 0x247e88: 0x0  nop
    ctx->pc = 0x247e88u;
    // NOP
label_247e8c:
    // 0x247e8c: 0x0  nop
    ctx->pc = 0x247e8cu;
    // NOP
label_247e90:
    // 0x247e90: 0x8cab0014  lw          $t3, 0x14($a1)
    ctx->pc = 0x247e90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_247e94:
    // 0x247e94: 0x3c0a002d  lui         $t2, 0x2D
    ctx->pc = 0x247e94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)45 << 16));
label_247e98:
    // 0x247e98: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x247e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
label_247e9c:
    // 0x247e9c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_247ea0:
    // 0x247ea0: 0x254aeb44  addiu       $t2, $t2, -0x14BC
    ctx->pc = 0x247ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961988));
label_247ea4:
    // 0x247ea4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x247ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247ea8:
    // 0x247ea8: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x247ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_247eac:
    // 0x247eac: 0x24e7eb30  addiu       $a3, $a3, -0x14D0
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961968));
label_247eb0:
    // 0x247eb0: 0x2484eb34  addiu       $a0, $a0, -0x14CC
    ctx->pc = 0x247eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961972));
label_247eb4:
    // 0x247eb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x247eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247eb8:
    // 0x247eb8: 0xaccb008c  sw          $t3, 0x8C($a2)
    ctx->pc = 0x247eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 11));
label_247ebc:
    // 0x247ebc: 0x8cac0018  lw          $t4, 0x18($a1)
    ctx->pc = 0x247ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_247ec0:
    // 0x247ec0: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x247ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_247ec4:
    // 0x247ec4: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x247ec4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_247ec8:
    // 0x247ec8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x247ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_247ecc:
    // 0x247ecc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x247eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_247ed0:
    // 0x247ed0: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_247ed4:
    // 0x247ed4: 0xacca0090  sw          $t2, 0x90($a2)
    ctx->pc = 0x247ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 10));
label_247ed8:
    // 0x247ed8: 0xa0c90034  sb          $t1, 0x34($a2)
    ctx->pc = 0x247ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 52), (uint8_t)GPR_U32(ctx, 9));
label_247edc:
    // 0x247edc: 0xa0c90004  sb          $t1, 0x4($a2)
    ctx->pc = 0x247edcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 9));
label_247ee0:
    // 0x247ee0: 0xa0c90035  sb          $t1, 0x35($a2)
    ctx->pc = 0x247ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 53), (uint8_t)GPR_U32(ctx, 9));
label_247ee4:
    // 0x247ee4: 0xa0c90005  sb          $t1, 0x5($a2)
    ctx->pc = 0x247ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 9));
label_247ee8:
    // 0x247ee8: 0xa0c90036  sb          $t1, 0x36($a2)
    ctx->pc = 0x247ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 54), (uint8_t)GPR_U32(ctx, 9));
label_247eec:
    // 0x247eec: 0xa0c90006  sb          $t1, 0x6($a2)
    ctx->pc = 0x247eecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 9));
label_247ef0:
    // 0x247ef0: 0xa0c90037  sb          $t1, 0x37($a2)
    ctx->pc = 0x247ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 55), (uint8_t)GPR_U32(ctx, 9));
label_247ef4:
    // 0x247ef4: 0xa0c90007  sb          $t1, 0x7($a2)
    ctx->pc = 0x247ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 9));
label_247ef8:
    // 0x247ef8: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x247ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_247efc:
    // 0x247efc: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x247efcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_247f00:
    // 0x247f00: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x247f00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
label_247f04:
    // 0x247f04: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x247f04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
label_247f08:
    // 0x247f08: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x247f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f0c:
    // 0x247f0c: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x247f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
label_247f10:
    // 0x247f10: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x247f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f14:
    // 0x247f14: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x247f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
label_247f18:
    // 0x247f18: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x247f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f1c:
    // 0x247f1c: 0xe4c00048  swc1        $f0, 0x48($a2)
    ctx->pc = 0x247f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
label_247f20:
    // 0x247f20: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x247f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f24:
    // 0x247f24: 0xe4c0004c  swc1        $f0, 0x4C($a2)
    ctx->pc = 0x247f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
label_247f28:
    // 0x247f28: 0x8ca90018  lw          $t1, 0x18($a1)
    ctx->pc = 0x247f28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_247f2c:
    // 0x247f2c: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x247f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_247f30:
    // 0x247f30: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_247f34:
    // 0x247f34: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x247f34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_247f38:
    // 0x247f38: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x247f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_247f3c:
    // 0x247f3c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x247f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f40:
    // 0x247f40: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x247f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
label_247f44:
    // 0x247f44: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x247f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_247f48:
    // 0x247f48: 0x8ca70018  lw          $a3, 0x18($a1)
    ctx->pc = 0x247f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_247f4c:
    // 0x247f4c: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_247f50:
    // 0x247f50: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x247f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_247f54:
    // 0x247f54: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x247f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_247f58:
    // 0x247f58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x247f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_247f5c:
    // 0x247f5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x247f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247f60:
    // 0x247f60: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x247f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
label_247f64:
    // 0x247f64: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x247f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_247f68:
    // 0x247f68: 0x3e00008  jr          $ra
label_247f6c:
    if (ctx->pc == 0x247F6Cu) {
        ctx->pc = 0x247F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F68u;
        // 0x247f6c: 0xacc3009c  sw          $v1, 0x9C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F70u;
        goto label_247f70;
    }
    ctx->pc = 0x247F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F68u;
        // 0x247f6c: 0xacc3009c  sw          $v1, 0x9C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F70u;
label_247f70:
    // 0x247f70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247f74:
    // 0x247f74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_247f78:
    // 0x247f78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247f7c:
    // 0x247f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_247f80:
    // 0x247f80: 0xc18dba0  jal         func_636E80
label_247f84:
    if (ctx->pc == 0x247F84u) {
        ctx->pc = 0x247F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F80u;
        // 0x247f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F88u;
        goto label_247f88;
    }
    ctx->pc = 0x247F80u;
    SET_GPR_U32(ctx, 31, 0x247F88u);
    ctx->pc = 0x247F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F80u;
    // 0x247f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636E80u, 0x247F80u, 0x247F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F88u;
label_247f88:
    // 0x247f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247f8c:
    // 0x247f8c: 0x3e00008  jr          $ra
label_247f90:
    if (ctx->pc == 0x247F90u) {
        ctx->pc = 0x247F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F8Cu;
        // 0x247f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F94u;
        goto label_247f94;
    }
    ctx->pc = 0x247F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F8Cu;
        // 0x247f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F94u;
label_247f94:
    // 0x247f94: 0x0  nop
    ctx->pc = 0x247f94u;
    // NOP
label_247f98:
    // 0x247f98: 0x0  nop
    ctx->pc = 0x247f98u;
    // NOP
label_247f9c:
    // 0x247f9c: 0x0  nop
    ctx->pc = 0x247f9cu;
    // NOP
label_247fa0:
    // 0x247fa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x247fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_247fa4:
    // 0x247fa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x247fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_247fa8:
    // 0x247fa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_247fac:
    // 0x247fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_247fb0:
    // 0x247fb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x247fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247fb4:
    // 0x247fb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_247fb8:
    // 0x247fb8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x247fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_247fbc:
    // 0x247fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247fc0:
    // 0x247fc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x247fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_247fc4:
    // 0x247fc4: 0xc066e2a  jal         func_19B8A8
label_247fc8:
    if (ctx->pc == 0x247FC8u) {
        ctx->pc = 0x247FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FC4u;
        // 0x247fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247FCCu;
        goto label_247fcc;
    }
    ctx->pc = 0x247FC4u;
    SET_GPR_U32(ctx, 31, 0x247FCCu);
    ctx->pc = 0x247FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FC4u;
    // 0x247fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x247FCCu;
label_247fcc:
    // 0x247fcc: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_247fd0:
    if (ctx->pc == 0x247FD0u) {
        ctx->pc = 0x247FD4u;
        goto label_247fd4;
    }
    ctx->pc = 0x247FCCu;
    {
        const bool branch_taken_0x247fcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x247fcc) {
            ctx->pc = 0x247FF8u;
            goto label_247ff8;
        }
    }
    ctx->pc = 0x247FD4u;
label_247fd4:
    // 0x247fd4: 0x96050058  lhu         $a1, 0x58($s0)
    ctx->pc = 0x247fd4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
label_247fd8:
    // 0x247fd8: 0xc18f194  jal         func_63C650
label_247fdc:
    if (ctx->pc == 0x247FDCu) {
        ctx->pc = 0x247FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FD8u;
        // 0x247fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247FE0u;
        goto label_247fe0;
    }
    ctx->pc = 0x247FD8u;
    SET_GPR_U32(ctx, 31, 0x247FE0u);
    ctx->pc = 0x247FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FD8u;
    // 0x247fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63C650u, 0x247FD8u, 0x247FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FE0u;
label_247fe0:
    // 0x247fe0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x247fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_247fe4:
    // 0x247fe4: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x247fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_247fe8:
    // 0x247fe8: 0xc066e02  jal         func_19B808
label_247fec:
    if (ctx->pc == 0x247FECu) {
        ctx->pc = 0x247FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FE8u;
        // 0x247fec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247FF0u;
        goto label_247ff0;
    }
    ctx->pc = 0x247FE8u;
    SET_GPR_U32(ctx, 31, 0x247FF0u);
    ctx->pc = 0x247FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FE8u;
    // 0x247fec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x247FE8u, 0x247FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FF0u;
label_247ff0:
    // 0x247ff0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_247ff4:
    // 0x247ff4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x247ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_247ff8:
    // 0x247ff8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x247ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_247ffc:
    // 0x247ffc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x247ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_248000:
    // 0x248000: 0x320f809  jalr        $t9
label_248004:
    if (ctx->pc == 0x248004u) {
        ctx->pc = 0x248004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248000u;
        // 0x248004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248008u;
        goto label_248008;
    }
    ctx->pc = 0x248000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248008u);
        ctx->pc = 0x248004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248000u;
        // 0x248004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248000u, 0x248008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248008u;
label_248008:
    // 0x248008: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x248008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_24800c:
    // 0x24800c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24800cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_248010:
    // 0x248010: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248014:
    // 0x248014: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x248014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248018:
    // 0x248018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24801c:
    // 0x24801c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_248020:
    // 0x248020: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x248020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_248024:
    // 0x248024: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x248024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248028:
    // 0x248028: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x248028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_24802c:
    // 0x24802c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x24802cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_248030:
    // 0x248030: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x248030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_248034:
    // 0x248034: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x248034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248038:
    // 0x248038: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x248038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_24803c:
    // 0x24803c: 0x320f809  jalr        $t9
label_248040:
    if (ctx->pc == 0x248040u) {
        ctx->pc = 0x248040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24803Cu;
        // 0x248040: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248044u;
        goto label_248044;
    }
    ctx->pc = 0x24803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248044u);
        ctx->pc = 0x248040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24803Cu;
        // 0x248040: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24803Cu, 0x248044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248044u;
label_248044:
    // 0x248044: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x248044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_248048:
    // 0x248048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24804c:
    // 0x24804c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24804cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248050:
    // 0x248050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248054:
    // 0x248054: 0x3e00008  jr          $ra
label_248058:
    if (ctx->pc == 0x248058u) {
        ctx->pc = 0x248058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248054u;
        // 0x248058: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24805Cu;
        goto label_24805c;
    }
    ctx->pc = 0x248054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248054u;
        // 0x248058: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24805Cu;
label_24805c:
    // 0x24805c: 0x0  nop
    ctx->pc = 0x24805cu;
    // NOP
label_248060:
    // 0x248060: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_248064:
    // 0x248064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x248064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_248068:
    // 0x248068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24806c:
    // 0x24806c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248070:
    // 0x248070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x248070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248074:
    // 0x248074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248078:
    // 0x248078: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x248078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24807c:
    // 0x24807c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24807cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_248080:
    // 0x248080: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x248080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_248084:
    // 0x248084: 0xc066e2a  jal         func_19B8A8
label_248088:
    if (ctx->pc == 0x248088u) {
        ctx->pc = 0x248088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248084u;
        // 0x248088: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24808Cu;
        goto label_24808c;
    }
    ctx->pc = 0x248084u;
    SET_GPR_U32(ctx, 31, 0x24808Cu);
    ctx->pc = 0x248088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248084u;
    // 0x248088: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x24808Cu;
label_24808c:
    // 0x24808c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_248090:
    if (ctx->pc == 0x248090u) {
        ctx->pc = 0x248094u;
        goto label_248094;
    }
    ctx->pc = 0x24808Cu;
    {
        const bool branch_taken_0x24808c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24808c) {
            ctx->pc = 0x2480B8u;
            goto label_2480b8;
        }
    }
    ctx->pc = 0x248094u;
label_248094:
    // 0x248094: 0x96450058  lhu         $a1, 0x58($s2)
    ctx->pc = 0x248094u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_248098:
    // 0x248098: 0xc18f194  jal         func_63C650
label_24809c:
    if (ctx->pc == 0x24809Cu) {
        ctx->pc = 0x24809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248098u;
        // 0x24809c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480A0u;
        goto label_2480a0;
    }
    ctx->pc = 0x248098u;
    SET_GPR_U32(ctx, 31, 0x2480A0u);
    ctx->pc = 0x24809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248098u;
    // 0x24809c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63C650u, 0x248098u, 0x2480A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480A0u;
label_2480a0:
    // 0x2480a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2480a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2480a4:
    // 0x2480a4: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x2480a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2480a8:
    // 0x2480a8: 0xc066e02  jal         func_19B808
label_2480ac:
    if (ctx->pc == 0x2480ACu) {
        ctx->pc = 0x2480ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480A8u;
        // 0x2480ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480B0u;
        goto label_2480b0;
    }
    ctx->pc = 0x2480A8u;
    SET_GPR_U32(ctx, 31, 0x2480B0u);
    ctx->pc = 0x2480ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480A8u;
    // 0x2480ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x2480A8u, 0x2480B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480B0u;
label_2480b0:
    // 0x2480b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2480b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2480b4:
    // 0x2480b4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2480b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_2480b8:
    // 0x2480b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2480b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2480bc:
    // 0x2480bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2480bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2480c0:
    // 0x2480c0: 0x320f809  jalr        $t9
label_2480c4:
    if (ctx->pc == 0x2480C4u) {
        ctx->pc = 0x2480C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480C0u;
        // 0x2480c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480C8u;
        goto label_2480c8;
    }
    ctx->pc = 0x2480C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2480C8u);
        ctx->pc = 0x2480C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480C0u;
        // 0x2480c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2480C0u, 0x2480C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2480C8u;
label_2480c8:
    // 0x2480c8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2480cc:
    // 0x2480cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2480ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2480d0:
    // 0x2480d0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2480d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2480d4:
    // 0x2480d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2480d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2480d8:
    // 0x2480d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2480dc:
    // 0x2480dc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2480dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_2480e0:
    // 0x2480e0: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2480e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2480e4:
    // 0x2480e4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2480e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2480e8:
    // 0x2480e8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2480e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2480ec:
    // 0x2480ec: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2480ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_2480f0:
    // 0x2480f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2480f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2480f4:
    // 0x2480f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2480f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2480f8:
    // 0x2480f8: 0x320f809  jalr        $t9
label_2480fc:
    if (ctx->pc == 0x2480FCu) {
        ctx->pc = 0x2480FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480F8u;
        // 0x2480fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248100u;
        goto label_248100;
    }
    ctx->pc = 0x2480F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248100u);
        ctx->pc = 0x2480FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480F8u;
        // 0x2480fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2480F8u, 0x248100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248100u;
label_248100:
    // 0x248100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x248100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_248104:
    // 0x248104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248108:
    // 0x248108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24810c:
    // 0x24810c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24810cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248110:
    // 0x248110: 0x3e00008  jr          $ra
label_248114:
    if (ctx->pc == 0x248114u) {
        ctx->pc = 0x248114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248110u;
        // 0x248114: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248118u;
        goto label_248118;
    }
    ctx->pc = 0x248110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248110u;
        // 0x248114: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248118u;
label_248118:
    // 0x248118: 0x0  nop
    ctx->pc = 0x248118u;
    // NOP
label_24811c:
    // 0x24811c: 0x0  nop
    ctx->pc = 0x24811cu;
    // NOP
label_248120:
    // 0x248120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x248120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_248124:
    // 0x248124: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x248124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_248128:
    // 0x248128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24812c:
    // 0x24812c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248130:
    // 0x248130: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x248130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248134:
    // 0x248134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248138:
    // 0x248138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x248138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24813c:
    // 0x24813c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24813cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_248140:
    // 0x248140: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x248140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_248144:
    // 0x248144: 0xc066e2a  jal         func_19B8A8
label_248148:
    if (ctx->pc == 0x248148u) {
        ctx->pc = 0x248148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248144u;
        // 0x248148: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24814Cu;
        goto label_24814c;
    }
    ctx->pc = 0x248144u;
    SET_GPR_U32(ctx, 31, 0x24814Cu);
    ctx->pc = 0x248148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248144u;
    // 0x248148: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x24814Cu;
label_24814c:
    // 0x24814c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_248150:
    if (ctx->pc == 0x248150u) {
        ctx->pc = 0x248154u;
        goto label_248154;
    }
    ctx->pc = 0x24814Cu;
    {
        const bool branch_taken_0x24814c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24814c) {
            ctx->pc = 0x248178u;
            goto label_248178;
        }
    }
    ctx->pc = 0x248154u;
label_248154:
    // 0x248154: 0x96450058  lhu         $a1, 0x58($s2)
    ctx->pc = 0x248154u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_248158:
    // 0x248158: 0xc18f194  jal         func_63C650
label_24815c:
    if (ctx->pc == 0x24815Cu) {
        ctx->pc = 0x24815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248158u;
        // 0x24815c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248160u;
        goto label_248160;
    }
    ctx->pc = 0x248158u;
    SET_GPR_U32(ctx, 31, 0x248160u);
    ctx->pc = 0x24815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248158u;
    // 0x24815c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63C650u, 0x248158u, 0x248160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248160u;
label_248160:
    // 0x248160: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x248160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_248164:
    // 0x248164: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x248164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_248168:
    // 0x248168: 0xc066e02  jal         func_19B808
label_24816c:
    if (ctx->pc == 0x24816Cu) {
        ctx->pc = 0x24816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248168u;
        // 0x24816c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248170u;
        goto label_248170;
    }
    ctx->pc = 0x248168u;
    SET_GPR_U32(ctx, 31, 0x248170u);
    ctx->pc = 0x24816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248168u;
    // 0x24816c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x248168u, 0x248170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248170u;
label_248170:
    // 0x248170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x248170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_248174:
    // 0x248174: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x248174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_248178:
    // 0x248178: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x248178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24817c:
    // 0x24817c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24817cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_248180:
    // 0x248180: 0x320f809  jalr        $t9
label_248184:
    if (ctx->pc == 0x248184u) {
        ctx->pc = 0x248184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248180u;
        // 0x248184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248188u;
        goto label_248188;
    }
    ctx->pc = 0x248180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248188u);
        ctx->pc = 0x248184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248180u;
        // 0x248184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248180u, 0x248188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248188u;
label_248188:
    // 0x248188: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_24818c:
    // 0x24818c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24818cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_248190:
    // 0x248190: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248190u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248194:
    // 0x248194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248198:
    // 0x248198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24819c:
    // 0x24819c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x24819cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2481a0:
    // 0x2481a0: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2481a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2481a4:
    // 0x2481a4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2481a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2481a8:
    // 0x2481a8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2481a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2481ac:
    // 0x2481ac: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2481acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_2481b0:
    // 0x2481b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2481b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2481b4:
    // 0x2481b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2481b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2481b8:
    // 0x2481b8: 0x320f809  jalr        $t9
label_2481bc:
    if (ctx->pc == 0x2481BCu) {
        ctx->pc = 0x2481BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481B8u;
        // 0x2481bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481C0u;
        goto label_2481c0;
    }
    ctx->pc = 0x2481B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2481C0u);
        ctx->pc = 0x2481BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481B8u;
        // 0x2481bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2481B8u, 0x2481C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2481C0u;
label_2481c0:
    // 0x2481c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2481c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2481c4:
    // 0x2481c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2481c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2481c8:
    // 0x2481c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2481c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2481cc:
    // 0x2481cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2481ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2481d0:
    // 0x2481d0: 0x3e00008  jr          $ra
label_2481d4:
    if (ctx->pc == 0x2481D4u) {
        ctx->pc = 0x2481D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481D0u;
        // 0x2481d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481D8u;
        goto label_2481d8;
    }
    ctx->pc = 0x2481D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2481D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481D0u;
        // 0x2481d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2481D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2481D8u;
label_2481d8:
    // 0x2481d8: 0x0  nop
    ctx->pc = 0x2481d8u;
    // NOP
label_2481dc:
    // 0x2481dc: 0x0  nop
    ctx->pc = 0x2481dcu;
    // NOP
label_2481e0:
    // 0x2481e0: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_2481e4:
    // 0x2481e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2481e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2481e8:
    // 0x2481e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2481e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2481ec:
    // 0x2481ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2481ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2481f0:
    // 0x2481f0: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x2481f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
label_2481f4:
    // 0x2481f4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2481f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_2481f8:
    // 0x2481f8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2481f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2481fc:
    // 0x2481fc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_248200:
    if (ctx->pc == 0x248200u) {
        ctx->pc = 0x248200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481FCu;
        // 0x248200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248204u;
        goto label_248204;
    }
    ctx->pc = 0x2481FCu;
    {
        const bool branch_taken_0x2481fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481FCu;
        // 0x248200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481fc) {
            ctx->pc = 0x2482B0u;
            goto label_2482b0;
        }
    }
    ctx->pc = 0x248204u;
label_248204:
    // 0x248204: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x248204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248208:
    // 0x248208: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x248208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_24820c:
    // 0x24820c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24820cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248210:
    // 0x248210: 0x0  nop
    ctx->pc = 0x248210u;
    // NOP
label_248214:
    // 0x248214: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x248214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248218:
    // 0x248218: 0x0  nop
    ctx->pc = 0x248218u;
    // NOP
label_24821c:
    // 0x24821c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_248220:
    if (ctx->pc == 0x248220u) {
        ctx->pc = 0x248220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24821Cu;
        // 0x248220: 0x460c0042  mul.s       $f1, $f0, $f12 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248224u;
        goto label_248224;
    }
    ctx->pc = 0x24821Cu;
    {
        const bool branch_taken_0x24821c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24821Cu;
        // 0x248220: 0x460c0042  mul.s       $f1, $f0, $f12 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24821c) {
            ctx->pc = 0x248248u;
            goto label_248248;
        }
    }
    ctx->pc = 0x248224u;
label_248224:
    // 0x248224: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x248224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_248228:
    // 0x248228: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x248228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_24822c:
    // 0x24822c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24822cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248230:
    // 0x248230: 0x0  nop
    ctx->pc = 0x248230u;
    // NOP
label_248234:
    // 0x248234: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x248234u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_248238:
    // 0x248238: 0x0  nop
    ctx->pc = 0x248238u;
    // NOP
label_24823c:
    // 0x24823c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x24823cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_248240:
    // 0x248240: 0x10000002  b           . + 4 + (0x2 << 2)
label_248244:
    if (ctx->pc == 0x248244u) {
        ctx->pc = 0x248244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248240u;
        // 0x248244: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x248248u;
        goto label_248248;
    }
    ctx->pc = 0x248240u;
    {
        const bool branch_taken_0x248240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248240u;
        // 0x248244: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248240) {
            ctx->pc = 0x24824Cu;
            goto label_24824c;
        }
    }
    ctx->pc = 0x248248u;
label_248248:
    // 0x248248: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x248248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_24824c:
    // 0x24824c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x24824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248250:
    // 0x248250: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x248250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_248254:
    // 0x248254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248258:
    // 0x248258: 0x0  nop
    ctx->pc = 0x248258u;
    // NOP
label_24825c:
    // 0x24825c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24825cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248260:
    // 0x248260: 0x0  nop
    ctx->pc = 0x248260u;
    // NOP
label_248264:
    // 0x248264: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_248268:
    if (ctx->pc == 0x248268u) {
        ctx->pc = 0x24826Cu;
        goto label_24826c;
    }
    ctx->pc = 0x248264u;
    {
        const bool branch_taken_0x248264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248264) {
            ctx->pc = 0x24827Cu;
            goto label_24827c;
        }
    }
    ctx->pc = 0x24826Cu;
label_24826c:
    // 0x24826c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24826cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_248270:
    // 0x248270: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x248270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_248274:
    // 0x248274: 0x10000008  b           . + 4 + (0x8 << 2)
label_248278:
    if (ctx->pc == 0x248278u) {
        ctx->pc = 0x248278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248274u;
        // 0x248278: 0x8c850098  lw          $a1, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24827Cu;
        goto label_24827c;
    }
    ctx->pc = 0x248274u;
    {
        const bool branch_taken_0x248274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248274u;
        // 0x248278: 0x8c850098  lw          $a1, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248274) {
            ctx->pc = 0x248298u;
            goto label_248298;
        }
    }
    ctx->pc = 0x24827Cu;
label_24827c:
    // 0x24827c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24827cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_248280:
    // 0x248280: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x248280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_248284:
    // 0x248284: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x248284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_248288:
    // 0x248288: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x248288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_24828c:
    // 0x24828c: 0x0  nop
    ctx->pc = 0x24828cu;
    // NOP
label_248290:
    // 0x248290: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x248290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_248294:
    // 0x248294: 0x8c850098  lw          $a1, 0x98($a0)
    ctx->pc = 0x248294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_248298:
    // 0x248298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24829c:
    // 0x24829c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2482a0:
    // 0x2482a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2482a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2482a4:
    // 0x2482a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2482a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2482a8:
    // 0x2482a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2482a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2482ac:
    // 0x2482ac: 0xa0660007  sb          $a2, 0x7($v1)
    ctx->pc = 0x2482acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 6));
label_2482b0:
    // 0x2482b0: 0x3e00008  jr          $ra
label_2482b4:
    if (ctx->pc == 0x2482B4u) {
        ctx->pc = 0x2482B8u;
        goto label_2482b8;
    }
    ctx->pc = 0x2482B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2482B8u;
label_2482b8:
    // 0x2482b8: 0x0  nop
    ctx->pc = 0x2482b8u;
    // NOP
label_2482bc:
    // 0x2482bc: 0x0  nop
    ctx->pc = 0x2482bcu;
    // NOP
label_2482c0:
    // 0x2482c0: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x2482c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2482c4:
    // 0x2482c4: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x2482c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
label_2482c8:
    // 0x2482c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2482c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2482cc:
    // 0x2482cc: 0x3c074320  lui         $a3, 0x4320
    ctx->pc = 0x2482ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17184 << 16));
label_2482d0:
    // 0x2482d0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2482d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2482d4:
    // 0x2482d4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2482d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2482d8:
    // 0x2482d8: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2482d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2482dc:
    // 0x2482dc: 0x24a70060  addiu       $a3, $a1, 0x60
    ctx->pc = 0x2482dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2482e0:
    // 0x2482e0: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x2482e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_2482e4:
    // 0x2482e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2482e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2482e8:
    // 0x2482e8: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x2482e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
label_2482ec:
    // 0x2482ec: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x2482ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
label_2482f0:
    // 0x2482f0: 0xa0a90034  sb          $t1, 0x34($a1)
    ctx->pc = 0x2482f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 52), (uint8_t)GPR_U32(ctx, 9));
label_2482f4:
    // 0x2482f4: 0xa0a90004  sb          $t1, 0x4($a1)
    ctx->pc = 0x2482f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 9));
label_2482f8:
    // 0x2482f8: 0xa0a90035  sb          $t1, 0x35($a1)
    ctx->pc = 0x2482f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 53), (uint8_t)GPR_U32(ctx, 9));
label_2482fc:
    // 0x2482fc: 0xa0a90005  sb          $t1, 0x5($a1)
    ctx->pc = 0x2482fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 9));
label_248300:
    // 0x248300: 0xa0a90036  sb          $t1, 0x36($a1)
    ctx->pc = 0x248300u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 54), (uint8_t)GPR_U32(ctx, 9));
label_248304:
    // 0x248304: 0xa0a90006  sb          $t1, 0x6($a1)
    ctx->pc = 0x248304u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 9));
label_248308:
    // 0x248308: 0xa0a00037  sb          $zero, 0x37($a1)
    ctx->pc = 0x248308u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 55), (uint8_t)GPR_U32(ctx, 0));
label_24830c:
    // 0x24830c: 0xa0a00007  sb          $zero, 0x7($a1)
    ctx->pc = 0x24830cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
label_248310:
    // 0x248310: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x248310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_248314:
    // 0x248314: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x248314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_248318:
    // 0x248318: 0xaca8001c  sw          $t0, 0x1C($a1)
    ctx->pc = 0x248318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 8));
label_24831c:
    // 0x24831c: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x24831cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
label_248320:
    // 0x248320: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x248320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248324:
    // 0x248324: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x248324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_248328:
    // 0x248328: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x248328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24832c:
    // 0x24832c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x24832cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_248330:
    // 0x248330: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x248330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248334:
    // 0x248334: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x248334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_248338:
    // 0x248338: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x248338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24833c:
    // 0x24833c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x24833cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_248340:
    // 0x248340: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x248340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248344:
    // 0x248344: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x248344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_248348:
    // 0x248348: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x248348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
label_24834c:
    // 0x24834c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x24834cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_248350:
    // 0x248350: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x248350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248354:
    // 0x248354: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x248354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_248358:
    // 0x248358: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x248358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_24835c:
    // 0x24835c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x24835cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_248360:
    // 0x248360: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x248360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_248364:
    // 0x248364: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x248364u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248368:
    // 0x248368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24836c:
    // 0x24836c: 0x3e00008  jr          $ra
label_248370:
    if (ctx->pc == 0x248370u) {
        ctx->pc = 0x248370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24836Cu;
        // 0x248370: 0xaca3009c  sw          $v1, 0x9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248374u;
        goto label_248374;
    }
    ctx->pc = 0x24836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24836Cu;
        // 0x248370: 0xaca3009c  sw          $v1, 0x9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24836Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248374u;
label_248374:
    // 0x248374: 0x0  nop
    ctx->pc = 0x248374u;
    // NOP
label_248378:
    // 0x248378: 0x0  nop
    ctx->pc = 0x248378u;
    // NOP
label_24837c:
    // 0x24837c: 0x0  nop
    ctx->pc = 0x24837cu;
    // NOP
label_248380:
    // 0x248380: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x248380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248384:
    // 0x248384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_248388:
    // 0x248388: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x248388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24838c:
    // 0x24838c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_248390:
    // 0x248390: 0xc18dba0  jal         func_636E80
label_248394:
    if (ctx->pc == 0x248394u) {
        ctx->pc = 0x248394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248390u;
        // 0x248394: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248398u;
        goto label_248398;
    }
    ctx->pc = 0x248390u;
    SET_GPR_U32(ctx, 31, 0x248398u);
    ctx->pc = 0x248394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248390u;
    // 0x248394: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636E80u, 0x248390u, 0x248398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248398u;
label_248398:
    // 0x248398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24839c:
    // 0x24839c: 0x3e00008  jr          $ra
label_2483a0:
    if (ctx->pc == 0x2483A0u) {
        ctx->pc = 0x2483A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24839Cu;
        // 0x2483a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483A4u;
        goto label_2483a4;
    }
    ctx->pc = 0x24839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2483A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24839Cu;
        // 0x2483a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2483A4u;
label_2483a4:
    // 0x2483a4: 0x0  nop
    ctx->pc = 0x2483a4u;
    // NOP
label_2483a8:
    // 0x2483a8: 0x0  nop
    ctx->pc = 0x2483a8u;
    // NOP
label_2483ac:
    // 0x2483ac: 0x0  nop
    ctx->pc = 0x2483acu;
    // NOP
label_2483b0:
    // 0x2483b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2483b4:
    // 0x2483b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2483b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2483b8:
    // 0x2483b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2483b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2483bc:
    // 0x2483bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2483bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2483c0:
    // 0x2483c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2483c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2483c4:
    // 0x2483c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2483c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2483c8:
    // 0x2483c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2483c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2483cc:
    // 0x2483cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2483ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2483d0:
    // 0x2483d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2483d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2483d4:
    // 0x2483d4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2483d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2483d8:
    // 0x2483d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2483d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2483dc:
    // 0x2483dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2483dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2483e0:
    // 0x2483e0: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x2483e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2483e4:
    // 0x2483e4: 0xc4d50030  lwc1        $f21, 0x30($a2)
    ctx->pc = 0x2483e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2483e8:
    // 0x2483e8: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x2483e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2483ec:
    // 0x2483ec: 0x0  nop
    ctx->pc = 0x2483ecu;
    // NOP
label_2483f0:
    // 0x2483f0: 0x450000a2  bc1f        . + 4 + (0xA2 << 2)
label_2483f4:
    if (ctx->pc == 0x2483F4u) {
        ctx->pc = 0x2483F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483F0u;
        // 0x2483f4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483F8u;
        goto label_2483f8;
    }
    ctx->pc = 0x2483F0u;
    {
        const bool branch_taken_0x2483f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2483F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483F0u;
        // 0x2483f4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483f0) {
            ctx->pc = 0x24867Cu;
            { ctx->pc = 0x24867c; return; }
        }
    }
    ctx->pc = 0x2483F8u;
label_2483f8:
    // 0x2483f8: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2483f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2483fc:
    // 0x2483fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2483fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248400:
    // 0x248400: 0x0  nop
    ctx->pc = 0x248400u;
    // NOP
label_248404:
    // 0x248404: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
label_248408:
    if (ctx->pc == 0x248408u) {
        ctx->pc = 0x248408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248404u;
        // 0x248408: 0x4601a881  sub.s       $f2, $f21, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24840Cu;
        goto label_24840c;
    }
    ctx->pc = 0x248404u;
    {
        const bool branch_taken_0x248404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248404u;
        // 0x248408: 0x4601a881  sub.s       $f2, $f21, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248404) {
            ctx->pc = 0x24867Cu;
            { ctx->pc = 0x24867c; return; }
        }
    }
    ctx->pc = 0x24840Cu;
label_24840c:
    // 0x24840c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x24840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
label_248410:
    // 0x248410: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x248410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_248414:
    // 0x248414: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x248414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_248418:
    // 0x248418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x248418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24841c:
    // 0x24841c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24841cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248420:
    // 0x248420: 0x0  nop
    ctx->pc = 0x248420u;
    // NOP
label_248424:
    // 0x248424: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x248424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_248428:
    // 0x248428: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x248428u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_24842c:
    // 0x24842c: 0x0  nop
    ctx->pc = 0x24842cu;
    // NOP
label_248430:
    // 0x248430: 0x0  nop
    ctx->pc = 0x248430u;
    // NOP
label_248434:
    // 0x248434: 0xc06d524  jal         func_1B5490
label_248438:
    if (ctx->pc == 0x248438u) {
        ctx->pc = 0x24843Cu;
        goto label_24843c;
    }
    ctx->pc = 0x248434u;
    SET_GPR_U32(ctx, 31, 0x24843Cu);
    ctx->pc = 0x1B5490u;
    { ctx->pc = 0x1b5490; return; }
    ctx->pc = 0x24843Cu;
label_24843c:
    // 0x24843c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_248440:
    // 0x248440: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x248440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_248444:
    // 0x248444: 0xc6620040  lwc1        $f2, 0x40($s3)
    ctx->pc = 0x248444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248448:
    // 0x248448: 0x46002501  sub.s       $f20, $f4, $f0
    ctx->pc = 0x248448u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_24844c:
    // 0x24844c: 0xc6630048  lwc1        $f3, 0x48($s3)
    ctx->pc = 0x24844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_248450:
    // 0x248450: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x248450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_248454:
    // 0x248454: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x248454u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_248458:
    // 0x248458: 0x46151801  sub.s       $f0, $f3, $f21
    ctx->pc = 0x248458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[21]);
label_24845c:
    // 0x24845c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x24845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248460:
    // 0x248460: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x248460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_248464:
    // 0x248464: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x248464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_248468:
    // 0x248468: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x248468u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[21] = ctx->f[2] / ctx->f[0];
label_24846c:
    // 0x24846c: 0x0  nop
    ctx->pc = 0x24846cu;
    // NOP
label_248470:
    // 0x248470: 0x0  nop
    ctx->pc = 0x248470u;
    // NOP
label_248474:
    // 0x248474: 0xc06d452  jal         func_1B5148
label_248478:
    if (ctx->pc == 0x248478u) {
        ctx->pc = 0x248478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248474u;
        // 0x248478: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24847Cu;
        goto label_24847c;
    }
    ctx->pc = 0x248474u;
    SET_GPR_U32(ctx, 31, 0x24847Cu);
    ctx->pc = 0x248478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248474u;
    // 0x248478: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5148u;
    { ctx->pc = 0x1b5148; return; }
    ctx->pc = 0x24847Cu;
label_24847c:
    // 0x24847c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_248480:
    // 0x248480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x248480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248484:
    // 0x248484: 0x0  nop
    ctx->pc = 0x248484u;
    // NOP
label_248488:
    // 0x248488: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24848c:
    // 0x24848c: 0x0  nop
    ctx->pc = 0x24848cu;
    // NOP
label_248490:
    // 0x248490: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_248494:
    if (ctx->pc == 0x248494u) {
        ctx->pc = 0x248498u;
        goto label_248498;
    }
    ctx->pc = 0x248490u;
    {
        const bool branch_taken_0x248490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248490) {
            ctx->pc = 0x2484A8u;
            goto label_2484a8;
        }
    }
    ctx->pc = 0x248498u;
label_248498:
    // 0x248498: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x248498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_24849c:
    // 0x24849c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x24849cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2484a0:
    // 0x2484a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2484a4:
    if (ctx->pc == 0x2484A4u) {
        ctx->pc = 0x2484A8u;
        goto label_2484a8;
    }
    ctx->pc = 0x2484A0u;
    {
        const bool branch_taken_0x2484a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2484a0) {
            ctx->pc = 0x2484C0u;
            goto label_2484c0;
        }
    }
    ctx->pc = 0x2484A8u;
label_2484a8:
    // 0x2484a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2484a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2484ac:
    // 0x2484ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2484acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2484b0:
    // 0x2484b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2484b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2484b4:
    // 0x2484b4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2484b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2484b8:
    // 0x2484b8: 0x0  nop
    ctx->pc = 0x2484b8u;
    // NOP
label_2484bc:
    // 0x2484bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2484bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2484c0:
    // 0x2484c0: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_2484c4:
    if (ctx->pc == 0x2484C4u) {
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484C8u;
        goto label_2484c8;
    }
    ctx->pc = 0x2484C0u;
    {
        const bool branch_taken_0x2484c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484c0) {
            ctx->pc = 0x2484D4u;
            goto label_2484d4;
        }
    }
    ctx->pc = 0x2484C8u;
label_2484c8:
    // 0x2484c8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2484c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2484cc:
    // 0x2484cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2484d0:
    if (ctx->pc == 0x2484D0u) {
        ctx->pc = 0x2484D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484CCu;
        // 0x2484d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484D4u;
        goto label_2484d4;
    }
    ctx->pc = 0x2484CCu;
    {
        const bool branch_taken_0x2484cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484CCu;
        // 0x2484d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484cc) {
            ctx->pc = 0x2484ECu;
            goto label_2484ec;
        }
    }
    ctx->pc = 0x2484D4u;
label_2484d4:
    // 0x2484d4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2484d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2484d8:
    // 0x2484d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2484d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2484dc:
    // 0x2484dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2484dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2484e0:
    // 0x2484e0: 0x0  nop
    ctx->pc = 0x2484e0u;
    // NOP
label_2484e4:
    // 0x2484e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2484e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2484e8:
    // 0x2484e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2484e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2484ec:
    // 0x2484ec: 0xc18f7b4  jal         func_63DED0
label_2484f0:
    if (ctx->pc == 0x2484F0u) {
        ctx->pc = 0x2484F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484ECu;
        // 0x2484f0: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484F4u;
        goto label_2484f4;
    }
    ctx->pc = 0x2484ECu;
    SET_GPR_U32(ctx, 31, 0x2484F4u);
    ctx->pc = 0x2484F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484ECu;
    // 0x2484f0: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x2484ECu, 0x2484F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F4u;
label_2484f4:
    // 0x2484f4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2484f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2484f8:
    // 0x2484f8: 0x0  nop
    ctx->pc = 0x2484f8u;
    // NOP
label_2484fc:
    // 0x2484fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_248500:
    if (ctx->pc == 0x248500u) {
        ctx->pc = 0x248500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484FCu;
        // 0x248500: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248504u;
        goto label_248504;
    }
    ctx->pc = 0x2484FCu;
    {
        const bool branch_taken_0x2484fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484FCu;
        // 0x248500: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484fc) {
            ctx->pc = 0x248508u;
            goto label_248508;
        }
    }
    ctx->pc = 0x248504u;
label_248504:
    // 0x248504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_248508:
    // 0x248508: 0xc066e2a  jal         func_19B8A8
label_24850c:
    if (ctx->pc == 0x24850Cu) {
        ctx->pc = 0x24850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248508u;
        // 0x24850c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248510u;
        goto label_248510;
    }
    ctx->pc = 0x248508u;
    SET_GPR_U32(ctx, 31, 0x248510u);
    ctx->pc = 0x24850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248508u;
    // 0x24850c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x248510u;
label_248510:
    // 0x248510: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_248514:
    if (ctx->pc == 0x248514u) {
        ctx->pc = 0x248518u;
        goto label_248518;
    }
    ctx->pc = 0x248510u;
    {
        const bool branch_taken_0x248510 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x248510) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x248518u;
label_248518:
    // 0x248518: 0x96650058  lhu         $a1, 0x58($s3)
    ctx->pc = 0x248518u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 88)));
label_24851c:
    // 0x24851c: 0xc18f194  jal         func_63C650
label_248520:
    if (ctx->pc == 0x248520u) {
        ctx->pc = 0x248520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24851Cu;
        // 0x248520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248524u;
        goto label_248524;
    }
    ctx->pc = 0x24851Cu;
    SET_GPR_U32(ctx, 31, 0x248524u);
    ctx->pc = 0x248520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24851Cu;
    // 0x248520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63C650u, 0x24851Cu, 0x248524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248524u;
label_248524:
    // 0x248524: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x248524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_248528:
    // 0x248528: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x248528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_24852c:
    // 0x24852c: 0xc066e02  jal         func_19B808
label_248530:
    if (ctx->pc == 0x248530u) {
        ctx->pc = 0x248530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24852Cu;
        // 0x248530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248534u;
        goto label_248534;
    }
    ctx->pc = 0x24852Cu;
    SET_GPR_U32(ctx, 31, 0x248534u);
    ctx->pc = 0x248530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24852Cu;
    // 0x248530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x24852Cu, 0x248534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248534u;
label_248534:
    // 0x248534: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x248534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_248538:
    // 0x248538: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x248538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_24853c:
    // 0x24853c: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x24853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_248540:
    // 0x248540: 0x1000004a  b           . + 4 + (0x4A << 2)
label_248544:
    if (ctx->pc == 0x248544u) {
        ctx->pc = 0x248544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248540u;
        // 0x248544: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248548u;
        goto label_248548;
    }
    ctx->pc = 0x248540u;
    {
        const bool branch_taken_0x248540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248540u;
        // 0x248544: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248540) {
            ctx->pc = 0x24866Cu;
            { ctx->pc = 0x24866c; return; }
        }
    }
    ctx->pc = 0x248548u;
label_248548:
    // 0x248548: 0xc18f7b4  jal         func_63DED0
label_24854c:
    if (ctx->pc == 0x24854Cu) {
        ctx->pc = 0x248550u;
        goto label_248550;
    }
    ctx->pc = 0x248548u;
    SET_GPR_U32(ctx, 31, 0x248550u);
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x248548u, 0x248550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248550u;
label_248550:
    // 0x248550: 0x0  nop
    ctx->pc = 0x248550u;
    // NOP
label_248554:
    // 0x248554: 0x0  nop
    ctx->pc = 0x248554u;
    // NOP
label_248558:
    // 0x248558: 0x46000004  c1          0x4
    ctx->pc = 0x248558u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_24855c:
    // 0x24855c: 0x0  nop
    ctx->pc = 0x24855cu;
    // NOP
label_248560:
    // 0x248560: 0x0  nop
    ctx->pc = 0x248560u;
    // NOP
label_248564:
    // 0x248564: 0xc18f7b4  jal         func_63DED0
label_248568:
    if (ctx->pc == 0x248568u) {
        ctx->pc = 0x248568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248564u;
        // 0x248568: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24856Cu;
        goto label_24856c;
    }
    ctx->pc = 0x248564u;
    SET_GPR_U32(ctx, 31, 0x24856Cu);
    ctx->pc = 0x248568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248564u;
    // 0x248568: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x248564u, 0x24856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24856Cu;
label_24856c:
    // 0x24856c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x24856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_248570:
    // 0x248570: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x248570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_248574:
    // 0x248574: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x248574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_248578:
    // 0x248578: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x248578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24857c:
    // 0x24857c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24857cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_248580:
    // 0x248580: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x248580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_248584:
    // 0x248584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x248584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248588:
    // 0x248588: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x248588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_24858c:
    // 0x24858c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x24858cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_248590:
    // 0x248590: 0xc18d9e8  jal         func_6367A0
label_248594:
    if (ctx->pc == 0x248594u) {
        ctx->pc = 0x248594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248590u;
        // 0x248594: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248598u;
        goto label_248598;
    }
    ctx->pc = 0x248590u;
    SET_GPR_U32(ctx, 31, 0x248598u);
    ctx->pc = 0x248594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248590u;
    // 0x248594: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x6367A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6367A0u, 0x248590u, 0x248598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248598u;
label_248598:
    // 0x248598: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x248598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24859c:
    // 0x24859c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2485a0:
    // 0x2485a0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2485a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2485a4:
    // 0x2485a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2485a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2485a8:
    // 0x2485a8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2485a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2485ac:
    // 0x2485ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2485acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2485b0:
    // 0x2485b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2485b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2485b4:
    // 0x2485b4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2485b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_2485b8:
    // 0x2485b8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2485b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_2485bc:
    // 0x2485bc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2485bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2485c0:
    // 0x2485c0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2485c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2485c4:
    // 0x2485c4: 0xc066d7a  jal         func_19B5E8
label_2485c8:
    if (ctx->pc == 0x2485C8u) {
        ctx->pc = 0x2485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485C4u;
        // 0x2485c8: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485CCu;
        goto label_2485cc;
    }
    ctx->pc = 0x2485C4u;
    SET_GPR_U32(ctx, 31, 0x2485CCu);
    ctx->pc = 0x2485C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485C4u;
    // 0x2485c8: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x2485C4u, 0x2485CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485CCu;
label_2485cc:
    // 0x2485cc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2485ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2485d0:
    // 0x2485d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2485d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2485d4:
    // 0x2485d4: 0x320f809  jalr        $t9
label_2485d8:
    if (ctx->pc == 0x2485D8u) {
        ctx->pc = 0x2485D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485D4u;
        // 0x2485d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485DCu;
        goto label_2485dc;
    }
    ctx->pc = 0x2485D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2485DCu);
        ctx->pc = 0x2485D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485D4u;
        // 0x2485d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485D4u, 0x2485DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2485DCu;
label_2485dc:
    // 0x2485dc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2485dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2485e0:
    // 0x2485e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2485e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2485e4:
    // 0x2485e4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2485e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2485e8:
    // 0x2485e8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2485e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2485ec:
    // 0x2485ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2485ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    ctx->pc = 0x2485f0u;
    return;
}
