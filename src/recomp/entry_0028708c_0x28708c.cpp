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

// Function: entry_0028708c
// Address: 0x28708c - 0x287460
void entry_0028708c_0x28708c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028708c_0x28708c");
#endif

    switch (ctx->pc) {
        case 0x2871a4u: goto label_2871a4;
        case 0x2871acu: goto label_2871ac;
        default: break;
    }

    ctx->pc = 0x28708cu;

label_28708c:
    // 0x28708c: 0xf  sync
    ctx->pc = 0x28708cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_287090:
    // 0x287090: 0x42000038  ei
    ctx->pc = 0x287090u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_287094:
    // 0x287094: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x287094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_287098:
    // 0x287098: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x287098u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28709c:
    // 0x28709c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x28709cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2870a0:
    // 0x2870a0: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2870a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2870a4:
    // 0x2870a4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2870a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2870a8:
    // 0x2870a8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2870a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2870ac:
    // 0x2870ac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2870acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2870b0:
    // 0x2870b0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2870b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2870b4:
    // 0x2870b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2870b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2870b8:
    // 0x2870b8: 0x3e00008  jr          $ra
label_2870bc:
    if (ctx->pc == 0x2870BCu) {
        ctx->pc = 0x2870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B8u;
        // 0x2870bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2870C0u;
        goto label_2870c0;
    }
    ctx->pc = 0x2870B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870B8u;
        // 0x2870bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2870B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870C0u;
label_2870c0:
    // 0x2870c0: 0x0  nop
    ctx->pc = 0x2870c0u;
    // NOP
label_2870c4:
    // 0x2870c4: 0x0  nop
    ctx->pc = 0x2870c4u;
    // NOP
label_2870c8:
    // 0x2870c8: 0x0  nop
    ctx->pc = 0x2870c8u;
    // NOP
label_2870cc:
    // 0x2870cc: 0x0  nop
    ctx->pc = 0x2870ccu;
    // NOP
label_2870d0:
    // 0x2870d0: 0x0  nop
    ctx->pc = 0x2870d0u;
    // NOP
label_2870d4:
    // 0x2870d4: 0x0  nop
    ctx->pc = 0x2870d4u;
    // NOP
label_2870d8:
    // 0x2870d8: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x2870d8u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_2870dc:
    // 0x2870dc: 0xaf5f6c40  sw          $ra, 0x6C40($k0)
    ctx->pc = 0x2870dcu;
    WRITE32(ADD32(GPR_U32(ctx, 26), 27712), GPR_U32(ctx, 31));
label_2870e0:
    // 0x2870e0: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_2870e4:
    // 0x2870e4: 0xaf5d6c50  sw          $sp, 0x6C50($k0)
    ctx->pc = 0x2870e4u;
    WRITE32(ADD32(GPR_U32(ctx, 26), 27728), GPR_U32(ctx, 29));
label_2870e8:
    // 0x2870e8: 0x40847000  mtc0        $a0, EPC
    ctx->pc = 0x2870e8u;
    ctx->cop0_epc = GPR_U32(ctx, 4);
label_2870ec:
    // 0x2870ec: 0x40f  sync.p
    ctx->pc = 0x2870ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2870f0:
    // 0x2870f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2870f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2870f4:
    // 0x2870f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2870f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2870f8:
    // 0x2870f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2870f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2870fc:
    // 0x2870fc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2870fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_287100:
    // 0x287100: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x287100u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_287104:
    // 0x287104: 0x375a0012  ori         $k0, $k0, 0x12
    ctx->pc = 0x287104u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)18);
label_287108:
    // 0x287108: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x287108u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_28710c:
    // 0x28710c: 0x40f  sync.p
    ctx->pc = 0x28710cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_287110:
    // 0x287110: 0x42000018  eret
    ctx->pc = 0x287110u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_287114:
    // 0x287114: 0x0  nop
    ctx->pc = 0x287114u;
    // NOP
