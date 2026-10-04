#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

// Recovered from the identified XL ELF, 001ad518..001ad58c.
// These are game-installed syscall bodies, not replacements for EE builtins.
void fate_boot_copy_handler(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    ctx->pc=0x001ad518u;
    SET_GPR_U64(ctx,6,GPR_U32(ctx,6)>>2u);
    SET_GPR_U64(ctx,7,0);
    if (GPR_U64(ctx,6)!=0) {
        do {
            ctx->pc=0x001ad528u;
            SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(GPR_U32(ctx,5))));
            SET_GPR_S32(ctx,7,static_cast<int32_t>(ADD32(GPR_U32(ctx,7),1u)));
            SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),4u)));
            SET_GPR_U64(ctx,2,GPR_U64(ctx,7)<GPR_U64(ctx,6)?1u:0u);
            WRITE32(GPR_U32(ctx,4),GPR_U32(ctx,3));
            SET_GPR_S32(ctx,4,static_cast<int32_t>(ADD32(GPR_U32(ctx,4),4u)));
            ctx->branch_pc=0x001ad540u;
        } while (GPR_U64(ctx,2)!=0);
    }
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001ad54cu;
    ctx->in_delay_slot=true;
    ctx->branch_pc=0x001ad548u;
    SET_GPR_U64(ctx,2,0);
    ctx->in_delay_slot=false;
    ctx->pc=target;
}

void fate_boot_find_handler(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    ctx->pc=0x001ad550u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(GPR_U32(ctx,4))));
    bool found=GPR_U64(ctx,2)==GPR_U64(ctx,6);
    SET_GPR_U64(ctx,2,GPR_U64(ctx,4)<GPR_U64(ctx,5)?1u:0u);
    if (!found && GPR_U64(ctx,2)!=0) {
        for (;;) {
            SET_GPR_S32(ctx,4,static_cast<int32_t>(ADD32(GPR_U32(ctx,4),4u)));
            ctx->pc=0x001ad568u;
            SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(GPR_U32(ctx,4))));
            found=GPR_U64(ctx,2)==GPR_U64(ctx,6);
            SET_GPR_U64(ctx,2,GPR_U64(ctx,4)<GPR_U64(ctx,5)?1u:0u);
            if(found || GPR_U64(ctx,2)==0) break;
        }
    }
    // movz a0, zero, v0 clears the address when the delay-slot sltu is zero.
    if(GPR_U64(ctx,2)==0) SET_GPR_U64(ctx,4,0);
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001ad58cu;
    ctx->in_delay_slot=true;
    ctx->branch_pc=0x001ad588u;
    SET_GPR_U64(ctx,2,GPR_U64(ctx,4));
    ctx->in_delay_slot=false;
    ctx->pc=target;
}
