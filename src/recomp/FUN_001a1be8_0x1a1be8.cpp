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

// Function: FUN_001a1be8
// Address: 0x1a1be8 - 0x1a1ed8
void FUN_001a1be8_0x1a1be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1be8_0x1a1be8");
#endif

    switch (ctx->pc) {
        case 0x1a1be8u: goto label_1a1be8;
        case 0x1a1becu: goto label_1a1bec;
        case 0x1a1bf0u: goto label_1a1bf0;
        case 0x1a1bf4u: goto label_1a1bf4;
        case 0x1a1bf8u: goto label_1a1bf8;
        case 0x1a1bfcu: goto label_1a1bfc;
        case 0x1a1c00u: goto label_1a1c00;
        case 0x1a1c04u: goto label_1a1c04;
        case 0x1a1c08u: goto label_1a1c08;
        case 0x1a1c0cu: goto label_1a1c0c;
        case 0x1a1c10u: goto label_1a1c10;
        case 0x1a1c14u: goto label_1a1c14;
        case 0x1a1c18u: goto label_1a1c18;
        case 0x1a1c1cu: goto label_1a1c1c;
        case 0x1a1c20u: goto label_1a1c20;
        case 0x1a1c24u: goto label_1a1c24;
        case 0x1a1c28u: goto label_1a1c28;
        case 0x1a1c2cu: goto label_1a1c2c;
        case 0x1a1c30u: goto label_1a1c30;
        case 0x1a1c34u: goto label_1a1c34;
        case 0x1a1c38u: goto label_1a1c38;
        case 0x1a1c3cu: goto label_1a1c3c;
        case 0x1a1c40u: goto label_1a1c40;
        case 0x1a1c44u: goto label_1a1c44;
        case 0x1a1c48u: goto label_1a1c48;
        case 0x1a1c4cu: goto label_1a1c4c;
        case 0x1a1c50u: goto label_1a1c50;
        case 0x1a1c54u: goto label_1a1c54;
        case 0x1a1c58u: goto label_1a1c58;
        case 0x1a1c5cu: goto label_1a1c5c;
        case 0x1a1c60u: goto label_1a1c60;
        case 0x1a1c64u: goto label_1a1c64;
        case 0x1a1c68u: goto label_1a1c68;
        case 0x1a1c6cu: goto label_1a1c6c;
        case 0x1a1c70u: goto label_1a1c70;
        case 0x1a1c74u: goto label_1a1c74;
        case 0x1a1c78u: goto label_1a1c78;
        case 0x1a1c7cu: goto label_1a1c7c;
        case 0x1a1c80u: goto label_1a1c80;
        case 0x1a1c84u: goto label_1a1c84;
        case 0x1a1c88u: goto label_1a1c88;
        case 0x1a1c8cu: goto label_1a1c8c;
        case 0x1a1c90u: goto label_1a1c90;
        case 0x1a1c94u: goto label_1a1c94;
        case 0x1a1c98u: goto label_1a1c98;
        case 0x1a1c9cu: goto label_1a1c9c;
        case 0x1a1ca0u: goto label_1a1ca0;
        case 0x1a1ca4u: goto label_1a1ca4;
        case 0x1a1ca8u: goto label_1a1ca8;
        case 0x1a1cacu: goto label_1a1cac;
        case 0x1a1cb0u: goto label_1a1cb0;
        case 0x1a1cb4u: goto label_1a1cb4;
        case 0x1a1cb8u: goto label_1a1cb8;
        case 0x1a1cbcu: goto label_1a1cbc;
        case 0x1a1cc0u: goto label_1a1cc0;
        case 0x1a1cc4u: goto label_1a1cc4;
        case 0x1a1cc8u: goto label_1a1cc8;
        case 0x1a1cccu: goto label_1a1ccc;
        case 0x1a1cd0u: goto label_1a1cd0;
        case 0x1a1cd4u: goto label_1a1cd4;
        case 0x1a1cd8u: goto label_1a1cd8;
        case 0x1a1cdcu: goto label_1a1cdc;
        case 0x1a1ce0u: goto label_1a1ce0;
        case 0x1a1ce4u: goto label_1a1ce4;
        case 0x1a1ce8u: goto label_1a1ce8;
        case 0x1a1cecu: goto label_1a1cec;
        case 0x1a1cf0u: goto label_1a1cf0;
        case 0x1a1cf4u: goto label_1a1cf4;
        case 0x1a1cf8u: goto label_1a1cf8;
        case 0x1a1cfcu: goto label_1a1cfc;
        case 0x1a1d00u: goto label_1a1d00;
        case 0x1a1d04u: goto label_1a1d04;
        case 0x1a1d08u: goto label_1a1d08;
        case 0x1a1d0cu: goto label_1a1d0c;
        case 0x1a1d10u: goto label_1a1d10;
        case 0x1a1d14u: goto label_1a1d14;
        case 0x1a1d18u: goto label_1a1d18;
        case 0x1a1d1cu: goto label_1a1d1c;
        case 0x1a1d20u: goto label_1a1d20;
        case 0x1a1d24u: goto label_1a1d24;
        case 0x1a1d28u: goto label_1a1d28;
        case 0x1a1d2cu: goto label_1a1d2c;
        case 0x1a1d30u: goto label_1a1d30;
        case 0x1a1d34u: goto label_1a1d34;
        case 0x1a1d38u: goto label_1a1d38;
        case 0x1a1d3cu: goto label_1a1d3c;
        case 0x1a1d40u: goto label_1a1d40;
        case 0x1a1d44u: goto label_1a1d44;
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d4cu: goto label_1a1d4c;
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d54u: goto label_1a1d54;
        case 0x1a1d58u: goto label_1a1d58;
        case 0x1a1d5cu: goto label_1a1d5c;
        case 0x1a1d60u: goto label_1a1d60;
        case 0x1a1d64u: goto label_1a1d64;
        case 0x1a1d68u: goto label_1a1d68;
        case 0x1a1d6cu: goto label_1a1d6c;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d74u: goto label_1a1d74;
        case 0x1a1d78u: goto label_1a1d78;
        case 0x1a1d7cu: goto label_1a1d7c;
        case 0x1a1d80u: goto label_1a1d80;
        case 0x1a1d84u: goto label_1a1d84;
        case 0x1a1d88u: goto label_1a1d88;
        case 0x1a1d8cu: goto label_1a1d8c;
        case 0x1a1d90u: goto label_1a1d90;
        case 0x1a1d94u: goto label_1a1d94;
        case 0x1a1d98u: goto label_1a1d98;
        case 0x1a1d9cu: goto label_1a1d9c;
        case 0x1a1da0u: goto label_1a1da0;
        case 0x1a1da4u: goto label_1a1da4;
        case 0x1a1da8u: goto label_1a1da8;
        case 0x1a1dacu: goto label_1a1dac;
        case 0x1a1db0u: goto label_1a1db0;
        case 0x1a1db4u: goto label_1a1db4;
        case 0x1a1db8u: goto label_1a1db8;
        case 0x1a1dbcu: goto label_1a1dbc;
        case 0x1a1dc0u: goto label_1a1dc0;
        case 0x1a1dc4u: goto label_1a1dc4;
        case 0x1a1dc8u: goto label_1a1dc8;
        case 0x1a1dccu: goto label_1a1dcc;
        case 0x1a1dd0u: goto label_1a1dd0;
        case 0x1a1dd4u: goto label_1a1dd4;
        case 0x1a1dd8u: goto label_1a1dd8;
        case 0x1a1ddcu: goto label_1a1ddc;
        case 0x1a1de0u: goto label_1a1de0;
        case 0x1a1de4u: goto label_1a1de4;
        case 0x1a1de8u: goto label_1a1de8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1df0u: goto label_1a1df0;
        case 0x1a1df4u: goto label_1a1df4;
        case 0x1a1df8u: goto label_1a1df8;
        case 0x1a1dfcu: goto label_1a1dfc;
        case 0x1a1e00u: goto label_1a1e00;
        case 0x1a1e04u: goto label_1a1e04;
        case 0x1a1e08u: goto label_1a1e08;
        case 0x1a1e0cu: goto label_1a1e0c;
        case 0x1a1e10u: goto label_1a1e10;
        case 0x1a1e14u: goto label_1a1e14;
        case 0x1a1e18u: goto label_1a1e18;
        case 0x1a1e1cu: goto label_1a1e1c;
        case 0x1a1e20u: goto label_1a1e20;
        case 0x1a1e24u: goto label_1a1e24;
        case 0x1a1e28u: goto label_1a1e28;
        case 0x1a1e2cu: goto label_1a1e2c;
        case 0x1a1e30u: goto label_1a1e30;
        case 0x1a1e34u: goto label_1a1e34;
        case 0x1a1e38u: goto label_1a1e38;
        case 0x1a1e3cu: goto label_1a1e3c;
        case 0x1a1e40u: goto label_1a1e40;
        case 0x1a1e44u: goto label_1a1e44;
        case 0x1a1e48u: goto label_1a1e48;
        case 0x1a1e4cu: goto label_1a1e4c;
        case 0x1a1e50u: goto label_1a1e50;
        case 0x1a1e54u: goto label_1a1e54;
        case 0x1a1e58u: goto label_1a1e58;
        case 0x1a1e5cu: goto label_1a1e5c;
        case 0x1a1e60u: goto label_1a1e60;
        case 0x1a1e64u: goto label_1a1e64;
        case 0x1a1e68u: goto label_1a1e68;
        case 0x1a1e6cu: goto label_1a1e6c;
        case 0x1a1e70u: goto label_1a1e70;
        case 0x1a1e74u: goto label_1a1e74;
        case 0x1a1e78u: goto label_1a1e78;
        case 0x1a1e7cu: goto label_1a1e7c;
        case 0x1a1e80u: goto label_1a1e80;
        case 0x1a1e84u: goto label_1a1e84;
        case 0x1a1e88u: goto label_1a1e88;
        case 0x1a1e8cu: goto label_1a1e8c;
        case 0x1a1e90u: goto label_1a1e90;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1e98u: goto label_1a1e98;
        case 0x1a1e9cu: goto label_1a1e9c;
        case 0x1a1ea0u: goto label_1a1ea0;
        case 0x1a1ea4u: goto label_1a1ea4;
        case 0x1a1ea8u: goto label_1a1ea8;
        case 0x1a1eacu: goto label_1a1eac;
        case 0x1a1eb0u: goto label_1a1eb0;
        case 0x1a1eb4u: goto label_1a1eb4;
        case 0x1a1eb8u: goto label_1a1eb8;
        case 0x1a1ebcu: goto label_1a1ebc;
        case 0x1a1ec0u: goto label_1a1ec0;
        case 0x1a1ec4u: goto label_1a1ec4;
        case 0x1a1ec8u: goto label_1a1ec8;
        case 0x1a1eccu: goto label_1a1ecc;
        case 0x1a1ed0u: goto label_1a1ed0;
        case 0x1a1ed4u: goto label_1a1ed4;
        default: break;
    }

    ctx->pc = 0x1a1be8u;

