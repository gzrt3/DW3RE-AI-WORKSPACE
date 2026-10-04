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

// Function: entry_00285ee8
// Address: 0x285ee8 - 0x286478
void entry_00285ee8_0x285ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285ee8_0x285ee8");
#endif

    switch (ctx->pc) {
        case 0x2862b0u: goto label_2862b0;
        case 0x2862d0u: goto label_2862d0;
        default: break;
    }

    ctx->pc = 0x285ee8u;

label_285ee8:
    // 0x285ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285eec:
    // 0x285eec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x285eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285ef0:
    // 0x285ef0: 0x3e00008  jr          $ra
label_285ef4:
    if (ctx->pc == 0x285EF4u) {
        ctx->pc = 0x285EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EF0u;
        // 0x285ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EF8u;
        goto label_285ef8;
    }
    ctx->pc = 0x285EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EF0u;
        // 0x285ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285EF8u;
label_285ef8:
    // 0x285ef8: 0x0  nop
    ctx->pc = 0x285ef8u;
    // NOP
label_285efc:
    // 0x285efc: 0x0  nop
    ctx->pc = 0x285efcu;
    // NOP
label_285f00:
    // 0x285f00: 0x0  nop
    ctx->pc = 0x285f00u;
    // NOP
label_285f04:
    // 0x285f04: 0x0  nop
    ctx->pc = 0x285f04u;
    // NOP
label_285f08:
    // 0x285f08: 0x0  nop
    ctx->pc = 0x285f08u;
    // NOP
label_285f0c:
    // 0x285f0c: 0x0  nop
    ctx->pc = 0x285f0cu;
    // NOP
label_285f10:
    // 0x285f10: 0x0  nop
    ctx->pc = 0x285f10u;
    // NOP
label_285f14:
    // 0x285f14: 0x0  nop
    ctx->pc = 0x285f14u;
    // NOP
label_285f18:
    // 0x285f18: 0x0  nop
    ctx->pc = 0x285f18u;
    // NOP
label_285f1c:
    // 0x285f1c: 0x0  nop
    ctx->pc = 0x285f1cu;
    // NOP
label_285f20:
    // 0x285f20: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x285F20 raw=0x00000055"); /* MITIGATED MMI/COP0 */
label_285f24:
    // 0x285f24: 0x80075038  lb          $a3, 0x5038($zero)
    ctx->pc = 0x285f24u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5038u));
label_285f28:
    // 0x285f28: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285f2c:
    // 0x285f2c: 0x800750c8  lb          $a3, 0x50C8($zero)
    ctx->pc = 0x285f2cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x50C8u));
label_285f30:
    // 0x285f30: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285f34:
    // 0x285f34: 0x80075108  lb          $a3, 0x5108($zero)
    ctx->pc = 0x285f34u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5108u));
label_285f38:
    // 0x285f38: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x285f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285f3c:
    // 0x285f3c: 0x80075158  lb          $a3, 0x5158($zero)
    ctx->pc = 0x285f3cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5158u));
label_285f40:
    // 0x285f40: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285f44:
    // 0x285f44: 0x800751a8  lb          $a3, 0x51A8($zero)
    ctx->pc = 0x285f44u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x51A8u));
label_285f48:
    // 0x285f48: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x285f48u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_285f4c:
    // 0x285f4c: 0x80075330  lb          $a3, 0x5330($zero)
    ctx->pc = 0x285f4cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5330u));
label_285f50:
    // 0x285f50: 0x0  nop
    ctx->pc = 0x285f50u;
    // NOP
label_285f54:
    // 0x285f54: 0x0  nop
    ctx->pc = 0x285f54u;
    // NOP
label_285f58:
    // 0x285f58: 0x0  nop
    ctx->pc = 0x285f58u;
    // NOP
label_285f5c:
    // 0x285f5c: 0x0  nop
    ctx->pc = 0x285f5cu;
    // NOP
label_285f60:
    // 0x285f60: 0x0  nop
    ctx->pc = 0x285f60u;
    // NOP
label_285f64:
    // 0x285f64: 0x0  nop
    ctx->pc = 0x285f64u;
    // NOP
label_285f68:
    // 0x285f68: 0x0  nop
    ctx->pc = 0x285f68u;
    // NOP
label_285f6c:
    // 0x285f6c: 0x0  nop
    ctx->pc = 0x285f6cu;
    // NOP
label_285f70:
    // 0x285f70: 0x0  nop
    ctx->pc = 0x285f70u;
    // NOP
label_285f74:
    // 0x285f74: 0x0  nop
    ctx->pc = 0x285f74u;
    // NOP
label_285f78:
    // 0x285f78: 0x0  nop
    ctx->pc = 0x285f78u;
    // NOP
label_285f7c:
    // 0x285f7c: 0x0  nop
    ctx->pc = 0x285f7cu;
    // NOP
label_285f80:
    // 0x285f80: 0x0  nop
    ctx->pc = 0x285f80u;
    // NOP
label_285f84:
    // 0x285f84: 0x0  nop
    ctx->pc = 0x285f84u;
    // NOP
label_285f88:
    // 0x285f88: 0x0  nop
    ctx->pc = 0x285f88u;
    // NOP
