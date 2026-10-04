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

// Function: FUN_00100880
// Address: 0x100880 - 0x100a2c
void FUN_00100880_0x100880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100880_0x100880");
#endif

    switch (ctx->pc) {
        case 0x1008ecu: goto label_1008ec;
        case 0x100948u: goto label_100948;
        case 0x100990u: goto label_100990;
        case 0x1009d0u: goto label_1009d0;
        case 0x100a08u: goto label_100a08;
        case 0x100a28u: goto label_100a28;
        default: break;
    }

    ctx->pc = 0x100880u;

    // 0x100880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10088c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100890: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x100890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x100894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100898: 0xaf808458  sw          $zero, -0x7BA8($gp)
    ctx->pc = 0x100898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U32(ctx, 0));
    // 0x10089c: 0xaf808440  sw          $zero, -0x7BC0($gp)
    ctx->pc = 0x10089cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 0));
    // 0x1008a0: 0xaf808450  sw          $zero, -0x7BB0($gp)
    ctx->pc = 0x1008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935632), GPR_U32(ctx, 0));
    // 0x1008a4: 0xaf808454  sw          $zero, -0x7BAC($gp)
    ctx->pc = 0x1008a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935636), GPR_U32(ctx, 0));
    // 0x1008a8: 0xaf808468  sw          $zero, -0x7B98($gp)
    ctx->pc = 0x1008a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935656), GPR_U32(ctx, 0));
    // 0x1008ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1008ACu;
    {
        const bool branch_taken_0x1008ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008ACu;
        // 0x1008b0: 0xaf80844c  sw          $zero, -0x7BB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008ac) {
            ctx->pc = 0x1008CCu;
            goto label_1008cc;
        }
    }
    ctx->pc = 0x1008B4u;
    // 0x1008b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1008b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1008b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1008bc: 0x2442ad40  addiu       $v0, $v0, -0x52C0
    ctx->pc = 0x1008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946112));
    // 0x1008c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1008c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1008C4u;
    {
        const bool branch_taken_0x1008c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008C4u;
        // 0x1008c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008c4) {
            ctx->pc = 0x1008E4u;
            goto label_1008e4;
        }
    }
    ctx->pc = 0x1008CCu;
label_1008cc:
    // 0x1008cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1008d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1008d4: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x1008d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1008dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1008e0: 0x0  nop
    ctx->pc = 0x1008e0u;
    // NOP
label_1008e4:
    // 0x1008e4: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1008E4u;
    SET_GPR_U32(ctx, 31, 0x1008ECu);
    ctx->pc = 0x1008E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008E4u;
    // 0x1008e8: 0x27858468  addiu       $a1, $gp, -0x7B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1008E4u, 0x1008ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008ECu;
label_1008ec:
    // 0x1008ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1008ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1008f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1008f4: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1008f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1008F8u;
    {
        const bool branch_taken_0x1008f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1008FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008F8u;
        // 0x1008fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008f8) {
            ctx->pc = 0x100908u;
            goto label_100908;
        }
    }
    ctx->pc = 0x100900u;
    // 0x100900: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x100900u;
    {
        const bool branch_taken_0x100900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100900) {
            ctx->pc = 0x100950u;
            goto label_100950;
        }
    }
    ctx->pc = 0x100908u;
label_100908:
    // 0x100908: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x10090c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10090Cu;
    {
        const bool branch_taken_0x10090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10090Cu;
        // 0x100910: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10090c) {
            ctx->pc = 0x10092Cu;
            goto label_10092c;
        }
    }
    ctx->pc = 0x100914u;
    // 0x100914: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x100918: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x100918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10091c: 0x2442b0a0  addiu       $v0, $v0, -0x4F60
    ctx->pc = 0x10091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946976));
    // 0x100920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100924u;
    {
        const bool branch_taken_0x100924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100924u;
        // 0x100928: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100924) {
            ctx->pc = 0x100940u;
            goto label_100940;
        }
    }
    ctx->pc = 0x10092Cu;
label_10092c:
    // 0x10092c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x10092cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x100930: 0x2442b040  addiu       $v0, $v0, -0x4FC0
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946880));
    // 0x100934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100938: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10093c: 0x0  nop
    ctx->pc = 0x10093cu;
    // NOP
label_100940:
    // 0x100940: 0xc0415a4  jal         func_105690
    ctx->pc = 0x100940u;
    SET_GPR_U32(ctx, 31, 0x100948u);
    ctx->pc = 0x100944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100940u;
    // 0x100944: 0x27858458  addiu       $a1, $gp, -0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x100940u, 0x100948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100948u;
label_100948:
    // 0x100948: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x100948u;
    {
        const bool branch_taken_0x100948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100948u;
        // 0x10094c: 0x8f82863c  lw          $v0, -0x79C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100948) {
            ctx->pc = 0x100994u;
            goto label_100994;
        }
    }
    ctx->pc = 0x100950u;
