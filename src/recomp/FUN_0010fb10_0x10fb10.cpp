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

// Function: FUN_0010fb10
// Address: 0x10fb10 - 0x10fde8
void FUN_0010fb10_0x10fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010fb10_0x10fb10");
#endif

    switch (ctx->pc) {
        case 0x10fb10u: goto label_10fb10;
        case 0x10fb14u: goto label_10fb14;
        case 0x10fb18u: goto label_10fb18;
        case 0x10fb1cu: goto label_10fb1c;
        case 0x10fb20u: goto label_10fb20;
        case 0x10fb24u: goto label_10fb24;
        case 0x10fb28u: goto label_10fb28;
        case 0x10fb2cu: goto label_10fb2c;
        case 0x10fb30u: goto label_10fb30;
        case 0x10fb34u: goto label_10fb34;
        case 0x10fb38u: goto label_10fb38;
        case 0x10fb3cu: goto label_10fb3c;
        case 0x10fb40u: goto label_10fb40;
        case 0x10fb44u: goto label_10fb44;
        case 0x10fb48u: goto label_10fb48;
        case 0x10fb4cu: goto label_10fb4c;
        case 0x10fb50u: goto label_10fb50;
        case 0x10fb54u: goto label_10fb54;
        case 0x10fb58u: goto label_10fb58;
        case 0x10fb5cu: goto label_10fb5c;
        case 0x10fb60u: goto label_10fb60;
        case 0x10fb64u: goto label_10fb64;
        case 0x10fb68u: goto label_10fb68;
        case 0x10fb6cu: goto label_10fb6c;
        case 0x10fb70u: goto label_10fb70;
        case 0x10fb74u: goto label_10fb74;
        case 0x10fb78u: goto label_10fb78;
        case 0x10fb7cu: goto label_10fb7c;
        case 0x10fb80u: goto label_10fb80;
        case 0x10fb84u: goto label_10fb84;
        case 0x10fb88u: goto label_10fb88;
        case 0x10fb8cu: goto label_10fb8c;
        case 0x10fb90u: goto label_10fb90;
        case 0x10fb94u: goto label_10fb94;
        case 0x10fb98u: goto label_10fb98;
        case 0x10fb9cu: goto label_10fb9c;
        case 0x10fba0u: goto label_10fba0;
        case 0x10fba4u: goto label_10fba4;
        case 0x10fba8u: goto label_10fba8;
        case 0x10fbacu: goto label_10fbac;
        case 0x10fbb0u: goto label_10fbb0;
        case 0x10fbb4u: goto label_10fbb4;
        case 0x10fbb8u: goto label_10fbb8;
        case 0x10fbbcu: goto label_10fbbc;
        case 0x10fbc0u: goto label_10fbc0;
        case 0x10fbc4u: goto label_10fbc4;
        case 0x10fbc8u: goto label_10fbc8;
        case 0x10fbccu: goto label_10fbcc;
        case 0x10fbd0u: goto label_10fbd0;
        case 0x10fbd4u: goto label_10fbd4;
        case 0x10fbd8u: goto label_10fbd8;
        case 0x10fbdcu: goto label_10fbdc;
        case 0x10fbe0u: goto label_10fbe0;
        case 0x10fbe4u: goto label_10fbe4;
        case 0x10fbe8u: goto label_10fbe8;
        case 0x10fbecu: goto label_10fbec;
        case 0x10fbf0u: goto label_10fbf0;
        case 0x10fbf4u: goto label_10fbf4;
        case 0x10fbf8u: goto label_10fbf8;
        case 0x10fbfcu: goto label_10fbfc;
        case 0x10fc00u: goto label_10fc00;
        case 0x10fc04u: goto label_10fc04;
        case 0x10fc08u: goto label_10fc08;
        case 0x10fc0cu: goto label_10fc0c;
        case 0x10fc10u: goto label_10fc10;
        case 0x10fc14u: goto label_10fc14;
        case 0x10fc18u: goto label_10fc18;
        case 0x10fc1cu: goto label_10fc1c;
        case 0x10fc20u: goto label_10fc20;
        case 0x10fc24u: goto label_10fc24;
        case 0x10fc28u: goto label_10fc28;
        case 0x10fc2cu: goto label_10fc2c;
        case 0x10fc30u: goto label_10fc30;
        case 0x10fc34u: goto label_10fc34;
        case 0x10fc38u: goto label_10fc38;
        case 0x10fc3cu: goto label_10fc3c;
        case 0x10fc40u: goto label_10fc40;
        case 0x10fc44u: goto label_10fc44;
        case 0x10fc48u: goto label_10fc48;
        case 0x10fc4cu: goto label_10fc4c;
        case 0x10fc50u: goto label_10fc50;
        case 0x10fc54u: goto label_10fc54;
        case 0x10fc58u: goto label_10fc58;
        case 0x10fc5cu: goto label_10fc5c;
        case 0x10fc60u: goto label_10fc60;
        case 0x10fc64u: goto label_10fc64;
        case 0x10fc68u: goto label_10fc68;
        case 0x10fc6cu: goto label_10fc6c;
        case 0x10fc70u: goto label_10fc70;
        case 0x10fc74u: goto label_10fc74;
        case 0x10fc78u: goto label_10fc78;
        case 0x10fc7cu: goto label_10fc7c;
        case 0x10fc80u: goto label_10fc80;
        case 0x10fc84u: goto label_10fc84;
        case 0x10fc88u: goto label_10fc88;
        case 0x10fc8cu: goto label_10fc8c;
        case 0x10fc90u: goto label_10fc90;
        case 0x10fc94u: goto label_10fc94;
        case 0x10fc98u: goto label_10fc98;
        case 0x10fc9cu: goto label_10fc9c;
        case 0x10fca0u: goto label_10fca0;
        case 0x10fca4u: goto label_10fca4;
        case 0x10fca8u: goto label_10fca8;
        case 0x10fcacu: goto label_10fcac;
        case 0x10fcb0u: goto label_10fcb0;
        case 0x10fcb4u: goto label_10fcb4;
        case 0x10fcb8u: goto label_10fcb8;
        case 0x10fcbcu: goto label_10fcbc;
        case 0x10fcc0u: goto label_10fcc0;
        case 0x10fcc4u: goto label_10fcc4;
        case 0x10fcc8u: goto label_10fcc8;
        case 0x10fcccu: goto label_10fccc;
        case 0x10fcd0u: goto label_10fcd0;
        case 0x10fcd4u: goto label_10fcd4;
        case 0x10fcd8u: goto label_10fcd8;
        case 0x10fcdcu: goto label_10fcdc;
        case 0x10fce0u: goto label_10fce0;
        case 0x10fce4u: goto label_10fce4;
        case 0x10fce8u: goto label_10fce8;
        case 0x10fcecu: goto label_10fcec;
        case 0x10fcf0u: goto label_10fcf0;
        case 0x10fcf4u: goto label_10fcf4;
        case 0x10fcf8u: goto label_10fcf8;
        case 0x10fcfcu: goto label_10fcfc;
        case 0x10fd00u: goto label_10fd00;
        case 0x10fd04u: goto label_10fd04;
        case 0x10fd08u: goto label_10fd08;
        case 0x10fd0cu: goto label_10fd0c;
        case 0x10fd10u: goto label_10fd10;
        case 0x10fd14u: goto label_10fd14;
        case 0x10fd18u: goto label_10fd18;
        case 0x10fd1cu: goto label_10fd1c;
        case 0x10fd20u: goto label_10fd20;
        case 0x10fd24u: goto label_10fd24;
        case 0x10fd28u: goto label_10fd28;
        case 0x10fd2cu: goto label_10fd2c;
        case 0x10fd30u: goto label_10fd30;
        case 0x10fd34u: goto label_10fd34;
        case 0x10fd38u: goto label_10fd38;
        case 0x10fd3cu: goto label_10fd3c;
        case 0x10fd40u: goto label_10fd40;
        case 0x10fd44u: goto label_10fd44;
        case 0x10fd48u: goto label_10fd48;
        case 0x10fd4cu: goto label_10fd4c;
        case 0x10fd50u: goto label_10fd50;
        case 0x10fd54u: goto label_10fd54;
        case 0x10fd58u: goto label_10fd58;
        case 0x10fd5cu: goto label_10fd5c;
        case 0x10fd60u: goto label_10fd60;
        case 0x10fd64u: goto label_10fd64;
        case 0x10fd68u: goto label_10fd68;
        case 0x10fd6cu: goto label_10fd6c;
        case 0x10fd70u: goto label_10fd70;
        case 0x10fd74u: goto label_10fd74;
        case 0x10fd78u: goto label_10fd78;
        case 0x10fd7cu: goto label_10fd7c;
        case 0x10fd80u: goto label_10fd80;
        case 0x10fd84u: goto label_10fd84;
        case 0x10fd88u: goto label_10fd88;
        case 0x10fd8cu: goto label_10fd8c;
        case 0x10fd90u: goto label_10fd90;
        case 0x10fd94u: goto label_10fd94;
        case 0x10fd98u: goto label_10fd98;
        case 0x10fd9cu: goto label_10fd9c;
        case 0x10fda0u: goto label_10fda0;
        case 0x10fda4u: goto label_10fda4;
        case 0x10fda8u: goto label_10fda8;
        case 0x10fdacu: goto label_10fdac;
        case 0x10fdb0u: goto label_10fdb0;
        case 0x10fdb4u: goto label_10fdb4;
        case 0x10fdb8u: goto label_10fdb8;
        case 0x10fdbcu: goto label_10fdbc;
        case 0x10fdc0u: goto label_10fdc0;
        case 0x10fdc4u: goto label_10fdc4;
        case 0x10fdc8u: goto label_10fdc8;
        case 0x10fdccu: goto label_10fdcc;
        case 0x10fdd0u: goto label_10fdd0;
        case 0x10fdd4u: goto label_10fdd4;
        case 0x10fdd8u: goto label_10fdd8;
        case 0x10fddcu: goto label_10fddc;
        case 0x10fde0u: goto label_10fde0;
        case 0x10fde4u: goto label_10fde4;
        default: break;
    }

    ctx->pc = 0x10fb10u;