label_285f8c:
    // 0x285f8c: 0x0  nop
    ctx->pc = 0x285f8cu;
    // NOP
label_285f90:
    // 0x285f90: 0x0  nop
    ctx->pc = 0x285f90u;
    // NOP
label_285f94:
    // 0x285f94: 0x0  nop
    ctx->pc = 0x285f94u;
    // NOP
label_285f98:
    // 0x285f98: 0x0  nop
    ctx->pc = 0x285f98u;
    // NOP
label_285f9c:
    // 0x285f9c: 0x0  nop
    ctx->pc = 0x285f9cu;
    // NOP
label_285fa0:
    // 0x285fa0: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fa0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_285fa4:
    // 0x285fa4: 0x1accc8  .word       0x001ACCC8                   # jr          $zero # 001ACCC0 <InstrIdType: CPU_SPECIAL>
label_285fa8:
    if (ctx->pc == 0x285FA8u) {
        ctx->pc = 0x285FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA4u;
        // 0x285fa8: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FACu;
        goto label_285fac;
    }
    ctx->pc = 0x285FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x285FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA4u;
        // 0x285fa8: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x285FACu;
label_285fac:
    // 0x285fac: 0x80075000  lb          $a3, 0x5000($zero)
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5000u));
label_285fb0:
    // 0x285fb0: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_285fb4:
    // 0x285fb4: 0x1ad240  sll         $k0, $k0, 9
    ctx->pc = 0x285fb4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 26), 9));
label_285fb8:
    // 0x285fb8: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fb8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x285FB8 raw=0x00000055"); /* MITIGATED MMI/COP0 */
label_285fbc:
    // 0x285fbc: 0x0  nop
    ctx->pc = 0x285fbcu;
    // NOP
label_285fc0:
    // 0x285fc0: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285fc4:
    // 0x285fc4: 0x0  nop
    ctx->pc = 0x285fc4u;
    // NOP
label_285fc8:
    // 0x285fc8: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fc8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285fcc:
    // 0x285fcc: 0x0  nop
    ctx->pc = 0x285fccu;
    // NOP
label_285fd0:
    // 0x285fd0: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x285fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285fd4:
    // 0x285fd4: 0x0  nop
    ctx->pc = 0x285fd4u;
    // NOP
label_285fd8:
    // 0x285fd8: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fd8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285fdc:
    // 0x285fdc: 0x0  nop
    ctx->pc = 0x285fdcu;
    // NOP
label_285fe0:
    // 0x285fe0: 0x0  nop
    ctx->pc = 0x285fe0u;
    // NOP
label_285fe4:
    // 0x285fe4: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x285fe4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_285fe8:
    // 0x285fe8: 0x80000007  lb          $zero, 0x7($zero)
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7u));
label_285fec:
    // 0x285fec: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_285ff0:
    // 0x285ff0: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_285ff4:
    // 0x285ff4: 0xffff8000  sd          $ra, -0x8000($ra)
    ctx->pc = 0x285ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294934528), GPR_U64(ctx, 31));
label_285ff8:
    // 0x285ff8: 0x1e1f  .word       0x00001E1F                   # ddivu       $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285ff8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x285FF8 raw=0x00001E1F"); /* MITIGATED MMI/COP0 */
label_285ffc:
    // 0x285ffc: 0x1f1f  .word       0x00001F1F                   # ddivu       $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285ffcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x285FFC raw=0x00001F1F"); /* MITIGATED MMI/COP0 */
label_286000:
    // 0x286000: 0x0  nop
    ctx->pc = 0x286000u;
    // NOP
label_286004:
    // 0x286004: 0x10000000  b           . + 4 + (0x0 << 2)
label_286008:
    if (ctx->pc == 0x286008u) {
        ctx->pc = 0x286008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286004u;
        // 0x286008: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28600Cu;
        goto label_28600c;
    }
    ctx->pc = 0x286004u;
    {
        const bool branch_taken_0x286004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286004u;
        // 0x286008: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286004) {
            ctx->pc = 0x286008u;
            goto label_286008;
        }
    }
    ctx->pc = 0x28600Cu;
label_28600c:
    // 0x28600c: 0x400053  .word       0x00400053                   # mtlo        $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28600cu;
    ctx->lo = GPR_U64(ctx, 2);
label_286010:
    // 0x286010: 0x0  nop
    ctx->pc = 0x286010u;
    // NOP
label_286014:
    // 0x286014: 0x10002000  b           . + 4 + (0x2000 << 2)
label_286018:
    if (ctx->pc == 0x286018u) {
        ctx->pc = 0x286018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286014u;
        // 0x286018: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28601Cu;
        goto label_28601c;
    }
    ctx->pc = 0x286014u;
    {
        const bool branch_taken_0x286014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286014u;
        // 0x286018: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286014) {
            ctx->pc = 0x28E018u;
            return;
        }
    }
    ctx->pc = 0x28601Cu;
label_28601c:
    // 0x28601c: 0x4000d7  .word       0x004000D7                   # dsrav       $zero, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28601cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286020:
    // 0x286020: 0x0  nop
    ctx->pc = 0x286020u;
    // NOP
