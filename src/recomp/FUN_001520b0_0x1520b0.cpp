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

// Function: FUN_001520b0
// Address: 0x1520b0 - 0x152180
void FUN_001520b0_0x1520b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001520b0_0x1520b0");
#endif

    switch (ctx->pc) {
        case 0x1520b0u: goto label_1520b0;
        case 0x1520b4u: goto label_1520b4;
        case 0x1520b8u: goto label_1520b8;
        case 0x1520bcu: goto label_1520bc;
        case 0x1520c0u: goto label_1520c0;
        case 0x1520c4u: goto label_1520c4;
        case 0x1520c8u: goto label_1520c8;
        case 0x1520ccu: goto label_1520cc;
        case 0x1520d0u: goto label_1520d0;
        case 0x1520d4u: goto label_1520d4;
        case 0x1520d8u: goto label_1520d8;
        case 0x1520dcu: goto label_1520dc;
        case 0x1520e0u: goto label_1520e0;
        case 0x1520e4u: goto label_1520e4;
        case 0x1520e8u: goto label_1520e8;
        case 0x1520ecu: goto label_1520ec;
        case 0x1520f0u: goto label_1520f0;
        case 0x1520f4u: goto label_1520f4;
        case 0x1520f8u: goto label_1520f8;
        case 0x1520fcu: goto label_1520fc;
        case 0x152100u: goto label_152100;
        case 0x152104u: goto label_152104;
        case 0x152108u: goto label_152108;
        case 0x15210cu: goto label_15210c;
        case 0x152110u: goto label_152110;
        case 0x152114u: goto label_152114;
        case 0x152118u: goto label_152118;
        case 0x15211cu: goto label_15211c;
        case 0x152120u: goto label_152120;
        case 0x152124u: goto label_152124;
        case 0x152128u: goto label_152128;
        case 0x15212cu: goto label_15212c;
        case 0x152130u: goto label_152130;
        case 0x152134u: goto label_152134;
        case 0x152138u: goto label_152138;
        case 0x15213cu: goto label_15213c;
        case 0x152140u: goto label_152140;
        case 0x152144u: goto label_152144;
        case 0x152148u: goto label_152148;
        case 0x15214cu: goto label_15214c;
        case 0x152150u: goto label_152150;
        case 0x152154u: goto label_152154;
        case 0x152158u: goto label_152158;
        case 0x15215cu: goto label_15215c;
        case 0x152160u: goto label_152160;
        case 0x152164u: goto label_152164;
        case 0x152168u: goto label_152168;
        case 0x15216cu: goto label_15216c;
        case 0x152170u: goto label_152170;
        case 0x152174u: goto label_152174;
        case 0x152178u: goto label_152178;
        case 0x15217cu: goto label_15217c;
        default: break;
    }

    ctx->pc = 0x1520b0u;

label_1520b0:
    // 0x1520b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1520b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1520b4:
    // 0x1520b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1520b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1520b8:
    // 0x1520b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1520b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1520bc:
    // 0x1520bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1520bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1520c0:
    // 0x1520c0: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1520c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1520c4:
    // 0x1520c4: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x1520c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
label_1520c8:
    // 0x1520c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1520cc:
    if (ctx->pc == 0x1520CCu) {
        ctx->pc = 0x1520CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520C8u;
        // 0x1520cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520D0u;
        goto label_1520d0;
    }
    ctx->pc = 0x1520C8u;
    {
        const bool branch_taken_0x1520c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520C8u;
        // 0x1520cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520c8) {
            ctx->pc = 0x1520ECu;
            goto label_1520ec;
        }
    }
    ctx->pc = 0x1520D0u;
label_1520d0:
    // 0x1520d0: 0x2a0100dd  slti        $at, $s0, 0xDD
    ctx->pc = 0x1520d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)221) ? 1 : 0);
label_1520d4:
    // 0x1520d4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1520d8:
    if (ctx->pc == 0x1520D8u) {
        ctx->pc = 0x1520D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520D4u;
        // 0x1520d8: 0x2a020019  slti        $v0, $s0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520DCu;
        goto label_1520dc;
    }
    ctx->pc = 0x1520D4u;
    {
        const bool branch_taken_0x1520d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520D4u;
        // 0x1520d8: 0x2a020019  slti        $v0, $s0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520d4) {
            ctx->pc = 0x1520F0u;
            goto label_1520f0;
        }
    }
    ctx->pc = 0x1520DCu;
label_1520dc:
    // 0x1520dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1520dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1520e0:
    // 0x1520e0: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x1520e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1520e4:
    // 0x1520e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1520e8:
    if (ctx->pc == 0x1520E8u) {
        ctx->pc = 0x1520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520E4u;
        // 0x1520e8: 0x24422370  addiu       $v0, $v0, 0x2370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520ECu;
        goto label_1520ec;
    }
    ctx->pc = 0x1520E4u;
    {
        const bool branch_taken_0x1520e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520E4u;
        // 0x1520e8: 0x24422370  addiu       $v0, $v0, 0x2370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520e4) {
            ctx->pc = 0x152164u;
            goto label_152164;
        }
    }
    ctx->pc = 0x1520ECu;
