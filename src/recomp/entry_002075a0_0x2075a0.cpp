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

// Function: entry_002075a0
// Address: 0x2075a0 - 0x20762c
void entry_002075a0_0x2075a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002075a0_0x2075a0");
#endif

    ctx->pc = 0x2075a0u;

    // 0x2075a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2075a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2075a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2075a8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2075ac: 0x3421e2f0  ori         $at, $at, 0xE2F0
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58096);
    // 0x2075b0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2075b4: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x2075b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2075b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2075bc: 0x3446e2f4  ori         $a2, $v0, 0xE2F4
    ctx->pc = 0x2075bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58100);
    // 0x2075c0: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2075c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2075c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2075c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2075cc: 0x3421e2f4  ori         $at, $at, 0xE2F4
    ctx->pc = 0x2075ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58100);
    // 0x2075d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2075d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2075d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2075d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2075dc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x2075dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2075e0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2075e4: 0x0  nop
    ctx->pc = 0x2075e4u;
    // NOP
    // 0x2075e8: 0x1010  mfhi        $v0
    ctx->pc = 0x2075e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2075ec: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2075ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2075f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2075f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2075f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2075f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2075f8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2075fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2075fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x207600: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x207604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20760c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20760cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x207610: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207614: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x207618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20761c: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x20761cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x207620: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x207620u;
    {
        const bool branch_taken_0x207620 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x207620) {
            ctx->pc = 0x20762Cu;
            return;
        }
    }
    ctx->pc = 0x207628u;
    // 0x207628: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x20762cu;
}