label_286024:
    // 0x286024: 0x10004000  b           . + 4 + (0x4000 << 2)
label_286028:
    if (ctx->pc == 0x286028u) {
        ctx->pc = 0x286028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286024u;
        // 0x286028: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28602Cu;
        goto label_28602c;
    }
    ctx->pc = 0x286024u;
    {
        const bool branch_taken_0x286024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286024u;
        // 0x286028: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286024) {
            ctx->pc = 0x296028u;
            return;
        }
    }
    ctx->pc = 0x28602Cu;
label_28602c:
    // 0x28602c: 0x400157  .word       0x00400157                   # dsrav       $zero, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28602cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286030:
    // 0x286030: 0x0  nop
    ctx->pc = 0x286030u;
    // NOP
label_286034:
    // 0x286034: 0x10006000  b           . + 4 + (0x6000 << 2)
label_286038:
    if (ctx->pc == 0x286038u) {
        ctx->pc = 0x286038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286034u;
        // 0x286038: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28603Cu;
        goto label_28603c;
    }
    ctx->pc = 0x286034u;
    {
        const bool branch_taken_0x286034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286034u;
        // 0x286038: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286034) {
            ctx->pc = 0x29E038u;
            return;
        }
    }
    ctx->pc = 0x28603Cu;
label_28603c:
    // 0x28603c: 0x4001d7  .word       0x004001D7                   # dsrav       $zero, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28603cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286040:
    // 0x286040: 0x0  nop
    ctx->pc = 0x286040u;
    // NOP
label_286044:
    // 0x286044: 0x10008000  b           . + 4 + (-0x8000 << 2)
label_286048:
    if (ctx->pc == 0x286048u) {
        ctx->pc = 0x286048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286044u;
        // 0x286048: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28604Cu;
        goto label_28604c;
    }
    ctx->pc = 0x286044u;
    {
        const bool branch_taken_0x286044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286044u;
        // 0x286048: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286044) {
            ctx->pc = 0x266048u;
            return;
        }
    }
    ctx->pc = 0x28604Cu;
label_28604c:
    // 0x28604c: 0x400257  .word       0x00400257                   # dsrav       $zero, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28604cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286050:
    // 0x286050: 0x0  nop
    ctx->pc = 0x286050u;
    // NOP
label_286054:
    // 0x286054: 0x1000a000  b           . + 4 + (-0x6000 << 2)
label_286058:
    if (ctx->pc == 0x286058u) {
        ctx->pc = 0x286058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286054u;
        // 0x286058: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28605Cu;
        goto label_28605c;
    }
    ctx->pc = 0x286054u;
    {
        const bool branch_taken_0x286054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286054u;
        // 0x286058: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286054) {
            ctx->pc = 0x26E058u;
            return;
        }
    }
    ctx->pc = 0x28605Cu;
label_28605c:
    // 0x28605c: 0x4002d7  .word       0x004002D7                   # dsrav       $zero, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28605cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286060:
    // 0x286060: 0x0  nop
    ctx->pc = 0x286060u;
    // NOP
label_286064:
    // 0x286064: 0x1000c000  b           . + 4 + (-0x4000 << 2)
label_286068:
    if (ctx->pc == 0x286068u) {
        ctx->pc = 0x286068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286064u;
        // 0x286068: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28606Cu;
        goto label_28606c;
    }
    ctx->pc = 0x286064u;
    {
        const bool branch_taken_0x286064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286064u;
        // 0x286068: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286064) {
            ctx->pc = 0x276068u;
            return;
        }
    }
    ctx->pc = 0x28606Cu;
label_28606c:
    // 0x28606c: 0x400357  .word       0x00400357                   # dsrav       $zero, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28606cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286070:
    // 0x286070: 0x0  nop
    ctx->pc = 0x286070u;
    // NOP
label_286074:
    // 0x286074: 0x1000e000  b           . + 4 + (-0x2000 << 2)
label_286078:
    if (ctx->pc == 0x286078u) {
        ctx->pc = 0x286078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286074u;
        // 0x286078: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28607Cu;
        goto label_28607c;
    }
    ctx->pc = 0x286074u;
    {
        const bool branch_taken_0x286074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286074u;
        // 0x286078: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286074) {
            ctx->pc = 0x27E078u;
            return;
        }
    }
    ctx->pc = 0x28607Cu;
label_28607c:
    // 0x28607c: 0x4003d7  .word       0x004003D7                   # dsrav       $zero, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28607cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286080:
    // 0x286080: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x286080u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_286084:
    // 0x286084: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_286088:
    if (ctx->pc == 0x286088u) {
        ctx->pc = 0x286088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286084u;
        // 0x286088: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28608Cu;
        goto label_28608c;
    }
    ctx->pc = 0x286084u;
    {
        const bool branch_taken_0x286084 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x286088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286084u;
        // 0x286088: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286084) {
            ctx->pc = 0x286088u;
            goto label_286088;
        }
    }
    ctx->pc = 0x28608Cu;
label_28608c:
    // 0x28608c: 0x440415  .word       0x00440415                   # INVALID     $v0, $a0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28608cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28608C raw=0x00440415"); /* MITIGATED MMI/COP0 */
