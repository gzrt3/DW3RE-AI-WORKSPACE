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

// Function: entry_00175934
// Address: 0x175934 - 0x175a30
void entry_00175934_0x175934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175934_0x175934");
#endif

    switch (ctx->pc) {
        case 0x1759d8u: goto label_1759d8;
        default: break;
    }

    ctx->pc = 0x175934u;

    // 0x175934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17593c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17593cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175940: 0x3e00008  jr          $ra
    ctx->pc = 0x175940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175940u;
        // 0x175944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175948u;
    // 0x175948: 0x0  nop
    ctx->pc = 0x175948u;
    // NOP
    // 0x17594c: 0x0  nop
    ctx->pc = 0x17594cu;
    // NOP
    // 0x175950: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x175954: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175958: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17595c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x175960: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x175964: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x175968: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x17596c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x17596cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x175970: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17597c: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x17597cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
    // 0x175980: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x175984: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x175984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x175988: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x175988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17598c: 0x38910001  xori        $s1, $a0, 0x1
    ctx->pc = 0x17598cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x175990: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x175990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x175994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175998: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x17599c: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x17599cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1759a0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1759a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1759a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1759ac: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1759b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1759b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1759b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1759b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1759b8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1759b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1759bc: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x1759bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x1759c0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1759c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1759c4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x1759c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1759c8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1759c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1759cc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1759ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1759d0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1759D0u;
    SET_GPR_U32(ctx, 31, 0x1759D8u);
    ctx->pc = 0x1759D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759D0u;
    // 0x1759d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1759D0u, 0x1759D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759D8u;
label_1759d8:
    // 0x1759d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1759dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1759e0: 0xa2030222  sb          $v1, 0x222($s0)
    ctx->pc = 0x1759e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 3));
    // 0x1759e4: 0xa6030230  sh          $v1, 0x230($s0)
    ctx->pc = 0x1759e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 3));
    // 0x1759e8: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334900u));
    // 0x1759ec: 0xae430228  sw          $v1, 0x228($s2)
    ctx->pc = 0x1759ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 3));
    // 0x1759f0: 0xae03022c  sw          $v1, 0x22C($s0)
    ctx->pc = 0x1759f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 3));
    // 0x1759f4: 0xa251021f  sb          $s1, 0x21F($s2)
    ctx->pc = 0x1759f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 543), (uint8_t)GPR_U32(ctx, 17));
    // 0x1759f8: 0xa6400226  sh          $zero, 0x226($s2)
    ctx->pc = 0x1759f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x1759fc: 0xa2400223  sb          $zero, 0x223($s2)
    ctx->pc = 0x1759fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
    // 0x175a00: 0xa2400224  sb          $zero, 0x224($s2)
    ctx->pc = 0x175a00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 548), (uint8_t)GPR_U32(ctx, 0));
    // 0x175a04: 0xae400234  sw          $zero, 0x234($s2)
    ctx->pc = 0x175a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 0));
    // 0x175a08: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x175a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
    // 0x175a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x175a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x175A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A1Cu;
        // 0x175a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A24u;
    // 0x175a24: 0x0  nop
    ctx->pc = 0x175a24u;
    // NOP
    // 0x175a28: 0x0  nop
    ctx->pc = 0x175a28u;
    // NOP
    // 0x175a2c: 0x0  nop
    ctx->pc = 0x175a2cu;
    // NOP
    ctx->pc = 0x175a30u;
}
