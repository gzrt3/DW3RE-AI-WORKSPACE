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

// Function: FUN_00227930
// Address: 0x227930 - 0x227a00
void FUN_00227930_0x227930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227930_0x227930");
#endif

    switch (ctx->pc) {
        case 0x2279f8u: goto label_2279f8;
        default: break;
    }

    ctx->pc = 0x227930u;

    // 0x227930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227934: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x227934u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x227938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22793c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x22793cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x227940: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x227940u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227944: 0x256b25ae  addiu       $t3, $t3, 0x25AE
    ctx->pc = 0x227944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9646));
    // 0x227948: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x227948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22794c: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x22794cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
    // 0x227950: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x227950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x227954: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x227958: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x227958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22795c: 0x92200  sll         $a0, $t1, 8
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x227960: 0x893823  subu        $a3, $a0, $t1
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x227964: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x227964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x227968: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x227968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22796c: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x227970: 0x450c0  sll         $t2, $a0, 3
    ctx->pc = 0x227970u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x227974: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x227974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x227978: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x227978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22797c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x22797cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x227980: 0x1653821  addu        $a3, $t3, $a1
    ctx->pc = 0x227980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x227984: 0x24e90000  addiu       $t1, $a3, 0x0
    ctx->pc = 0x227984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x227988: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x227988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22798c: 0xa23823  subu        $a3, $a1, $v0
    ctx->pc = 0x22798cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227990: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x227990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x227994: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x227994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x227998: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x227998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x22799c: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x22799cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2279a0: 0x748c0  sll         $t1, $a3, 3
    ctx->pc = 0x2279a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2279a4: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2279a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2279a8: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x2279a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2279ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2279acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2279b0: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x2279b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2279b4: 0x25270000  addiu       $a3, $t1, 0x0
    ctx->pc = 0x2279b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 0));
    // 0x2279b8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x2279b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2279bc: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x2279bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2279c0: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2279c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2279c4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2279c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2279c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2279c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2279cc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2279ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2279d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2279d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2279d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2279d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2279d8: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x2279d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2279dc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2279dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x2279e0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2279e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2279e4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2279e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2279e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2279e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2279ec: 0x84420232  lh          $v0, 0x232($v0)
    ctx->pc = 0x2279ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 562)));
    // 0x2279f0: 0xc056534  jal         func_1594D0
    ctx->pc = 0x2279F0u;
    SET_GPR_U32(ctx, 31, 0x2279F8u);
    ctx->pc = 0x2279F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2279F0u;
    // 0x2279f4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1594D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594D0u, 0x2279F0u, 0x2279F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279F8u;
label_2279f8:
    // 0x2279f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2279f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2279fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2279fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227a00u;
}
