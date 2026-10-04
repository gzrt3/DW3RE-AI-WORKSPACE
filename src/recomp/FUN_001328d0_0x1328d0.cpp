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

// Function: FUN_001328d0
// Address: 0x1328d0 - 0x132a88
void FUN_001328d0_0x1328d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001328d0_0x1328d0");
#endif

    switch (ctx->pc) {
        case 0x132954u: goto label_132954;
        default: break;
    }

    ctx->pc = 0x1328d0u;

    // 0x1328d0: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1328d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1328d4: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1328d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1328d8: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x1328D8u;
    {
        const bool branch_taken_0x1328d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1328d8) {
            ctx->pc = 0x132A88u;
            return;
        }
    }
    ctx->pc = 0x1328E0u;
    // 0x1328e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1328e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1328e4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1328e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1328e8: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x1328e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1328ec: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x1328ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x1328f0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1328f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1328f4: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1328f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1328f8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1328f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1328fc: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1328fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132900: 0x91030294  lbu         $v1, 0x294($t0)
    ctx->pc = 0x132900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 660)));
    // 0x132904: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x132904u;
    {
        const bool branch_taken_0x132904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132904u;
        // 0x132908: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132904) {
            ctx->pc = 0x132A88u;
            return;
        }
    }
    ctx->pc = 0x13290Cu;
    // 0x13290c: 0x2861008a  slti        $at, $v1, 0x8A
    ctx->pc = 0x13290cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)138) ? 1 : 0);
    // 0x132910: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x132910u;
    {
        const bool branch_taken_0x132910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x132910) {
            ctx->pc = 0x13291Cu;
            goto label_13291c;
        }
    }
    ctx->pc = 0x132918u;
    // 0x132918: 0x64050089  daddiu      $a1, $zero, 0x89
    ctx->pc = 0x132918u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)137);
label_13291c:
    // 0x13291c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x13291cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x132920: 0x2861008a  slti        $at, $v1, 0x8A
    ctx->pc = 0x132920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)138) ? 1 : 0);
    // 0x132924: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x132924u;
    {
        const bool branch_taken_0x132924 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x132924) {
            ctx->pc = 0x132930u;
            goto label_132930;
        }
    }
    ctx->pc = 0x13292Cu;
    // 0x13292c: 0x64060089  daddiu      $a2, $zero, 0x89
    ctx->pc = 0x13292cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)137);
label_132930:
    // 0x132930: 0xa1050291  sb          $a1, 0x291($t0)
    ctx->pc = 0x132930u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 657), (uint8_t)GPR_U32(ctx, 5));
    // 0x132934: 0xa1060290  sb          $a2, 0x290($t0)
    ctx->pc = 0x132934u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 656), (uint8_t)GPR_U32(ctx, 6));
    // 0x132938: 0x910301a2  lbu         $v1, 0x1A2($t0)
    ctx->pc = 0x132938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 418)));
    // 0x13293c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x13293Cu;
    {
        const bool branch_taken_0x13293c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13293c) {
            ctx->pc = 0x132A88u;
            return;
        }
    }
    ctx->pc = 0x132944u;
    // 0x132944: 0x8f8380d0  lw          $v1, -0x7F30($gp)
    ctx->pc = 0x132944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x132948: 0x8f8780d8  lw          $a3, -0x7F28($gp)
    ctx->pc = 0x132948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x13294c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13294Cu;
    {
        const bool branch_taken_0x13294c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13294Cu;
        // 0x132950: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13294c) {
            ctx->pc = 0x132970u;
            goto label_132970;
        }
    }
    ctx->pc = 0x132954u;
label_132954:
    // 0x132954: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x132954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132958: 0x14880003  bne         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132958u;
    {
        const bool branch_taken_0x132958 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x132958) {
            ctx->pc = 0x132968u;
            goto label_132968;
        }
    }
    ctx->pc = 0x132960u;
    // 0x132960: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x132960u;
    {
        const bool branch_taken_0x132960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132960u;
        // 0x132964: 0x30c700ff  andi        $a3, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132960) {
            ctx->pc = 0x132984u;
            goto label_132984;
        }
    }
    ctx->pc = 0x132968u;
label_132968:
    // 0x132968: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x132968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13296c: 0x24632150  addiu       $v1, $v1, 0x2150
    ctx->pc = 0x13296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8528));
label_132970:
    // 0x132970: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x132970u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x132974: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x132974u;
    {
        const bool branch_taken_0x132974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x132974) {
            ctx->pc = 0x132954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132954;
        }
    }
    ctx->pc = 0x13297Cu;
    // 0x13297c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13297cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132980: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x132980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_132984:
    // 0x132984: 0x28e10057  slti        $at, $a3, 0x57
    ctx->pc = 0x132984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x132988: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x132988u;
    {
        const bool branch_taken_0x132988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132988u;
        // 0x13298c: 0x28e1005f  slti        $at, $a3, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)95) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132988) {
            ctx->pc = 0x1329B4u;
            goto label_1329b4;
        }
    }
    ctx->pc = 0x132990u;
    // 0x132990: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x132990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132994: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132998: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x132998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13299c: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x1329a0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1329a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1329a4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1329a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1329a8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1329a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1329ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1329ACu;
    {
        const bool branch_taken_0x1329ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329ACu;
        // 0x1329b0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329ac) {
            ctx->pc = 0x132A00u;
            goto label_132a00;
        }
    }
    ctx->pc = 0x1329B4u;
