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

// Function: entry_001effd8
// Address: 0x1effd8 - 0x1f0028
void entry_001effd8_0x1effd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001effd8_0x1effd8");
#endif

    ctx->pc = 0x1effd8u;

    // 0x1effd8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1effd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1effdc: 0x719c0  sll         $v1, $a3, 7
    ctx->pc = 0x1effdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x1effe0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1effe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1effe4: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x1effe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1effe8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1effe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1effec: 0x0  nop
    ctx->pc = 0x1effecu;
    // NOP
    // 0x1efff0: 0x0  nop
    ctx->pc = 0x1efff0u;
    // NOP
    // 0x1efff4: 0x3010  mfhi        $a2
    ctx->pc = 0x1efff4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1efff8: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1efffc: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1efffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1f0000: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1f0000u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1f0004: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f0004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1f0008: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f0008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f000c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f0010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f0010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f0014: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f0014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f0018: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1f0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1f001c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1f001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1f0020: 0xa4a30130  sh          $v1, 0x130($a1)
    ctx->pc = 0x1f0020u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0024: 0xa4a20140  sh          $v0, 0x140($a1)
    ctx->pc = 0x1f0024u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1f0028u;
}
