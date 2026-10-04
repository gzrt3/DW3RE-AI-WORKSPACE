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

// Function: entry_001cf4e0
// Address: 0x1cf4e0 - 0x1cf534
void entry_001cf4e0_0x1cf4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf4e0_0x1cf4e0");
#endif

    ctx->pc = 0x1cf4e0u;

    // 0x1cf4e0: 0xa2950070  sb          $s5, 0x70($s4)
    ctx->pc = 0x1cf4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 21));
    // 0x1cf4e4: 0xa2970071  sb          $s7, 0x71($s4)
    ctx->pc = 0x1cf4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 23));
    // 0x1cf4e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf4ec: 0xa2960072  sb          $s6, 0x72($s4)
    ctx->pc = 0x1cf4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 114), (uint8_t)GPR_U32(ctx, 22));
    // 0x1cf4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf4f4: 0xa2830073  sb          $v1, 0x73($s4)
    ctx->pc = 0x1cf4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf4f8: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1cf4fc: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1cf4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
    // 0x1cf500: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cf504: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cf508: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cf50c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf510: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cf510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cf514: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cf514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cf518: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cf51c: 0x84830090  lh          $v1, 0x90($a0)
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1cf520: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf52c: 0xa48200d8  sh          $v0, 0xD8($a0)
    ctx->pc = 0x1cf52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cf530: 0xa48200a8  sh          $v0, 0xA8($a0)
    ctx->pc = 0x1cf530u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 168), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cf534u;
}
