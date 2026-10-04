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

// Function: FUN_0011b200
// Address: 0x11b200 - 0x11b29c
void FUN_0011b200_0x11b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b200_0x11b200");
#endif

    switch (ctx->pc) {
        case 0x11b224u: goto label_11b224;
        case 0x11b23cu: goto label_11b23c;
        case 0x11b280u: goto label_11b280;
        case 0x11b28cu: goto label_11b28c;
        case 0x11b298u: goto label_11b298;
        default: break;
    }

    ctx->pc = 0x11b200u;

    // 0x11b200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b214: 0x6200020  bltz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11B214u;
    {
        const bool branch_taken_0x11b214 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B214u;
        // 0x11b218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b214) {
            ctx->pc = 0x11B298u;
            goto label_11b298;
        }
    }
    ctx->pc = 0x11B21Cu;
    // 0x11b21c: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11B21Cu;
    SET_GPR_U32(ctx, 31, 0x11B224u);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11B21Cu, 0x11B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B224u;
label_11b224:
    // 0x11b224: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11b224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11b228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b22c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B22Cu;
    {
        const bool branch_taken_0x11b22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B22Cu;
        // 0x11b230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b22c) {
            ctx->pc = 0x11B24Cu;
            goto label_11b24c;
        }
    }
    ctx->pc = 0x11B234u;
    // 0x11b234: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11B234u;
    SET_GPR_U32(ctx, 31, 0x11B23Cu);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11B234u, 0x11B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B23Cu;
label_11b23c:
    // 0x11b23c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11b240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b244: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11B244u;
    {
        const bool branch_taken_0x11b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B244u;
        // 0x11b248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b244) {
            ctx->pc = 0x11B284u;
            goto label_11b284;
        }
    }
    ctx->pc = 0x11B24Cu;
label_11b24c:
    // 0x11b24c: 0xdf868b70  ld          $a2, -0x7490($gp)
    ctx->pc = 0x11b24cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x11b250: 0x3c023e61  lui         $v0, 0x3E61
    ctx->pc = 0x11b250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15969 << 16));
    // 0x11b254: 0x344447ae  ori         $a0, $v0, 0x47AE
    ctx->pc = 0x11b254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x11b258: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x11b258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x11b25c: 0x3c024108  lui         $v0, 0x4108
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16648 << 16));
    // 0x11b260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b264: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11b264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b268: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x11b268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11b26c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x11b26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11b270: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x11b270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b274: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x11b274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11b278: 0xc05c8b0  jal         func_1722C0
    ctx->pc = 0x11B278u;
    SET_GPR_U32(ctx, 31, 0x11B280u);
    ctx->pc = 0x11B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B278u;
    // 0x11b27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1722C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1722C0u, 0x11B278u, 0x11B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B280u;
label_11b280:
    // 0x11b280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b284:
    // 0x11b284: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11B284u;
    SET_GPR_U32(ctx, 31, 0x11B28Cu);
    ctx->pc = 0x11B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B284u;
    // 0x11b288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11B284u, 0x11B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B28Cu;
label_11b28c:
    // 0x11b28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b290: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11B290u;
    SET_GPR_U32(ctx, 31, 0x11B298u);
    ctx->pc = 0x11B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B290u;
    // 0x11b294: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11B290u, 0x11B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B298u;
label_11b298:
    // 0x11b298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11b29cu;
}
