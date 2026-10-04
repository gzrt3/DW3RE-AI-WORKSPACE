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

// Function: entry_00171100
// Address: 0x171100 - 0x1712a0
void entry_00171100_0x171100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171100_0x171100");
#endif

    switch (ctx->pc) {
        case 0x171134u: goto label_171134;
        case 0x171230u: goto label_171230;
        case 0x17126cu: goto label_17126c;
        default: break;
    }

    ctx->pc = 0x171100u;

label_171100:
    // 0x171100: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x171104: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x171104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x171108: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x171108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17110c: 0x24a50058  addiu       $a1, $a1, 0x58
    ctx->pc = 0x17110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x171110: 0x0  nop
    ctx->pc = 0x171110u;
    // NOP
    // 0x171114: 0x0  nop
    ctx->pc = 0x171114u;
    // NOP
    // 0x171118: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x171118u;
    {
        const bool branch_taken_0x171118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171118) {
            ctx->pc = 0x171100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171100;
        }
    }
    ctx->pc = 0x171120u;
    // 0x171120: 0x3e00008  jr          $ra
    ctx->pc = 0x171120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171128u;
    // 0x171128: 0x0  nop
    ctx->pc = 0x171128u;
    // NOP
    // 0x17112c: 0x0  nop
    ctx->pc = 0x17112cu;
    // NOP
    // 0x171130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171134:
    // 0x171134: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x171134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171138: 0xa0c00100  sb          $zero, 0x100($a2)
    ctx->pc = 0x171138u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x17113c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x171140: 0xa0c00110  sb          $zero, 0x110($a2)
    ctx->pc = 0x171140u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x171144: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x171144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x171148: 0xa0c00101  sb          $zero, 0x101($a2)
    ctx->pc = 0x171148u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x17114c: 0xa0c00111  sb          $zero, 0x111($a2)
    ctx->pc = 0x17114cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 273), (uint8_t)GPR_U32(ctx, 0));
    // 0x171150: 0xa0c00102  sb          $zero, 0x102($a2)
    ctx->pc = 0x171150u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 258), (uint8_t)GPR_U32(ctx, 0));
    // 0x171154: 0xa0c00112  sb          $zero, 0x112($a2)
    ctx->pc = 0x171154u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 274), (uint8_t)GPR_U32(ctx, 0));
    // 0x171158: 0xa0c00103  sb          $zero, 0x103($a2)
    ctx->pc = 0x171158u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x17115c: 0xa0c00113  sb          $zero, 0x113($a2)
    ctx->pc = 0x17115cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 275), (uint8_t)GPR_U32(ctx, 0));
    // 0x171160: 0xa0c00104  sb          $zero, 0x104($a2)
    ctx->pc = 0x171160u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x171164: 0xa0c00114  sb          $zero, 0x114($a2)
    ctx->pc = 0x171164u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 276), (uint8_t)GPR_U32(ctx, 0));
    // 0x171168: 0xa0c00105  sb          $zero, 0x105($a2)
    ctx->pc = 0x171168u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 261), (uint8_t)GPR_U32(ctx, 0));
    // 0x17116c: 0xa0c00115  sb          $zero, 0x115($a2)
    ctx->pc = 0x17116cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 277), (uint8_t)GPR_U32(ctx, 0));
    // 0x171170: 0xa0c00106  sb          $zero, 0x106($a2)
    ctx->pc = 0x171170u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 262), (uint8_t)GPR_U32(ctx, 0));
    // 0x171174: 0xa0c00116  sb          $zero, 0x116($a2)
    ctx->pc = 0x171174u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 278), (uint8_t)GPR_U32(ctx, 0));
    // 0x171178: 0xa0c00107  sb          $zero, 0x107($a2)
    ctx->pc = 0x171178u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 263), (uint8_t)GPR_U32(ctx, 0));
    // 0x17117c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17117Cu;
    {
        const bool branch_taken_0x17117c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17117Cu;
        // 0x171180: 0xa0c00117  sb          $zero, 0x117($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 279), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17117c) {
            ctx->pc = 0x171134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171134;
        }
    }
    ctx->pc = 0x171184u;
    // 0x171184: 0xa0800120  sb          $zero, 0x120($a0)
    ctx->pc = 0x171184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x171188: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x171188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17118c: 0xa0800128  sb          $zero, 0x128($a0)
    ctx->pc = 0x17118cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 296), (uint8_t)GPR_U32(ctx, 0));
    // 0x171190: 0xa0800121  sb          $zero, 0x121($a0)
    ctx->pc = 0x171190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 289), (uint8_t)GPR_U32(ctx, 0));
    // 0x171194: 0xa0800129  sb          $zero, 0x129($a0)
    ctx->pc = 0x171194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 297), (uint8_t)GPR_U32(ctx, 0));
    // 0x171198: 0xa0800122  sb          $zero, 0x122($a0)
    ctx->pc = 0x171198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 290), (uint8_t)GPR_U32(ctx, 0));
    // 0x17119c: 0xa080012a  sb          $zero, 0x12A($a0)
    ctx->pc = 0x17119cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 298), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711a0: 0xa0800123  sb          $zero, 0x123($a0)
    ctx->pc = 0x1711a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711a4: 0xa080012b  sb          $zero, 0x12B($a0)
    ctx->pc = 0x1711a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 299), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711a8: 0xa0800124  sb          $zero, 0x124($a0)
    ctx->pc = 0x1711a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 292), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711ac: 0xa080012c  sb          $zero, 0x12C($a0)
    ctx->pc = 0x1711acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 300), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711b0: 0xa0800125  sb          $zero, 0x125($a0)
    ctx->pc = 0x1711b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 293), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711b4: 0xa080012d  sb          $zero, 0x12D($a0)
    ctx->pc = 0x1711b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 301), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711b8: 0xa0800126  sb          $zero, 0x126($a0)
    ctx->pc = 0x1711b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 294), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711bc: 0xa080012e  sb          $zero, 0x12E($a0)
    ctx->pc = 0x1711bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 302), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711c0: 0xa0800127  sb          $zero, 0x127($a0)
    ctx->pc = 0x1711c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 295), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711c4: 0xa080012f  sb          $zero, 0x12F($a0)
    ctx->pc = 0x1711c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 303), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711c8: 0xa0830130  sb          $v1, 0x130($a0)
    ctx->pc = 0x1711c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 304), (uint8_t)GPR_U32(ctx, 3));
    // 0x1711cc: 0xa0830150  sb          $v1, 0x150($a0)
    ctx->pc = 0x1711ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x1711d0: 0xa0830170  sb          $v1, 0x170($a0)
    ctx->pc = 0x1711d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x1711d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1711D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711D4u;
        // 0x1711d8: 0xa0830190  sb          $v1, 0x190($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 400), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1711D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1711DCu;
    // 0x1711dc: 0x0  nop
    ctx->pc = 0x1711dcu;
    // NOP
    // 0x1711e0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1711e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1711e4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1711e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1711e8: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x1711e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1711ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1711ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711f0: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1711f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1711f4: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x1711f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711f8: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x1711f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x1711fc: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x1711fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x171200: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x171200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x171204: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x171204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x171208: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x171208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x17120c: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x17120cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x171210: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x171210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x171214: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x171214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x171218: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x171218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x17121c: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x17121cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x171220: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x171220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x171224: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x171224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x171228: 0xa0830013  sb          $v1, 0x13($a0)
    ctx->pc = 0x171228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x17122c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x17122cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_171230:
    // 0x171230: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x171230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x171234: 0xa0a00015  sb          $zero, 0x15($a1)
    ctx->pc = 0x171234u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x171238: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x171238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x17123c: 0xa0a00016  sb          $zero, 0x16($a1)
    ctx->pc = 0x17123cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x171240: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x171240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x171244: 0xa0a00017  sb          $zero, 0x17($a1)
    ctx->pc = 0x171244u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x171248: 0xa0a00018  sb          $zero, 0x18($a1)
    ctx->pc = 0x171248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x17124c: 0xa0a00019  sb          $zero, 0x19($a1)
    ctx->pc = 0x17124cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x171250: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x171250u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x171254: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x171254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x171258: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x171258u;
    {
        const bool branch_taken_0x171258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171258u;
        // 0x17125c: 0xa0a0001c  sb          $zero, 0x1C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171258) {
            ctx->pc = 0x171230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171230;
        }
    }
    ctx->pc = 0x171260u;
    // 0x171260: 0x28c1000c  slti        $at, $a2, 0xC
    ctx->pc = 0x171260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x171264: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x171264u;
    {
        const bool branch_taken_0x171264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171264) {
            ctx->pc = 0x17128Cu;
            goto label_17128c;
        }
    }
    ctx->pc = 0x17126Cu;
label_17126c:
    // 0x17126c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x17126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x171270: 0xa0600015  sb          $zero, 0x15($v1)
    ctx->pc = 0x171270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x171274: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x171278: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x171278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17127c: 0x0  nop
    ctx->pc = 0x17127cu;
    // NOP
    // 0x171280: 0x0  nop
    ctx->pc = 0x171280u;
    // NOP
    // 0x171284: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x171284u;
    {
        const bool branch_taken_0x171284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171284) {
            ctx->pc = 0x17126Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17126c;
        }
    }
    ctx->pc = 0x17128Cu;
label_17128c:
    // 0x17128c: 0x0  nop
    ctx->pc = 0x17128cu;
    // NOP
    // 0x171290: 0x3e00008  jr          $ra
    ctx->pc = 0x171290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171298u;
    // 0x171298: 0x0  nop
    ctx->pc = 0x171298u;
    // NOP
    // 0x17129c: 0x0  nop
    ctx->pc = 0x17129cu;
    // NOP
    ctx->pc = 0x1712a0u;
}
