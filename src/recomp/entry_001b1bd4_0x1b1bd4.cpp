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

// Function: entry_001b1bd4
// Address: 0x1b1bd4 - 0x1b1c50
void entry_001b1bd4_0x1b1bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1bd4_0x1b1bd4");
#endif

    switch (ctx->pc) {
        case 0x1b1bfcu: goto label_1b1bfc;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1c4cu: goto label_1b1c4c;
        default: break;
    }

    ctx->pc = 0x1b1bd4u;

    // 0x1b1bd4: 0x24906700  addiu       $s0, $a0, 0x6700
    ctx->pc = 0x1b1bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    // 0x1b1bd8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1bdc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1be0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b1be0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b1be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1be8: 0xac536228  sw          $s3, 0x6228($v0)
    ctx->pc = 0x1b1be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x376228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x376228u, _value); } while (0);
    // 0x1b1bec: 0xac74622c  sw          $s4, 0x622C($v1)
    ctx->pc = 0x1b1becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x37622Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x37622Cu, _value); } while (0);
    // 0x1b1bf0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1b1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b1bf4: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1BF4u;
    SET_GPR_U32(ctx, 31, 0x1B1BFCu);
    ctx->pc = 0x1B1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BF4u;
    // 0x1b1bf8: 0xacd56230  sw          $s5, 0x6230($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 25136), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1BF4u, 0x1B1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BFCu;
label_1b1bfc:
    // 0x1b1bfc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1c00: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1c00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b1c04: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1b1c08: 0x26c46200  addiu       $a0, $s6, 0x6200
    ctx->pc = 0x1b1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25088));
    // 0x1b1c0c: 0x26276280  addiu       $a3, $s1, 0x6280
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
    // 0x1b1c10: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1c14: 0x256b1aa8  addiu       $t3, $t3, 0x1AA8
    ctx->pc = 0x1b1c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6824));
    // 0x1b1c18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1c1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1c20: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1c24: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1C24u;
    SET_GPR_U32(ctx, 31, 0x1B1C2Cu);
    ctx->pc = 0x1B1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C24u;
    // 0x1b1c28: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1C24u, 0x1B1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C2Cu;
label_1b1c2c:
    // 0x1b1c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c30: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1C30u;
    {
        const bool branch_taken_0x1b1c30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C30u;
        // 0x1b1c34: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c30) {
            ctx->pc = 0x1B1C44u;
            goto label_1b1c44;
        }
    }
    ctx->pc = 0x1B1C38u;
    // 0x1b1c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C3Cu;
    {
        const bool branch_taken_0x1b1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C3Cu;
        // 0x1b1c40: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c3c) {
            ctx->pc = 0x1B1C4Cu;
            goto label_1b1c4c;
        }
    }
    ctx->pc = 0x1B1C44u;
label_1b1c44:
    // 0x1b1c44: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1C44u;
    SET_GPR_U32(ctx, 31, 0x1B1C4Cu);
    ctx->pc = 0x1B1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C44u;
    // 0x1b1c48: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1C44u, 0x1B1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C4Cu;
label_1b1c4c:
    // 0x1b1c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1c50u;
}
