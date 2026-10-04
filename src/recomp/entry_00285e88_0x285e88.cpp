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

// Function: entry_00285e88
// Address: 0x285e88 - 0x285ee8
void entry_00285e88_0x285e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285e88_0x285e88");
#endif

    ctx->pc = 0x285e88u;

    // 0x285e88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x285e8c: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x285e90: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x285e94: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x285e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x285e98: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x285e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x285e9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x285e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x285ea0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x285ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x285ea4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x285ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x285ea8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x285ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x285eac: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x285eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x285eb0: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x285eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x285eb4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x285eb8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x285eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x285ebc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x285ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x285ec0: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x285ec0u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x285ec4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x285ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ec8: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x285ec8u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
    // 0x285ecc: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x285eccu;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x285ed0: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x285ed0u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
    // 0x285ed4: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x285ed4u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
    // 0x285ed8: 0x40f  sync.p
    ctx->pc = 0x285ed8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285edc: 0x42000002  tlbwi
    ctx->pc = 0x285edcu;
    runtime->handleTLBWI(rdram, ctx);
    // 0x285ee0: 0x40f  sync.p
    ctx->pc = 0x285ee0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x285ee4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x285ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x285ee8u;
}