label_10fb10:
    // 0x10fb10: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x10fb10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_10fb14:
    // 0x10fb14: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_10fb18:
    if (ctx->pc == 0x10FB18u) {
        ctx->pc = 0x10FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB14u;
        // 0x10fb18: 0x28810007  slti        $at, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB1Cu;
        goto label_10fb1c;
    }
    ctx->pc = 0x10FB14u;
    {
        const bool branch_taken_0x10fb14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB14u;
        // 0x10fb18: 0x28810007  slti        $at, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb14) {
            ctx->pc = 0x10FB2Cu;
            goto label_10fb2c;
        }
    }
    ctx->pc = 0x10FB1Cu;
label_10fb1c:
    // 0x10fb1c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x10fb1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10fb20:
    // 0x10fb20: 0x10000009  b           . + 4 + (0x9 << 2)
label_10fb24:
    if (ctx->pc == 0x10FB24u) {
        ctx->pc = 0x10FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB20u;
        // 0x10fb24: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB28u;
        goto label_10fb28;
    }
    ctx->pc = 0x10FB20u;
    {
        const bool branch_taken_0x10fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB20u;
        // 0x10fb24: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb20) {
            ctx->pc = 0x10FB48u;
            goto label_10fb48;
        }
    }
    ctx->pc = 0x10FB28u;