label_287118:
    // 0x287118: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_28711c:
    // 0x28711c: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x28711cu;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_287120:
    // 0x287120: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x287120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_287124:
    // 0x287124: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x287124u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_287128:
    // 0x287128: 0x40f  sync.p
    ctx->pc = 0x287128u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28712c:
    // 0x28712c: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_287130:
    // 0x287130: 0x8f5f6c40  lw          $ra, 0x6C40($k0)
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27712)));
label_287134:
    // 0x287134: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x287134u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_287138:
    // 0x287138: 0x3e00008  jr          $ra
label_28713c:
    if (ctx->pc == 0x28713Cu) {
        ctx->pc = 0x28713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287138u;
        // 0x28713c: 0x8f5d6c50  lw          $sp, 0x6C50($k0) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287140u;
        goto label_287140;
    }
    ctx->pc = 0x287138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287138u;
        // 0x28713c: 0x8f5d6c50  lw          $sp, 0x6C50($k0) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27728)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287140u;
label_287140:
    // 0x287140: 0x0  nop
    ctx->pc = 0x287140u;
    // NOP
label_287144:
    // 0x287144: 0x0  nop
    ctx->pc = 0x287144u;
    // NOP
label_287148:
    // 0x287148: 0x0  nop
    ctx->pc = 0x287148u;
    // NOP
label_28714c:
    // 0x28714c: 0x0  nop
    ctx->pc = 0x28714cu;
    // NOP
label_287150:
    // 0x287150: 0x0  nop
    ctx->pc = 0x287150u;
    // NOP
label_287154:
    // 0x287154: 0x0  nop
    ctx->pc = 0x287154u;
    // NOP
label_287158:
    // 0x287158: 0x0  nop
    ctx->pc = 0x287158u;
    // NOP
label_28715c:
    // 0x28715c: 0x0  nop
    ctx->pc = 0x28715cu;
    // NOP
label_287160:
    // 0x287160: 0x0  nop
    ctx->pc = 0x287160u;
    // NOP
label_287164:
    // 0x287164: 0x0  nop
    ctx->pc = 0x287164u;
    // NOP
label_287168:
    // 0x287168: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_28716c:
    // 0x28716c: 0x80076440  lb          $a3, 0x6440($zero)
    ctx->pc = 0x28716cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6440u));
label_287170:
    // 0x287170: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x287170u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_287174:
    // 0x287174: 0x80076440  lb          $a3, 0x6440($zero)
    ctx->pc = 0x287174u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6440u));
label_287178:
    // 0x287178: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287178u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x287178 raw=0x000000FD"); /* MITIGATED MMI/COP0 */
label_28717c:
    // 0x28717c: 0x800762a0  lb          $a3, 0x62A0($zero)
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x62A0u));
label_287180:
    // 0x287180: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x287180u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_287184:
    // 0x287184: 0x800762a0  lb          $a3, 0x62A0($zero)
    ctx->pc = 0x287184u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x62A0u));
label_287188:
    // 0x287188: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287188u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28718c:
    // 0x28718c: 0x80076488  lb          $a3, 0x6488($zero)
    ctx->pc = 0x28718cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6488u));
label_287190:
    // 0x287190: 0x8  jr          $zero
label_287194:
    if (ctx->pc == 0x287194u) {
        ctx->pc = 0x287194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287190u;
        // 0x287194: 0x800766c0  lb          $a3, 0x66C0($zero) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 26304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287198u;
        goto label_287198;
    }
    ctx->pc = 0x287190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x287194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287190u;
        // 0x287194: 0x800766c0  lb          $a3, 0x66C0($zero) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 26304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287198u;
label_287198:
    // 0x287198: 0x3c1d0008  lui         $sp, 0x8
    ctx->pc = 0x287198u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8 << 16));
label_28719c:
    // 0x28719c: 0x60f809  jalr        $v1
label_2871a0:
    if (ctx->pc == 0x2871A0u) {
        ctx->pc = 0x2871A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28719Cu;
        // 0x2871a0: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2871A4u;
        goto label_2871a4;
    }
    ctx->pc = 0x28719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2871A4u);
        ctx->pc = 0x2871A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28719Cu;
        // 0x2871a0: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28719Cu, 0x2871A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2871A4u;
