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

// Function: entry_001168fc
// Address: 0x1168fc - 0x1169b8
void entry_001168fc_0x1168fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001168fc_0x1168fc");
#endif

    ctx->pc = 0x1168fcu;

    // 0x1168fc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1168fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x116900: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x116900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x116904: 0x24632210  addiu       $v1, $v1, 0x2210
    ctx->pc = 0x116904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8720));
    // 0x116908: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x116908u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11690c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x11690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x116910: 0x8c670200  lw          $a3, 0x200($v1)
    ctx->pc = 0x116910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x116914: 0x28e10040  slti        $at, $a3, 0x40
    ctx->pc = 0x116914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x116918: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x116918u;
    {
        const bool branch_taken_0x116918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x116918) {
            ctx->pc = 0x1169E0u;
            return;
        }
    }
    ctx->pc = 0x116920u;
    // 0x116920: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x116920u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x116924: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x116924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x116928: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x116928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x11692c: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x11692cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x116930: 0x90a80232  lbu         $t0, 0x232($a1)
    ctx->pc = 0x116930u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x116934: 0x11000026  beqz        $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x116934u;
    {
        const bool branch_taken_0x116934 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x116934) {
            ctx->pc = 0x1169D0u;
            return;
        }
    }
    ctx->pc = 0x11693Cu;
    // 0x11693c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116940: 0x11060023  beq         $t0, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x116940u;
    {
        const bool branch_taken_0x116940 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x116940) {
            ctx->pc = 0x1169D0u;
            return;
        }
    }
    ctx->pc = 0x116948u;
    // 0x116948: 0x84e60004  lh          $a2, 0x4($a3)
    ctx->pc = 0x116948u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11694c: 0x34c60800  ori         $a2, $a2, 0x800
    ctx->pc = 0x11694cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x116950: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x116950u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x116954: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x116954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x116958: 0x14c0001d  bnez        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x116958u;
    {
        const bool branch_taken_0x116958 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x116958) {
            ctx->pc = 0x1169D0u;
            return;
        }
    }
    ctx->pc = 0x116960u;
    // 0x116960: 0x84e80004  lh          $t0, 0x4($a3)
    ctx->pc = 0x116960u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x116964: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x116964u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x116968: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x116968u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11696c: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x11696cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x116970: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x116970u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x116974: 0x248403c0  addiu       $a0, $a0, 0x3C0
    ctx->pc = 0x116974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    // 0x116978: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x116978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11697c: 0x35061000  ori         $a2, $t0, 0x1000
    ctx->pc = 0x11697cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4096);
    // 0x116980: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x116980u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x116984: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x116984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116988: 0x90a50234  lbu         $a1, 0x234($a1)
    ctx->pc = 0x116988u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x11698c: 0x90840234  lbu         $a0, 0x234($a0)
    ctx->pc = 0x11698cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x116990: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x116990u;
    {
        const bool branch_taken_0x116990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x116990) {
            ctx->pc = 0x1169D0u;
            return;
        }
    }
    ctx->pc = 0x116998u;
    // 0x116998: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x116998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x11699c: 0x30840400  andi        $a0, $a0, 0x400
    ctx->pc = 0x11699cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x1169a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1169A0u;
    {
        const bool branch_taken_0x1169a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1169a0) {
            ctx->pc = 0x1169B8u;
            return;
        }
    }
    ctx->pc = 0x1169A8u;
    // 0x1169a8: 0x84e40004  lh          $a0, 0x4($a3)
    ctx->pc = 0x1169a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1169ac: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x1169acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x1169b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1169B0u;
    {
        const bool branch_taken_0x1169b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169B0u;
        // 0x1169b4: 0xa4e40004  sh          $a0, 0x4($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169b0) {
            ctx->pc = 0x1169D0u;
            return;
        }
    }
    ctx->pc = 0x1169B8u;
}