label_10fb28:
    // 0x10fb28: 0x28810007  slti        $at, $a0, 0x7
    ctx->pc = 0x10fb28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_10fb2c:
    // 0x10fb2c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_10fb30:
    if (ctx->pc == 0x10FB30u) {
        ctx->pc = 0x10FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB2Cu;
        // 0x10fb30: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB34u;
        goto label_10fb34;
    }
    ctx->pc = 0x10FB2Cu;
    {
        const bool branch_taken_0x10fb2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB2Cu;
        // 0x10fb30: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb2c) {
            ctx->pc = 0x10FB44u;
            goto label_10fb44;
        }
    }
    ctx->pc = 0x10FB34u;
label_10fb34:
    // 0x10fb34: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x10fb34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fb38:
    // 0x10fb38: 0x10000003  b           . + 4 + (0x3 << 2)
label_10fb3c:
    if (ctx->pc == 0x10FB3Cu) {
        ctx->pc = 0x10FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB38u;
        // 0x10fb3c: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB40u;
        goto label_10fb40;
    }
    ctx->pc = 0x10FB38u;
    {
        const bool branch_taken_0x10fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB38u;
        // 0x10fb3c: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb38) {
            ctx->pc = 0x10FB48u;
            goto label_10fb48;
        }
    }
    ctx->pc = 0x10FB40u;
label_10fb40:
    // 0x10fb40: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x10fb40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fb44:
    // 0x10fb44: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x10fb44u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fb48:
    // 0x10fb48: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x10fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_10fb4c:
    // 0x10fb4c: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x10fb4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10fb50:
    // 0x10fb50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_10fb54:
    if (ctx->pc == 0x10FB54u) {
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB58u;
        goto label_10fb58;
    }
    ctx->pc = 0x10FB50u;
    {
        const bool branch_taken_0x10fb50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb50) {
            ctx->pc = 0x10FB60u;
            goto label_10fb60;
        }
    }
    ctx->pc = 0x10FB58u;
label_10fb58:
    // 0x10fb58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10fb5c:
    // 0x10fb5c: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x10fb5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_10fb60:
    // 0x10fb60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_10fb64:
    // 0x10fb64: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x10fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_10fb68:
    // 0x10fb68: 0x8c2b4970  lw          $t3, 0x4970($at)
    ctx->pc = 0x10fb68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_10fb6c:
    // 0x10fb6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x10fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10fb70:
    // 0x10fb70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_10fb74:
    // 0x10fb74: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x10fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
label_10fb78:
    // 0x10fb78: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x10fb78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10fb7c:
    // 0x10fb7c: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x10fb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_10fb80:
    // 0x10fb80: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x10fb80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_10fb84:
    // 0x10fb84: 0x24c618d4  addiu       $a2, $a2, 0x18D4
    ctx->pc = 0x10fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6356));
label_10fb88:
    // 0x10fb88: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x10fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_10fb8c:
    // 0x10fb8c: 0x246318d5  addiu       $v1, $v1, 0x18D5
    ctx->pc = 0x10fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6357));
label_10fb90:
    // 0x10fb90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_10fb94:
    // 0x10fb94: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x10fb94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_10fb98:
    // 0x10fb98: 0x90254928  lbu         $a1, 0x4928($at)
    ctx->pc = 0x10fb98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18728)));
