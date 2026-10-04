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

// Function: entry_001c63c0
// Address: 0x1c63c0 - 0x1c6408
void entry_001c63c0_0x1c63c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c63c0_0x1c63c0");
#endif

    ctx->pc = 0x1c63c0u;

    // 0x1c63c0: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1c63c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1c63c4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c63c8: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x1c63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x1c63cc: 0x25470010  addiu       $a3, $t2, 0x10
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1c63d0: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x1c63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x1c63d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1c63d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1c63d8: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x1c63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
    // 0x1c63dc: 0xad4c001c  sw          $t4, 0x1C($t2)
    ctx->pc = 0x1c63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 12));
    // 0x1c63e0: 0xdc2d8ed0  ld          $t5, -0x7130($at)
    ctx->pc = 0x1c63e0u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x288ED0u));
    // 0x1c63e4: 0x65ad0001  daddiu      $t5, $t5, 0x1
    ctx->pc = 0x1c63e4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)1);
    // 0x1c63e8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c63ec: 0xfd4d0020  sd          $t5, 0x20($t2)
    ctx->pc = 0x1c63ecu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 13));
    // 0x1c63f0: 0xdc2d8ed8  ld          $t5, -0x7128($at)
    ctx->pc = 0x1c63f0u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x288ED8u));
    // 0x1c63f4: 0xfd4d0028  sd          $t5, 0x28($t2)
    ctx->pc = 0x1c63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 13));
    // 0x1c63f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C63F8u;
    {
        const bool branch_taken_0x1c63f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F8u;
        // 0x1c63fc: 0xfd460038  sd          $a2, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63f8) {
            ctx->pc = 0x1C6408u;
            return;
        }
    }
    ctx->pc = 0x1C6400u;
    // 0x1c6400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6400u;
    {
        const bool branch_taken_0x1c6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6400u;
        // 0x1c6404: 0xfce40000  sd          $a0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6400) {
            ctx->pc = 0x1C640Cu;
            return;
        }
    }
    ctx->pc = 0x1C6408u;
}
