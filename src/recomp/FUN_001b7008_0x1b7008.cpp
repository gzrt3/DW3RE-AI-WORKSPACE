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

// Function: FUN_001b7008
// Address: 0x1b7008 - 0x1b70d0
void FUN_001b7008_0x1b7008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7008_0x1b7008");
#endif

    ctx->pc = 0x1b7008u;

    // 0x1b7008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b700c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b700cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7010: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1b7010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b7014: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1b7014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1b7018: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7018u;
    {
        const bool branch_taken_0x1b7018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7018u;
        // 0x1b701c: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7018) {
            ctx->pc = 0x1B7048u;
            goto label_1b7048;
        }
    }
    ctx->pc = 0x1B7020u;
    // 0x1b7020: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7020u;
    {
        const bool branch_taken_0x1b7020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7020u;
        // 0x1b7024: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7020) {
            ctx->pc = 0x1B708Cu;
            goto label_1b708c;
        }
    }
    ctx->pc = 0x1B7028u;
    // 0x1b7028: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b7028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b702c: 0x2882ff82  slti        $v0, $a0, -0x7E
    ctx->pc = 0x1b702cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1b7030: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B7030u;
    {
        const bool branch_taken_0x1b7030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7030) {
            ctx->pc = 0x1B7034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7030u;
            // 0x1b7034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B7038u;
    // 0x1b7038: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x1b7038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1b703c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B703Cu;
    {
        const bool branch_taken_0x1b703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b703c) {
            ctx->pc = 0x1B7040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B703Cu;
            // 0x1b7040: 0x30a3007f  andi        $v1, $a1, 0x7F (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7050u;
            goto label_1b7050;
        }
    }
    ctx->pc = 0x1B7044u;
    // 0x1b7044: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1b7044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b7048:
    // 0x1b7048: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B7048u;
    {
        const bool branch_taken_0x1b7048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7048u;
        // 0x1b704c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7048) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B7050u;
label_1b7050:
    // 0x1b7050: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1b7050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b7054: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7054u;
    {
        const bool branch_taken_0x1b7054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7054u;
        // 0x1b7058: 0x2487007f  addiu       $a3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7054) {
            ctx->pc = 0x1B7070u;
            goto label_1b7070;
        }
    }
    ctx->pc = 0x1B705Cu;
    // 0x1b705c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1b705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1b7060: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7060u;
    {
        const bool branch_taken_0x1b7060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7060) {
            ctx->pc = 0x1B7064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7060u;
            // 0x1b7064: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7074u;
            goto label_1b7074;
        }
    }
    ctx->pc = 0x1B7068u;
    // 0x1b7068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7068u;
    {
        const bool branch_taken_0x1b7068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7068) {
            ctx->pc = 0x1B7074u;
            goto label_1b7074;
        }
    }
    ctx->pc = 0x1B7070u;
label_1b7070:
    // 0x1b7070: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
label_1b7074:
    // 0x1b7074: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7074u;
    {
        const bool branch_taken_0x1b7074 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1b7074) {
            ctx->pc = 0x1B7078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7074u;
            // 0x1b7078: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B707Cu;
    // 0x1b707c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1b707cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1b7080: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b7084: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1b7084u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_1b7088:
    // 0x1b7088: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1b708c:
    // 0x1b708c: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1b708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1b7090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7094: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b7094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b7098: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1b709c: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x1b709cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x1b70a0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b70a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b70a4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b70a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b70a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b70ac: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1b70acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1b70b0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b70b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b70b4: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x1b70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x1b70b8: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x1b70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x1b70bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b70bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b70c0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1b70c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1b70c4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1b70c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b70c8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b70c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b70cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b70ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1b70d0u;
}