label_1a1be8:
    // 0x1a1be8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1a1be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1a1bec:
    // 0x1a1bec: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x1a1becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
label_1a1bf0:
    // 0x1a1bf0: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x1a1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
label_1a1bf4:
    // 0x1a1bf4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1a1bf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1bf8:
    // 0x1a1bf8: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x1a1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
label_1a1bfc:
    // 0x1a1bfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c00:
    // 0x1a1c00: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1a1c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
label_1a1c04:
    // 0x1a1c04: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a1c04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1c08:
    // 0x1a1c08: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x1a1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
label_1a1c0c:
    // 0x1a1c0c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a1c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a1c10:
    // 0x1a1c10: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1a1c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_1a1c14:
    // 0x1a1c14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c18:
    // 0x1a1c18: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1a1c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_1a1c1c:
    // 0x1a1c1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a1c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c20:
    // 0x1a1c20: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x1a1c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
label_1a1c24:
    // 0x1a1c24: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a1c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c28:
    // 0x1a1c28: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1a1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
label_1a1c2c:
    // 0x1a1c2c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1a1c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c30:
    // 0x1a1c30: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1a1c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_1a1c34:
    // 0x1a1c34: 0x8ef40040  lw          $s4, 0x40($s7)
    ctx->pc = 0x1a1c34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_1a1c38:
    // 0x1a1c38: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x1a1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_1a1c3c:
    // 0x1a1c3c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1a1c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1a1c40:
    // 0x1a1c40: 0xc0685d4  jal         func_1A1750
