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

// Function: entry_00200604
// Address: 0x200604 - 0x200678
void entry_00200604_0x200604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200604_0x200604");
#endif

    ctx->pc = 0x200604u;

    // 0x200604: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200608: 0xac232764  sw          $v1, 0x2764($at)
    ctx->pc = 0x200608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552764u, _value); } while (0);
    // 0x20060c: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x20060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200610: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x200610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x200614: 0x8c262764  lw          $a2, 0x2764($at)
    ctx->pc = 0x200614u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x552764u));
    // 0x200618: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x200618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x20061c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x200620: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x200624: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200628: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20062c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x20062cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x200630: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x200630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x200634: 0x0  nop
    ctx->pc = 0x200634u;
    // NOP
    // 0x200638: 0x0  nop
    ctx->pc = 0x200638u;
    // NOP
    // 0x20063c: 0x2010  mfhi        $a0
    ctx->pc = 0x20063cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x200640: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x200640u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x200644: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x200648: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x200648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20064c: 0xac242764  sw          $a0, 0x2764($at)
    ctx->pc = 0x20064cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10084), GPR_U32(ctx, 4));
    // 0x200650: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x200650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200654: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200658: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20065c: 0xac232768  sw          $v1, 0x2768($at)
    ctx->pc = 0x20065cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552768u, _value); } while (0);
    // 0x200660: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200664: 0x8c232768  lw          $v1, 0x2768($at)
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x552768u));
    // 0x200668: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x200668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x20066c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20066Cu;
    {
        const bool branch_taken_0x20066c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20066c) {
            ctx->pc = 0x200678u;
            return;
        }
    }
    ctx->pc = 0x200674u;
    // 0x200674: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x200674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x200678u;
}