label_10fb9c:
    // 0x10fb9c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x10fb9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_10fba0:
    // 0x10fba0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x10fba0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_10fba4:
    // 0x10fba4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x10fba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_10fba8:
    // 0x10fba8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x10fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_10fbac:
    // 0x10fbac: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x10fbacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_10fbb0:
    // 0x10fbb0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x10fbb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_10fbb4:
    // 0x10fbb4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_10fbb8:
    // 0x10fbb8: 0x90244929  lbu         $a0, 0x4929($at)
    ctx->pc = 0x10fbb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18729)));
label_10fbbc:
    // 0x10fbbc: 0xa65023  subu        $t2, $a1, $a2
    ctx->pc = 0x10fbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_10fbc0:
    // 0x10fbc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_10fbc4:
    // 0x10fbc4: 0x8c2e4afc  lw          $t6, 0x4AFC($at)
    ctx->pc = 0x10fbc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_10fbc8:
    // 0x10fbc8: 0x15c0000a  bnez        $t6, . + 4 + (0xA << 2)
label_10fbcc:
    if (ctx->pc == 0x10FBCCu) {
        ctx->pc = 0x10FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC8u;
        // 0x10fbcc: 0x835823  subu        $t3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBD0u;
        goto label_10fbd0;
    }
    ctx->pc = 0x10FBC8u;
    {
        const bool branch_taken_0x10fbc8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC8u;
        // 0x10fbcc: 0x835823  subu        $t3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbc8) {
            ctx->pc = 0x10FBF4u;
            goto label_10fbf4;
        }
    }
    ctx->pc = 0x10FBD0u;
label_10fbd0:
    // 0x10fbd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_10fbd4:
    // 0x10fbd4: 0x8c234af8  lw          $v1, 0x4AF8($at)
    ctx->pc = 0x10fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_10fbd8:
    // 0x10fbd8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_10fbdc:
    if (ctx->pc == 0x10FBDCu) {
        ctx->pc = 0x10FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBD8u;
        // 0x10fbdc: 0x240e0090  addiu       $t6, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBE0u;
        goto label_10fbe0;
    }
    ctx->pc = 0x10FBD8u;
    {
        const bool branch_taken_0x10fbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBD8u;
        // 0x10fbdc: 0x240e0090  addiu       $t6, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbd8) {
            ctx->pc = 0x10FBECu;
            goto label_10fbec;
        }
    }
    ctx->pc = 0x10FBE0u;
label_10fbe0:
    // 0x10fbe0: 0x1000000f  b           . + 4 + (0xF << 2)
label_10fbe4:
    if (ctx->pc == 0x10FBE4u) {
        ctx->pc = 0x10FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBE0u;
        // 0x10fbe4: 0x240e00a0  addiu       $t6, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBE8u;
        goto label_10fbe8;
    }
    ctx->pc = 0x10FBE0u;
    {
        const bool branch_taken_0x10fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBE0u;
        // 0x10fbe4: 0x240e00a0  addiu       $t6, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbe0) {
            ctx->pc = 0x10FC20u;
            goto label_10fc20;
        }
    }
    ctx->pc = 0x10FBE8u;
label_10fbe8:
    // 0x10fbe8: 0x240e0090  addiu       $t6, $zero, 0x90
    ctx->pc = 0x10fbe8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_10fbec:
    // 0x10fbec: 0x1000000c  b           . + 4 + (0xC << 2)
label_10fbf0:
    if (ctx->pc == 0x10FBF0u) {
        ctx->pc = 0x10FBF4u;
        goto label_10fbf4;
    }
    ctx->pc = 0x10FBECu;
    {
        const bool branch_taken_0x10fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fbec) {
            ctx->pc = 0x10FC20u;
            goto label_10fc20;
        }
    }
    ctx->pc = 0x10FBF4u;
label_10fbf4:
    // 0x10fbf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fbf8:
    // 0x10fbf8: 0x15c30004  bne         $t6, $v1, . + 4 + (0x4 << 2)
label_10fbfc:
    if (ctx->pc == 0x10FBFCu) {
        ctx->pc = 0x10FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBF8u;
        // 0x10fbfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC00u;
        goto label_10fc00;
    }
    ctx->pc = 0x10FBF8u;
    {
        const bool branch_taken_0x10fbf8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        ctx->pc = 0x10FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBF8u;
        // 0x10fbfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbf8) {
            ctx->pc = 0x10FC0Cu;
            goto label_10fc0c;
        }
    }
    ctx->pc = 0x10FC00u;
label_10fc00:
    // 0x10fc00: 0x10000007  b           . + 4 + (0x7 << 2)
label_10fc04:
    if (ctx->pc == 0x10FC04u) {
        ctx->pc = 0x10FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC00u;
        // 0x10fc04: 0x240e0080  addiu       $t6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC08u;
        goto label_10fc08;
    }
    ctx->pc = 0x10FC00u;
    {
        const bool branch_taken_0x10fc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC00u;
        // 0x10fc04: 0x240e0080  addiu       $t6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc00) {
            ctx->pc = 0x10FC20u;
            goto label_10fc20;
        }
    }
    ctx->pc = 0x10FC08u;
label_10fc08:
    // 0x10fc08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10fc0c:
    // 0x10fc0c: 0x15c30003  bne         $t6, $v1, . + 4 + (0x3 << 2)
