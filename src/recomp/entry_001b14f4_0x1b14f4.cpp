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

// Function: entry_001b14f4
// Address: 0x1b14f4 - 0x1b1548
void entry_001b14f4_0x1b14f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b14f4_0x1b14f4");
#endif

    switch (ctx->pc) {
        case 0x1b1524u: goto label_1b1524;
        case 0x1b1544u: goto label_1b1544;
        default: break;
    }

    ctx->pc = 0x1b14f4u;

    // 0x1b14f4: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b14f8: 0xacf06280  sw          $s0, 0x6280($a3)
    ctx->pc = 0x1b14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25216), GPR_U32(ctx, 16));
    // 0x1b14fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b14fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1500: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b1504: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1508: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b150c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1514: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1518: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b151c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B151Cu;
    SET_GPR_U32(ctx, 31, 0x1B1524u);
    ctx->pc = 0x1B1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B151Cu;
    // 0x1b1520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B151Cu, 0x1B1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1524u;
label_1b1524:
    // 0x1b1524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1528: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1528u;
    {
        const bool branch_taken_0x1b1528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1528u;
        // 0x1b152c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1528) {
            ctx->pc = 0x1B153Cu;
            goto label_1b153c;
        }
    }
    ctx->pc = 0x1B1530u;
    // 0x1b1530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1534u;
    {
        const bool branch_taken_0x1b1534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1534) {
            ctx->pc = 0x1B1544u;
            goto label_1b1544;
        }
    }
    ctx->pc = 0x1B153Cu;
label_1b153c:
    // 0x1b153c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B153Cu;
    SET_GPR_U32(ctx, 31, 0x1B1544u);
    ctx->pc = 0x1B1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B153Cu;
    // 0x1b1540: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B153Cu, 0x1B1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1544u;
label_1b1544:
    // 0x1b1544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1548u;
}
