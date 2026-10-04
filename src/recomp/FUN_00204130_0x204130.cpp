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

// Function: FUN_00204130
// Address: 0x204130 - 0x20429c
void FUN_00204130_0x204130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00204130_0x204130");
#endif

    switch (ctx->pc) {
        case 0x20418cu: goto label_20418c;
        case 0x2041dcu: goto label_2041dc;
        case 0x204204u: goto label_204204;
        case 0x204238u: goto label_204238;
        case 0x20427cu: goto label_20427c;
        case 0x204298u: goto label_204298;
        default: break;
    }

    ctx->pc = 0x204130u;

    // 0x204130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204134: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x204134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x204138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x204138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20413c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204144: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204148: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x204148u;
    {
        const bool branch_taken_0x204148 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204148u;
        // 0x20414c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204148) {
            ctx->pc = 0x204194u;
            goto label_204194;
        }
    }
    ctx->pc = 0x204150u;
    // 0x204150: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x204150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x204154: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x204154u;
    {
        const bool branch_taken_0x204154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204154u;
        // 0x204158: 0x28a3000a  slti        $v1, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204154) {
            ctx->pc = 0x204198u;
            goto label_204198;
        }
    }
    ctx->pc = 0x20415Cu;
    // 0x20415c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x204160: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x204164: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x204168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20416c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204170: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204178: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x204178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
    // 0x20417c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204180: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x204180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204184: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x204184u;
    SET_GPR_U32(ctx, 31, 0x20418Cu);
    ctx->pc = 0x204188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204184u;
    // 0x204188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x204184u, 0x20418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20418Cu;
label_20418c:
    // 0x20418c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x20418Cu;
    {
        const bool branch_taken_0x20418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20418Cu;
        // 0x204190: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20418c) {
            ctx->pc = 0x20429Cu;
            return;
        }
    }
    ctx->pc = 0x204194u;
label_204194:
    // 0x204194: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x204194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_204198:
    // 0x204198: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x204198u;
    {
        const bool branch_taken_0x204198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204198u;
        // 0x20419c: 0x28a30014  slti        $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204198) {
            ctx->pc = 0x20420Cu;
            goto label_20420c;
        }
    }
    ctx->pc = 0x2041A0u;
    // 0x2041a0: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x2041a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2041a4: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2041A4u;
    {
        const bool branch_taken_0x2041a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041a4) {
            ctx->pc = 0x20420Cu;
            goto label_20420c;
        }
    }
    ctx->pc = 0x2041ACu;
    // 0x2041ac: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2041b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2041b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2041b4: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x2041b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2041bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2041bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2041c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2041c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2041c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2041c8: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x2041c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
    // 0x2041cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2041d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2041d4: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x2041D4u;
    SET_GPR_U32(ctx, 31, 0x2041DCu);
    ctx->pc = 0x2041D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041D4u;
    // 0x2041d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x2041D4u, 0x2041DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041DCu;
label_2041dc:
    // 0x2041dc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2041dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2041e0: 0x1223002d  beq         $s1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2041E0u;
    {
        const bool branch_taken_0x2041e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2041e0) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x2041E8u;
    // 0x2041e8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2041ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2041f0: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x2041f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x2041f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2041f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2041fc: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x2041FCu;
    SET_GPR_U32(ctx, 31, 0x204204u);
    ctx->pc = 0x204200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041FCu;
    // 0x204200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x2041FCu, 0x204204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204204u;
label_204204:
    // 0x204204: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x204204u;
    {
        const bool branch_taken_0x204204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204204) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x20420Cu;
label_20420c:
    // 0x20420c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20420Cu;
        // 0x204210: 0x28a1001a  slti        $at, $a1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20420c) {
            ctx->pc = 0x204240u;
            goto label_204240;
        }
    }
    ctx->pc = 0x204214u;
    // 0x204214: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x204214u;
    {
        const bool branch_taken_0x204214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204214u;
        // 0x204218: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204214) {
            ctx->pc = 0x204244u;
            goto label_204244;
        }
    }
    ctx->pc = 0x20421Cu;
    // 0x20421c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x204220: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x204224: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x204228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20422c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204230: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x204230u;
    SET_GPR_U32(ctx, 31, 0x204238u);
    ctx->pc = 0x204234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204230u;
    // 0x204234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x204230u, 0x204238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204238u;
label_204238:
    // 0x204238: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x204238u;
    {
        const bool branch_taken_0x204238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204238) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x204240u;
label_204240:
    // 0x204240: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x204240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_204244:
    // 0x204244: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x204244u;
    {
        const bool branch_taken_0x204244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x204244) {
            ctx->pc = 0x204298u;
            goto label_204298;
        }
    }
    ctx->pc = 0x20424Cu;
    // 0x20424c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x204250: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x204254: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x204258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20425c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204268: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x204268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
    // 0x20426c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204270: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204274: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x204274u;
    SET_GPR_U32(ctx, 31, 0x20427Cu);
    ctx->pc = 0x204278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204274u;
    // 0x204278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x204274u, 0x20427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20427Cu;
label_20427c:
    // 0x20427c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x204280: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x204280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x204284: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x204288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20428c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20428cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204290: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x204290u;
    SET_GPR_U32(ctx, 31, 0x204298u);
    ctx->pc = 0x204294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204290u;
    // 0x204294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x204290u, 0x204298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204298u;
label_204298:
    // 0x204298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x20429cu;
}