label_10fc10:
    if (ctx->pc == 0x10FC10u) {
        ctx->pc = 0x10FC14u;
        goto label_10fc14;
    }
    ctx->pc = 0x10FC0Cu;
    {
        const bool branch_taken_0x10fc0c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        if (branch_taken_0x10fc0c) {
            ctx->pc = 0x10FC1Cu;
            goto label_10fc1c;
        }
    }
    ctx->pc = 0x10FC14u;
label_10fc14:
    // 0x10fc14: 0x10000002  b           . + 4 + (0x2 << 2)
label_10fc18:
    if (ctx->pc == 0x10FC18u) {
        ctx->pc = 0x10FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC14u;
        // 0x10fc18: 0x240e0060  addiu       $t6, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC1Cu;
        goto label_10fc1c;
    }
    ctx->pc = 0x10FC14u;
    {
        const bool branch_taken_0x10fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC14u;
        // 0x10fc18: 0x240e0060  addiu       $t6, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc14) {
            ctx->pc = 0x10FC20u;
            goto label_10fc20;
        }
    }
    ctx->pc = 0x10FC1Cu;
label_10fc1c:
    // 0x10fc1c: 0x240e0050  addiu       $t6, $zero, 0x50
    ctx->pc = 0x10fc1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_10fc20:
    // 0x10fc20: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x10fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_10fc24:
    // 0x10fc24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc28:
    // 0x10fc28: 0x2484b4e0  addiu       $a0, $a0, -0x4B20
    ctx->pc = 0x10fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
label_10fc2c:
    // 0x10fc2c: 0x3c18002c  lui         $t8, 0x2C
    ctx->pc = 0x10fc2cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)44 << 16));
label_10fc30:
    // 0x10fc30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_10fc34:
    // 0x10fc34: 0x27185430  addiu       $t8, $t8, 0x5430
    ctx->pc = 0x10fc34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 21552));
label_10fc38:
    // 0x10fc38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc3c:
    // 0x10fc3c: 0x0  nop
    ctx->pc = 0x10fc3cu;
    // NOP
label_10fc40:
    // 0x10fc40: 0x908f0013  lbu         $t7, 0x13($a0)
    ctx->pc = 0x10fc40u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
label_10fc44:
    // 0x10fc44: 0x11e3005f  beq         $t7, $v1, . + 4 + (0x5F << 2)
label_10fc48:
    if (ctx->pc == 0x10FC48u) {
        ctx->pc = 0x10FC4Cu;
        goto label_10fc4c;
    }
    ctx->pc = 0x10FC44u;
    {
        const bool branch_taken_0x10fc44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 3));
        if (branch_taken_0x10fc44) {
            ctx->pc = 0x10FDC4u;
            goto label_10fdc4;
        }
    }
    ctx->pc = 0x10FC4Cu;
label_10fc4c:
    // 0x10fc4c: 0x908f000e  lbu         $t7, 0xE($a0)
    ctx->pc = 0x10fc4cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
label_10fc50:
    // 0x10fc50: 0x1ebc818  mult        $t9, $t7, $t3
    ctx->pc = 0x10fc50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_10fc54:
    // 0x10fc54: 0x32e001a  div         $zero, $t9, $t6
    ctx->pc = 0x10fc54u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 25);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10fc58:
    // 0x10fc58: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x10fc58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_10fc5c:
    // 0x10fc5c: 0x0  nop
    ctx->pc = 0x10fc5cu;
    // NOP
label_10fc60:
    // 0x10fc60: 0xc812  mflo        $t9
    ctx->pc = 0x10fc60u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_10fc64:
    // 0x10fc64: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x10fc64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_10fc68:
    // 0x10fc68: 0x29e100fb  slti        $at, $t7, 0xFB
    ctx->pc = 0x10fc68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)251) ? 1 : 0);
label_10fc6c:
    // 0x10fc6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_10fc70:
    if (ctx->pc == 0x10FC70u) {
        ctx->pc = 0x10FC74u;
        goto label_10fc74;
    }
    ctx->pc = 0x10FC6Cu;
    {
        const bool branch_taken_0x10fc6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fc6c) {
            ctx->pc = 0x10FC78u;
            goto label_10fc78;
        }
    }
    ctx->pc = 0x10FC74u;
label_10fc74:
    // 0x10fc74: 0x240f00fa  addiu       $t7, $zero, 0xFA
    ctx->pc = 0x10fc74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10fc78:
    // 0x10fc78: 0x1de00002  bgtz        $t7, . + 4 + (0x2 << 2)
label_10fc7c:
    if (ctx->pc == 0x10FC7Cu) {
        ctx->pc = 0x10FC80u;
        goto label_10fc80;
    }
    ctx->pc = 0x10FC78u;
    {
        const bool branch_taken_0x10fc78 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x10fc78) {
            ctx->pc = 0x10FC84u;
            goto label_10fc84;
        }
    }
    ctx->pc = 0x10FC80u;
