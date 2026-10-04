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

// Function: FUN_00100160
// Address: 0x100160 - 0x1005b4
void FUN_00100160_0x100160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100160_0x100160");
#endif

    switch (ctx->pc) {
        case 0x1001b8u: goto label_1001b8;
        case 0x1001e8u: goto label_1001e8;
        case 0x100218u: goto label_100218;
        case 0x10025cu: goto label_10025c;
        case 0x10028cu: goto label_10028c;
        case 0x1002ccu: goto label_1002cc;
        case 0x1002fcu: goto label_1002fc;
        case 0x100340u: goto label_100340;
        case 0x100380u: goto label_100380;
        case 0x1003b0u: goto label_1003b0;
        case 0x1003f4u: goto label_1003f4;
        case 0x100424u: goto label_100424;
        case 0x100464u: goto label_100464;
        case 0x1004a8u: goto label_1004a8;
        case 0x1004e8u: goto label_1004e8;
        case 0x10052cu: goto label_10052c;
        case 0x10056cu: goto label_10056c;
        case 0x1005b0u: goto label_1005b0;
        default: break;
    }

    ctx->pc = 0x100160u;

    // 0x100160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100164: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x100164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x100168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10016c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x10016cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x100170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100174: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x100174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x100178: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x100178u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x10017c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x10017cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x100180: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x100180u;
    {
        const bool branch_taken_0x100180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x100184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100180u;
        // 0x100184: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100180) {
            ctx->pc = 0x100220u;
            goto label_100220;
        }
    }
    ctx->pc = 0x100188u;
    // 0x100188: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x100188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x10018c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x10018cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100190: 0x24423430  addiu       $v0, $v0, 0x3430
    ctx->pc = 0x100190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13360));
    // 0x100194: 0x24a53400  addiu       $a1, $a1, 0x3400
    ctx->pc = 0x100194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13312));
    // 0x100198: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10019c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001a0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1001a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1001a4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1001a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1001a8: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x1001a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1001ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1001acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001b0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1001B0u;
    SET_GPR_U32(ctx, 31, 0x1001B8u);
    ctx->pc = 0x1001B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001B0u;
    // 0x1001b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1001B0u, 0x1001B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001B8u;
label_1001b8:
    // 0x1001b8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1001b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1001bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1001bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1001c0: 0x24423500  addiu       $v0, $v0, 0x3500
    ctx->pc = 0x1001c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x1001c4: 0x24a53430  addiu       $a1, $a1, 0x3430
    ctx->pc = 0x1001c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13360));
    // 0x1001c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1001c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1001cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1001ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001d0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1001d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1001d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1001d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001d8: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x1001d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1001dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1001dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001e0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1001E0u;
    SET_GPR_U32(ctx, 31, 0x1001E8u);
    ctx->pc = 0x1001E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001E0u;
    // 0x1001e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1001E0u, 0x1001E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001E8u;
label_1001e8:
    // 0x1001e8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1001e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1001ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1001ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1001f0: 0x24423640  addiu       $v0, $v0, 0x3640
    ctx->pc = 0x1001f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13888));
    // 0x1001f4: 0x24a53500  addiu       $a1, $a1, 0x3500
    ctx->pc = 0x1001f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13568));
    // 0x1001f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1001f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1001fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1001fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100200: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100208: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10020c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10020cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100210: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100210u;
    SET_GPR_U32(ctx, 31, 0x100218u);
    ctx->pc = 0x100214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100210u;
    // 0x100214: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100210u, 0x100218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100218u;
label_100218:
    // 0x100218: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x100218u;
    {
        const bool branch_taken_0x100218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100218u;
        // 0x10021c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100218) {
            ctx->pc = 0x1005B4u;
            return;
        }
    }
    ctx->pc = 0x100220u;
