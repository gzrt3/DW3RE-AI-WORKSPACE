// Original15-word19AA4C tail; memory-owner calls retain faults before later instructions.
#pragma warning(push)
#pragma warning(disable: 4702)
constexpr std::array<uint32_t,15> fate_recovered_0019aa4c_words{
0x54620001u,0xae130030u,0x8e020000u,0x2403fff3u,0xae000020u,0x00431024u,0xdfbf0040u,0x34420105u,0xdfb30030u,0xae020000u,0xdfb20020u,0xdfb10010u,0xdfb00000u,0x03e00008u,0x27bd0050u
};
void fate_recovered_0019aa4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch(ctx->pc) {
    case 0x0019aa4cu: goto label_19aa4c;
    case 0x0019aa50u: goto label_19aa50;
    case 0x0019aa54u: goto label_19aa54;
    case 0x0019aa58u: goto label_19aa58;
    case 0x0019aa5cu: goto label_19aa5c;
    case 0x0019aa60u: goto label_19aa60;
    case 0x0019aa64u: goto label_19aa64;
    case 0x0019aa68u: goto label_19aa68;
    case 0x0019aa6cu: goto label_19aa6c;
    case 0x0019aa70u: goto label_19aa70;
    case 0x0019aa74u: goto label_19aa74;
    case 0x0019aa78u: goto label_19aa78;
    case 0x0019aa7cu: goto label_19aa7c;
    case 0x0019aa80u: goto label_19aa80;
    case 0x0019aa84u: goto label_19aa84;
    default: throw std::runtime_error("Unexpected recovered continuation PC");
    }
label_19aa4c:
    // 0x19aa4c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_19aa50:
    if (ctx->pc == 0x19AA50u) {
        ctx->pc = 0x19AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA4Cu;
        // 0x19aa50: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        if(ctx->pc!=0x19aa50u) return;
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA54u;
        goto label_19aa54;
    }
    ctx->pc = 0x19AA4Cu;
    {
        const bool branch_taken_0x19aa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19aa4c) {
            ctx->pc = 0x19AA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AA4Cu;
            // 0x19aa50: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
            runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
            if(ctx->pc!=0x19aa50u) return;
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AA54u;
            goto label_19aa54;
        }
    }
    ctx->pc = 0x19AA54u;
label_19aa54:
    // 0x19aa54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aa54u;
    {
        const auto value=runtime->Load32(rdram,ctx,ADD32(GPR_U32(ctx,16),0));
        if(ctx->pc!=0x19aa54u) return;
        SET_GPR_S32(ctx,2,static_cast<int32_t>(value));
    }
label_19aa58:
    // 0x19aa58: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19aa5c:
    // 0x19aa5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x19aa5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    if(ctx->pc!=0x19aa5cu) return;
label_19aa60:
    // 0x19aa60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19aa64:
    // 0x19aa64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19aa64u;
    {
        const auto value=runtime->Load64(rdram,ctx,ADD32(GPR_U32(ctx,29),64));
        if(ctx->pc!=0x19aa64u) return;
        SET_GPR_U64(ctx,31,value);
    }
label_19aa68:
    // 0x19aa68: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x19aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
label_19aa6c:
    // 0x19aa6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19aa6cu;
    {
        const auto value=runtime->Load64(rdram,ctx,ADD32(GPR_U32(ctx,29),48));
        if(ctx->pc!=0x19aa6cu) return;
        SET_GPR_U64(ctx,19,value);
    }
label_19aa70:
    // 0x19aa70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19aa70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    if(ctx->pc!=0x19aa70u) return;
label_19aa74:
    // 0x19aa74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19aa74u;
    {
        const auto value=runtime->Load64(rdram,ctx,ADD32(GPR_U32(ctx,29),32));
        if(ctx->pc!=0x19aa74u) return;
        SET_GPR_U64(ctx,18,value);
    }
label_19aa78:
    // 0x19aa78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19aa78u;
    {
        const auto value=runtime->Load64(rdram,ctx,ADD32(GPR_U32(ctx,29),16));
        if(ctx->pc!=0x19aa78u) return;
        SET_GPR_U64(ctx,17,value);
    }
label_19aa7c:
    // 0x19aa7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aa7cu;
    {
        const auto value=runtime->Load64(rdram,ctx,ADD32(GPR_U32(ctx,29),0));
        if(ctx->pc!=0x19aa7cu) return;
        SET_GPR_U64(ctx,16,value);
    }
label_19aa80:
    // 0x19aa80: 0x3e00008  jr          $ra
label_19aa84:
    if (ctx->pc == 0x19AA84u) {
        ctx->pc = 0x19AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA80u;
        // 0x19aa84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA88u;
        return;
    }
    ctx->pc = 0x19AA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA80u;
        // 0x19aa84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AA88u;

}
#pragma warning(pop)