label_10fc80:
    // 0x10fc80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x10fc80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fc84:
    // 0x10fc84: 0xa08f000e  sb          $t7, 0xE($a0)
    ctx->pc = 0x10fc84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 15));
label_10fc88:
    // 0x10fc88: 0x908f000f  lbu         $t7, 0xF($a0)
    ctx->pc = 0x10fc88u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
label_10fc8c:
    // 0x10fc8c: 0x1eac818  mult        $t9, $t7, $t2
    ctx->pc = 0x10fc8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_10fc90:
    // 0x10fc90: 0x32e001a  div         $zero, $t9, $t6
    ctx->pc = 0x10fc90u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 25);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10fc94:
    // 0x10fc94: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x10fc94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
label_10fc98:
    // 0x10fc98: 0x0  nop
    ctx->pc = 0x10fc98u;
    // NOP
label_10fc9c:
    // 0x10fc9c: 0xc812  mflo        $t9
    ctx->pc = 0x10fc9cu;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_10fca0:
    // 0x10fca0: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x10fca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_10fca4:
    // 0x10fca4: 0x29e100fb  slti        $at, $t7, 0xFB
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)251) ? 1 : 0);
label_10fca8:
    // 0x10fca8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_10fcac:
    if (ctx->pc == 0x10FCACu) {
        ctx->pc = 0x10FCB0u;
        goto label_10fcb0;
    }
    ctx->pc = 0x10FCA8u;
    {
        const bool branch_taken_0x10fca8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fca8) {
            ctx->pc = 0x10FCB4u;
            goto label_10fcb4;
        }
    }
    ctx->pc = 0x10FCB0u;
label_10fcb0:
    // 0x10fcb0: 0x240f00fa  addiu       $t7, $zero, 0xFA
    ctx->pc = 0x10fcb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10fcb4:
    // 0x10fcb4: 0x1de00002  bgtz        $t7, . + 4 + (0x2 << 2)
label_10fcb8:
    if (ctx->pc == 0x10FCB8u) {
        ctx->pc = 0x10FCBCu;
        goto label_10fcbc;
    }
    ctx->pc = 0x10FCB4u;
    {
        const bool branch_taken_0x10fcb4 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x10fcb4) {
            ctx->pc = 0x10FCC0u;
            goto label_10fcc0;
        }
    }
    ctx->pc = 0x10FCBCu;
label_10fcbc:
    // 0x10fcbc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x10fcbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fcc0:
    // 0x10fcc0: 0xa08f000f  sb          $t7, 0xF($a0)
    ctx->pc = 0x10fcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 15));
label_10fcc4:
    // 0x10fcc4: 0x848f0008  lh          $t7, 0x8($a0)
    ctx->pc = 0x10fcc4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_10fcc8:
    // 0x10fcc8: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x10fcc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
label_10fccc:
    // 0x10fccc: 0x29e10191  slti        $at, $t7, 0x191
    ctx->pc = 0x10fcccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)401) ? 1 : 0);
label_10fcd0:
    // 0x10fcd0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_10fcd4:
    if (ctx->pc == 0x10FCD4u) {
        ctx->pc = 0x10FCD8u;
        goto label_10fcd8;
    }
    ctx->pc = 0x10FCD0u;
    {
        const bool branch_taken_0x10fcd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fcd0) {
            ctx->pc = 0x10FCDCu;
            goto label_10fcdc;
        }
    }
    ctx->pc = 0x10FCD8u;
label_10fcd8:
    // 0x10fcd8: 0x240f0190  addiu       $t7, $zero, 0x190
    ctx->pc = 0x10fcd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_10fcdc:
    // 0x10fcdc: 0x1de00002  bgtz        $t7, . + 4 + (0x2 << 2)
label_10fce0:
    if (ctx->pc == 0x10FCE0u) {
        ctx->pc = 0x10FCE4u;
        goto label_10fce4;
    }
    ctx->pc = 0x10FCDCu;
    {
        const bool branch_taken_0x10fcdc = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x10fcdc) {
            ctx->pc = 0x10FCE8u;
            goto label_10fce8;
        }
    }
    ctx->pc = 0x10FCE4u;
label_10fce4:
    // 0x10fce4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x10fce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fce8:
    // 0x10fce8: 0x11a00036  beqz        $t5, . + 4 + (0x36 << 2)
label_10fcec:
    if (ctx->pc == 0x10FCECu) {
        ctx->pc = 0x10FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE8u;
        // 0x10fcec: 0xa48f0008  sh          $t7, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCF0u;
        goto label_10fcf0;
    }
    ctx->pc = 0x10FCE8u;
    {
        const bool branch_taken_0x10fce8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE8u;
        // 0x10fcec: 0xa48f0008  sh          $t7, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce8) {
            ctx->pc = 0x10FDC4u;
            goto label_10fdc4;
        }
    }
    ctx->pc = 0x10FCF0u;
label_10fcf0:
    // 0x10fcf0: 0x90990017  lbu         $t9, 0x17($a0)
    ctx->pc = 0x10fcf0u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
