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

// Function: FUN_00236210
// Address: 0x236210 - 0x23629c
void FUN_00236210_0x236210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236210_0x236210");
#endif

    switch (ctx->pc) {
        case 0x236240u: goto label_236240;
        case 0x236250u: goto label_236250;
        case 0x236278u: goto label_236278;
        case 0x236284u: goto label_236284;
        default: break;
    }

    ctx->pc = 0x236210u;

    // 0x236210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23621c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236220: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x236224: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x236224u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x236228: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23622c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x236234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x236238: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236238u;
    SET_GPR_U32(ctx, 31, 0x236240u);
    ctx->pc = 0x23623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236238u;
    // 0x23623c: 0x30d200ff  andi        $s2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236238u, 0x236240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236240u;
label_236240:
    // 0x236240: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x236240u;
    {
        const bool branch_taken_0x236240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236240u;
        // 0x236244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236240) {
            ctx->pc = 0x236288u;
            goto label_236288;
        }
    }
    ctx->pc = 0x236248u;
    // 0x236248: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236248u;
    SET_GPR_U32(ctx, 31, 0x236250u);
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236248u, 0x236250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236250u;
label_236250:
    // 0x236250: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x236250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x236254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236258: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x23625c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x23625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x236260: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x236264: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236264u;
    {
        const bool branch_taken_0x236264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236264u;
        // 0x236268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236264) {
            ctx->pc = 0x23627Cu;
            goto label_23627c;
        }
    }
    ctx->pc = 0x23626Cu;
    // 0x23626c: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x23626cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x236270: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236270u;
    SET_GPR_U32(ctx, 31, 0x236278u);
    ctx->pc = 0x236274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236270u;
    // 0x236274: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236270u, 0x236278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236278u;
label_236278:
    // 0x236278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23627c:
    // 0x23627c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x23627Cu;
    SET_GPR_U32(ctx, 31, 0x236284u);
    ctx->pc = 0x236280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23627Cu;
    // 0x236280: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x23627Cu, 0x236284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236284u;
label_236284:
    // 0x236284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236288:
    // 0x236288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23628c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23628cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236290: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236294: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x236298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x23629cu;
}
