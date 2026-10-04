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

// Function: entry_001ae1b4
// Address: 0x1ae1b4 - 0x1ae2a0
void entry_001ae1b4_0x1ae1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae1b4_0x1ae1b4");
#endif

    switch (ctx->pc) {
        case 0x1ae278u: goto label_1ae278;
        default: break;
    }

    ctx->pc = 0x1ae1b4u;

    // 0x1ae1b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ae1b8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae1bc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae1c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae1c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae1c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae1c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae1cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae1ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae1d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae1d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae1d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE1E4u;
    // 0x1ae1e4: 0x0  nop
    ctx->pc = 0x1ae1e4u;
    // NOP
    // 0x1ae1e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ae1f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ae1f4: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1ae1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae1f8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae1fc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae204: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
    // 0x1ae208: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ae20c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae210: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ae214: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae218: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ae218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ae21c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x1ae21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ae220: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ae220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ae224: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AE224u;
    {
        const bool branch_taken_0x1ae224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE224u;
        // 0x1ae228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae224) {
            ctx->pc = 0x1AE28Cu;
            goto label_1ae28c;
        }
    }
    ctx->pc = 0x1AE22Cu;
    // 0x1ae22c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae230: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ae230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ae234: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1ae234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x1ae238: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1ae238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x375EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC0u, _value); } while (0);
    // 0x1ae23c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae240: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ae240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x375EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC4u, _value); } while (0);
    // 0x1ae244: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1ae244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x375EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC8u, _value); } while (0);
    // 0x1ae248: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ae24c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x1ae24cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x375ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375ED0u, _value); } while (0);
    // 0x1ae250: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1ae254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae25c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ae260: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae264: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae268: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae26c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae270: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AE270u;
    SET_GPR_U32(ctx, 31, 0x1AE278u);
    ctx->pc = 0x1AE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE270u;
    // 0x1ae274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AE270u, 0x1AE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE278u;
label_1ae278:
    // 0x1ae278: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE278u;
    {
        const bool branch_taken_0x1ae278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ae278) {
            ctx->pc = 0x1AE27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE278u;
            // 0x1ae27c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE288u;
            goto label_1ae288;
        }
    }
    ctx->pc = 0x1AE280u;
    // 0x1ae280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE280u;
    {
        const bool branch_taken_0x1ae280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE280u;
        // 0x1ae284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae280) {
            ctx->pc = 0x1AE28Cu;
            goto label_1ae28c;
        }
    }
    ctx->pc = 0x1AE288u;
label_1ae288:
    // 0x1ae288: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae28c:
    // 0x1ae28c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae290: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae294: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae298: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE298u;
        // 0x1ae29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE2A0u;
}
