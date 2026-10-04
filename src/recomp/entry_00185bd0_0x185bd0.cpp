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

// Function: entry_00185bd0
// Address: 0x185bd0 - 0x185c14
void entry_00185bd0_0x185bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185bd0_0x185bd0");
#endif

    ctx->pc = 0x185bd0u;

    // 0x185bd0: 0x9225023d  lbu         $a1, 0x23D($s1)
    ctx->pc = 0x185bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185bd4: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x185bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x185bd8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x185BD8u;
    {
        const bool branch_taken_0x185bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bd8) {
            ctx->pc = 0x185C14u;
            return;
        }
    }
    ctx->pc = 0x185BE0u;
    // 0x185be0: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185be0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x185be4: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x185be4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x185be8: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x185bec: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x185bf0: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x185bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x185bf4: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x185bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x185bf8: 0x1c600342  bgtz        $v1, . + 4 + (0x342 << 2)
    ctx->pc = 0x185BF8u;
    {
        const bool branch_taken_0x185bf8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x185bf8) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x185C00u;
    // 0x185c00: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185c04: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x185c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x185c08: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x185c08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
    // 0x185c0c: 0x1000033d  b           . + 4 + (0x33D << 2)
    ctx->pc = 0x185C0Cu;
    {
        const bool branch_taken_0x185c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C0Cu;
        // 0x185c10: 0xa6200224  sh          $zero, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c0c) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x185C14u;
}
