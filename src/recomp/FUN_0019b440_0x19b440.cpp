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

// Function: FUN_0019b440
// Address: 0x19b440 - 0x19b4b4
void FUN_0019b440_0x19b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b440_0x19b440");
#endif

    switch (ctx->pc) {
        case 0x19b498u: goto label_19b498;
        default: break;
    }

    ctx->pc = 0x19b440u;

    // 0x19b440: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19b444: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b448: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x19b448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x19b44c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19b450: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19b450u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19b454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19b458: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b45c: 0x623806  srlv        $a3, $v0, $v1
    ctx->pc = 0x19b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19b460: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x19b460u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x19b464: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19b468: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x19b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x19b46c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x19b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19b470: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x19b470u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19b474: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B474u;
    {
        const bool branch_taken_0x19b474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B474u;
        // 0x19b478: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b474) {
            ctx->pc = 0x19B480u;
            goto label_19b480;
        }
    }
    ctx->pc = 0x19B47Cu;
    // 0x19b47c: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x19b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19b480:
    // 0x19b480: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x19b480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19b484: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B484u;
    {
        const bool branch_taken_0x19b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B484u;
        // 0x19b488: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b484) {
            ctx->pc = 0x19B4B4u;
            return;
        }
    }
    ctx->pc = 0x19B48Cu;
    // 0x19b48c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B48Cu;
    {
        const bool branch_taken_0x19b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B48Cu;
        // 0x19b490: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b48c) {
            ctx->pc = 0x19B4A4u;
            goto label_19b4a4;
        }
    }
    ctx->pc = 0x19B494u;
    // 0x19b494: 0x0  nop
    ctx->pc = 0x19b494u;
    // NOP
label_19b498:
    // 0x19b498: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19b498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b49c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19b4a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19b4a4:
    // 0x19b4a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19b4a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x19b4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19b4ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B4ACu;
    {
        const bool branch_taken_0x19b4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b4ac) {
            ctx->pc = 0x19B498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b498;
        }
    }
    ctx->pc = 0x19B4B4u;
}