label_1329b4:
    // 0x1329b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1329B4u;
    {
        const bool branch_taken_0x1329b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329B4u;
        // 0x1329b8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329b4) {
            ctx->pc = 0x1329C4u;
            goto label_1329c4;
        }
    }
    ctx->pc = 0x1329BCu;
    // 0x1329bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1329BCu;
    {
        const bool branch_taken_0x1329bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329BCu;
        // 0x1329c0: 0x2484e7f0  addiu       $a0, $a0, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329bc) {
            ctx->pc = 0x132A00u;
            goto label_132a00;
        }
    }
    ctx->pc = 0x1329C4u;
label_1329c4:
    // 0x1329c4: 0x28e10060  slti        $at, $a3, 0x60
    ctx->pc = 0x1329c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1329c8: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1329C8u;
    {
        const bool branch_taken_0x1329c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1329CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329C8u;
        // 0x1329cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329c8) {
            ctx->pc = 0x132A00u;
            goto label_132a00;
        }
    }
    ctx->pc = 0x1329D0u;
    // 0x1329d0: 0x28e10089  slti        $at, $a3, 0x89
    ctx->pc = 0x1329d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x1329d4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1329D4u;
    {
        const bool branch_taken_0x1329d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329d4) {
            ctx->pc = 0x132A00u;
            goto label_132a00;
        }
    }
    ctx->pc = 0x1329DCu;
    // 0x1329dc: 0x24e7fff7  addiu       $a3, $a3, -0x9
    ctx->pc = 0x1329dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967287));
    // 0x1329e0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1329e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1329e4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1329e8: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x1329e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x1329ec: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1329ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1329f0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1329f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1329f4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1329f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1329f8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1329f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1329fc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1329fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_132a00:
    // 0x132a00: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x132a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x132a04: 0x28c10057  slti        $at, $a2, 0x57
    ctx->pc = 0x132a04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x132a08: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x132A08u;
    {
        const bool branch_taken_0x132a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A08u;
        // 0x132a0c: 0xac642120  sw          $a0, 0x2120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a08) {
            ctx->pc = 0x132A34u;
            goto label_132a34;
        }
    }
    ctx->pc = 0x132A10u;
    // 0x132a10: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132a18: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x132a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x132a1c: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x132a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x132a20: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a24: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x132a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x132a28: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x132a2c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x132A2Cu;
    {
        const bool branch_taken_0x132a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A2Cu;
        // 0x132a30: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a2c) {
            ctx->pc = 0x132A84u;
            goto label_132a84;
        }
    }
    ctx->pc = 0x132A34u;
label_132a34:
    // 0x132a34: 0x28c1005f  slti        $at, $a2, 0x5F
    ctx->pc = 0x132a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)95) ? 1 : 0);
    // 0x132a38: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x132A38u;
    {
        const bool branch_taken_0x132a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A38u;
        // 0x132a3c: 0x28c10060  slti        $at, $a2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a38) {
            ctx->pc = 0x132A4Cu;
            goto label_132a4c;
        }
    }
    ctx->pc = 0x132A40u;
    // 0x132a40: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132a44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x132A44u;
    {
        const bool branch_taken_0x132a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A44u;
        // 0x132a48: 0x2484e7f0  addiu       $a0, $a0, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a44) {
            ctx->pc = 0x132A84u;
            goto label_132a84;
        }
    }
    ctx->pc = 0x132A4Cu;
label_132a4c:
    // 0x132a4c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x132A4Cu;
    {
        const bool branch_taken_0x132a4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x132A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A4Cu;
        // 0x132a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a4c) {
            ctx->pc = 0x132A84u;
            goto label_132a84;
        }
    }
    ctx->pc = 0x132A54u;
    // 0x132a54: 0x28c10089  slti        $at, $a2, 0x89
    ctx->pc = 0x132a54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x132a58: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x132A58u;
    {
        const bool branch_taken_0x132a58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a58) {
            ctx->pc = 0x132A84u;
            goto label_132a84;
        }
    }
    ctx->pc = 0x132A60u;
    // 0x132a60: 0x24c6fff7  addiu       $a2, $a2, -0x9
    ctx->pc = 0x132a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967287));
    // 0x132a64: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x132a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x132a68: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a6c: 0x2484a4c0  addiu       $a0, $a0, -0x5B40
    ctx->pc = 0x132a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    // 0x132a70: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x132a74: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132a78: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x132a7c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x132a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x132a80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_132a84:
    // 0x132a84: 0xac642124  sw          $a0, 0x2124($v1)
    ctx->pc = 0x132a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8484), GPR_U32(ctx, 4));
    ctx->pc = 0x132a88u;
}