label_286090:
    // 0x286090: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_286094:
    // 0x286094: 0x12000000  beqz        $s0, . + 4 + (0x0 << 2)
label_286098:
    if (ctx->pc == 0x286098u) {
        ctx->pc = 0x286098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286094u;
        // 0x286098: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28609Cu;
        goto label_28609c;
    }
    ctx->pc = 0x286094u;
    {
        const bool branch_taken_0x286094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286094u;
        // 0x286098: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286094) {
            ctx->pc = 0x286098u;
            goto label_286098;
        }
    }
    ctx->pc = 0x28609Cu;
label_28609c:
    // 0x28609c: 0x480415  .word       0x00480415                   # INVALID     $v0, $t0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28609cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28609C raw=0x00480415"); /* MITIGATED MMI/COP0 */
label_2860a0:
    // 0x2860a0: 0x1ffe000  .word       0x01FFE000                   # sll         $gp, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2860a0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2860a4:
    // 0x2860a4: 0x1e000000  bgtz        $s0, . + 4 + (0x0 << 2)
label_2860a8:
    if (ctx->pc == 0x2860A8u) {
        ctx->pc = 0x2860A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860A4u;
        // 0x2860a8: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860ACu;
        goto label_2860ac;
    }
    ctx->pc = 0x2860A4u;
    {
        const bool branch_taken_0x2860a4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2860A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860A4u;
        // 0x2860a8: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860a4) {
            ctx->pc = 0x2860A8u;
            goto label_2860a8;
        }
    }
    ctx->pc = 0x2860ACu;
label_2860ac:
    // 0x2860ac: 0x7c0017  dsrav       $zero, $gp, $v1
    ctx->pc = 0x2860acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> (GPR_U32(ctx, 3) & 0x3F));
label_2860b0:
    // 0x2860b0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2860b0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2860b4:
    // 0x2860b4: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x2860b4u;
    
label_2860b8:
    // 0x2860b8: 0x201f  ddivu       $a0, $zero, $zero
    ctx->pc = 0x2860b8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860B8 raw=0x0000201F"); /* MITIGATED MMI/COP0 */
label_2860bc:
    // 0x2860bc: 0x301f  ddivu       $a2, $zero, $zero
    ctx->pc = 0x2860bcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860BC raw=0x0000301F"); /* MITIGATED MMI/COP0 */
label_2860c0:
    // 0x2860c0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2860c0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2860c4:
    // 0x2860c4: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x2860c4u;
    
label_2860c8:
    // 0x2860c8: 0x401f  ddivu       $t0, $zero, $zero
    ctx->pc = 0x2860c8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860C8 raw=0x0000401F"); /* MITIGATED MMI/COP0 */
label_2860cc:
    // 0x2860cc: 0x501f  ddivu       $t2, $zero, $zero
    ctx->pc = 0x2860ccu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860CC raw=0x0000501F"); /* MITIGATED MMI/COP0 */
label_2860d0:
    // 0x2860d0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2860d0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2860d4:
    // 0x2860d4: 0x180000  sll         $zero, $t8, 0
    ctx->pc = 0x2860d4u;
    
label_2860d8:
    // 0x2860d8: 0x601f  ddivu       $t4, $zero, $zero
    ctx->pc = 0x2860d8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860D8 raw=0x0000601F"); /* MITIGATED MMI/COP0 */
label_2860dc:
    // 0x2860dc: 0x701f  ddivu       $t6, $zero, $zero
    ctx->pc = 0x2860dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860DC raw=0x0000701F"); /* MITIGATED MMI/COP0 */
label_2860e0:
    // 0x2860e0: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x2860e0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2860e4:
    // 0x2860e4: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2860e4u;
    // NOP
label_2860e8:
    // 0x2860e8: 0x801f  ddivu       $s0, $zero, $zero
    ctx->pc = 0x2860e8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860E8 raw=0x0000801F"); /* MITIGATED MMI/COP0 */
label_2860ec:
    // 0x2860ec: 0xc01f  ddivu       $t8, $zero, $zero
    ctx->pc = 0x2860ecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860EC raw=0x0000C01F"); /* MITIGATED MMI/COP0 */
label_2860f0:
    // 0x2860f0: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2860f4:
    // 0x2860f4: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2860f4u;
    // NOP
label_2860f8:
    // 0x2860f8: 0x1001f  ddivu       $zero, $zero, $at
    ctx->pc = 0x2860f8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860F8 raw=0x0001001F"); /* MITIGATED MMI/COP0 */
label_2860fc:
    // 0x2860fc: 0x1401f  ddivu       $t0, $zero, $at
    ctx->pc = 0x2860fcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860FC raw=0x0001401F"); /* MITIGATED MMI/COP0 */
label_286100:
    // 0x286100: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286100u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286104:
    // 0x286104: 0x600000  .word       0x00600000                   # sll         $zero, $zero, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286104u;
    // NOP
label_286108:
    // 0x286108: 0x1801f  ddivu       $s0, $zero, $at
    ctx->pc = 0x286108u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286108 raw=0x0001801F"); /* MITIGATED MMI/COP0 */
