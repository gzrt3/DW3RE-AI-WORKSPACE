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

// Function: entry_0021cd70
// Address: 0x21cd70 - 0x21d210
void entry_0021cd70_0x21cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cd70_0x21cd70");
#endif

    switch (ctx->pc) {
        case 0x21cd90u: goto label_21cd90;
        case 0x21cf44u: goto label_21cf44;
        case 0x21cf8cu: goto label_21cf8c;
        case 0x21d144u: goto label_21d144;
        case 0x21d194u: goto label_21d194;
        case 0x21d1ccu: goto label_21d1cc;
        default: break;
    }

    ctx->pc = 0x21cd70u;

    // 0x21cd70: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x21cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21cd74: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CD7Cu;
    // 0x21cd7c: 0x0  nop
    ctx->pc = 0x21cd7cu;
    // NOP
    // 0x21cd80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21cd80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21cd84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21cd88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd8c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x21cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21cd90:
    // 0x21cd90: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x21cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cd94: 0x84878  dsll        $t1, $t0, 1
    ctx->pc = 0x21cd94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << 1);
    // 0x21cd98: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21cd9c: 0x128482d  daddu       $t1, $t1, $t0
    ctx->pc = 0x21cd9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cda0: 0x80ca0000  lb          $t2, 0x0($a2)
    ctx->pc = 0x21cda0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21cda4: 0x948b8  dsll        $t1, $t1, 2
    ctx->pc = 0x21cda4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 2);
    // 0x21cda8: 0x128402d  daddu       $t0, $t1, $t0
    ctx->pc = 0x21cda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cdac: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cdacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21cdb0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x21cdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21cdb4: 0x254cffbf  addiu       $t4, $t2, -0x41
    ctx->pc = 0x21cdb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967231));
    // 0x21cdb8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21cdbc: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x21cdbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21cdc0: 0x812b0000  lb          $t3, 0x0($t1)
    ctx->pc = 0x21cdc0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21cdc4: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x21cdc8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21cdcc: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x21cdccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21cdd0: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x21cdd0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21cdd4: 0x24660003  addiu       $a2, $v1, 0x3
    ctx->pc = 0x21cdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21cdd8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21cdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21cddc: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21cddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21cde0: 0xc483c  dsll32      $t1, $t4, 0
    ctx->pc = 0x21cde0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) << (32 + 0));
    // 0x21cde4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x21cde4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x21cde8: 0x109402d  daddu       $t0, $t0, $t1
    ctx->pc = 0x21cde8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 9));
    // 0x21cdec: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21cdecu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21cdf0: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21cdf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
    // 0x21cdf4: 0x2529ffbf  addiu       $t1, $t1, -0x41
    ctx->pc = 0x21cdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
    // 0x21cdf8: 0xc8602d  daddu       $t4, $a2, $t0
    ctx->pc = 0x21cdf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cdfc: 0x9683c  dsll32      $t5, $t1, 0
    ctx->pc = 0x21cdfcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) << (32 + 0));
    // 0x21ce00: 0x2566ffbf  addiu       $a2, $t3, -0x41
    ctx->pc = 0x21ce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967231));
    // 0x21ce04: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21ce04u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x21ce08: 0xc58b8  dsll        $t3, $t4, 2
    ctx->pc = 0x21ce08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 2);
    // 0x21ce0c: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x21ce0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
    // 0x21ce10: 0x168402d  daddu       $t0, $t3, $t0
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21ce14: 0x2546ffbf  addiu       $a2, $t2, -0x41
    ctx->pc = 0x21ce14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967231));
    // 0x21ce18: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21ce18u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x21ce1c: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x21ce1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x21ce20: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21ce20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21ce24: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x21ce24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21ce28: 0x10c402d  daddu       $t0, $t0, $t4
    ctx->pc = 0x21ce28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 12));
    // 0x21ce2c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21ce30: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x21ce30u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x21ce34: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21ce34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21ce38: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21ce38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21ce3c: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21ce3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
    // 0x21ce40: 0x2529ffbf  addiu       $t1, $t1, -0x41
    ctx->pc = 0x21ce40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
    // 0x21ce44: 0xc8502d  daddu       $t2, $a2, $t0
    ctx->pc = 0x21ce44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21ce48: 0x9603c  dsll32      $t4, $t1, 0
    ctx->pc = 0x21ce48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 0));
    // 0x21ce4c: 0x24660005  addiu       $a2, $v1, 0x5
    ctx->pc = 0x21ce4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x21ce50: 0xa50b8  dsll        $t2, $t2, 2
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 2);
    // 0x21ce54: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21ce58: 0x148402d  daddu       $t0, $t2, $t0
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21ce5c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21ce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21ce60: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21ce60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21ce64: 0x80ca0000  lb          $t2, 0x0($a2)
    ctx->pc = 0x21ce64u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21ce68: 0x10b402d  daddu       $t0, $t0, $t3
    ctx->pc = 0x21ce68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 11));
    // 0x21ce6c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21ce6cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x21ce70: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x21ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x21ce74: 0x254affbf  addiu       $t2, $t2, -0x41
    ctx->pc = 0x21ce74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967231));
    // 0x21ce78: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21ce7c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21ce7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21ce80: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21ce80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21ce84: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21ce84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
    // 0x21ce88: 0xc8582d  daddu       $t3, $a2, $t0
    ctx->pc = 0x21ce88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21ce8c: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x21ce8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
    // 0x21ce90: 0x24660007  addiu       $a2, $v1, 0x7
    ctx->pc = 0x21ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x21ce94: 0x168402d  daddu       $t0, $t3, $t0
    ctx->pc = 0x21ce94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21ce98: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21ce9c: 0xa583c  dsll32      $t3, $t2, 0
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 0));
    // 0x21cea0: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21cea4: 0x252affbf  addiu       $t2, $t1, -0x41
    ctx->pc = 0x21cea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
    // 0x21cea8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21cea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21ceac: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21ceacu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21ceb0: 0x10d402d  daddu       $t0, $t0, $t5
    ctx->pc = 0x21ceb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 13));
    // 0x21ceb4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x21ceb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x21ceb8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x21ceb8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x21cebc: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21cebcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x21cec0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x21cec4: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21cec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
    // 0x21cec8: 0x2529ffbf  addiu       $t1, $t1, -0x41
    ctx->pc = 0x21cec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
    // 0x21cecc: 0xc8302d  daddu       $a2, $a2, $t0
    ctx->pc = 0x21ceccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21ced0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x21ced0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x21ced4: 0x668b8  dsll        $t5, $a2, 2
    ctx->pc = 0x21ced4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) << 2);
    // 0x21ced8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x21ced8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x21cedc: 0x1a8402d  daddu       $t0, $t5, $t0
    ctx->pc = 0x21cedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cee0: 0x28660004  slti        $a2, $v1, 0x4
    ctx->pc = 0x21cee0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21cee4: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cee4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21cee8: 0x10c402d  daddu       $t0, $t0, $t4
    ctx->pc = 0x21cee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 12));
    // 0x21ceec: 0x86078  dsll        $t4, $t0, 1
    ctx->pc = 0x21ceecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << 1);
    // 0x21cef0: 0x188602d  daddu       $t4, $t4, $t0
    ctx->pc = 0x21cef0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cef4: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21cef4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
    // 0x21cef8: 0x188402d  daddu       $t0, $t4, $t0
    ctx->pc = 0x21cef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cefc: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cefcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21cf00: 0x10b402d  daddu       $t0, $t0, $t3
    ctx->pc = 0x21cf00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 11));
    // 0x21cf04: 0x85878  dsll        $t3, $t0, 1
    ctx->pc = 0x21cf04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << 1);
    // 0x21cf08: 0x168582d  daddu       $t3, $t3, $t0
    ctx->pc = 0x21cf08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cf0c: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x21cf0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
    // 0x21cf10: 0x168402d  daddu       $t0, $t3, $t0
    ctx->pc = 0x21cf10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cf14: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cf14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21cf18: 0x10a402d  daddu       $t0, $t0, $t2
    ctx->pc = 0x21cf18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 10));
    // 0x21cf1c: 0x85078  dsll        $t2, $t0, 1
    ctx->pc = 0x21cf1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << 1);
    // 0x21cf20: 0x148502d  daddu       $t2, $t2, $t0
    ctx->pc = 0x21cf20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cf24: 0xa50b8  dsll        $t2, $t2, 2
    ctx->pc = 0x21cf24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 2);
    // 0x21cf28: 0x148402d  daddu       $t0, $t2, $t0
    ctx->pc = 0x21cf28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cf2c: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cf2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x21cf30: 0x14c0ff97  bnez        $a2, . + 4 + (-0x69 << 2)
    ctx->pc = 0x21CF30u;
    {
        const bool branch_taken_0x21cf30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF30u;
        // 0x21cf34: 0x109402d  daddu       $t0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf30) {
            ctx->pc = 0x21CD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cd90;
        }
    }
    ctx->pc = 0x21CF38u;
    // 0x21cf38: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x21cf38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21cf3c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x21CF3Cu;
    {
        const bool branch_taken_0x21cf3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF3Cu;
        // 0x21cf40: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf3c) {
            ctx->pc = 0x21CF80u;
            goto label_21cf80;
        }
    }
    ctx->pc = 0x21CF44u;