label_100220:
    // 0x100220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100224: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x100224u;
    {
        const bool branch_taken_0x100224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x100228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100224u;
        // 0x100228: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100224) {
            ctx->pc = 0x100294u;
            goto label_100294;
        }
    }
    ctx->pc = 0x10022Cu;
    // 0x10022c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x10022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100230: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100234: 0x24427130  addiu       $v0, $v0, 0x7130
    ctx->pc = 0x100234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28976));
    // 0x100238: 0x24a56ea0  addiu       $a1, $a1, 0x6EA0
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28320));
    // 0x10023c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100244: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10024c: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x10024cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x100250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100254: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100254u;
    SET_GPR_U32(ctx, 31, 0x10025Cu);
    ctx->pc = 0x100258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100254u;
    // 0x100258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100254u, 0x10025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10025Cu;
label_10025c:
    // 0x10025c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x10025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100260: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100264: 0x24427468  addiu       $v0, $v0, 0x7468
    ctx->pc = 0x100264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29800));
    // 0x100268: 0x24a57130  addiu       $a1, $a1, 0x7130
    ctx->pc = 0x100268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28976));
    // 0x10026c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100274: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10027c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10027cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100284: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100284u;
    SET_GPR_U32(ctx, 31, 0x10028Cu);
    ctx->pc = 0x100288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100284u;
    // 0x100288: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100284u, 0x10028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10028Cu;
label_10028c:
    // 0x10028c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x10028Cu;
    {
        const bool branch_taken_0x10028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10028c) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x100294u;
label_100294:
    // 0x100294: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x100294u;
    {
        const bool branch_taken_0x100294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100294) {
            ctx->pc = 0x100304u;
            goto label_100304;
        }
    }
    ctx->pc = 0x10029Cu;
    // 0x10029c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1002a0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1002a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1002a4: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x1002a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
    // 0x1002a8: 0x24a59520  addiu       $a1, $a1, -0x6AE0
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939936));
    // 0x1002ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1002acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1002b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1002b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002b4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1002b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1002b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1002b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002bc: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x1002bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1002c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1002c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002c4: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1002C4u;
    SET_GPR_U32(ctx, 31, 0x1002CCu);
    ctx->pc = 0x1002C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002C4u;
    // 0x1002c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1002C4u, 0x1002CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002CCu;
label_1002cc:
    // 0x1002cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1002ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1002d0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1002d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1002d4: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x1002d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x1002d8: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x1002d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x1002dc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1002dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1002e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1002e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002e4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1002e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1002ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1002f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f4: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1002F4u;
    SET_GPR_U32(ctx, 31, 0x1002FCu);
    ctx->pc = 0x1002F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002F4u;
    // 0x1002f8: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1002F4u, 0x1002FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002FCu;
label_1002fc:
    // 0x1002fc: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1002FCu;
    {
        const bool branch_taken_0x1002fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1002fc) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x100304u;
label_100304:
    // 0x100304: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x100304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100308: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x100308u;
    {
        const bool branch_taken_0x100308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100308u;
        // 0x10030c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100308) {
            ctx->pc = 0x100348u;
            goto label_100348;
        }
    }
    ctx->pc = 0x100310u;
    // 0x100310: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100314: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100318: 0x2442edf8  addiu       $v0, $v0, -0x1208
    ctx->pc = 0x100318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962680));
    // 0x10031c: 0x24a5ec00  addiu       $a1, $a1, -0x1400
    ctx->pc = 0x10031cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962176));
    // 0x100320: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100328: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10032c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10032cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100338: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100338u;
    SET_GPR_U32(ctx, 31, 0x100340u);
    ctx->pc = 0x10033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100338u;
    // 0x10033c: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100338u, 0x100340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100340u;
label_100340:
    // 0x100340: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x100340u;
    {
        const bool branch_taken_0x100340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100340) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x100348u;
label_100348:
    // 0x100348: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x100348u;
    {
        const bool branch_taken_0x100348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100348) {
            ctx->pc = 0x1003B8u;
            goto label_1003b8;
        }
    }
    ctx->pc = 0x100350u;
    // 0x100350: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x100350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100354: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100358: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x100358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x10035c: 0x24a53640  addiu       $a1, $a1, 0x3640
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    // 0x100360: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100368: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10036c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10036cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100370: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x100370u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x100374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100378: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100378u;
    SET_GPR_U32(ctx, 31, 0x100380u);
    ctx->pc = 0x10037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100378u;
    // 0x10037c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100378u, 0x100380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100380u;