label_2871a4:
    // 0x2871a4: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x2871a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_2871a8:
    // 0x2871a8: 0xc  syscall     0
    ctx->pc = 0x2871a8u;
    ctx->pc = 0x2871ACu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2871ac:
    // 0x2871ac: 0x0  nop
    ctx->pc = 0x2871acu;
    // NOP
label_2871b0:
    // 0x2871b0: 0x0  nop
    ctx->pc = 0x2871b0u;
    // NOP
label_2871b4:
    // 0x2871b4: 0x0  nop
    ctx->pc = 0x2871b4u;
    // NOP
label_2871b8:
    // 0x2871b8: 0x0  nop
    ctx->pc = 0x2871b8u;
    // NOP
label_2871bc:
    // 0x2871bc: 0x0  nop
    ctx->pc = 0x2871bcu;
    // NOP
label_2871c0:
    // 0x2871c0: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871c0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2871c4:
    // 0x2871c4: 0x1adb68  .word       0x001ADB68                   # mfsa        $k1 # 001A0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2871c4u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2871c8:
    // 0x2871c8: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871c8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2871cc:
    // 0x2871cc: 0x80076000  lb          $a3, 0x6000($zero)
    ctx->pc = 0x2871ccu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6000u));
label_2871d0:
    // 0x2871d0: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x2871d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_2871d4:
    // 0x2871d4: 0x0  nop
    ctx->pc = 0x2871d4u;
    // NOP
label_2871d8:
    // 0x2871d8: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x2871d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_2871dc:
    // 0x2871dc: 0x0  nop
    ctx->pc = 0x2871dcu;
    // NOP
label_2871e0:
    // 0x2871e0: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2871E0 raw=0x000000FD"); /* MITIGATED MMI/COP0 */
label_2871e4:
    // 0x2871e4: 0x0  nop
    ctx->pc = 0x2871e4u;
    // NOP
label_2871e8:
    // 0x2871e8: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2871e8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2871ec:
    // 0x2871ec: 0x0  nop
    ctx->pc = 0x2871ecu;
    // NOP
label_2871f0:
    // 0x2871f0: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2871f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2871f4:
    // 0x2871f4: 0x0  nop
    ctx->pc = 0x2871f4u;
    // NOP
label_2871f8:
    // 0x2871f8: 0x8  jr          $zero
label_2871fc:
    if (ctx->pc == 0x2871FCu) {
        ctx->pc = 0x287200u;
        goto label_287200;
    }
    ctx->pc = 0x2871F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2871F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287200u;
label_287200:
    // 0x287200: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x287200u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x287200 raw=0x49497350");
label_287204:
    // 0x287204: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x287204u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x287204 raw=0x7062696C"); /* MITIGATED MMI/COP0 */
label_287208:
    // 0x287208: 0x20206461  addi        $zero, $at, 0x6461
    ctx->pc = 0x287208u;
    // NOP (addi to $zero)
label_28720c:
    // 0x28720c: 0x30313432  andi        $s1, $at, 0x3432
    ctx->pc = 0x28720cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13362);
label_287210:
    // 0x287210: 0x0  nop
    ctx->pc = 0x287210u;
    // NOP
label_287214:
    // 0x287214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287214u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x287214 raw=0x00000001"); /* MITIGATED MMI/COP0 */
label_287218:
    // 0x287218: 0x2ca920  .word       0x002CA920                   # add         $s5, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287218u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_28721c:
    // 0x28721c: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28721cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_287220:
    // 0x287220: 0x2ca908  .word       0x002CA908                   # jr          $at # 000CA900 <InstrIdType: CPU_SPECIAL>
label_287224:
    if (ctx->pc == 0x287224u) {
        ctx->pc = 0x287224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287220u;
        // 0x287224: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x287228u;
        goto label_287228;
    }
    ctx->pc = 0x287220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x287224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287220u;
        // 0x287224: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287228u;