label_1a1c44:
    if (ctx->pc == 0x1A1C44u) {
        ctx->pc = 0x1A1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C40u;
        // 0x1a1c44: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C48u;
        goto label_1a1c48;
    }
    ctx->pc = 0x1A1C40u;
    SET_GPR_U32(ctx, 31, 0x1A1C48u);
    ctx->pc = 0x1A1C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C40u;
    // 0x1a1c44: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1750u, 0x1A1C40u, 0x1A1C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C48u;
label_1a1c48:
    // 0x1a1c48: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1a1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1a1c4c:
    // 0x1a1c4c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1a1c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c50:
    // 0x1a1c50: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x1a1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_1a1c54:
    // 0x1a1c54: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1a1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_1a1c58:
    // 0x1a1c58: 0x18800017  blez        $a0, . + 4 + (0x17 << 2)
label_1a1c5c:
    if (ctx->pc == 0x1A1C5Cu) {
        ctx->pc = 0x1A1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C58u;
        // 0x1a1c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C60u;
        goto label_1a1c60;
    }
    ctx->pc = 0x1A1C58u;
    {
        const bool branch_taken_0x1a1c58 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C58u;
        // 0x1a1c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c58) {
            ctx->pc = 0x1A1CB8u;
            goto label_1a1cb8;
        }
    }
    ctx->pc = 0x1A1C60u;
label_1a1c60:
    // 0x1a1c60: 0x10b0c0  sll         $s6, $s0, 3
    ctx->pc = 0x1a1c60u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1a1c64:
    // 0x1a1c64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1a1c68:
    // 0x1a1c68: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a1c6c:
    // 0x1a1c6c: 0x3404bdff  ori         $a0, $zero, 0xBDFF
    ctx->pc = 0x1a1c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48639);
label_1a1c70:
    // 0x1a1c70: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a1c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_1a1c74:
    // 0x1a1c74: 0x600013  mtlo        $v1
    ctx->pc = 0x1a1c74u;
    ctx->lo = GPR_U64(ctx, 3);
