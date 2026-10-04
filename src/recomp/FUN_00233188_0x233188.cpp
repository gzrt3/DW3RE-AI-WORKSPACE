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

// Function: FUN_00233188
// Address: 0x233188 - 0x2331dc
void FUN_00233188_0x233188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233188_0x233188");
#endif

    ctx->pc = 0x233188u;

    // 0x233188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23318c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x233190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233194: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x233194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x233198: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23319c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23319cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2331a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2331a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2331a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2331a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2331ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2331acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2331b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2331b4: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x2331b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x2331b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2331b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2331bc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2331bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x2331c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2331c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2331c4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x2331c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2331c8u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x2331cc: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2331ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2331d0: 0x32110f00  andi        $s1, $s0, 0xF00
    ctx->pc = 0x2331d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3840);
    // 0x2331d4: 0xc069218  jal         func_1A4860
    ctx->pc = 0x2331D4u;
    SET_GPR_U32(ctx, 31, 0x2331DCu);
    ctx->pc = 0x2331D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331D4u;
    // 0x2331d8: 0x108402  srl         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x2331D4u, 0x2331DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331DCu;
}
