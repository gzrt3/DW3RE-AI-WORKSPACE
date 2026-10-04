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

// Function: FUN_001a1960
// Address: 0x1a1960 - 0x1a19e0
void FUN_001a1960_0x1a1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1960_0x1a1960");
#endif

    ctx->pc = 0x1a1960u;

    // 0x1a1960: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a1960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1964: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1968: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a196c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1a196cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a1970: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A1970u;
    {
        const bool branch_taken_0x1a1970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1970u;
        // 0x1a1974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1970) {
            ctx->pc = 0x1A19DCu;
            goto label_1a19dc;
        }
    }
    ctx->pc = 0x1A1978u;
    // 0x1a1978: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x1a1978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x1a197c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a1980: 0x25025978  addiu       $v0, $t0, 0x5978
    ctx->pc = 0x1a1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 22904));
    // 0x1a1984: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a1984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a1988: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a1988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1a198c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a1990: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x1a1990u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1994: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1994u;
    {
        const bool branch_taken_0x1a1994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1994u;
        // 0x1a1998: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1994) {
            ctx->pc = 0x1A19BCu;
            goto label_1a19bc;
        }
    }
    ctx->pc = 0x1A199Cu;
    // 0x1a199c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A199Cu;
    {
        const bool branch_taken_0x1a199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a199c) {
            ctx->pc = 0x1A19A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A199Cu;
            // 0x1a19a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A19C8u;
            goto label_1a19c8;
        }
    }
    ctx->pc = 0x1A19A4u;
    // 0x1a19a4: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1a19a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1a19a8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a19ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A19ACu;
    {
        const bool branch_taken_0x1a19ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19ACu;
        // 0x1a19b0: 0x25025978  addiu       $v0, $t0, 0x5978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 22904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19ac) {
            ctx->pc = 0x1A19C4u;
            goto label_1a19c4;
        }
    }
    ctx->pc = 0x1A19B4u;
    // 0x1a19b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A19B4u;
    {
        const bool branch_taken_0x1a19b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19B4u;
        // 0x1a19b8: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19b4) {
            ctx->pc = 0x1A19D0u;
            goto label_1a19d0;
        }
    }
    ctx->pc = 0x1A19BCu;
label_1a19bc:
    // 0x1a19bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A19BCu;
    {
        const bool branch_taken_0x1a19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19BCu;
        // 0x1a19c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19bc) {
            ctx->pc = 0x1A19C8u;
            goto label_1a19c8;
        }
    }
    ctx->pc = 0x1A19C4u;
label_1a19c4:
    // 0x1a19c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a19c8:
    // 0x1a19c8: 0x25025978  addiu       $v0, $t0, 0x5978
    ctx->pc = 0x1a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 22904));
    // 0x1a19cc: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x1a19ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_1a19d0:
    // 0x1a19d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a19d4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a19d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a19d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a19d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1a19dc:
    // 0x1a19dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a19dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a19e0u;
}