label_28610c:
    // 0x28610c: 0x1c01f  ddivu       $t8, $zero, $at
    ctx->pc = 0x28610cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28610C raw=0x0001C01F"); /* MITIGATED MMI/COP0 */
label_286110:
    // 0x286110: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286110u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286114:
    // 0x286114: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286114u;
    // NOP
label_286118:
    // 0x286118: 0x2001f  ddivu       $zero, $zero, $v0
    ctx->pc = 0x286118u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286118 raw=0x0002001F"); /* MITIGATED MMI/COP0 */
label_28611c:
    // 0x28611c: 0x3001f  ddivu       $zero, $zero, $v1
    ctx->pc = 0x28611cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28611C raw=0x0003001F"); /* MITIGATED MMI/COP0 */
label_286120:
    // 0x286120: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286120u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286124:
    // 0x286124: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286124u;
    // NOP
label_286128:
    // 0x286128: 0x4001f  ddivu       $zero, $zero, $a0
    ctx->pc = 0x286128u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286128 raw=0x0004001F"); /* MITIGATED MMI/COP0 */
label_28612c:
    // 0x28612c: 0x5001f  ddivu       $zero, $zero, $a1
    ctx->pc = 0x28612cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28612C raw=0x0005001F"); /* MITIGATED MMI/COP0 */
label_286130:
    // 0x286130: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286130u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286134:
    // 0x286134: 0x1800000  .word       0x01800000                   # sll         $zero, $zero, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286134u;
    // NOP
label_286138:
    // 0x286138: 0x6001f  ddivu       $zero, $zero, $a2
    ctx->pc = 0x286138u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286138 raw=0x0006001F"); /* MITIGATED MMI/COP0 */
label_28613c:
    // 0x28613c: 0x7001f  ddivu       $zero, $zero, $a3
    ctx->pc = 0x28613cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28613C raw=0x0007001F"); /* MITIGATED MMI/COP0 */
label_286140:
    // 0x286140: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x286140u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_286144:
    // 0x286144: 0x20080000  addi        $t0, $zero, 0x0
    ctx->pc = 0x286144u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_286148:
    // 0x286148: 0x2017  dsrav       $a0, $zero, $zero
    ctx->pc = 0x286148u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28614c:
    // 0x28614c: 0x3017  dsrav       $a2, $zero, $zero
    ctx->pc = 0x28614cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286150:
    // 0x286150: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x286150u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_286154:
    // 0x286154: 0x20100000  addi        $s0, $zero, 0x0
    ctx->pc = 0x286154u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_286158:
    // 0x286158: 0x4017  dsrav       $t0, $zero, $zero
    ctx->pc = 0x286158u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28615c:
    // 0x28615c: 0x5017  dsrav       $t2, $zero, $zero
    ctx->pc = 0x28615cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286160:
    // 0x286160: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x286160u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_286164:
    // 0x286164: 0x20180000  addi        $t8, $zero, 0x0
    ctx->pc = 0x286164u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_286168:
    // 0x286168: 0x6017  dsrav       $t4, $zero, $zero
    ctx->pc = 0x286168u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28616c:
    // 0x28616c: 0x7017  dsrav       $t6, $zero, $zero
    ctx->pc = 0x28616cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286170:
    // 0x286170: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286170u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286174:
    // 0x286174: 0x20200000  addi        $zero, $at, 0x0
    ctx->pc = 0x286174u;
    // NOP (addi to $zero)
label_286178:
    // 0x286178: 0x8017  dsrav       $s0, $zero, $zero
    ctx->pc = 0x286178u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28617c:
    // 0x28617c: 0xc017  dsrav       $t8, $zero, $zero
    ctx->pc = 0x28617cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286180:
    // 0x286180: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286184:
    // 0x286184: 0x20400000  addi        $zero, $v0, 0x0
    ctx->pc = 0x286184u;
    // NOP (addi to $zero)
label_286188:
    // 0x286188: 0x10017  dsrav       $zero, $at, $zero
    ctx->pc = 0x286188u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_28618c:
    // 0x28618c: 0x14017  dsrav       $t0, $at, $zero
    ctx->pc = 0x28618cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_286190:
    // 0x286190: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286190u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286194:
    // 0x286194: 0x20600000  addi        $zero, $v1, 0x0
    ctx->pc = 0x286194u;
    // NOP (addi to $zero)
label_286198:
    // 0x286198: 0x18017  dsrav       $s0, $at, $zero
    ctx->pc = 0x286198u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_28619c:
    // 0x28619c: 0x1c017  dsrav       $t8, $at, $zero
    ctx->pc = 0x28619cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861a0:
    // 0x2861a0: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2861a0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861a4:
    // 0x2861a4: 0x20800000  addi        $zero, $a0, 0x0
    ctx->pc = 0x2861a4u;
    // NOP (addi to $zero)
label_2861a8:
    // 0x2861a8: 0x20017  dsrav       $zero, $v0, $zero
    ctx->pc = 0x2861a8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861ac:
    // 0x2861ac: 0x30017  dsrav       $zero, $v1, $zero
    ctx->pc = 0x2861acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861b0:
    // 0x2861b0: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2861b0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861b4:
    // 0x2861b4: 0x21000000  addi        $zero, $t0, 0x0
    ctx->pc = 0x2861b4u;
    // NOP (addi to $zero)
