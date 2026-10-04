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

// Function: entry_0014f21c
// Address: 0x14f21c - 0x14f28c
void entry_0014f21c_0x14f21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f21c_0x14f21c");
#endif

    switch (ctx->pc) {
        case 0x14f26cu: goto label_14f26c;
        case 0x14f284u: goto label_14f284;
        default: break;
    }

    ctx->pc = 0x14f21cu;

    // 0x14f21c: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x14f220: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14f224: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F224u;
    {
        const bool branch_taken_0x14f224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F224u;
        // 0x14f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f224) {
            ctx->pc = 0x14F290u;
            return;
        }
    }
    ctx->pc = 0x14F22Cu;
    // 0x14f22c: 0x8e040200  lw          $a0, 0x200($s0)
    ctx->pc = 0x14f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x14f230: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F230u;
    {
        const bool branch_taken_0x14f230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f230) {
            ctx->pc = 0x14F28Cu;
            return;
        }
    }
    ctx->pc = 0x14F238u;
    // 0x14f238: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14f23c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f240: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f244: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14F244u;
    {
        const bool branch_taken_0x14f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f244) {
            ctx->pc = 0x14F28Cu;
            return;
        }
    }
    ctx->pc = 0x14F24Cu;
    // 0x14f24c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14f250: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x14f254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f258: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f25c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F25Cu;
    {
        const bool branch_taken_0x14f25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F25Cu;
        // 0x14f260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f25c) {
            ctx->pc = 0x14F28Cu;
            return;
        }
    }
    ctx->pc = 0x14F264u;
    // 0x14f264: 0xc075224  jal         func_1D4890
    ctx->pc = 0x14F264u;
    SET_GPR_U32(ctx, 31, 0x14F26Cu);
    ctx->pc = 0x1D4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4890u, 0x14F264u, 0x14F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F26Cu;
label_14f26c:
    // 0x14f26c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F26Cu;
    {
        const bool branch_taken_0x14f26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f26c) {
            ctx->pc = 0x14F28Cu;
            return;
        }
    }
    ctx->pc = 0x14F274u;
    // 0x14f274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14f274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f278: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14f27c: 0xc050f08  jal         func_143C20
    ctx->pc = 0x14F27Cu;
    SET_GPR_U32(ctx, 31, 0x14F284u);
    ctx->pc = 0x14F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F27Cu;
    // 0x14f280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x14F27Cu, 0x14F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F284u;
label_14f284:
    // 0x14f284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F284u;
    {
        const bool branch_taken_0x14f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f284) {
            ctx->pc = 0x14F298u;
            return;
        }
    }
    ctx->pc = 0x14F28Cu;
}