label_100380:
    // 0x100380: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100384: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100388: 0x24426ea0  addiu       $v0, $v0, 0x6EA0
    ctx->pc = 0x100388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28320));
    // 0x10038c: 0x24a555d0  addiu       $a1, $a1, 0x55D0
    ctx->pc = 0x10038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21968));
    // 0x100390: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100398: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10039c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10039cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1003a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1003a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1003A8u;
    SET_GPR_U32(ctx, 31, 0x1003B0u);
    ctx->pc = 0x1003ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003A8u;
    // 0x1003ac: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1003A8u, 0x1003B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003B0u;
label_1003b0:
    // 0x1003b0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1003B0u;
    {
        const bool branch_taken_0x1003b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003b0) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x1003B8u;
label_1003b8:
    // 0x1003b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1003b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1003bc: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1003BCu;
    {
        const bool branch_taken_0x1003bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1003C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003BCu;
        // 0x1003c0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003bc) {
            ctx->pc = 0x10042Cu;
            goto label_10042c;
        }
    }
    ctx->pc = 0x1003C4u;
    // 0x1003c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1003c8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1003c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1003cc: 0x2442ad68  addiu       $v0, $v0, -0x5298
    ctx->pc = 0x1003ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946152));
    // 0x1003d0: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x1003d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    // 0x1003d4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1003d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1003d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003dc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1003dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1003e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1003e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003e4: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x1003e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1003e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1003e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003ec: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1003ECu;
    SET_GPR_U32(ctx, 31, 0x1003F4u);
    ctx->pc = 0x1003F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003ECu;
    // 0x1003f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1003ECu, 0x1003F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003F4u;
label_1003f4:
    // 0x1003f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1003f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1003f8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1003f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1003fc: 0x2442c2e8  addiu       $v0, $v0, -0x3D18
    ctx->pc = 0x1003fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951656));
    // 0x100400: 0x24a5ad70  addiu       $a1, $a1, -0x5290
    ctx->pc = 0x100400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946160));
    // 0x100404: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10040c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100418: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10041c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x10041Cu;
    SET_GPR_U32(ctx, 31, 0x100424u);
    ctx->pc = 0x100420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10041Cu;
    // 0x100420: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x10041Cu, 0x100424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100424u;
label_100424:
    // 0x100424: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x100424u;
    {
        const bool branch_taken_0x100424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100424) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x10042Cu;
label_10042c:
    // 0x10042c: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x10042Cu;
    {
        const bool branch_taken_0x10042c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10042c) {
            ctx->pc = 0x10046Cu;
            goto label_10046c;
        }
    }
    ctx->pc = 0x100434u;
    // 0x100434: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100438: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x10043c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x100440: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    // 0x100444: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10044c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10045c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x10045Cu;
    SET_GPR_U32(ctx, 31, 0x100464u);
    ctx->pc = 0x100460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10045Cu;
    // 0x100460: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x10045Cu, 0x100464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100464u;
label_100464:
    // 0x100464: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x100464u;
    {
        const bool branch_taken_0x100464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100464) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x10046Cu;
label_10046c:
    // 0x10046c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x100470: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x100470u;
    {
        const bool branch_taken_0x100470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x100474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100470u;
        // 0x100474: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100470) {
            ctx->pc = 0x1004B0u;
            goto label_1004b0;
        }
    }
    ctx->pc = 0x100478u;
    // 0x100478: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x10047c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x10047cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100480: 0x2442e748  addiu       $v0, $v0, -0x18B8
    ctx->pc = 0x100480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960968));
    // 0x100484: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x100484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x100488: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10048c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100490: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100498: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10049c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10049cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004a0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1004A0u;
    SET_GPR_U32(ctx, 31, 0x1004A8u);
    ctx->pc = 0x1004A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004A0u;
    // 0x1004a4: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1004A0u, 0x1004A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004A8u;