label_21cf44:
    // 0x21cf44: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21cf44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
    // 0x21cf48: 0x1231023  subu        $v0, $t1, $v1
    ctx->pc = 0x21cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x21cf4c: 0xc8302d  daddu       $a2, $a2, $t0
    ctx->pc = 0x21cf4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cf50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cf54: 0x650b8  dsll        $t2, $a2, 2
    ctx->pc = 0x21cf54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << 2);
    // 0x21cf58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21cf5c: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x21cf5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cf60: 0x148102d  daddu       $v0, $t2, $t0
    ctx->pc = 0x21cf60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
    // 0x21cf64: 0x24c6ffbf  addiu       $a2, $a2, -0x41
    ctx->pc = 0x21cf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
    // 0x21cf68: 0x24078  dsll        $t0, $v0, 1
    ctx->pc = 0x21cf68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 1);
    // 0x21cf6c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x21cf6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x21cf70: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x21cf70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x21cf74: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x21cf74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21cf78: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x21CF78u;
    {
        const bool branch_taken_0x21cf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF78u;
        // 0x21cf7c: 0x106402d  daddu       $t0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf78) {
            ctx->pc = 0x21CF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf44;
        }
    }
    ctx->pc = 0x21CF80u;
label_21cf80:
    // 0x21cf80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21cf80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf84: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21cf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21cf88: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21cf8c:
    // 0x21cf8c: 0xc91023  subu        $v0, $a2, $t1
    ctx->pc = 0x21cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x21cf90: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21cf90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
    // 0x21cf94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cf98: 0x147502d  daddu       $t2, $t2, $a3
    ctx->pc = 0x21cf98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21cf9c: 0x804b000c  lb          $t3, 0xC($v0)
    ctx->pc = 0x21cf9cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21cfa0: 0xa50b8  dsll        $t2, $t2, 2
    ctx->pc = 0x21cfa0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 2);
    // 0x21cfa4: 0x147382d  daddu       $a3, $t2, $a3
    ctx->pc = 0x21cfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21cfa8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21cfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21cfac: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x21cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21cfb0: 0x6b6823  subu        $t5, $v1, $t3
    ctx->pc = 0x21cfb0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x21cfb4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21cfb8: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x21cfb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cfbc: 0x814c000c  lb          $t4, 0xC($t2)
    ctx->pc = 0x21cfbcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x21cfc0: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x21cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x21cfc4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21cfc8: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x21cfc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cfcc: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x21cfd0: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x21cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x21cfd4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21cfd8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cfdc: 0xd503c  dsll32      $t2, $t5, 0
    ctx->pc = 0x21cfdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 0));
    // 0x21cfe0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21cfe0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x21cfe4: 0xea382d  daddu       $a3, $a3, $t2
    ctx->pc = 0x21cfe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
    // 0x21cfe8: 0x804a000c  lb          $t2, 0xC($v0)
    ctx->pc = 0x21cfe8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21cfec: 0x71078  dsll        $v0, $a3, 1
    ctx->pc = 0x21cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 1);
    // 0x21cff0: 0x47682d  daddu       $t5, $v0, $a3
    ctx->pc = 0x21cff0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21cff4: 0x6c1023  subu        $v0, $v1, $t4
    ctx->pc = 0x21cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x21cff8: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x21cff8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
    // 0x21cffc: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x21cffcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21d000: 0x1a7382d  daddu       $a3, $t5, $a3
    ctx->pc = 0x21d000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d004: 0x6b1023  subu        $v0, $v1, $t3
    ctx->pc = 0x21d004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x21d008: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21d008u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x21d00c: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x21d00cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21d010: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21d014: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x21d018: 0x6a5823  subu        $t3, $v1, $t2
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x21d01c: 0xc25023  subu        $t2, $a2, $v0
    ctx->pc = 0x21d01cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21d020: 0xec382d  daddu       $a3, $a3, $t4
    ctx->pc = 0x21d020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 12));
    // 0x21d024: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x21d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x21d028: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21d02c: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21d02cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x21d030: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21d030u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x21d034: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21d034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21d038: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21d038u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
    // 0x21d03c: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x21d03cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x21d040: 0x147602d  daddu       $t4, $t2, $a3
    ctx->pc = 0x21d040u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d044: 0x252a0005  addiu       $t2, $t1, 0x5
    ctx->pc = 0x21d044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x21d048: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21d048u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
    // 0x21d04c: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d04cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x21d050: 0x187382d  daddu       $a3, $t4, $a3
    ctx->pc = 0x21d050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d054: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21d058: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21d05c: 0x814c000c  lb          $t4, 0xC($t2)
    ctx->pc = 0x21d05cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x21d060: 0xed382d  daddu       $a3, $a3, $t5
    ctx->pc = 0x21d060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 13));
    // 0x21d064: 0xb683c  dsll32      $t5, $t3, 0
    ctx->pc = 0x21d064u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 0));
    // 0x21d068: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21d068u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x21d06c: 0x252a0006  addiu       $t2, $t1, 0x6
    ctx->pc = 0x21d06cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x21d070: 0x6c6023  subu        $t4, $v1, $t4
    ctx->pc = 0x21d070u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x21d074: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d074u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x21d078: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x21d078u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x21d07c: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d07cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21d080: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21d080u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x21d084: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21d084u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x21d088: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21d088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
    // 0x21d08c: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x21d08cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x21d090: 0x147702d  daddu       $t6, $t2, $a3
    ctx->pc = 0x21d090u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d094: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x21d094u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x21d098: 0xe70b8  dsll        $t6, $t6, 2
    ctx->pc = 0x21d098u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 2);
    // 0x21d09c: 0x252a0007  addiu       $t2, $t1, 0x7
    ctx->pc = 0x21d09cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x21d0a0: 0x1c7382d  daddu       $a3, $t6, $a3
    ctx->pc = 0x21d0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d0a4: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d0a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x21d0a8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21d0ac: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x21d0acu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x21d0b0: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x21d0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21d0b4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x21d0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x21d0b8: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x21d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21d0bc: 0x804a000c  lb          $t2, 0xC($v0)
    ctx->pc = 0x21d0bcu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21d0c0: 0x71078  dsll        $v0, $a3, 1
    ctx->pc = 0x21d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 1);
    // 0x21d0c4: 0x6a5023  subu        $t2, $v1, $t2
    ctx->pc = 0x21d0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x21d0c8: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x21d0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d0cc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x21d0ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x21d0d0: 0x270b8  dsll        $t6, $v0, 2
    ctx->pc = 0x21d0d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << 2);
    // 0x21d0d4: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21d0d4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x21d0d8: 0x1c7382d  daddu       $a3, $t6, $a3
    ctx->pc = 0x21d0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d0dc: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x21d0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21d0e0: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21d0e4: 0xed382d  daddu       $a3, $a3, $t5
    ctx->pc = 0x21d0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 13));
    // 0x21d0e8: 0x76878  dsll        $t5, $a3, 1
    ctx->pc = 0x21d0e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) << 1);
    // 0x21d0ec: 0x1a7682d  daddu       $t5, $t5, $a3
    ctx->pc = 0x21d0ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d0f0: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x21d0f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
    // 0x21d0f4: 0x1a7382d  daddu       $a3, $t5, $a3
    ctx->pc = 0x21d0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d0f8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21d0fc: 0xec382d  daddu       $a3, $a3, $t4
    ctx->pc = 0x21d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 12));
    // 0x21d100: 0x76078  dsll        $t4, $a3, 1
    ctx->pc = 0x21d100u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) << 1);
    // 0x21d104: 0x187602d  daddu       $t4, $t4, $a3
    ctx->pc = 0x21d104u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d108: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21d108u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
    // 0x21d10c: 0x187382d  daddu       $a3, $t4, $a3
    ctx->pc = 0x21d10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d110: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21d114: 0xeb382d  daddu       $a3, $a3, $t3
    ctx->pc = 0x21d114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 11));
    // 0x21d118: 0x75878  dsll        $t3, $a3, 1
    ctx->pc = 0x21d118u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << 1);
    // 0x21d11c: 0x167582d  daddu       $t3, $t3, $a3
    ctx->pc = 0x21d11cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d120: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x21d120u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
    // 0x21d124: 0x167382d  daddu       $a3, $t3, $a3
    ctx->pc = 0x21d124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d128: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x21d12c: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x21D12Cu;
    {
        const bool branch_taken_0x21d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0xea382d  daddu       $a3, $a3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d12c) {
            ctx->pc = 0x21CF8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf8c;
        }
    }
    ctx->pc = 0x21D134u;
    // 0x21d134: 0x2921000c  slti        $at, $t1, 0xC
    ctx->pc = 0x21d134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21d138: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x21D138u;
    {
        const bool branch_taken_0x21d138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D138u;
        // 0x21d13c: 0x240a000b  addiu       $t2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d138) {
            ctx->pc = 0x21D180u;
            goto label_21d180;
        }
    }
    ctx->pc = 0x21D140u;
    // 0x21d140: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x21d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d144:
    // 0x21d144: 0x71878  dsll        $v1, $a3, 1
    ctx->pc = 0x21d144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 1);
    // 0x21d148: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x21d148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x21d14c: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x21d14cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d150: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21d154: 0x358b8  dsll        $t3, $v1, 2
    ctx->pc = 0x21d154u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 2);
    // 0x21d158: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21d158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21d15c: 0x8043000c  lb          $v1, 0xC($v0)
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21d160: 0x167102d  daddu       $v0, $t3, $a3
    ctx->pc = 0x21d160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
    // 0x21d164: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x21d164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21d168: 0x23878  dsll        $a3, $v0, 1
    ctx->pc = 0x21d168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 1);
    // 0x21d16c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21d170: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21d170u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21d174: 0x2922000c  slti        $v0, $t1, 0xC
    ctx->pc = 0x21d174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21d178: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x21D178u;
    {
        const bool branch_taken_0x21d178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D178u;
        // 0x21d17c: 0xe3382d  daddu       $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d178) {
            ctx->pc = 0x21D144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d144;
        }
    }
    ctx->pc = 0x21D180u;
