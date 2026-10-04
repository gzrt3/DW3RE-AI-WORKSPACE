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

// Function: FUN_00126900
// Address: 0x126900 - 0x126a84
void FUN_00126900_0x126900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126900_0x126900");
#endif

    switch (ctx->pc) {
        case 0x126928u: goto label_126928;
        case 0x126994u: goto label_126994;
        case 0x1269ccu: goto label_1269cc;
        case 0x126a20u: goto label_126a20;
        case 0x126a58u: goto label_126a58;
        case 0x126a70u: goto label_126a70;
        default: break;
    }

    ctx->pc = 0x126900u;

    // 0x126900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x126904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x126908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12690c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x126910: 0xc4810308  lwc1        $f1, 0x308($a0)
    ctx->pc = 0x126910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126918: 0xc4800320  lwc1        $f0, 0x320($a0)
    ctx->pc = 0x126918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12691c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12691cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x126920: 0xc064aa4  jal         func_192A90
    ctx->pc = 0x126920u;
    SET_GPR_U32(ctx, 31, 0x126928u);
    ctx->pc = 0x126924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126920u;
    // 0x126924: 0xe48c0320  swc1        $f12, 0x320($a0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 800), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A90u, 0x126920u, 0x126928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126928u;
label_126928:
    // 0x126928: 0xe6000320  swc1        $f0, 0x320($s0)
    ctx->pc = 0x126928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
    // 0x12692c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12692cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x126930: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x126930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x126934: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x126934u;
    {
        const bool branch_taken_0x126934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x126934) {
            ctx->pc = 0x126A58u;
            goto label_126a58;
        }
    }
    ctx->pc = 0x12693Cu;
    // 0x12693c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x12693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x126940: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x126940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x126944: 0x34443ffc  ori         $a0, $v0, 0x3FFC
    ctx->pc = 0x126944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x126948: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x12694c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x12694cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x126950: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x126950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12695c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x12695cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x126960: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x126960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126964: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x126964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x126968: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x126968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12696c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126970: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x126970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x126974: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x126974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x126978: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x126978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12697c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12697cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x126980: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x126980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x126984: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x126984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x126988: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x126988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12698c: 0xc072120  jal         func_1C8480
    ctx->pc = 0x12698Cu;
    SET_GPR_U32(ctx, 31, 0x126994u);
    ctx->pc = 0x126990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12698Cu;
    // 0x126990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8480u, 0x12698Cu, 0x126994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126994u;
label_126994:
    // 0x126994: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x126994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x126998: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x126998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12699c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1269a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1269a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1269a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1269a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269ac: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1269acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269b0: 0x2469fffb  addiu       $t1, $v1, -0x5
    ctx->pc = 0x1269b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1269b4: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x1269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1269b8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1269b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1269bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1269bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1269c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1269c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1269c4: 0xc072120  jal         func_1C8480
    ctx->pc = 0x1269C4u;
    SET_GPR_U32(ctx, 31, 0x1269CCu);
    ctx->pc = 0x1269C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269C4u;
    // 0x1269c8: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8480u, 0x1269C4u, 0x1269CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269CCu;
label_1269cc:
    // 0x1269cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1269ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1269d0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1269d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1269d4: 0x8c293ffc  lw          $t1, 0x3FFC($at)
    ctx->pc = 0x1269d4u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1269d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1269d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1269dc: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1269dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1269e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1269e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1269e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269e8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1269e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269ec: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x1269ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1269f0: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1269f4: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1269f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1269f8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1269f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1269fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1269fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x126a00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x126a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126a04: 0x2092021  addu        $a0, $s0, $t1
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x126a08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x126a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x126a0c: 0x24910150  addiu       $s1, $a0, 0x150
    ctx->pc = 0x126a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x126a10: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x126a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a18: 0xc072120  jal         func_1C8480
    ctx->pc = 0x126A18u;
    SET_GPR_U32(ctx, 31, 0x126A20u);
    ctx->pc = 0x126A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A18u;
    // 0x126a1c: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8480u, 0x126A18u, 0x126A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A20u;
label_126a20:
    // 0x126a20: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x126a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x126a24: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x126a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x126a28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x126a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x126a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x126a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a38: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x126a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a3c: 0x2469fffb  addiu       $t1, $v1, -0x5
    ctx->pc = 0x126a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x126a40: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x126a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x126a44: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x126a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x126a48: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x126a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x126a4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x126a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126a50: 0xc072120  jal         func_1C8480
    ctx->pc = 0x126A50u;
    SET_GPR_U32(ctx, 31, 0x126A58u);
    ctx->pc = 0x126A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A50u;
    // 0x126a54: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8480u, 0x126A50u, 0x126A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A58u;
label_126a58:
    // 0x126a58: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x126a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x126a5c: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x126a5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x126a60: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x126A60u;
    {
        const bool branch_taken_0x126a60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A60u;
        // 0x126a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a60) {
            ctx->pc = 0x126A78u;
            goto label_126a78;
        }
    }
    ctx->pc = 0x126A68u;
    // 0x126a68: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x126A68u;
    SET_GPR_U32(ctx, 31, 0x126A70u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x126A68u, 0x126A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A70u;
label_126a70:
    // 0x126a70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x126A70u;
    {
        const bool branch_taken_0x126a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A70u;
        // 0x126a74: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a70) {
            ctx->pc = 0x126A84u;
            return;
        }
    }
    ctx->pc = 0x126A78u;
label_126a78:
    // 0x126a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x126a7c: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x126a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x126a80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x126a84u;
}
