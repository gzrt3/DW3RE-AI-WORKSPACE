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

// Function: entry_00198498
// Address: 0x198498 - 0x198510
void entry_00198498_0x198498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198498_0x198498");
#endif

    switch (ctx->pc) {
        case 0x1984b8u: goto label_1984b8;
        default: break;
    }

    ctx->pc = 0x198498u;

    // 0x198498: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x19849c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x19849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1984a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1984a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1984a4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1984a4u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 3));
    // 0x1984a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1984A8u;
    {
        const bool branch_taken_0x1984a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A8u;
        // 0x1984ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984a8) {
            ctx->pc = 0x198510u;
            return;
        }
    }
    ctx->pc = 0x1984B0u;
    // 0x1984b0: 0xc06614a  jal         func_198528
    ctx->pc = 0x1984B0u;
    SET_GPR_U32(ctx, 31, 0x1984B8u);
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x1984B0u, 0x1984B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984B8u;
label_1984b8:
    // 0x1984b8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1984b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1984bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1984bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984c0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1984c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1984c4: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x1984c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1984c8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1984c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1984cc: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x1984ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1984d0: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x1984d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1984d4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1984d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1984d8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1984d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1984dc: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1984dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1984e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1984e4: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x1984e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1984e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1984e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1984ec: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1984ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1984f0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1984f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1984f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1984f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1984f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1984f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1984fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1984fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198500: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198508: 0x8069108  j           func_1A4420
    ctx->pc = 0x198508u;
    ctx->pc = 0x19850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198508u;
    // 0x19850c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4420u, 0x198508u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x198510u;
}
