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

// Function: entry_001b1214
// Address: 0x1b1214 - 0x1b1268
void entry_001b1214_0x1b1214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1214_0x1b1214");
#endif

    switch (ctx->pc) {
        case 0x1b1244u: goto label_1b1244;
        case 0x1b1264u: goto label_1b1264;
        default: break;
    }

    ctx->pc = 0x1b1214u;

    // 0x1b1214: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1214u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1218: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b121c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1220: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x1b1220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
    // 0x1b1224: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1228: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b122c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b1230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1234: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1238: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b123c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B123Cu;
    SET_GPR_U32(ctx, 31, 0x1B1244u);
    ctx->pc = 0x1B1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B123Cu;
    // 0x1b1240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B123Cu, 0x1B1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1244u;
label_1b1244:
    // 0x1b1244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1248: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1248u;
    {
        const bool branch_taken_0x1b1248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1248u;
        // 0x1b124c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1248) {
            ctx->pc = 0x1B125Cu;
            goto label_1b125c;
        }
    }
    ctx->pc = 0x1B1250u;
    // 0x1b1250: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b1254: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1254u;
    {
        const bool branch_taken_0x1b1254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1254u;
        // 0x1b1258: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1254) {
            ctx->pc = 0x1B1264u;
            goto label_1b1264;
        }
    }
    ctx->pc = 0x1B125Cu;
label_1b125c:
    // 0x1b125c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B125Cu;
    SET_GPR_U32(ctx, 31, 0x1B1264u);
    ctx->pc = 0x1B1260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B125Cu;
    // 0x1b1260: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B125Cu, 0x1B1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1264u;
label_1b1264:
    // 0x1b1264: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1268u;
}