label_1a1c78:
    // 0x1a1c78: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x1a1c78u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a1c7c:
    // 0x1a1c7c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a1c7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1c80:
    // 0x1a1c80: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_1a1c84:
    if (ctx->pc == 0x1A1C84u) {
        ctx->pc = 0x1A1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C80u;
        // 0x1a1c84: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C88u;
        goto label_1a1c88;
    }
    ctx->pc = 0x1A1C80u;
    {
        const bool branch_taken_0x1a1c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1c80) {
            ctx->pc = 0x1A1C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1C80u;
            // 0x1a1c84: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1C9Cu;
            goto label_1a1c9c;
        }
    }
    ctx->pc = 0x1A1C88u;
label_1a1c88:
    // 0x1a1c88: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1a1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a1c8c:
    // 0x1a1c8c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1a1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_1a1c90:
    // 0x1a1c90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a1c94:
    // 0x1a1c94: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1a1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1a1c98:
    // 0x1a1c98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a1c9c:
    // 0x1a1c9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a1ca0:
    if (ctx->pc == 0x1A1CA0u) {
        ctx->pc = 0x1A1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C9Cu;
        // 0x1a1ca0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CA4u;
        goto label_1a1ca4;
    }
    ctx->pc = 0x1A1C9Cu;
    {
        const bool branch_taken_0x1a1c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C9Cu;
        // 0x1a1ca0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c9c) {
            ctx->pc = 0x1A1CC0u;
            goto label_1a1cc0;
        }
    }
    ctx->pc = 0x1A1CA4u;
label_1a1ca4:
    // 0x1a1ca4: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x1a1ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1a1ca8:
    // 0x1a1ca8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1a1cac:
    if (ctx->pc == 0x1A1CACu) {
        ctx->pc = 0x1A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA8u;
        // 0x1a1cac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CB0u;
        goto label_1a1cb0;
    }
    ctx->pc = 0x1A1CA8u;
    {
        const bool branch_taken_0x1a1ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA8u;
        // 0x1a1cac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ca8) {
            ctx->pc = 0x1A1C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1c68;
        }
    }
    ctx->pc = 0x1A1CB0u;
label_1a1cb0:
    // 0x1a1cb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a1cb4:
    if (ctx->pc == 0x1A1CB4u) {
        ctx->pc = 0x1A1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CB0u;
        // 0x1a1cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CB8u;
        goto label_1a1cb8;
    }
    ctx->pc = 0x1A1CB0u;
    {
        const bool branch_taken_0x1a1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CB0u;
        // 0x1a1cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cb0) {
            ctx->pc = 0x1A1CC4u;
            goto label_1a1cc4;
        }
    }
    ctx->pc = 0x1A1CB8u;
label_1a1cb8:
    // 0x1a1cb8: 0x10b0c0  sll         $s6, $s0, 3
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1a1cbc:
    // 0x1a1cbc: 0x0  nop
    ctx->pc = 0x1a1cbcu;
    // NOP
label_1a1cc0:
    // 0x1a1cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cc4:
    // 0x1a1cc4: 0xc0685e2  jal         func_1A1788
label_1a1cc8:
    if (ctx->pc == 0x1A1CC8u) {
        ctx->pc = 0x1A1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CC4u;
        // 0x1a1cc8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CCCu;
        goto label_1a1ccc;
    }
    ctx->pc = 0x1A1CC4u;
    SET_GPR_U32(ctx, 31, 0x1A1CCCu);
    ctx->pc = 0x1A1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CC4u;
    // 0x1a1cc8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1CC4u, 0x1A1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CCCu;
label_1a1ccc:
    // 0x1a1ccc: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1a1cd0:
    // 0x1a1cd0: 0x14430055  bne         $v0, $v1, . + 4 + (0x55 << 2)
label_1a1cd4:
    if (ctx->pc == 0x1A1CD4u) {
        ctx->pc = 0x1A1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CD0u;
        // 0x1a1cd4: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CD8u;
        goto label_1a1cd8;
    }
    ctx->pc = 0x1A1CD0u;
    {
        const bool branch_taken_0x1a1cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CD0u;
        // 0x1a1cd4: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cd0) {
            ctx->pc = 0x1A1E28u;
            goto label_1a1e28;
        }
    }
    ctx->pc = 0x1A1CD8u;
label_1a1cd8:
    // 0x1a1cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cdc:
    // 0x1a1cdc: 0xc0687fe  jal         func_1A1FF8
label_1a1ce0:
    if (ctx->pc == 0x1A1CE0u) {
        ctx->pc = 0x1A1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CDCu;
        // 0x1a1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CE4u;
        goto label_1a1ce4;
    }
    ctx->pc = 0x1A1CDCu;
    SET_GPR_U32(ctx, 31, 0x1A1CE4u);
    ctx->pc = 0x1A1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CDCu;
    // 0x1a1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1FF8u, 0x1A1CDCu, 0x1A1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CE4u;