label_287228:
    // 0x287228: 0x2ca918  .word       0x002CA918                   # mult        $s5, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x287228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_28722c:
    // 0x28722c: 0x2ca900  .word       0x002CA900                   # sll         $s5, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_287230:
    // 0x287230: 0x2ca8f8  .word       0x002CA8F8                   # dsll        $s5, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287230u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 12) << 3);
label_287234:
    // 0x287234: 0x2ca8f0  tge         $at, $t4, 675
    ctx->pc = 0x287234u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_287238:
    // 0x287238: 0x2ca940  .word       0x002CA940                   # sll         $s5, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x287238u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_28723c:
    // 0x28723c: 0x2ca938  .word       0x002CA938                   # dsll        $s5, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28723cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 12) << 4);
label_287240:
    // 0x287240: 0x2ca930  tge         $at, $t4, 676
    ctx->pc = 0x287240u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_287244:
    // 0x287244: 0x0  nop
    ctx->pc = 0x287244u;
    // NOP
label_287248:
    // 0x287248: 0x0  nop
    ctx->pc = 0x287248u;
    // NOP
label_28724c:
    // 0x28724c: 0x0  nop
    ctx->pc = 0x28724cu;
    // NOP
label_287250:
    // 0x287250: 0x0  nop
    ctx->pc = 0x287250u;
    // NOP
label_287254:
    // 0x287254: 0x0  nop
    ctx->pc = 0x287254u;
    // NOP
label_287258:
    // 0x287258: 0x0  nop
    ctx->pc = 0x287258u;
    // NOP
label_28725c:
    // 0x28725c: 0x0  nop
    ctx->pc = 0x28725cu;
    // NOP
label_287260:
    // 0x287260: 0x0  nop
    ctx->pc = 0x287260u;
    // NOP
label_287264:
    // 0x287264: 0x0  nop
    ctx->pc = 0x287264u;
    // NOP
label_287268:
    // 0x287268: 0x0  nop
    ctx->pc = 0x287268u;
    // NOP
label_28726c:
    // 0x28726c: 0x0  nop
    ctx->pc = 0x28726cu;
    // NOP
label_287270:
    // 0x287270: 0x0  nop
    ctx->pc = 0x287270u;
    // NOP
label_287274:
    // 0x287274: 0x0  nop
    ctx->pc = 0x287274u;
    // NOP
label_287278:
    // 0x287278: 0x0  nop
    ctx->pc = 0x287278u;
    // NOP
label_28727c:
    // 0x28727c: 0x0  nop
    ctx->pc = 0x28727cu;
    // NOP
label_287280:
    // 0x287280: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x287280u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x287280 raw=0x49497350");
label_287284:
    // 0x287284: 0x6362696c  daddi       $v0, $k1, 0x696C
    ctx->pc = 0x287284u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26988; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_287288:
    // 0x287288: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x287288u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_28728c:
    // 0x28728c: 0x30333532  andi        $s3, $at, 0x3532
    ctx->pc = 0x28728cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13618);
label_287290:
    // 0x287290: 0x0  nop
    ctx->pc = 0x287290u;
    // NOP
label_287294:
    // 0x287294: 0x0  nop
    ctx->pc = 0x287294u;
    // NOP
label_287298:
    // 0x287298: 0x0  nop
    ctx->pc = 0x287298u;
    // NOP
label_28729c:
    // 0x28729c: 0x0  nop
    ctx->pc = 0x28729cu;
    // NOP
label_2872a0:
    // 0x2872a0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872a0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872a4:
    // 0x2872a4: 0x0  nop
    ctx->pc = 0x2872a4u;
    // NOP
label_2872a8:
    // 0x2872a8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872a8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872ac:
    // 0x2872ac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872b0:
    // 0x2872b0: 0x0  nop
    ctx->pc = 0x2872b0u;
    // NOP
label_2872b4:
    // 0x2872b4: 0x0  nop
    ctx->pc = 0x2872b4u;
    // NOP
