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

// Function: FUN_00197fb0
// Address: 0x197fb0 - 0x198050
void FUN_00197fb0_0x197fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00197fb0_0x197fb0");
#endif

    switch (ctx->pc) {
        case 0x197ffcu: goto label_197ffc;
        case 0x198008u: goto label_198008;
        case 0x198040u: goto label_198040;
        default: break;
    }

    ctx->pc = 0x197fb0u;

    // 0x197fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fc4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x197fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x197fc8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197fcc: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x197fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x197fd0: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x197fd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x197fd4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x197fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x197fd8: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x197fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x197fdc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197fe0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x197fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x197fe4: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x197fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x197fe8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197fec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x197fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x197ff0: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x197ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x197ff4: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197FF4u;
    SET_GPR_U32(ctx, 31, 0x197FFCu);
    ctx->pc = 0x197FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FF4u;
    // 0x197ff8: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197FF4u, 0x197FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FFCu;
label_197ffc:
    // 0x197ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198000: 0xc0659c0  jal         func_196700
    ctx->pc = 0x198000u;
    SET_GPR_U32(ctx, 31, 0x198008u);
    ctx->pc = 0x198004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198000u;
    // 0x198004: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x198000u, 0x198008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198008u;
label_198008:
    // 0x198008: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x198008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x19800c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19800Cu;
    {
        const bool branch_taken_0x19800c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19800Cu;
        // 0x198010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19800c) {
            ctx->pc = 0x198028u;
            goto label_198028;
        }
    }
    ctx->pc = 0x198014u;
    // 0x198014: 0x7a230200  lq          $v1, 0x200($s1)
    ctx->pc = 0x198014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x198018: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19801c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19801cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x198020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198020u;
    {
        const bool branch_taken_0x198020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198020u;
        // 0x198024: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198020) {
            ctx->pc = 0x198030u;
            goto label_198030;
        }
    }
    ctx->pc = 0x198028u;
label_198028:
    // 0x198028: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19802c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x19802cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_198030:
    // 0x198030: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198030u;
    {
        const bool branch_taken_0x198030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198030) {
            ctx->pc = 0x198048u;
            goto label_198048;
        }
    }
    ctx->pc = 0x198038u;
    // 0x198038: 0xc0659c0  jal         func_196700
    ctx->pc = 0x198038u;
    SET_GPR_U32(ctx, 31, 0x198040u);
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x198038u, 0x198040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198040u;
label_198040:
    // 0x198040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198040u;
    {
        const bool branch_taken_0x198040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198040u;
        // 0x198044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198040) {
            ctx->pc = 0x198050u;
            return;
        }
    }
    ctx->pc = 0x198048u;
label_198048:
    // 0x198048: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x198048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x19804c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19804cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x198050u;
}
