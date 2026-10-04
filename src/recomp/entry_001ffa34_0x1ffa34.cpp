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

// Function: entry_001ffa34
// Address: 0x1ffa34 - 0x1ffae8
void entry_001ffa34_0x1ffa34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffa34_0x1ffa34");
#endif

    switch (ctx->pc) {
        case 0x1ffaccu: goto label_1ffacc;
        default: break;
    }

    ctx->pc = 0x1ffa34u;

    // 0x1ffa34: 0x0  nop
    ctx->pc = 0x1ffa34u;
    // NOP
    // 0x1ffa38: 0x27c300d0  addiu       $v1, $fp, 0xD0
    ctx->pc = 0x1ffa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 208));
    // 0x1ffa3c: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1ffa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1ffa40: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x1ffa40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ffa44: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ffa48: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1ffa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ffa4c: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ffa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1ffa50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ffa54: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1ffa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1ffa58: 0x24666c00  addiu       $a2, $v1, 0x6C00
    ctx->pc = 0x1ffa58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1ffa5c: 0xa4441840  sh          $a0, 0x1840($v0)
    ctx->pc = 0x1ffa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6208), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ffa60: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1ffa64: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x1ffa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1ffa68: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1ffa6c: 0xa4441842  sh          $a0, 0x1842($v0)
    ctx->pc = 0x1ffa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6210), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ffa70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ffa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ffa74: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ffa74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1ffa78: 0x24657900  addiu       $a1, $v1, 0x7900
    ctx->pc = 0x1ffa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1ffa7c: 0xac471844  sw          $a3, 0x1844($v0)
    ctx->pc = 0x1ffa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6212), GPR_U32(ctx, 7));
    // 0x1ffa80: 0xa4461850  sh          $a2, 0x1850($v0)
    ctx->pc = 0x1ffa80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6224), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ffa84: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1ffa88: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1ffa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x1ffa8c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ffa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ffa90: 0xa4451852  sh          $a1, 0x1852($v0)
    ctx->pc = 0x1ffa90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6226), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ffa94: 0x27c300cc  addiu       $v1, $fp, 0xCC
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 204));
    // 0x1ffa98: 0xac471854  sw          $a3, 0x1854($v0)
    ctx->pc = 0x1ffa98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6228), GPR_U32(ctx, 7));
    // 0x1ffa9c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ffa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ffaa0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1ffaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1ffaa4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1ffaa8: 0xa0441833  sb          $a0, 0x1833($v0)
    ctx->pc = 0x1ffaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6195), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffaac: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1ffaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ffab0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ffab4: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1ffab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x1ffab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ffabc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ffac0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffac4: 0xc055148  jal         func_154520
    ctx->pc = 0x1FFAC4u;
    SET_GPR_U32(ctx, 31, 0x1FFACCu);
    ctx->pc = 0x1FFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAC4u;
    // 0x1ffac8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FFAC4u, 0x1FFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFACCu;
label_1ffacc:
    // 0x1ffacc: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1ffaccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ffad0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ffad4: 0x8fa900f0  lw          $t1, 0xF0($sp)
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ffad8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ffad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ffadc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffae0: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ffae0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x1ffae4: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1ffae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->pc = 0x1ffae8u;
}