label_10fcf4:
    // 0x10fcf4: 0x2f210010  sltiu       $at, $t9, 0x10
    ctx->pc = 0x10fcf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_10fcf8:
    // 0x10fcf8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_10fcfc:
    if (ctx->pc == 0x10FCFCu) {
        ctx->pc = 0x10FD00u;
        goto label_10fd00;
    }
    ctx->pc = 0x10FCF8u;
    {
        const bool branch_taken_0x10fcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fcf8) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD00u;
label_10fd00:
    // 0x10fd00: 0x197880  sll         $t7, $t9, 2
    ctx->pc = 0x10fd00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
label_10fd04:
    // 0x10fd04: 0x1f87821  addu        $t7, $t7, $t8
    ctx->pc = 0x10fd04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_10fd08:
    // 0x10fd08: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x10fd08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_10fd0c:
    // 0x10fd0c: 0x1e00008  jr          $t7
label_10fd10:
    if (ctx->pc == 0x10FD10u) {
        ctx->pc = 0x10FD14u;
        goto label_10fd14;
    }
    ctx->pc = 0x10FD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FD0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FD14u;
label_10fd14:
    // 0x10fd14: 0x0  nop
    ctx->pc = 0x10fd14u;
    // NOP
label_10fd18:
    // 0x10fd18: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd18u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd1c:
    // 0x10fd1c: 0xf082a  slt         $at, $zero, $t7
    ctx->pc = 0x10fd1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_10fd20:
    // 0x10fd20: 0x1780a  movz        $t7, $zero, $at
    ctx->pc = 0x10fd20u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_10fd24:
    // 0x10fd24: 0x1000001e  b           . + 4 + (0x1E << 2)
label_10fd28:
    if (ctx->pc == 0x10FD28u) {
        ctx->pc = 0x10FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD24u;
        // 0x10fd28: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD2Cu;
        goto label_10fd2c;
    }
    ctx->pc = 0x10FD24u;
    {
        const bool branch_taken_0x10fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD24u;
        // 0x10fd28: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd24) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD2Cu;
label_10fd2c:
    // 0x10fd2c: 0x0  nop
    ctx->pc = 0x10fd2cu;
    // NOP
label_10fd30:
    // 0x10fd30: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd30u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd34:
    // 0x10fd34: 0x29e10005  slti        $at, $t7, 0x5
    ctx->pc = 0x10fd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)5) ? 1 : 0);
label_10fd38:
    // 0x10fd38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_10fd3c:
    if (ctx->pc == 0x10FD3Cu) {
        ctx->pc = 0x10FD40u;
        goto label_10fd40;
    }
    ctx->pc = 0x10FD38u;
    {
        const bool branch_taken_0x10fd38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd38) {
            ctx->pc = 0x10FD48u;
            goto label_10fd48;
        }
    }
    ctx->pc = 0x10FD40u;
label_10fd40:
    // 0x10fd40: 0x10000003  b           . + 4 + (0x3 << 2)
label_10fd44:
    if (ctx->pc == 0x10FD44u) {
        ctx->pc = 0x10FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD40u;
        // 0x10fd44: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD48u;
        goto label_10fd48;
    }
    ctx->pc = 0x10FD40u;
    {
        const bool branch_taken_0x10fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD40u;
        // 0x10fd44: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd40) {
            ctx->pc = 0x10FD50u;
            goto label_10fd50;
        }
    }
    ctx->pc = 0x10FD48u;
label_10fd48:
    // 0x10fd48: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x10fd48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10fd4c:
    // 0x10fd4c: 0xa08f0017  sb          $t7, 0x17($a0)
    ctx->pc = 0x10fd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
label_10fd50:
    // 0x10fd50: 0x10000013  b           . + 4 + (0x13 << 2)
label_10fd54:
    if (ctx->pc == 0x10FD54u) {
        ctx->pc = 0x10FD58u;
        goto label_10fd58;
    }
    ctx->pc = 0x10FD50u;
    {
        const bool branch_taken_0x10fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd50) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD58u;
label_10fd58:
    // 0x10fd58: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd5c:
    // 0x10fd5c: 0x29e10009  slti        $at, $t7, 0x9
    ctx->pc = 0x10fd5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
label_10fd60:
    // 0x10fd60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_10fd64:
    if (ctx->pc == 0x10FD64u) {
        ctx->pc = 0x10FD68u;
        goto label_10fd68;
    }
    ctx->pc = 0x10FD60u;
    {
        const bool branch_taken_0x10fd60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd60) {
            ctx->pc = 0x10FD70u;
            goto label_10fd70;
        }
    }
    ctx->pc = 0x10FD68u;
label_10fd68:
    // 0x10fd68: 0x10000003  b           . + 4 + (0x3 << 2)
label_10fd6c:
    if (ctx->pc == 0x10FD6Cu) {
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD70u;
        goto label_10fd70;
    }
    ctx->pc = 0x10FD68u;
    {
        const bool branch_taken_0x10fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd68) {
            ctx->pc = 0x10FD78u;
            goto label_10fd78;
        }
    }
    ctx->pc = 0x10FD70u;