label_2861b8:
    // 0x2861b8: 0x40017  dsrav       $zero, $a0, $zero
    ctx->pc = 0x2861b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861bc:
    // 0x2861bc: 0x50017  dsrav       $zero, $a1, $zero
    ctx->pc = 0x2861bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861c0:
    // 0x2861c0: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2861c0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861c4:
    // 0x2861c4: 0x21800000  addi        $zero, $t4, 0x0
    ctx->pc = 0x2861c4u;
    // NOP (addi to $zero)
label_2861c8:
    // 0x2861c8: 0x60017  dsrav       $zero, $a2, $zero
    ctx->pc = 0x2861c8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861cc:
    // 0x2861cc: 0x70017  dsrav       $zero, $a3, $zero
    ctx->pc = 0x2861ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861d0:
    // 0x2861d0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2861d4:
    // 0x2861d4: 0x30100000  andi        $s0, $zero, 0x0
    ctx->pc = 0x2861d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_2861d8:
    // 0x2861d8: 0x403f  dsra32      $t0, $zero, 0
    ctx->pc = 0x2861d8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 0));
label_2861dc:
    // 0x2861dc: 0x503f  dsra32      $t2, $zero, 0
    ctx->pc = 0x2861dcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (32 + 0));
label_2861e0:
    // 0x2861e0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2861e4:
    // 0x2861e4: 0x30180000  andi        $t8, $zero, 0x0
    ctx->pc = 0x2861e4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_2861e8:
    // 0x2861e8: 0x603f  dsra32      $t4, $zero, 0
    ctx->pc = 0x2861e8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 0));
label_2861ec:
    // 0x2861ec: 0x703f  dsra32      $t6, $zero, 0
    ctx->pc = 0x2861ecu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 0));
label_2861f0:
    // 0x2861f0: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x2861f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861f4:
    // 0x2861f4: 0x30200000  andi        $zero, $at, 0x0
    ctx->pc = 0x2861f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)0);
label_2861f8:
    // 0x2861f8: 0x803f  dsra32      $s0, $zero, 0
    ctx->pc = 0x2861f8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 0));
label_2861fc:
    // 0x2861fc: 0xc03f  dsra32      $t8, $zero, 0
    ctx->pc = 0x2861fcu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 0));
label_286200:
    // 0x286200: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286204:
    // 0x286204: 0x30400000  andi        $zero, $v0, 0x0
    ctx->pc = 0x286204u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)0);
label_286208:
    // 0x286208: 0x1003f  dsra32      $zero, $at, 0
    ctx->pc = 0x286208u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 0));
label_28620c:
    // 0x28620c: 0x1403f  dsra32      $t0, $at, 0
    ctx->pc = 0x28620cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 0));
label_286210:
    // 0x286210: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286210u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286214:
    // 0x286214: 0x30600000  andi        $zero, $v1, 0x0
    ctx->pc = 0x286214u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)0);
label_286218:
    // 0x286218: 0x1803f  dsra32      $s0, $at, 0
    ctx->pc = 0x286218u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (32 + 0));
label_28621c:
    // 0x28621c: 0x1c03f  dsra32      $t8, $at, 0
    ctx->pc = 0x28621cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (32 + 0));
label_286220:
    // 0x286220: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286220u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286224:
    // 0x286224: 0x30800000  andi        $zero, $a0, 0x0
    ctx->pc = 0x286224u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)0);
label_286228:
    // 0x286228: 0x2003f  dsra32      $zero, $v0, 0
    ctx->pc = 0x286228u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 0));
label_28622c:
    // 0x28622c: 0x3003f  dsra32      $zero, $v1, 0
    ctx->pc = 0x28622cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (32 + 0));
label_286230:
    // 0x286230: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286234:
    // 0x286234: 0x31000000  andi        $zero, $t0, 0x0
    ctx->pc = 0x286234u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_286238:
    // 0x286238: 0x4003f  dsra32      $zero, $a0, 0
    ctx->pc = 0x286238u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (32 + 0));
label_28623c:
    // 0x28623c: 0x5003f  dsra32      $zero, $a1, 0
    ctx->pc = 0x28623cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 0));
label_286240:
    // 0x286240: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286240u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286244:
    // 0x286244: 0x31800000  andi        $zero, $t4, 0x0
    ctx->pc = 0x286244u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)0);
label_286248:
    // 0x286248: 0x6003f  dsra32      $zero, $a2, 0
    ctx->pc = 0x286248u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (32 + 0));
label_28624c:
    // 0x28624c: 0x7003f  dsra32      $zero, $a3, 0
    ctx->pc = 0x28624cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 0));
label_286250:
    // 0x286250: 0xd  break       0
    ctx->pc = 0x286250u;
    runtime->handleBreak(rdram, ctx);
label_286254:
    // 0x286254: 0x12  mflo        $zero
    ctx->pc = 0x286254u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_286258:
    // 0x286258: 0x8  jr          $zero
label_28625c:
    if (ctx->pc == 0x28625Cu) {
        ctx->pc = 0x286260u;
        goto label_286260;
    }
    ctx->pc = 0x286258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286258u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x286260u;
