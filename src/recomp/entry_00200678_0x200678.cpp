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

// Function: entry_00200678
// Address: 0x200678 - 0x2006ec
void entry_00200678_0x200678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200678_0x200678");
#endif

    ctx->pc = 0x200678u;

    // 0x200678: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20067c: 0xac232768  sw          $v1, 0x2768($at)
    ctx->pc = 0x20067cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552768u, _value); } while (0);
    // 0x200680: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200684: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x200684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x200688: 0x8c272768  lw          $a3, 0x2768($at)
    ctx->pc = 0x200688u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x552768u));
    // 0x20068c: 0x34644dd3  ori         $a0, $v1, 0x4DD3
    ctx->pc = 0x20068cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x200690: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x200690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x200694: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x200698: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20069c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2006a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2006a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2006a4: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2006a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2006a8: 0x0  nop
    ctx->pc = 0x2006a8u;
    // NOP
    // 0x2006ac: 0x0  nop
    ctx->pc = 0x2006acu;
    // NOP
    // 0x2006b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2006b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2006b4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2006b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2006b8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2006b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2006bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2006c0: 0xac242768  sw          $a0, 0x2768($at)
    ctx->pc = 0x2006c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10088), GPR_U32(ctx, 4));
    // 0x2006c4: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x2006c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2006c8: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2006d0: 0xac23276c  sw          $v1, 0x276C($at)
    ctx->pc = 0x2006d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x55276Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x55276Cu, _value); } while (0);
    // 0x2006d4: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006d8: 0x8c23276c  lw          $v1, 0x276C($at)
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x55276Cu));
    // 0x2006dc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x2006dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x2006e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2006E0u;
    {
        const bool branch_taken_0x2006e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2006E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E0u;
        // 0x2006e4: 0x240600fa  addiu       $a2, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006e0) {
            ctx->pc = 0x2006ECu;
            return;
        }
    }
    ctx->pc = 0x2006E8u;
    // 0x2006e8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2006e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2006ecu;
}
