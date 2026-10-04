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

// Function: FUN_001fc190
// Address: 0x1fc190 - 0x1fc2dc
void FUN_001fc190_0x1fc190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc190_0x1fc190");
#endif

    ctx->pc = 0x1fc190u;

    // 0x1fc190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc194: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1fc194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1fc198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fc19c: 0x3c026cf6  lui         $v0, 0x6CF6
    ctx->pc = 0x1fc19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27894 << 16));
    // 0x1fc1a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc1a4: 0x34478001  ori         $a3, $v0, 0x8001
    ctx->pc = 0x1fc1a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x1fc1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc1ac: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x1fc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x1fc1b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fc1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1b4: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x1fc1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x1fc1b8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1fc1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1fc1bc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1fc1c0: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x1fc1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x1fc1c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1c8: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x1fc1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x1fc1cc: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1fc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1fc1d0: 0x34460300  ori         $a2, $v0, 0x300
    ctx->pc = 0x1fc1d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x1fc1d4: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1fc1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1fc1d8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1fc1dc: 0xac87005c  sw          $a3, 0x5C($a0)
    ctx->pc = 0x1fc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 7));
    // 0x1fc1e0: 0x34480003  ori         $t0, $v0, 0x3
    ctx->pc = 0x1fc1e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1fc1e4: 0xac860fc0  sw          $a2, 0xFC0($a0)
    ctx->pc = 0x1fc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4032), GPR_U32(ctx, 6));
    // 0x1fc1e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1fc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1fc1ec: 0xac800fc4  sw          $zero, 0xFC4($a0)
    ctx->pc = 0x1fc1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4036), GPR_U32(ctx, 0));
    // 0x1fc1f0: 0x34471001  ori         $a3, $v0, 0x1001
    ctx->pc = 0x1fc1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x1fc1f4: 0xac800fc8  sw          $zero, 0xFC8($a0)
    ctx->pc = 0x1fc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4040), GPR_U32(ctx, 0));
    // 0x1fc1f8: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1fc1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1fc1fc: 0xac800fcc  sw          $zero, 0xFCC($a0)
    ctx->pc = 0x1fc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4044), GPR_U32(ctx, 0));
    // 0x1fc200: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x1fc200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x1fc204: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1fc204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1fc208: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fc208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1fc20c: 0xac88001c  sw          $t0, 0x1C($a0)
    ctx->pc = 0x1fc20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 8));
    // 0x1fc210: 0xdc28c470  ld          $t0, -0x3B90($at)
    ctx->pc = 0x1fc210u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x28C470u));
    // 0x1fc214: 0xfc880020  sd          $t0, 0x20($a0)
    ctx->pc = 0x1fc214u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
    // 0x1fc218: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1fc21c: 0xdc28c478  ld          $t0, -0x3B88($at)
    ctx->pc = 0x1fc21cu;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x28C478u));
    // 0x1fc220: 0xfc880028  sd          $t0, 0x28($a0)
    ctx->pc = 0x1fc220u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 8));
    // 0x1fc224: 0xfc870030  sd          $a3, 0x30($a0)
    ctx->pc = 0x1fc224u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 7));
    // 0x1fc228: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FC228u;
    {
        const bool branch_taken_0x1fc228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC228u;
        // 0x1fc22c: 0xfc860038  sd          $a2, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc228) {
            ctx->pc = 0x1FC2B0u;
            goto label_1fc2b0;
        }
    }
    ctx->pc = 0x1FC230u;
    // 0x1fc230: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fc230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fc234: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC234u;
    {
        const bool branch_taken_0x1fc234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC234u;
        // 0x1fc238: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc234) {
            ctx->pc = 0x1FC294u;
            goto label_1fc294;
        }
    }
    ctx->pc = 0x1FC23Cu;
    // 0x1fc23c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc240: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC240u;
    {
        const bool branch_taken_0x1fc240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC240u;
        // 0x1fc244: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc240) {
            ctx->pc = 0x1FC278u;
            goto label_1fc278;
        }
    }
    ctx->pc = 0x1FC248u;
    // 0x1fc248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc24c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC24Cu;
    {
        const bool branch_taken_0x1fc24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc24c) {
            ctx->pc = 0x1FC25Cu;
            goto label_1fc25c;
        }
    }
    ctx->pc = 0x1FC254u;
    // 0x1fc254: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1FC254u;
    {
        const bool branch_taken_0x1fc254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC254u;
        // 0x1fc258: 0x26240fd0  addiu       $a0, $s1, 0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc254) {
            ctx->pc = 0x1FC2D4u;
            goto label_1fc2d4;
        }
    }
    ctx->pc = 0x1FC25Cu;
label_1fc25c:
    // 0x1fc25c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fc25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fc260: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1fc264: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc268: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1fc268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1fc26c: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc26cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x1fc270: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC270u;
    {
        const bool branch_taken_0x1fc270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC270u;
        // 0x1fc274: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc270) {
            ctx->pc = 0x1FC2D0u;
            goto label_1fc2d0;
        }
    }
    ctx->pc = 0x1FC278u;
label_1fc278:
    // 0x1fc278: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1fc27c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc280: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fc280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fc284: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1fc288: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc288u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x1fc28c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC28Cu;
    {
        const bool branch_taken_0x1fc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC28Cu;
        // 0x1fc290: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc28c) {
            ctx->pc = 0x1FC2D0u;
            goto label_1fc2d0;
        }
    }
    ctx->pc = 0x1FC294u;
label_1fc294:
    // 0x1fc294: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1fc298: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc29c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fc29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fc2a0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1fc2a4: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x1fc2a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC2A8u;
    {
        const bool branch_taken_0x1fc2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A8u;
        // 0x1fc2ac: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2a8) {
            ctx->pc = 0x1FC2D0u;
            goto label_1fc2d0;
        }
    }
    ctx->pc = 0x1FC2B0u;
label_1fc2b0:
    // 0x1fc2b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fc2b4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x1fc2b8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fc2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc2bc: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1fc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1fc2c0: 0xfe240040  sd          $a0, 0x40($s1)
    ctx->pc = 0x1fc2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 4));
    // 0x1fc2c4: 0xfe230048  sd          $v1, 0x48($s1)
    ctx->pc = 0x1fc2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 3));
    // 0x1fc2c8: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1fc2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1fc2cc: 0xfe260038  sd          $a2, 0x38($s1)
    ctx->pc = 0x1fc2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 6));
label_1fc2d0:
    // 0x1fc2d0: 0x26240fd0  addiu       $a0, $s1, 0xFD0
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4048));
label_1fc2d4:
    // 0x1fc2d4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1FC2D4u;
    SET_GPR_U32(ctx, 31, 0x1FC2DCu);
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1FC2D4u, 0x1FC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2DCu;
}