label_1a1ce4:
    // 0x1a1ce4: 0x10000050  b           . + 4 + (0x50 << 2)
label_1a1ce8:
    if (ctx->pc == 0x1A1CE8u) {
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CECu;
        goto label_1a1cec;
    }
    ctx->pc = 0x1A1CE4u;
    {
        const bool branch_taken_0x1a1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ce4) {
            ctx->pc = 0x1A1E28u;
            goto label_1a1e28;
        }
    }
    ctx->pc = 0x1A1CECu;
label_1a1cec:
    // 0x1a1cec: 0x0  nop
    ctx->pc = 0x1a1cecu;
    // NOP
label_1a1cf0:
    // 0x1a1cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cf4:
    // 0x1a1cf4: 0xc06864c  jal         func_1A1930
label_1a1cf8:
    if (ctx->pc == 0x1A1CF8u) {
        ctx->pc = 0x1A1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CF4u;
        // 0x1a1cf8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CFCu;
        goto label_1a1cfc;
    }
    ctx->pc = 0x1A1CF4u;
    SET_GPR_U32(ctx, 31, 0x1A1CFCu);
    ctx->pc = 0x1A1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CF4u;
    // 0x1a1cf8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1CF4u, 0x1A1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CFCu;
label_1a1cfc:
    // 0x1a1cfc: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a1d00:
    // 0x1a1d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d04:
    // 0x1a1d04: 0xc06864c  jal         func_1A1930
label_1a1d08:
    if (ctx->pc == 0x1A1D08u) {
        ctx->pc = 0x1A1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D04u;
        // 0x1a1d08: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D0Cu;
        goto label_1a1d0c;
    }
    ctx->pc = 0x1A1D04u;
    SET_GPR_U32(ctx, 31, 0x1A1D0Cu);
    ctx->pc = 0x1A1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D04u;
    // 0x1a1d08: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1D04u, 0x1A1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D0Cu;
label_1a1d0c:
    // 0x1a1d0c: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1a1d0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1a1d10:
    // 0x1a1d10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d14:
    // 0x1a1d14: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1a1d18:
    // 0x1a1d18: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1d1c:
    // 0x1a1d1c: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1a1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1a1d20:
    // 0x1a1d20: 0xde430030  ld          $v1, 0x30($s2)
    ctx->pc = 0x1a1d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1a1d24:
    // 0x1a1d24: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a1d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a1d28:
    // 0x1a1d28: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1a1d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a1d2c:
    // 0x1a1d2c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1a1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1a1d30:
    // 0x1a1d30: 0xafa8008c  sw          $t0, 0x8C($sp)
    ctx->pc = 0x1a1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 8));
label_1a1d34:
    // 0x1a1d34: 0xe0f809  jalr        $a3
label_1a1d38:
    if (ctx->pc == 0x1A1D38u) {
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D3Cu;
        goto label_1a1d3c;
    }
    ctx->pc = 0x1A1D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1A1D3Cu);
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D34u, 0x1A1D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D3Cu;
label_1a1d3c:
    // 0x1a1d3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a1d3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d40:
    // 0x1a1d40: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a1d44:
    if (ctx->pc == 0x1A1D44u) {
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D48u;
        goto label_1a1d48;
    }
    ctx->pc = 0x1A1D40u;
    {
        const bool branch_taken_0x1a1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d40) {
            ctx->pc = 0x1A1DB0u;
            goto label_1a1db0;
        }
    }
    ctx->pc = 0x1A1D48u;
label_1a1d48:
    // 0x1a1d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d4c:
    // 0x1a1d4c: 0xc06886e  jal         func_1A21B8
label_1a1d50:
    if (ctx->pc == 0x1A1D50u) {
        ctx->pc = 0x1A1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D4Cu;
        // 0x1a1d50: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D54u;
        goto label_1a1d54;
    }
    ctx->pc = 0x1A1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D54u);
    ctx->pc = 0x1A1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D4Cu;
    // 0x1a1d50: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A1D4Cu, 0x1A1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D54u;
label_1a1d54:
    // 0x1a1d54: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1d54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1d58:
    // 0x1a1d58: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1a1d58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a1d5c:
    // 0x1a1d5c: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_1a1d60:
    if (ctx->pc == 0x1A1D60u) {
        ctx->pc = 0x1A1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D5Cu;
        // 0x1a1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D64u;
        goto label_1a1d64;
    }
    ctx->pc = 0x1A1D5Cu;
    {
        const bool branch_taken_0x1a1d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D5Cu;
        // 0x1a1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d5c) {
            ctx->pc = 0x1A1E2Cu;
            goto label_1a1e2c;
        }
    }
    ctx->pc = 0x1A1D64u;
label_1a1d64:
    // 0x1a1d64: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_1a1d68:
    // 0x1a1d68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d6c:
    // 0x1a1d6c: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
