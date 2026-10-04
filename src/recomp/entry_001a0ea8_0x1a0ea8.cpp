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

// Function: entry_001a0ea8
// Address: 0x1a0ea8 - 0x1a0f90
void entry_001a0ea8_0x1a0ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ea8_0x1a0ea8");
#endif

    switch (ctx->pc) {
        case 0x1a0eb4u: goto label_1a0eb4;
        case 0x1a0f3cu: goto label_1a0f3c;
        default: break;
    }

    ctx->pc = 0x1a0ea8u;

    // 0x1a0ea8: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1a0ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x1a0eac: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A0EACu;
    SET_GPR_U32(ctx, 31, 0x1A0EB4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A0EACu, 0x1A0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EB4u;
label_1a0eb4:
    // 0x1a0eb4: 0xf  sync
    ctx->pc = 0x1a0eb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a0eb8: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x1a0eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1a0ebc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1a0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1a0ec0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a0ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0ec4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1a0ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0ec8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1a0ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0ecc: 0x34c6d480  ori         $a2, $a2, 0xD480
    ctx->pc = 0x1a0eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54400);
    // 0x1a0ed0: 0x264908c0  addiu       $t1, $s2, 0x8C0
    ctx->pc = 0x1a0ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 2240));
    // 0x1a0ed4: 0x34e7d430  ori         $a3, $a3, 0xD430
    ctx->pc = 0x1a0ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54320);
    // 0x1a0ed8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0edc: 0x24080105  addiu       $t0, $zero, 0x105
    ctx->pc = 0x1a0edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1a0ee0: 0x3442d420  ori         $v0, $v0, 0xD420
    ctx->pc = 0x1a0ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54304);
    // 0x1a0ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a0ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0ee8: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1a0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a0eec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a0eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0ef0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1a0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0ef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0ef8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x1a0efc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0f00: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a0f04: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x1a0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x1a0f08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a0f08u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x1a0f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f10: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a0f10u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 8));
    // 0x1a0f14: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1A0F14u;
    ctx->pc = 0x1A0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F14u;
    // 0x1a0f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0F1Cu;
    // 0x1a0f1c: 0x0  nop
    ctx->pc = 0x1a0f1cu;
    // NOP
    // 0x1a0f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0f24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0f2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a0f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0f34: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A0F34u;
    SET_GPR_U32(ctx, 31, 0x1A0F3Cu);
    ctx->pc = 0x1A0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F34u;
    // 0x1a0f38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A0F34u, 0x1A0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F3Cu;
label_1a0f3c:
    // 0x1a0f3c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a0f40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a0f44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a0f48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0f4c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1a0f4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1a0f50: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a0f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1a0f54: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x1a0f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1a0f58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0f5c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1a0f60: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x1a0f64: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1a0f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x1a0f68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0f6c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1a0f70: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1a0f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x1a0f74: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a0f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0f7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a0f84u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3));
    // 0x1a0f88: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1A0F88u;
    ctx->pc = 0x1A0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F88u;
    // 0x1a0f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0F90u;
}