label_286260:
    // 0x286260: 0x285fe0  .word       0x00285FE0                   # add         $t3, $at, $t0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286260u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_286264:
    // 0x286264: 0x2860b0  tge         $at, $t0, 386
    ctx->pc = 0x286264u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_286268:
    // 0x286268: 0x2861d0  .word       0x002861D0                   # mfhi        $t4 # 002801C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286268u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_28626c:
    // 0x28626c: 0x0  nop
    ctx->pc = 0x28626cu;
    // NOP
label_286270:
    // 0x286270: 0x0  nop
    ctx->pc = 0x286270u;
    // NOP
label_286274:
    // 0x286274: 0x0  nop
    ctx->pc = 0x286274u;
    // NOP
label_286278:
    // 0x286278: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x286278u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_28627c:
    // 0x28627c: 0x1ad550  .word       0x001AD550                   # mfhi        $k0 # 001A0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28627cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_286280:
    // 0x286280: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286280u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_286284:
    // 0x286284: 0x1ad518  .word       0x001AD518                   # mult        $k0, $zero, $k0 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x286284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_286288:
    // 0x286288: 0x0  nop
    ctx->pc = 0x286288u;
    // NOP
label_28628c:
    // 0x28628c: 0x0  nop
    ctx->pc = 0x28628cu;
    // NOP
label_286290:
    // 0x286290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_286294:
    // 0x286294: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x286294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_286298:
    // 0x286298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28629c:
    // 0x28629c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2862a0:
    // 0x2862a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2862a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2862a4:
    // 0x2862a4: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
label_2862a8:
    // 0x2862a8: 0xc01d07a  jal         func_0741E8
label_2862ac:
    if (ctx->pc == 0x2862ACu) {
        ctx->pc = 0x2862ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862A8u;
        // 0x2862ac: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862B0u;
        goto label_2862b0;
    }
    ctx->pc = 0x2862A8u;
    SET_GPR_U32(ctx, 31, 0x2862B0u);
    ctx->pc = 0x2862ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2862A8u;
    // 0x2862ac: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x741E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x741E8u, 0x2862A8u, 0x2862B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862B0u;
label_2862b0:
    // 0x2862b0: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2862b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2862b4:
    // 0x2862b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2862b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2862b8:
    // 0x2862b8: 0x3c0603ff  lui         $a2, 0x3FF
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1023 << 16));
label_2862bc:
    // 0x2862bc: 0x3c070c00  lui         $a3, 0xC00
    ctx->pc = 0x2862bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3072 << 16));
label_2862c0:
    // 0x2862c0: 0x24434780  addiu       $v1, $v0, 0x4780
    ctx->pc = 0x2862c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
label_2862c4:
    // 0x2862c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2862c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2862c8:
    // 0x2862c8: 0x34a5c402  ori         $a1, $a1, 0xC402
    ctx->pc = 0x2862c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50178);
label_2862cc:
    // 0x2862cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2862ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2862d0:
    // 0x2862d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2862d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2862d4:
    // 0x2862d4: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_2862d8:
    if (ctx->pc == 0x2862D8u) {
        ctx->pc = 0x2862D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862D4u;
        // 0x2862d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862DCu;
        goto label_2862dc;
    }
    ctx->pc = 0x2862D4u;
    {
        const bool branch_taken_0x2862d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2862d4) {
            ctx->pc = 0x2862D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2862D4u;
            // 0x2862d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862F4u;
            goto label_2862f4;
        }
    }
    ctx->pc = 0x2862DCu;
label_2862dc:
    // 0x2862dc: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
label_2862e0:
    if (ctx->pc == 0x2862E0u) {
        ctx->pc = 0x2862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862DCu;
        // 0x2862e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862E4u;
        goto label_2862e4;
    }
    ctx->pc = 0x2862DCu;
    {
        const bool branch_taken_0x2862dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862DCu;
        // 0x2862e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862dc) {
            ctx->pc = 0x286304u;
            goto label_286304;
        }
    }
    ctx->pc = 0x2862E4u;
label_2862e4:
    // 0x2862e4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2862e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2862e8:
    // 0x2862e8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2862e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2862ec:
    // 0x2862ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_2862f0:
    if (ctx->pc == 0x2862F0u) {
        ctx->pc = 0x2862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ECu;
        // 0x2862f0: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862F4u;
        goto label_2862f4;
    }
    ctx->pc = 0x2862ECu;
    {
        const bool branch_taken_0x2862ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ECu;
        // 0x2862f0: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862ec) {
            ctx->pc = 0x286304u;
            goto label_286304;
        }
    }
    ctx->pc = 0x2862F4u;
label_2862f4:
    // 0x2862f4: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2862f8:
    // 0x2862f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2862fc:
    if (ctx->pc == 0x2862FCu) {
        ctx->pc = 0x2862FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862F8u;
        // 0x2862fc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286300u;
        goto label_286300;
    }
    ctx->pc = 0x2862F8u;
    {
        const bool branch_taken_0x2862f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2862FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862F8u;
        // 0x2862fc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862f8) {
            ctx->pc = 0x2862D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2862d0;
        }
    }
    ctx->pc = 0x286300u;