label_1a1d70:
    if (ctx->pc == 0x1A1D70u) {
        ctx->pc = 0x1A1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D6Cu;
        // 0x1a1d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D74u;
        goto label_1a1d74;
    }
    ctx->pc = 0x1A1D6Cu;
    {
        const bool branch_taken_0x1a1d6c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D6Cu;
        // 0x1a1d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d6c) {
            ctx->pc = 0x1A1DB0u;
            goto label_1a1db0;
        }
    }
    ctx->pc = 0x1A1D74u;
label_1a1d74:
    // 0x1a1d74: 0xde450018  ld          $a1, 0x18($s2)
    ctx->pc = 0x1a1d74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 24)));
label_1a1d78:
    // 0x1a1d78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1a1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1a1d7c:
    // 0x1a1d7c: 0x0  nop
    ctx->pc = 0x1a1d7cu;
    // NOP
label_1a1d80:
    // 0x1a1d80: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a1d84:
    // 0x1a1d84: 0x600013  mtlo        $v1
    ctx->pc = 0x1a1d84u;
    ctx->lo = GPR_U64(ctx, 3);
label_1a1d88:
    // 0x1a1d88: 0x72628000  madd        $s0, $s3, $v0
    ctx->pc = 0x1a1d88u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1a1d8c:
    // 0x1a1d8c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1a1d8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1a1d90:
    // 0x1a1d90: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1a1d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1d94:
    // 0x1a1d94: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a1d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1a1d98:
    // 0x1a1d98: 0x5043ffd5  beql        $v0, $v1, . + 4 + (-0x2B << 2)
label_1a1d9c:
    if (ctx->pc == 0x1A1D9Cu) {
        ctx->pc = 0x1A1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D98u;
        // 0x1a1d9c: 0x8e450040  lw          $a1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DA0u;
        goto label_1a1da0;
    }
    ctx->pc = 0x1A1D98u;
    {
        const bool branch_taken_0x1a1d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1d98) {
            ctx->pc = 0x1A1D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1D98u;
            // 0x1a1d9c: 0x8e450040  lw          $a1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1cf0;
        }
    }
    ctx->pc = 0x1A1DA0u;
label_1a1da0:
    // 0x1a1da0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a1da4:
    // 0x1a1da4: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x1a1da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1a1da8:
    // 0x1a1da8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1a1dac:
    if (ctx->pc == 0x1A1DACu) {
        ctx->pc = 0x1A1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA8u;
        // 0x1a1dac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DB0u;
        goto label_1a1db0;
    }
    ctx->pc = 0x1A1DA8u;
    {
        const bool branch_taken_0x1a1da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA8u;
        // 0x1a1dac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1da8) {
            ctx->pc = 0x1A1D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d80;
        }
    }
    ctx->pc = 0x1A1DB0u;
label_1a1db0:
    // 0x1a1db0: 0x16640017  bne         $s3, $a0, . + 4 + (0x17 << 2)
label_1a1db4:
    if (ctx->pc == 0x1A1DB4u) {
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DB8u;
        goto label_1a1db8;
    }
    ctx->pc = 0x1A1DB0u;
    {
        const bool branch_taken_0x1a1db0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db0) {
            ctx->pc = 0x1A1E10u;
            goto label_1a1e10;
        }
    }
    ctx->pc = 0x1A1DB8u;
label_1a1db8:
    // 0x1a1db8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1a1dbc:
    if (ctx->pc == 0x1A1DBCu) {
        ctx->pc = 0x1A1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB8u;
        // 0x1a1dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DC0u;
        goto label_1a1dc0;
    }
    ctx->pc = 0x1A1DB8u;
    {
        const bool branch_taken_0x1a1db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB8u;
        // 0x1a1dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db8) {
            ctx->pc = 0x1A1E10u;
            goto label_1a1e10;
        }
    }
    ctx->pc = 0x1A1DC0u;
label_1a1dc0:
    // 0x1a1dc0: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a1dc4:
    // 0x1a1dc4: 0xc06864c  jal         func_1A1930
label_1a1dc8:
    if (ctx->pc == 0x1A1DC8u) {
        ctx->pc = 0x1A1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DC4u;
        // 0x1a1dc8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DCCu;
        goto label_1a1dcc;
    }
    ctx->pc = 0x1A1DC4u;
    SET_GPR_U32(ctx, 31, 0x1A1DCCu);
    ctx->pc = 0x1A1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DC4u;
    // 0x1a1dc8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1DC4u, 0x1A1DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DCCu;
label_1a1dcc:
    // 0x1a1dcc: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a1dd0:
    // 0x1a1dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dd4:
    // 0x1a1dd4: 0xc06864c  jal         func_1A1930
