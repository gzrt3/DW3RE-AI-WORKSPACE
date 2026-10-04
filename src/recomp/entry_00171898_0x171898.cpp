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

// Function: entry_00171898
// Address: 0x171898 - 0x1718d0
void entry_00171898_0x171898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171898_0x171898");
#endif

    ctx->pc = 0x171898u;

    // 0x171898: 0x3c073e4c  lui         $a3, 0x3E4C
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15948 << 16));
    // 0x17189c: 0xa4851130  sh          $a1, 0x1130($a0)
    ctx->pc = 0x17189cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 5));
    // 0x1718a0: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x1718a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x1718a4: 0x94891132  lhu         $t1, 0x1132($a0)
    ctx->pc = 0x1718a4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1718a8: 0x3c08bf26  lui         $t0, 0xBF26
    ctx->pc = 0x1718a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48934 << 16));
    // 0x1718ac: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1718acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1718b0: 0x35086666  ori         $t0, $t0, 0x6666
    ctx->pc = 0x1718b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
    // 0x1718b4: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x1718b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1718b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1718c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718c4: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1718c8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1718C8u;
    {
        const bool branch_taken_0x1718c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718C8u;
        // 0x1718cc: 0xa4871132  sh          $a3, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718c8) {
            ctx->pc = 0x1719B4u;
            return;
        }
    }
    ctx->pc = 0x1718D0u;
}
