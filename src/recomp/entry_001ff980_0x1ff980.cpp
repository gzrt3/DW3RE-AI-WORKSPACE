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

// Function: entry_001ff980
// Address: 0x1ff980 - 0x1ffa34
void entry_001ff980_0x1ff980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff980_0x1ff980");
#endif

    switch (ctx->pc) {
        case 0x1ff9e0u: goto label_1ff9e0;
        case 0x1ffa00u: goto label_1ffa00;
        case 0x1ffa2cu: goto label_1ffa2c;
        default: break;
    }

    ctx->pc = 0x1ff980u;

    // 0x1ff980: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1ff984: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ff984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ff988: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x1ff988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x1ff98c: 0x76b821  addu        $s7, $v1, $s6
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1ff990: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1ff990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ff994: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FF994u;
    {
        const bool branch_taken_0x1ff994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF994u;
        // 0x1ff998: 0x2754021  addu        $t0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff994) {
            ctx->pc = 0x1FFA34u;
            return;
        }
    }
    ctx->pc = 0x1FF99Cu;
    // 0x1ff99c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1ff99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ff9a0: 0x34039400  ori         $v1, $zero, 0x9400
    ctx->pc = 0x1ff9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x1ff9a4: 0xa1001833  sb          $zero, 0x1833($t0)
    ctx->pc = 0x1ff9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6195), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff9a8: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1ff9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1ff9ac: 0xa5031840  sh          $v1, 0x1840($t0)
    ctx->pc = 0x1ff9acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6208), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff9b0: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1ff9b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1ff9b4: 0xa5021842  sh          $v0, 0x1842($t0)
    ctx->pc = 0x1ff9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6210), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff9b8: 0xad0a1844  sw          $t2, 0x1844($t0)
    ctx->pc = 0x1ff9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6212), GPR_U32(ctx, 10));
    // 0x1ff9bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ff9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff9c0: 0xa5031850  sh          $v1, 0x1850($t0)
    ctx->pc = 0x1ff9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6224), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff9c4: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1ff9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1ff9c8: 0xa5021852  sh          $v0, 0x1852($t0)
    ctx->pc = 0x1ff9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6226), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff9cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9d0: 0xad0a1854  sw          $t2, 0x1854($t0)
    ctx->pc = 0x1ff9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6228), GPR_U32(ctx, 10));
    // 0x1ff9d4: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1ff9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1ff9d8: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1FF9D8u;
    SET_GPR_U32(ctx, 31, 0x1FF9E0u);
    ctx->pc = 0x1FF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9D8u;
    // 0x1ff9dc: 0x24080280  addiu       $t0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FF9D8u, 0x1FF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF9E0u;
label_1ff9e0:
    // 0x1ff9e0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1ff9e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff9e8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
    // 0x1ff9ec: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ff9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
    // 0x1ff9f0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ff9f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9f8: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1FF9F8u;
    SET_GPR_U32(ctx, 31, 0x1FFA00u);
    ctx->pc = 0x1FF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9F8u;
    // 0x1ff9fc: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FF9F8u, 0x1FFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA00u;
label_1ffa00:
    // 0x1ffa00: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ffa04: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1ffa04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
    // 0x1ffa08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ffa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ffa0c: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1ffa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
    // 0x1ffa10: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1ffa14: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ffa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1ffa18: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ffa18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1ffa1c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ffa1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffa20: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ffa24: 0xc0708ac  jal         func_1C22B0
    ctx->pc = 0x1FFA24u;
    SET_GPR_U32(ctx, 31, 0x1FFA2Cu);
    ctx->pc = 0x1FFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA24u;
    // 0x1ffa28: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1FFA24u, 0x1FFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA2Cu;
label_1ffa2c:
    // 0x1ffa2c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1FFA2Cu;
    {
        const bool branch_taken_0x1ffa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa2c) {
            ctx->pc = 0x1FFB68u;
            return;
        }
    }
    ctx->pc = 0x1FFA34u;
}