label_1a1dd8:
    if (ctx->pc == 0x1A1DD8u) {
        ctx->pc = 0x1A1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DD4u;
        // 0x1a1dd8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DDCu;
        goto label_1a1ddc;
    }
    ctx->pc = 0x1A1DD4u;
    SET_GPR_U32(ctx, 31, 0x1A1DDCu);
    ctx->pc = 0x1A1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DD4u;
    // 0x1a1dd8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1DD4u, 0x1A1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DDCu;
label_1a1ddc:
    // 0x1a1ddc: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1a1de0:
    // 0x1a1de0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de4:
    // 0x1a1de4: 0x8e47003c  lw          $a3, 0x3C($s2)
    ctx->pc = 0x1a1de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1a1de8:
    // 0x1a1de8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1dec:
    // 0x1a1dec: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1a1decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1a1df0:
    // 0x1a1df0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1a1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1a1df4:
    // 0x1a1df4: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x1a1df4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1a1df8:
    // 0x1a1df8: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1a1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1a1dfc:
    // 0x1a1dfc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1a1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a1e00:
    // 0x1a1e00: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x1a1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
label_1a1e04:
    // 0x1a1e04: 0x60f809  jalr        $v1
label_1a1e08:
    if (ctx->pc == 0x1A1E08u) {
        ctx->pc = 0x1A1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E04u;
        // 0x1a1e08: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E0Cu;
        goto label_1a1e0c;
    }
    ctx->pc = 0x1A1E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1E0Cu);
        ctx->pc = 0x1A1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E04u;
        // 0x1a1e08: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E04u, 0x1A1E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E0Cu;
label_1a1e0c:
    // 0x1a1e0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a1e0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e10:
    // 0x1a1e10: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_1a1e14:
    if (ctx->pc == 0x1A1E14u) {
        ctx->pc = 0x1A1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E10u;
        // 0x1a1e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E18u;
        goto label_1a1e18;
    }
    ctx->pc = 0x1A1E10u;
    {
        const bool branch_taken_0x1a1e10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E10u;
        // 0x1a1e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e10) {
            ctx->pc = 0x1A1E2Cu;
            goto label_1a1e2c;
        }
    }
    ctx->pc = 0x1A1E18u;
label_1a1e18:
    // 0x1a1e18: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x1a1e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1e1c:
    // 0x1a1e1c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_1a1e20:
    // 0x1a1e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a1e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a1e24:
    // 0x1a1e24: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1a1e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1a1e28:
    // 0x1a1e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e2c:
    // 0x1a1e2c: 0xc0685e2  jal         func_1A1788
label_1a1e30:
    if (ctx->pc == 0x1A1E30u) {
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E34u;
        goto label_1a1e34;
    }
    ctx->pc = 0x1A1E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E34u);
    ctx->pc = 0x1A1E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E2Cu;
    // 0x1a1e30: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E2Cu, 0x1A1E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E34u;
label_1a1e34:
    // 0x1a1e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e38:
    // 0x1a1e38: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_1a1e3c:
    if (ctx->pc == 0x1A1E3Cu) {
        ctx->pc = 0x1A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E38u;
        // 0x1a1e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E40u;
        goto label_1a1e40;
    }
    ctx->pc = 0x1A1E38u;
    {
        const bool branch_taken_0x1a1e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E38u;
        // 0x1a1e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e38) {
            ctx->pc = 0x1A1E88u;
            goto label_1a1e88;
        }
    }
    ctx->pc = 0x1A1E40u;
label_1a1e40:
    // 0x1a1e40: 0xc0685e2  jal         func_1A1788
label_1a1e44:
    if (ctx->pc == 0x1A1E44u) {
        ctx->pc = 0x1A1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E40u;
        // 0x1a1e44: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E48u;
        goto label_1a1e48;
    }
    ctx->pc = 0x1A1E40u;
    SET_GPR_U32(ctx, 31, 0x1A1E48u);
    ctx->pc = 0x1A1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E40u;
    // 0x1a1e44: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E40u, 0x1A1E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E48u;
label_1a1e48:
    // 0x1a1e48: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1a1e4c:
    // 0x1a1e4c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_1a1e50:
    if (ctx->pc == 0x1A1E50u) {
        ctx->pc = 0x1A1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E4Cu;
        // 0x1a1e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E54u;
        goto label_1a1e54;
    }
    ctx->pc = 0x1A1E4Cu;
    {
        const bool branch_taken_0x1a1e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E4Cu;
        // 0x1a1e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e4c) {
            ctx->pc = 0x1A1E88u;
            goto label_1a1e88;
        }
    }
    ctx->pc = 0x1A1E54u;
label_1a1e54:
    // 0x1a1e54: 0xc0685e2  jal         func_1A1788
label_1a1e58:
    if (ctx->pc == 0x1A1E58u) {
        ctx->pc = 0x1A1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E54u;
        // 0x1a1e58: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E5Cu;
        goto label_1a1e5c;
    }
    ctx->pc = 0x1A1E54u;
    SET_GPR_U32(ctx, 31, 0x1A1E5Cu);
    ctx->pc = 0x1A1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E54u;
    // 0x1a1e58: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E54u, 0x1A1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E5Cu;