label_2872b8:
    // 0x2872b8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872b8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872bc:
    // 0x2872bc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872c0:
    // 0x2872c0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872c4:
    // 0x2872c4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872c4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872c8:
    // 0x2872c8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872c8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872cc:
    // 0x2872cc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2872ccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2872d0:
    // 0x2872d0: 0x0  nop
    ctx->pc = 0x2872d0u;
    // NOP
label_2872d4:
    // 0x2872d4: 0x0  nop
    ctx->pc = 0x2872d4u;
    // NOP
label_2872d8:
    // 0x2872d8: 0x0  nop
    ctx->pc = 0x2872d8u;
    // NOP
label_2872dc:
    // 0x2872dc: 0x0  nop
    ctx->pc = 0x2872dcu;
    // NOP
label_2872e0:
    // 0x2872e0: 0x0  nop
    ctx->pc = 0x2872e0u;
    // NOP
label_2872e4:
    // 0x2872e4: 0x0  nop
    ctx->pc = 0x2872e4u;
    // NOP
label_2872e8:
    // 0x2872e8: 0x0  nop
    ctx->pc = 0x2872e8u;
    // NOP
label_2872ec:
    // 0x2872ec: 0x0  nop
    ctx->pc = 0x2872ecu;
    // NOP
label_2872f0:
    // 0x2872f0: 0x0  nop
    ctx->pc = 0x2872f0u;
    // NOP
label_2872f4:
    // 0x2872f4: 0x0  nop
    ctx->pc = 0x2872f4u;
    // NOP
label_2872f8:
    // 0x2872f8: 0x0  nop
    ctx->pc = 0x2872f8u;
    // NOP
label_2872fc:
    // 0x2872fc: 0x0  nop
    ctx->pc = 0x2872fcu;
    // NOP
label_287300:
    // 0x287300: 0x0  nop
    ctx->pc = 0x287300u;
    // NOP
label_287304:
    // 0x287304: 0x0  nop
    ctx->pc = 0x287304u;
    // NOP
label_287308:
    // 0x287308: 0x0  nop
    ctx->pc = 0x287308u;
    // NOP
label_28730c:
    // 0x28730c: 0x0  nop
    ctx->pc = 0x28730cu;
    // NOP
label_287310:
    // 0x287310: 0x0  nop
    ctx->pc = 0x287310u;
    // NOP
label_287314:
    // 0x287314: 0x0  nop
    ctx->pc = 0x287314u;
    // NOP
label_287318:
    // 0x287318: 0x0  nop
    ctx->pc = 0x287318u;
    // NOP
label_28731c:
    // 0x28731c: 0x0  nop
    ctx->pc = 0x28731cu;
    // NOP
label_287320:
    // 0x287320: 0x0  nop
    ctx->pc = 0x287320u;
    // NOP
label_287324:
    // 0x287324: 0x0  nop
    ctx->pc = 0x287324u;
    // NOP
label_287328:
    // 0x287328: 0x0  nop
    ctx->pc = 0x287328u;
    // NOP
label_28732c:
    // 0x28732c: 0x0  nop
    ctx->pc = 0x28732cu;
    // NOP
label_287330:
    // 0x287330: 0x0  nop
    ctx->pc = 0x287330u;
    // NOP
label_287334:
    // 0x287334: 0x0  nop
    ctx->pc = 0x287334u;
    // NOP
label_287338:
    // 0x287338: 0x0  nop
    ctx->pc = 0x287338u;
    // NOP
label_28733c:
    // 0x28733c: 0x0  nop
    ctx->pc = 0x28733cu;
    // NOP
label_287340:
    // 0x287340: 0x0  nop
    ctx->pc = 0x287340u;
    // NOP
label_287344:
    // 0x287344: 0x0  nop
    ctx->pc = 0x287344u;
    // NOP
label_287348:
    // 0x287348: 0x0  nop
    ctx->pc = 0x287348u;
    // NOP
label_28734c:
    // 0x28734c: 0x0  nop
    ctx->pc = 0x28734cu;
    // NOP
