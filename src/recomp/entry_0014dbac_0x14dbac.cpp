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

// Function: entry_0014dbac
// Address: 0x14dbac - 0x14dc08
void entry_0014dbac_0x14dbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dbac_0x14dbac");
#endif

    switch (ctx->pc) {
        case 0x14dbfcu: goto label_14dbfc;
        default: break;
    }

    ctx->pc = 0x14dbacu;

    // 0x14dbac: 0x80a4002a  lb          $a0, 0x2A($a1)
    ctx->pc = 0x14dbacu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x14dbb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dbb4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DBB4u;
    {
        const bool branch_taken_0x14dbb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14dbb4) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DBBCu;
    // 0x14dbbc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14dbc0: 0x8c640200  lw          $a0, 0x200($v1)
    ctx->pc = 0x14dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x14dbc4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14DBC4u;
    {
        const bool branch_taken_0x14dbc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbc4) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DBCCu;
    // 0x14dbcc: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x14dbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x14dbd0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14DBD0u;
    {
        const bool branch_taken_0x14dbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dbd0) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DBD8u;
    // 0x14dbd8: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x14dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14dbdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14dbe0: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x14dbe4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dbe8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14dbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14dbec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DBECu;
    {
        const bool branch_taken_0x14dbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbec) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DBF4u;
    // 0x14dbf4: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14DBF4u;
    SET_GPR_U32(ctx, 31, 0x14DBFCu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14DBF4u, 0x14DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DBFCu;
label_14dbfc:
    // 0x14dbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc00: 0xc0594dc  jal         func_165370
    ctx->pc = 0x14DC00u;
    SET_GPR_U32(ctx, 31, 0x14DC08u);
    ctx->pc = 0x14DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC00u;
    // 0x14dc04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165370u, 0x14DC00u, 0x14DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC08u;
}