label_1a1e5c:
    // 0x1a1e5c: 0x240301b9  addiu       $v1, $zero, 0x1B9
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
label_1a1e60:
    // 0x1a1e60: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1a1e64:
    if (ctx->pc == 0x1A1E64u) {
        ctx->pc = 0x1A1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E60u;
        // 0x1a1e64: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E68u;
        goto label_1a1e68;
    }
    ctx->pc = 0x1A1E60u;
    {
        const bool branch_taken_0x1a1e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E60u;
        // 0x1a1e64: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e60) {
            ctx->pc = 0x1A1E88u;
            goto label_1a1e88;
        }
    }
    ctx->pc = 0x1A1E68u;
label_1a1e68:
    // 0x1a1e68: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1e68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1e6c:
    // 0x1a1e6c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1a1e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1a1e70:
    // 0x1a1e70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1e74:
    if (ctx->pc == 0x1A1E74u) {
        ctx->pc = 0x1A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E70u;
        // 0x1a1e74: 0x2c3102b  sltu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E78u;
        goto label_1a1e78;
    }
    ctx->pc = 0x1A1E70u;
    {
        const bool branch_taken_0x1a1e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E70u;
        // 0x1a1e74: 0x2c3102b  sltu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e70) {
            ctx->pc = 0x1A1E90u;
            goto label_1a1e90;
        }
    }
    ctx->pc = 0x1A1E78u;
label_1a1e78:
    // 0x1a1e78: 0x16a0ffb3  bnez        $s5, . + 4 + (-0x4D << 2)
label_1a1e7c:
    if (ctx->pc == 0x1A1E7Cu) {
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E80u;
        goto label_1a1e80;
    }
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d48;
        }
    }
    ctx->pc = 0x1A1E80u;
label_1a1e80:
    // 0x1a1e80: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a1e84:
    if (ctx->pc == 0x1A1E84u) {
        ctx->pc = 0x1A1E88u;
        goto label_1a1e88;
    }
    ctx->pc = 0x1A1E80u;
    {
        const bool branch_taken_0x1a1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e80) {
            ctx->pc = 0x1A1E90u;
            goto label_1a1e90;
        }
    }
    ctx->pc = 0x1A1E88u;
label_1a1e88:
    // 0x1a1e88: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1e8c:
    // 0x1a1e8c: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x1a1e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a1e90:
    // 0x1a1e90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a1e94:
    if (ctx->pc == 0x1A1E94u) {
        ctx->pc = 0x1A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E90u;
        // 0x1a1e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E98u;
        goto label_1a1e98;
    }
    ctx->pc = 0x1A1E90u;
    {
        const bool branch_taken_0x1a1e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E90u;
        // 0x1a1e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e90) {
            ctx->pc = 0x1A1EACu;
            goto label_1a1eac;
        }
    }
    ctx->pc = 0x1A1E98u;
label_1a1e98:
    // 0x1a1e98: 0xc0685e2  jal         func_1A1788
label_1a1e9c:
    if (ctx->pc == 0x1A1E9Cu) {
        ctx->pc = 0x1A1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E98u;
        // 0x1a1e9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EA0u;
        goto label_1a1ea0;
    }
    ctx->pc = 0x1A1E98u;
    SET_GPR_U32(ctx, 31, 0x1A1EA0u);
    ctx->pc = 0x1A1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E98u;
    // 0x1a1e9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E98u, 0x1A1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EA0u;
label_1a1ea0:
    // 0x1a1ea0: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1a1ea4:
    // 0x1a1ea4: 0x1043ff87  beq         $v0, $v1, . + 4 + (-0x79 << 2)
label_1a1ea8:
    if (ctx->pc == 0x1A1EA8u) {
        ctx->pc = 0x1A1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA4u;
        // 0x1a1ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EACu;
        goto label_1a1eac;
    }
    ctx->pc = 0x1A1EA4u;
    {
        const bool branch_taken_0x1a1ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA4u;
        // 0x1a1ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ea4) {
            ctx->pc = 0x1A1CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1cc4;
        }
    }
    ctx->pc = 0x1A1EACu;
label_1a1eac:
    // 0x1a1eac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1a1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a1eb0:
    // 0x1a1eb0: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1a1eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1a1eb4:
    // 0x1a1eb4: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x1a1eb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1a1eb8:
    // 0x1a1eb8: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x1a1eb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1a1ebc:
    // 0x1a1ebc: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1a1ebcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1a1ec0:
    // 0x1a1ec0: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x1a1ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1a1ec4:
    // 0x1a1ec4: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1a1ec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1a1ec8:
    // 0x1a1ec8: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x1a1ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1a1ecc:
    // 0x1a1ecc: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1a1eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a1ed0:
    // 0x1a1ed0: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x1a1ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a1ed4:
    // 0x1a1ed4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1a1ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->pc = 0x1a1ed8u;
}