label_287350:
    // 0x287350: 0x0  nop
    ctx->pc = 0x287350u;
    // NOP
label_287354:
    // 0x287354: 0x0  nop
    ctx->pc = 0x287354u;
    // NOP
label_287358:
    // 0x287358: 0x0  nop
    ctx->pc = 0x287358u;
    // NOP
label_28735c:
    // 0x28735c: 0x0  nop
    ctx->pc = 0x28735cu;
    // NOP
label_287360:
    // 0x287360: 0x0  nop
    ctx->pc = 0x287360u;
    // NOP
label_287364:
    // 0x287364: 0x0  nop
    ctx->pc = 0x287364u;
    // NOP
label_287368:
    // 0x287368: 0x0  nop
    ctx->pc = 0x287368u;
    // NOP
label_28736c:
    // 0x28736c: 0x0  nop
    ctx->pc = 0x28736cu;
    // NOP
label_287370:
    // 0x287370: 0x0  nop
    ctx->pc = 0x287370u;
    // NOP
label_287374:
    // 0x287374: 0x0  nop
    ctx->pc = 0x287374u;
    // NOP
label_287378:
    // 0x287378: 0x0  nop
    ctx->pc = 0x287378u;
    // NOP
label_28737c:
    // 0x28737c: 0x0  nop
    ctx->pc = 0x28737cu;
    // NOP
label_287380:
    // 0x287380: 0x0  nop
    ctx->pc = 0x287380u;
    // NOP
label_287384:
    // 0x287384: 0x0  nop
    ctx->pc = 0x287384u;
    // NOP
label_287388:
    // 0x287388: 0x0  nop
    ctx->pc = 0x287388u;
    // NOP
label_28738c:
    // 0x28738c: 0x0  nop
    ctx->pc = 0x28738cu;
    // NOP
label_287390:
    // 0x287390: 0x0  nop
    ctx->pc = 0x287390u;
    // NOP
label_287394:
    // 0x287394: 0x0  nop
    ctx->pc = 0x287394u;
    // NOP
label_287398:
    // 0x287398: 0x0  nop
    ctx->pc = 0x287398u;
    // NOP
label_28739c:
    // 0x28739c: 0x0  nop
    ctx->pc = 0x28739cu;
    // NOP
label_2873a0:
    // 0x2873a0: 0x0  nop
    ctx->pc = 0x2873a0u;
    // NOP
label_2873a4:
    // 0x2873a4: 0x0  nop
    ctx->pc = 0x2873a4u;
    // NOP
label_2873a8:
    // 0x2873a8: 0x0  nop
    ctx->pc = 0x2873a8u;
    // NOP
label_2873ac:
    // 0x2873ac: 0x0  nop
    ctx->pc = 0x2873acu;
    // NOP
label_2873b0:
    // 0x2873b0: 0x0  nop
    ctx->pc = 0x2873b0u;
    // NOP
label_2873b4:
    // 0x2873b4: 0x0  nop
    ctx->pc = 0x2873b4u;
    // NOP
label_2873b8:
    // 0x2873b8: 0x0  nop
    ctx->pc = 0x2873b8u;
    // NOP
label_2873bc:
    // 0x2873bc: 0x0  nop
    ctx->pc = 0x2873bcu;
    // NOP
label_2873c0:
    // 0x2873c0: 0x0  nop
    ctx->pc = 0x2873c0u;
    // NOP
label_2873c4:
    // 0x2873c4: 0x0  nop
    ctx->pc = 0x2873c4u;
    // NOP
label_2873c8:
    // 0x2873c8: 0x0  nop
    ctx->pc = 0x2873c8u;
    // NOP
label_2873cc:
    // 0x2873cc: 0x0  nop
    ctx->pc = 0x2873ccu;
    // NOP
label_2873d0:
    // 0x2873d0: 0x0  nop
    ctx->pc = 0x2873d0u;
    // NOP
label_2873d4:
    // 0x2873d4: 0x0  nop
    ctx->pc = 0x2873d4u;
    // NOP
