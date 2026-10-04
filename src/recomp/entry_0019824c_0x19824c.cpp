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

// Function: entry_0019824c
// Address: 0x19824c - 0x1982ac
void entry_0019824c_0x19824c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019824c_0x19824c");
#endif

    ctx->pc = 0x19824cu;

label_19824c:
    // 0x19824c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x198250: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x198250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x198254: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x198254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x198258: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x198258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x19825c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x19825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x198260: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x198260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x198264: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x198264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x198268: 0xad050288  sw          $a1, 0x288($t0)
    ctx->pc = 0x198268u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 648), GPR_U32(ctx, 5));
    // 0x19826c: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x198270: 0xad05028c  sw          $a1, 0x28C($t0)
    ctx->pc = 0x198270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 652), GPR_U32(ctx, 5));
    // 0x198274: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x198278: 0xad050290  sw          $a1, 0x290($t0)
    ctx->pc = 0x198278u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 656), GPR_U32(ctx, 5));
    // 0x19827c: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x19827cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x198280: 0xad050294  sw          $a1, 0x294($t0)
    ctx->pc = 0x198280u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 5));
    // 0x198284: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x198288: 0xad050298  sw          $a1, 0x298($t0)
    ctx->pc = 0x198288u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 5));
    // 0x19828c: 0x8d450014  lw          $a1, 0x14($t2)
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x198290: 0xad05029c  sw          $a1, 0x29C($t0)
    ctx->pc = 0x198290u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 5));
    // 0x198294: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x198294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x198298: 0xad0502a0  sw          $a1, 0x2A0($t0)
    ctx->pc = 0x198298u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 5));
    // 0x19829c: 0x8d45001c  lw          $a1, 0x1C($t2)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1982a0: 0xad0502a4  sw          $a1, 0x2A4($t0)
    ctx->pc = 0x1982a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 676), GPR_U32(ctx, 5));
    // 0x1982a4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1982A4u;
    {
        const bool branch_taken_0x1982a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1982A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982A4u;
        // 0x1982a8: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982a4) {
            ctx->pc = 0x19824Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19824c;
        }
    }
    ctx->pc = 0x1982ACu;
}