label_286300:
    // 0x286300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x286300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286304:
    // 0x286304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286308:
    // 0x286308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28630c:
    // 0x28630c: 0x3e00008  jr          $ra
label_286310:
    if (ctx->pc == 0x286310u) {
        ctx->pc = 0x286310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28630Cu;
        // 0x286310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286314u;
        goto label_286314;
    }
    ctx->pc = 0x28630Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28630Cu;
        // 0x286310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28630Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286314u;
label_286314:
    // 0x286314: 0x0  nop
    ctx->pc = 0x286314u;
    // NOP
label_286318:
    // 0x286318: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x286318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_28631c:
    // 0x28631c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286320:
    // 0x286320: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286324:
    // 0x286324: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x286324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_286328:
    // 0x286328: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x286328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_28632c:
    // 0x28632c: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_286330:
    // 0x286330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_286334:
    // 0x286334: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x286334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_286338:
    // 0x286338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28633c:
    // 0x28633c: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x28633cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_286340:
    // 0x286340: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x286340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_286344:
    // 0x286344: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x286344u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_286348:
    // 0x286348: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x286348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_28634c:
    // 0x28634c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_286350:
    // 0x286350: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286354:
    // 0x286354: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x286354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_286358:
    // 0x286358: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_28635c:
    // 0x28635c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x28635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_286360:
    // 0x286360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286364:
    // 0x286364: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x286364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_286368:
    // 0x286368: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x286368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_28636c:
    // 0x28636c: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x28636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286370:
    // 0x286370: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x286370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_286374:
    // 0x286374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286378:
    // 0x286378: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x286378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_28637c:
    // 0x28637c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x28637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_286380:
    // 0x286380: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286384:
    // 0x286384: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x286384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_286388:
    // 0x286388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28638c:
    // 0x28638c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28638cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_286390:
    // 0x286390: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x286390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_286394:
    // 0x286394: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286398:
    // 0x286398: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x286398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_28639c:
    // 0x28639c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2863a0:
    // 0x2863a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2863a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2863a4:
    // 0x2863a4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2863a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_2863a8:
    // 0x2863a8: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x2863a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_2863ac:
    // 0x2863ac: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x2863acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_2863b0:
    // 0x2863b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2863b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2863b4:
    // 0x2863b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2863b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2863b8:
    // 0x2863b8: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x2863b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2863bc:
    // 0x2863bc: 0x3e00008  jr          $ra
label_2863c0:
    if (ctx->pc == 0x2863C0u) {
        ctx->pc = 0x2863C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863BCu;
        // 0x2863c0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863C4u;
        goto label_2863c4;
    }
    ctx->pc = 0x2863BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2863C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863BCu;
        // 0x2863c0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2863BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2863C4u;
label_2863c4:
    // 0x2863c4: 0x0  nop
    ctx->pc = 0x2863c4u;
    // NOP
label_2863c8:
    // 0x2863c8: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x2863c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_2863cc:
    // 0x2863cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2863ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2863d0:
    // 0x2863d0: 0x8ca347a8  lw          $v1, 0x47A8($a1)
    ctx->pc = 0x2863d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_2863d4:
    // 0x2863d4: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2863d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2863d8:
    // 0x2863d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2863d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2863dc:
    // 0x2863dc: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x2863dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_2863e0:
    // 0x2863e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2863e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_2863e4:
    // 0x2863e4: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x2863e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_2863e8:
    // 0x2863e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2863e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2863ec:
    // 0x2863ec: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x2863ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2863f0:
    // 0x2863f0: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x2863f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_2863f4:
    // 0x2863f4: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x2863f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_2863f8:
    // 0x2863f8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2863f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_2863fc:
    // 0x2863fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2863fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_286400:
    // 0x286400: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286404:
    // 0x286404: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x286404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_286408:
    // 0x286408: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x286408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_28640c:
    // 0x28640c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x28640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_286410:
    // 0x286410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286414:
    // 0x286414: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286418:
    // 0x286418: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x286418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_28641c:
    // 0x28641c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286420:
    // 0x286420: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x286420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_286424:
    // 0x286424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286428:
    // 0x286428: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_28642c:
    // 0x28642c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x28642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_286430:
    // 0x286430: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286434:
    // 0x286434: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x286434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_286438:
    // 0x286438: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28643c:
    // 0x28643c: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x28643cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286440:
    // 0x286440: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x286440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_286444:
    // 0x286444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286448:
    // 0x286448: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x286448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_28644c:
    // 0x28644c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28644cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286450:
    // 0x286450: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286454:
    // 0x286454: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x286454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_286458:
    // 0x286458: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28645c:
    // 0x28645c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x28645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_286460:
    // 0x286460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286464:
    // 0x286464: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286468:
    // 0x286468: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x286468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_28646c:
    // 0x28646c: 0x3e00008  jr          $ra
label_286470:
    if (ctx->pc == 0x286470u) {
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286474u;
        goto label_286474;
    }
    ctx->pc = 0x28646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286474u;
label_286474:
    // 0x286474: 0x0  nop
    ctx->pc = 0x286474u;
    // NOP
    ctx->pc = 0x286478u;
}