label_2873d8:
    // 0x2873d8: 0x0  nop
    ctx->pc = 0x2873d8u;
    // NOP
label_2873dc:
    // 0x2873dc: 0x0  nop
    ctx->pc = 0x2873dcu;
    // NOP
label_2873e0:
    // 0x2873e0: 0x0  nop
    ctx->pc = 0x2873e0u;
    // NOP
label_2873e4:
    // 0x2873e4: 0x0  nop
    ctx->pc = 0x2873e4u;
    // NOP
label_2873e8:
    // 0x2873e8: 0x0  nop
    ctx->pc = 0x2873e8u;
    // NOP
label_2873ec:
    // 0x2873ec: 0x0  nop
    ctx->pc = 0x2873ecu;
    // NOP
label_2873f0:
    // 0x2873f0: 0x0  nop
    ctx->pc = 0x2873f0u;
    // NOP
label_2873f4:
    // 0x2873f4: 0x0  nop
    ctx->pc = 0x2873f4u;
    // NOP
label_2873f8:
    // 0x2873f8: 0x0  nop
    ctx->pc = 0x2873f8u;
    // NOP
label_2873fc:
    // 0x2873fc: 0x0  nop
    ctx->pc = 0x2873fcu;
    // NOP
label_287400:
    // 0x287400: 0x0  nop
    ctx->pc = 0x287400u;
    // NOP
label_287404:
    // 0x287404: 0x0  nop
    ctx->pc = 0x287404u;
    // NOP
label_287408:
    // 0x287408: 0x0  nop
    ctx->pc = 0x287408u;
    // NOP
label_28740c:
    // 0x28740c: 0x0  nop
    ctx->pc = 0x28740cu;
    // NOP
label_287410:
    // 0x287410: 0x0  nop
    ctx->pc = 0x287410u;
    // NOP
label_287414:
    // 0x287414: 0x0  nop
    ctx->pc = 0x287414u;
    // NOP
label_287418:
    // 0x287418: 0x0  nop
    ctx->pc = 0x287418u;
    // NOP
label_28741c:
    // 0x28741c: 0x0  nop
    ctx->pc = 0x28741cu;
    // NOP
label_287420:
    // 0x287420: 0x0  nop
    ctx->pc = 0x287420u;
    // NOP
label_287424:
    // 0x287424: 0x0  nop
    ctx->pc = 0x287424u;
    // NOP
label_287428:
    // 0x287428: 0x0  nop
    ctx->pc = 0x287428u;
    // NOP
label_28742c:
    // 0x28742c: 0x0  nop
    ctx->pc = 0x28742cu;
    // NOP
label_287430:
    // 0x287430: 0x0  nop
    ctx->pc = 0x287430u;
    // NOP
label_287434:
    // 0x287434: 0x0  nop
    ctx->pc = 0x287434u;
    // NOP
label_287438:
    // 0x287438: 0x0  nop
    ctx->pc = 0x287438u;
    // NOP
label_28743c:
    // 0x28743c: 0x0  nop
    ctx->pc = 0x28743cu;
    // NOP
label_287440:
    // 0x287440: 0x0  nop
    ctx->pc = 0x287440u;
    // NOP
label_287444:
    // 0x287444: 0x0  nop
    ctx->pc = 0x287444u;
    // NOP
label_287448:
    // 0x287448: 0x0  nop
    ctx->pc = 0x287448u;
    // NOP
label_28744c:
    // 0x28744c: 0x0  nop
    ctx->pc = 0x28744cu;
    // NOP
label_287450:
    // 0x287450: 0x0  nop
    ctx->pc = 0x287450u;
    // NOP
label_287454:
    // 0x287454: 0x0  nop
    ctx->pc = 0x287454u;
    // NOP
label_287458:
    // 0x287458: 0x0  nop
    ctx->pc = 0x287458u;
    // NOP
label_28745c:
    // 0x28745c: 0x0  nop
    ctx->pc = 0x28745cu;
    // NOP
    ctx->pc = 0x287460u;
}
