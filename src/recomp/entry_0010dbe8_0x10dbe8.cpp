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

// Function: entry_0010dbe8
// Address: 0x10dbe8 - 0x10dc2c
void entry_0010dbe8_0x10dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dbe8_0x10dbe8");
#endif

    ctx->pc = 0x10dbe8u;

    // 0x10dbe8: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x10dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x10dbec: 0x3464b3c5  ori         $a0, $v1, 0xB3C5
    ctx->pc = 0x10dbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46021);
    // 0x10dbf0: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x10dbf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10dbf4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x10dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x10dbf8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x10dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10dbfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10dc00: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10dc04: 0x2010  mfhi        $a0
    ctx->pc = 0x10dc04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x10dc08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10dc0c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x10dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10dc10: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x10dc10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
    // 0x10dc14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10dc18: 0x862823  subu        $a1, $a0, $a2
    ctx->pc = 0x10dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x10dc1c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x10dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10dc20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10dc24: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x10dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x10dc28: 0x643823  subu        $a3, $v1, $a0
    ctx->pc = 0x10dc28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x10dc2cu;
}