label_10fd70:
    // 0x10fd70: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x10fd70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10fd74:
    // 0x10fd74: 0xa08f0017  sb          $t7, 0x17($a0)
    ctx->pc = 0x10fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
label_10fd78:
    // 0x10fd78: 0x10000009  b           . + 4 + (0x9 << 2)
label_10fd7c:
    if (ctx->pc == 0x10FD7Cu) {
        ctx->pc = 0x10FD80u;
        goto label_10fd80;
    }
    ctx->pc = 0x10FD78u;
    {
        const bool branch_taken_0x10fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd78) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD80u;
label_10fd80:
    // 0x10fd80: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd80u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd84:
    // 0x10fd84: 0x29e1000d  slti        $at, $t7, 0xD
    ctx->pc = 0x10fd84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)13) ? 1 : 0);
label_10fd88:
    // 0x10fd88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_10fd8c:
    if (ctx->pc == 0x10FD8Cu) {
        ctx->pc = 0x10FD90u;
        goto label_10fd90;
    }
    ctx->pc = 0x10FD88u;
    {
        const bool branch_taken_0x10fd88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd88) {
            ctx->pc = 0x10FD98u;
            goto label_10fd98;
        }
    }
    ctx->pc = 0x10FD90u;
label_10fd90:
    // 0x10fd90: 0x10000003  b           . + 4 + (0x3 << 2)
label_10fd94:
    if (ctx->pc == 0x10FD94u) {
        ctx->pc = 0x10FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD90u;
        // 0x10fd94: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD98u;
        goto label_10fd98;
    }
    ctx->pc = 0x10FD90u;
    {
        const bool branch_taken_0x10fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD90u;
        // 0x10fd94: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd90) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD98u;
label_10fd98:
    // 0x10fd98: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x10fd98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10fd9c:
    // 0x10fd9c: 0xa08f0017  sb          $t7, 0x17($a0)
    ctx->pc = 0x10fd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
label_10fda0:
    // 0x10fda0: 0x908f0018  lbu         $t7, 0x18($a0)
    ctx->pc = 0x10fda0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_10fda4:
    // 0x10fda4: 0x31f9000f  andi        $t9, $t7, 0xF
    ctx->pc = 0x10fda4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
label_10fda8:
    // 0x10fda8: 0xf7903  sra         $t7, $t7, 4
    ctx->pc = 0x10fda8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 4));
label_10fdac:
    // 0x10fdac: 0x1ec7823  subu        $t7, $t7, $t4
    ctx->pc = 0x10fdacu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_10fdb0:
    // 0x10fdb0: 0xf082a  slt         $at, $zero, $t7
    ctx->pc = 0x10fdb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_10fdb4:
    // 0x10fdb4: 0x1780a  movz        $t7, $zero, $at
    ctx->pc = 0x10fdb4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_10fdb8:
    // 0x10fdb8: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x10fdb8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_10fdbc:
    // 0x10fdbc: 0x1f97825  or          $t7, $t7, $t9
    ctx->pc = 0x10fdbcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 25));
label_10fdc0:
    // 0x10fdc0: 0xa08f0018  sb          $t7, 0x18($a0)
    ctx->pc = 0x10fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 15));
label_10fdc4:
    // 0x10fdc4: 0x0  nop
    ctx->pc = 0x10fdc4u;
    // NOP
label_10fdc8:
    // 0x10fdc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_10fdcc:
    // 0x10fdcc: 0x28cf00ff  slti        $t7, $a2, 0xFF
    ctx->pc = 0x10fdccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_10fdd0:
    // 0x10fdd0: 0x15e0ff9a  bnez        $t7, . + 4 + (-0x66 << 2)
label_10fdd4:
    if (ctx->pc == 0x10FDD4u) {
        ctx->pc = 0x10FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDD0u;
        // 0x10fdd4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDD8u;
        goto label_10fdd8;
    }
    ctx->pc = 0x10FDD0u;
    {
        const bool branch_taken_0x10fdd0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDD0u;
        // 0x10fdd4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdd0) {
            ctx->pc = 0x10FC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fc3c;
        }
    }
    ctx->pc = 0x10FDD8u;
label_10fdd8:
    // 0x10fdd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10fddc:
    // 0x10fddc: 0x28a60002  slti        $a2, $a1, 0x2
    ctx->pc = 0x10fddcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_10fde0:
    // 0x10fde0: 0x14c0ff96  bnez        $a2, . + 4 + (-0x6A << 2)
label_10fde4:
    if (ctx->pc == 0x10FDE4u) {
        ctx->pc = 0x10FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDE0u;
        // 0x10fde4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDE8u;
        goto label_fallthrough_0x10fde0;
    }
    ctx->pc = 0x10FDE0u;
    {
        const bool branch_taken_0x10fde0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDE0u;
        // 0x10fde4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fde0) {
            ctx->pc = 0x10FC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fc3c;
        }
    }
label_fallthrough_0x10fde0:
    ctx->pc = 0x10FDE8u;
}