label_21d180:
    // 0x21d180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d18c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x21d190: 0x2463e150  addiu       $v1, $v1, -0x1EB0
    ctx->pc = 0x21d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_21d194:
    // 0x21d194: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21d198: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d19c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D19Cu;
    {
        const bool branch_taken_0x21d19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d19c) {
            ctx->pc = 0x21D1B8u;
            goto label_21d1b8;
        }
    }
    ctx->pc = 0x21D1A4u;
    // 0x21d1a4: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x21d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x21d1a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21d1ac: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x21d1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21d1b0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x21D1B0u;
    {
        const bool branch_taken_0x21d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1B0u;
        // 0x21d1b4: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1b0) {
            ctx->pc = 0x21D194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d194;
        }
    }
    ctx->pc = 0x21D1B8u;
label_21d1b8:
    // 0x21d1b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d1b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21d1c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1c4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x21d1c8: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
label_21d1cc:
    // 0x21d1cc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21d1d0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d1d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D1D4u;
    {
        const bool branch_taken_0x21d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d1d4) {
            ctx->pc = 0x21D1F0u;
            goto label_21d1f0;
        }
    }
    ctx->pc = 0x21D1DCu;
    // 0x21d1dc: 0x1421014  dsllv       $v0, $v0, $t2
    ctx->pc = 0x21d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 10) & 0x3F));
    // 0x21d1e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21d1e4: 0x122482d  daddu       $t1, $t1, $v0
    ctx->pc = 0x21d1e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21d1e8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x21D1E8u;
    {
        const bool branch_taken_0x21d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1E8u;
        // 0x21d1ec: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1e8) {
            ctx->pc = 0x21D1CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d1cc;
        }
    }
    ctx->pc = 0x21D1F0u;
label_21d1f0:
    // 0x21d1f0: 0x1064026  xor         $t0, $t0, $a2
    ctx->pc = 0x21d1f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x21d1f4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x21d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x21d1f8: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x21d1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
    // 0x21d1fc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x21d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x21d200: 0x3e00008  jr          $ra
    ctx->pc = 0x21D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D200u;
        // 0x21d204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D208u;
    // 0x21d208: 0x0  nop
    ctx->pc = 0x21d208u;
    // NOP
    // 0x21d20c: 0x0  nop
    ctx->pc = 0x21d20cu;
    // NOP
    ctx->pc = 0x21d210u;
}