label_1520ec:
    // 0x1520ec: 0x2a020019  slti        $v0, $s0, 0x19
    ctx->pc = 0x1520ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
label_1520f0:
    // 0x1520f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1520f4:
    if (ctx->pc == 0x1520F4u) {
        ctx->pc = 0x1520F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520F0u;
        // 0x1520f4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520F8u;
        goto label_1520f8;
    }
    ctx->pc = 0x1520F0u;
    {
        const bool branch_taken_0x1520f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520F0u;
        // 0x1520f4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520f0) {
            ctx->pc = 0x152108u;
            goto label_152108;
        }
    }
    ctx->pc = 0x1520F8u;
label_1520f8:
    // 0x1520f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1520fc:
    // 0x1520fc: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x1520fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_152100:
    // 0x152100: 0x10000018  b           . + 4 + (0x18 << 2)
label_152104:
    if (ctx->pc == 0x152104u) {
        ctx->pc = 0x152104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152100u;
        // 0x152104: 0x24422520  addiu       $v0, $v0, 0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152108u;
        goto label_152108;
    }
    ctx->pc = 0x152100u;
    {
        const bool branch_taken_0x152100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152100u;
        // 0x152104: 0x24422520  addiu       $v0, $v0, 0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152100) {
            ctx->pc = 0x152164u;
            goto label_152164;
        }
    }
    ctx->pc = 0x152108u;
label_152108:
    // 0x152108: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_15210c:
    if (ctx->pc == 0x15210Cu) {
        ctx->pc = 0x15210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152108u;
        // 0x15210c: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152110u;
        goto label_152110;
    }
    ctx->pc = 0x152108u;
    {
        const bool branch_taken_0x152108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x15210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152108u;
        // 0x15210c: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152108) {
            ctx->pc = 0x15211Cu;
            goto label_15211c;
        }
    }
    ctx->pc = 0x152110u;
label_152110:
    // 0x152110: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x152110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_152114:
    // 0x152114: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_152118:
    if (ctx->pc == 0x152118u) {
        ctx->pc = 0x15211Cu;
        goto label_15211c;
    }
    ctx->pc = 0x152114u;
    {
        const bool branch_taken_0x152114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x152114) {
            ctx->pc = 0x15213Cu;
            goto label_15213c;
        }
    }
    ctx->pc = 0x15211Cu;
label_15211c:
    // 0x15211c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_152120:
    // 0x152120: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x152120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152124:
    // 0x152124: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x152124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
label_152128:
    // 0x152128: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x152128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15212c:
    // 0x15212c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x15212cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_152130:
    // 0x152130: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_152134:
    // 0x152134: 0x1000000b  b           . + 4 + (0xB << 2)
label_152138:
    if (ctx->pc == 0x152138u) {
        ctx->pc = 0x152138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152134u;
        // 0x152138: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15213Cu;
        goto label_15213c;
    }
    ctx->pc = 0x152134u;
    {
        const bool branch_taken_0x152134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152134u;
        // 0x152138: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152134) {
            ctx->pc = 0x152164u;
            goto label_152164;
        }
    }
    ctx->pc = 0x15213Cu;
label_15213c:
    // 0x15213c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15213cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_152140:
    // 0x152140: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x152140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_152144:
    // 0x152144: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x152144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152148:
    // 0x152148: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x152148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
label_15214c:
    // 0x15214c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_152150:
    // 0x152150: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x152150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_152154:
    // 0x152154: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_152158:
    // 0x152158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15215c:
    // 0x15215c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_152160:
    // 0x152160: 0x0  nop
    ctx->pc = 0x152160u;
    // NOP
label_152164:
    // 0x152164: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x152164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_152168:
    // 0x152168: 0x40f809  jalr        $v0
label_15216c:
    if (ctx->pc == 0x15216Cu) {
        ctx->pc = 0x15216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152168u;
        // 0x15216c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152170u;
        goto label_152170;
    }
    ctx->pc = 0x152168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152170u);
        ctx->pc = 0x15216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152168u;
        // 0x15216c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152168u, 0x152170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152170u;
label_152170:
    // 0x152170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152174:
    // 0x152174: 0xc0751a4  jal         func_1D4690
label_152178:
    if (ctx->pc == 0x152178u) {
        ctx->pc = 0x152178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152174u;
        // 0x152178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15217Cu;
        goto label_15217c;
    }
    ctx->pc = 0x152174u;
    SET_GPR_U32(ctx, 31, 0x15217Cu);
    ctx->pc = 0x152178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152174u;
    // 0x152178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4690u, 0x152174u, 0x15217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15217Cu;
label_15217c:
    // 0x15217c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x152180u;
}
