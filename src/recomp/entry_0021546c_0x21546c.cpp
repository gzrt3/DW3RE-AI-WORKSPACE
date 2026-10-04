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

// Function: entry_0021546c
// Address: 0x21546c - 0x215518
void entry_0021546c_0x21546c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021546c_0x21546c");
#endif

    ctx->pc = 0x21546cu;

    // 0x21546c: 0x14800068  bnez        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x21546Cu;
    {
        const bool branch_taken_0x21546c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21546Cu;
        // 0x215470: 0x28640058  slti        $a0, $v1, 0x58 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21546c) {
            ctx->pc = 0x215610u;
            return;
        }
    }
    ctx->pc = 0x215474u;
    // 0x215474: 0x28610059  slti        $at, $v1, 0x59
    ctx->pc = 0x215474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x215478: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x215478u;
    {
        const bool branch_taken_0x215478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215478u;
        // 0x21547c: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215478) {
            ctx->pc = 0x21560Cu;
            return;
        }
    }
    ctx->pc = 0x215480u;
    // 0x215480: 0x2464ffb8  addiu       $a0, $v1, -0x48
    ctx->pc = 0x215480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
    // 0x215484: 0xac207920  sw          $zero, 0x7920($at)
    ctx->pc = 0x215484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 0));
    // 0x215488: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x215488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21548c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21548cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215490: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x215490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x215494: 0xac207928  sw          $zero, 0x7928($at)
    ctx->pc = 0x215494u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 0));
    // 0x215498: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x215498u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21549c: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2154a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154a4: 0xc83823  subu        $a3, $a2, $t0
    ctx->pc = 0x2154a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2154a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2154a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2154ac: 0xac277924  sw          $a3, 0x7924($at)
    ctx->pc = 0x2154acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 7));
    // 0x2154b0: 0x250600df  addiu       $a2, $t0, 0xDF
    ctx->pc = 0x2154b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 223));
    // 0x2154b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154b8: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x2154b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2154bc: 0xac26792c  sw          $a2, 0x792C($at)
    ctx->pc = 0x2154bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x2154c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2154c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2154c4: 0xaf879210  sw          $a3, -0x6DF0($gp)
    ctx->pc = 0x2154c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 7));
    // 0x2154c8: 0xaf869214  sw          $a2, -0x6DEC($gp)
    ctx->pc = 0x2154c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 6));
    // 0x2154cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154d0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2154d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2154d4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2154d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2154d8: 0xac26791c  sw          $a2, 0x791C($at)
    ctx->pc = 0x2154d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x2154dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154e0: 0x8f8691d4  lw          $a2, -0x6E2C($gp)
    ctx->pc = 0x2154e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939092)));
    // 0x2154e4: 0xac277910  sw          $a3, 0x7910($at)
    ctx->pc = 0x2154e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x2154e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154ec: 0xac277914  sw          $a3, 0x7914($at)
    ctx->pc = 0x2154ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x2154f0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154f4: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2154F4u;
    {
        const bool branch_taken_0x2154f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2154F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F4u;
        // 0x2154f8: 0xac277918  sw          $a3, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f4) {
            ctx->pc = 0x215554u;
            return;
        }
    }
    ctx->pc = 0x2154FCu;
    // 0x2154fc: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2154fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x215500: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x215500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x215504: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x215504u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215508: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215508u;
    {
        const bool branch_taken_0x215508 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x21550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215508u;
        // 0x21550c: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215508) {
            ctx->pc = 0x215518u;
            return;
        }
    }
    ctx->pc = 0x215510u;
    // 0x215510: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x215510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x215514: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x215518u;
}
