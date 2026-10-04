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

// Function: entry_00215744
// Address: 0x215744 - 0x2157e0
void entry_00215744_0x215744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215744_0x215744");
#endif

    ctx->pc = 0x215744u;

    // 0x215744: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x215744u;
    {
        const bool branch_taken_0x215744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215744u;
        // 0x215748: 0x28640018  slti        $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215744) {
            ctx->pc = 0x215818u;
            return;
        }
    }
    ctx->pc = 0x21574Cu;
    // 0x21574c: 0x28610019  slti        $at, $v1, 0x19
    ctx->pc = 0x21574cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x215750: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x215750u;
    {
        const bool branch_taken_0x215750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215750u;
        // 0x215754: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215750) {
            ctx->pc = 0x215814u;
            return;
        }
    }
    ctx->pc = 0x215758u;
    // 0x215758: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x215758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x21575c: 0xac207920  sw          $zero, 0x7920($at)
    ctx->pc = 0x21575cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 0));
    // 0x215760: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x215760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x215764: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215768: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x21576c: 0xac207928  sw          $zero, 0x7928($at)
    ctx->pc = 0x21576cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 0));
    // 0x215770: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x215774: 0x24c400df  addiu       $a0, $a2, 0xDF
    ctx->pc = 0x215774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 223));
    // 0x215778: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21577c: 0xac24792c  sw          $a0, 0x792C($at)
    ctx->pc = 0x21577cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x215780: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x215780u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x215784: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215788: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x215788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x21578c: 0xac257924  sw          $a1, 0x7924($at)
    ctx->pc = 0x21578cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587924u, _value); } while (0);
    // 0x215790: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x215790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215794: 0xaf849210  sw          $a0, -0x6DF0($gp)
    ctx->pc = 0x215794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 4));
    // 0x215798: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21579c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2157a0: 0xac267910  sw          $a2, 0x7910($at)
    ctx->pc = 0x2157a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x2157a4: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x2157a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
    // 0x2157a8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2157acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2157b0: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x2157b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x2157b4: 0xac24791c  sw          $a0, 0x791C($at)
    ctx->pc = 0x2157b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x2157b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157bc: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x2157bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2157c0: 0xac267914  sw          $a2, 0x7914($at)
    ctx->pc = 0x2157c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x2157c4: 0x872823  subu        $a1, $a0, $a3
    ctx->pc = 0x2157c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2157c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157cc: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x2157ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2157d0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2157D0u;
    {
        const bool branch_taken_0x2157d0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157D0u;
        // 0x2157d4: 0xac267918  sw          $a2, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157d0) {
            ctx->pc = 0x2157E0u;
            return;
        }
    }
    ctx->pc = 0x2157D8u;
    // 0x2157d8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2157d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2157dc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2157dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    ctx->pc = 0x2157e0u;
}
