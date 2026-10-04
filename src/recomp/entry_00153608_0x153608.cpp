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

// Function: entry_00153608
// Address: 0x153608 - 0x153634
void entry_00153608_0x153608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153608_0x153608");
#endif

    ctx->pc = 0x153608u;

    // 0x153608: 0x24030278  addiu       $v1, $zero, 0x278
    ctx->pc = 0x153608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x15360c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x153610: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x153610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x153614: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x153614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x153618: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x153618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x15361c: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x15361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x153620: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x153620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x153624: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153624u;
    {
        const bool branch_taken_0x153624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153624u;
        // 0x153628: 0xffa40028  sd          $a0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153624) {
            ctx->pc = 0x153634u;
            return;
        }
    }
    ctx->pc = 0x15362Cu;
    // 0x15362c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15362Cu;
    {
        const bool branch_taken_0x15362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15362Cu;
        // 0x153630: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15362c) {
            ctx->pc = 0x15363Cu;
            return;
        }
    }
    ctx->pc = 0x153634u;
}