label_1004a8:
    // 0x1004a8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1004A8u;
    {
        const bool branch_taken_0x1004a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004a8) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x1004B0u;
label_1004b0:
    // 0x1004b0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1004B0u;
    {
        const bool branch_taken_0x1004b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1004b0) {
            ctx->pc = 0x1004F0u;
            goto label_1004f0;
        }
    }
    ctx->pc = 0x1004B8u;
    // 0x1004b8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1004b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1004bc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1004bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1004c0: 0x24421b30  addiu       $v0, $v0, 0x1B30
    ctx->pc = 0x1004c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6960));
    // 0x1004c4: 0x24a518d0  addiu       $a1, $a1, 0x18D0
    ctx->pc = 0x1004c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
    // 0x1004c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1004cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1004ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1004d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1004d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1004d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1004dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004e0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1004E0u;
    SET_GPR_U32(ctx, 31, 0x1004E8u);
    ctx->pc = 0x1004E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004E0u;
    // 0x1004e4: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1004E0u, 0x1004E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004E8u;
label_1004e8:
    // 0x1004e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1004E8u;
    {
        const bool branch_taken_0x1004e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004e8) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x1004F0u;
label_1004f0:
    // 0x1004f0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1004f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1004f4: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1004F4u;
    {
        const bool branch_taken_0x1004f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1004F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004F4u;
        // 0x1004f8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004f4) {
            ctx->pc = 0x100534u;
            goto label_100534;
        }
    }
    ctx->pc = 0x1004FCu;
    // 0x1004fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1004fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100500: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100504: 0x24421338  addiu       $v0, $v0, 0x1338
    ctx->pc = 0x100504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x100508: 0x24a51290  addiu       $a1, $a1, 0x1290
    ctx->pc = 0x100508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4752));
    // 0x10050c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100514: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100518: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x100518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x10051c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10051cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100520: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100524: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100524u;
    SET_GPR_U32(ctx, 31, 0x10052Cu);
    ctx->pc = 0x100528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100524u;
    // 0x100528: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100524u, 0x10052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10052Cu;
label_10052c:
    // 0x10052c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10052Cu;
    {
        const bool branch_taken_0x10052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10052c) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x100534u;
label_100534:
    // 0x100534: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x100534u;
    {
        const bool branch_taken_0x100534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100534) {
            ctx->pc = 0x100574u;
            goto label_100574;
        }
    }
    ctx->pc = 0x10053Cu;
    // 0x10053c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100540: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100544: 0x24423f18  addiu       $v0, $v0, 0x3F18
    ctx->pc = 0x100544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16152));
    // 0x100548: 0x24a52e60  addiu       $a1, $a1, 0x2E60
    ctx->pc = 0x100548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11872));
    // 0x10054c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100554: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10055c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10055cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100564: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100564u;
    SET_GPR_U32(ctx, 31, 0x10056Cu);
    ctx->pc = 0x100568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100564u;
    // 0x100568: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100564u, 0x10056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10056Cu;
label_10056c:
    // 0x10056c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10056Cu;
    {
        const bool branch_taken_0x10056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10056c) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x100574u;
label_100574:
    // 0x100574: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x100574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x100578: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x100578u;
    {
        const bool branch_taken_0x100578 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100578) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x100580u;
    // 0x100580: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100584: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100588: 0x2442ebf8  addiu       $v0, $v0, -0x1408
    ctx->pc = 0x100588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962168));
    // 0x10058c: 0x24a5e750  addiu       $a1, $a1, -0x18B0
    ctx->pc = 0x10058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
    // 0x100590: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100598: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10059c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10059cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1005a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1005a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005a8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1005A8u;
    SET_GPR_U32(ctx, 31, 0x1005B0u);
    ctx->pc = 0x1005ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005A8u;
    // 0x1005ac: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1005A8u, 0x1005B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005B0u;
label_1005b0:
    // 0x1005b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1005b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1005b4u;
}