label_100950:
    // 0x100950: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x100950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x100954: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100954u;
    {
        const bool branch_taken_0x100954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100954u;
        // 0x100958: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100954) {
            ctx->pc = 0x100974u;
            goto label_100974;
        }
    }
    ctx->pc = 0x10095Cu;
    // 0x10095c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x100960: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x100960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x100964: 0x2442ae00  addiu       $v0, $v0, -0x5200
    ctx->pc = 0x100964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
    // 0x100968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10096c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10096Cu;
    {
        const bool branch_taken_0x10096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10096Cu;
        // 0x100970: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10096c) {
            ctx->pc = 0x100988u;
            goto label_100988;
        }
    }
    ctx->pc = 0x100974u;
label_100974:
    // 0x100974: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x100978: 0x2442ada0  addiu       $v0, $v0, -0x5260
    ctx->pc = 0x100978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
    // 0x10097c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100980: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x100980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100984: 0x0  nop
    ctx->pc = 0x100984u;
    // NOP
label_100988:
    // 0x100988: 0xc0415a4  jal         func_105690
    ctx->pc = 0x100988u;
    SET_GPR_U32(ctx, 31, 0x100990u);
    ctx->pc = 0x10098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100988u;
    // 0x10098c: 0x27858458  addiu       $a1, $gp, -0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x100988u, 0x100990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100990u;
label_100990:
    // 0x100990: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_100994:
    // 0x100994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100994u;
    {
        const bool branch_taken_0x100994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100994u;
        // 0x100998: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100994) {
            ctx->pc = 0x1009B4u;
            goto label_1009b4;
        }
    }
    ctx->pc = 0x10099Cu;
    // 0x10099c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1009a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1009a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1009a4: 0x2442af20  addiu       $v0, $v0, -0x50E0
    ctx->pc = 0x1009a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946592));
    // 0x1009a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1009ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1009ACu;
    {
        const bool branch_taken_0x1009ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009ACu;
        // 0x1009b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009ac) {
            ctx->pc = 0x1009C8u;
            goto label_1009c8;
        }
    }
    ctx->pc = 0x1009B4u;
label_1009b4:
    // 0x1009b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1009b8: 0x2442aec0  addiu       $v0, $v0, -0x5140
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x1009bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1009c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1009c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1009c4: 0x0  nop
    ctx->pc = 0x1009c4u;
    // NOP
label_1009c8:
    // 0x1009c8: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1009C8u;
    SET_GPR_U32(ctx, 31, 0x1009D0u);
    ctx->pc = 0x1009CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009C8u;
    // 0x1009cc: 0x27858440  addiu       $a1, $gp, -0x7BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1009C8u, 0x1009D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009D0u;
label_1009d0:
    // 0x1009d0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1009d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1009d4: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1009d8: 0x2463af80  addiu       $v1, $v1, -0x5080
    ctx->pc = 0x1009d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946688));
    // 0x1009dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1009e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1009e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1009e4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1009E4u;
    {
        const bool branch_taken_0x1009e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1009e4) {
            ctx->pc = 0x100A08u;
            goto label_100a08;
        }
    }
    ctx->pc = 0x1009ECu;
    // 0x1009ec: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x1009f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1009F0u;
    {
        const bool branch_taken_0x1009f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009F0u;
        // 0x1009f4: 0x27858454  addiu       $a1, $gp, -0x7BAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009f0) {
            ctx->pc = 0x100A00u;
            goto label_100a00;
        }
    }
    ctx->pc = 0x1009F8u;
    // 0x1009f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1009F8u;
    {
        const bool branch_taken_0x1009f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1009f8) {
            ctx->pc = 0x100A08u;
            goto label_100a08;
        }
    }
    ctx->pc = 0x100A00u;
label_100a00:
    // 0x100a00: 0xc0415a4  jal         func_105690
    ctx->pc = 0x100A00u;
    SET_GPR_U32(ctx, 31, 0x100A08u);
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x100A00u, 0x100A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A08u;
label_100a08:
    // 0x100a08: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x100a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x100a0c: 0x2463afe0  addiu       $v1, $v1, -0x5020
    ctx->pc = 0x100a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
    // 0x100a10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x100a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x100a14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x100a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100a18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100A18u;
    {
        const bool branch_taken_0x100a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A18u;
        // 0x100a1c: 0x27858450  addiu       $a1, $gp, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a18) {
            ctx->pc = 0x100A28u;
            goto label_100a28;
        }
    }
    ctx->pc = 0x100A20u;
    // 0x100a20: 0xc0415a4  jal         func_105690
    ctx->pc = 0x100A20u;
    SET_GPR_U32(ctx, 31, 0x100A28u);
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x100A20u, 0x100A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A28u;
label_100a28:
    // 0x100a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x100a2cu;
}
