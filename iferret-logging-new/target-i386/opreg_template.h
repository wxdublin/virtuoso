/*
 *  i386 micro operations (templates for various register related
 *  operations)
 *
 *  Copyright (c) 2003 Fabrice Bellard
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */



void OPPROTO glue(glue(op_movl_A0,REGNAME),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVL_A0_R,REGNUM);
    A0 = (uint32_t)REG;
}

void OPPROTO glue(glue(op_addl_A0,REGNAME),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_ADDL_A0_R,REGNUM);
    A0 = (uint32_t)(A0 + REG);
}

void OPPROTO glue(glue(glue(op_addl_A0,REGNAME),_s1),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_ADDL_A0_R_S1,REGNUM);
    A0 = (uint32_t)(A0 + (REG << 1));
}

void OPPROTO glue(glue(glue(op_addl_A0,REGNAME),_s2),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_ADDL_A0_R_S2,REGNUM);
    A0 = (uint32_t)(A0 + (REG << 2));
}

void OPPROTO glue(glue(glue(op_addl_A0,REGNAME),_s3),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_ADDL_A0_R_S3,REGNUM);
    A0 = (uint32_t)(A0 + (REG << 3));
}

#ifdef TARGET_X86_64
void OPPROTO glue(glue(op_movq_A0,REGNAME),IFERRET_LOGTHING)(void)
{
    A0 = REG;
}

void OPPROTO glue(glue(op_addq_A0,REGNAME),IFERRET_LOGTHING)(void)
{
    A0 = (A0 + REG);
}

void OPPROTO glue(glue(glue(op_addq_A0,REGNAME),_s1),IFERRET_LOGTHING)(void)
{
    A0 = (A0 + (REG << 1));
}

void OPPROTO glue(glue(glue(op_addq_A0,REGNAME),_s2),IFERRET_LOGTHING)(void)
{
    A0 = (A0 + (REG << 2));
}

void OPPROTO glue(glue(glue(op_addq_A0,REGNAME),_s3),IFERRET_LOGTHING)(void)
{
    A0 = (A0 + (REG << 3));
}
#endif

void OPPROTO glue(glue(op_movl_T0,REGNAME),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVL_T0_R,REGNUM);
    T0 = REG;
}

void OPPROTO glue(glue(op_movl_T1,REGNAME),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVL_T1_R,REGNUM);
    T1 = REG;
}

void OPPROTO glue(glue(op_movh_T0,REGNAME),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVH_T0_R,REGNUM);
    T0 = REG >> 8;
}

void OPPROTO glue(glue(op_movh_T1,REGNAME),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVH_T1_R,REGNUM);
    T1 = REG >> 8;
}

void OPPROTO glue(glue(glue(op_movl,REGNAME),_T0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVL_R_T0,REGNUM);
    REG = (uint32_t)T0;
}

void OPPROTO glue(glue(glue(op_movl,REGNAME),_T1),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVL_R_T1,REGNUM);
    REG = (uint32_t)T1;
}

void OPPROTO glue(glue(glue(op_movl,REGNAME),_A0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVL_R_A0,REGNUM);
    REG = (uint32_t)A0;
}

#ifdef TARGET_X86_64
void OPPROTO glue(glue(glue(op_movq,REGNAME),_T0),IFERRET_LOGTHING)(void)
{
    REG = T0;
}

void OPPROTO glue(glue(glue(op_movq,REGNAME),_T1),IFERRET_LOGTHING)(void)
{
    REG = T1;
}

void OPPROTO glue(glue(glue(op_movq,REGNAME),_A0),IFERRET_LOGTHING)(void)
{
    REG = A0;
}
#endif

/* mov T1 to REG if T0 is true */
void OPPROTO glue(glue(glue(op_cmovw,REGNAME),_T1_T0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_14(IFLO_OPREG_TEMPL_CMOVW_R_T1_T0,REGNUM,T0);
  if (T0) {
        REG = (REG & ~0xffff) | (T1 & 0xffff);
  }
    FORCE_RET();
}

void OPPROTO glue(glue(glue(op_cmovl,REGNAME),_T1_T0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_14(IFLO_OPREG_TEMPL_CMOVL_R_T1_T0,REGNUM,T0);
  if (T0) {
        REG = (uint32_t)T1;
  }
    FORCE_RET();
}

#ifdef TARGET_X86_64
void OPPROTO glue(glue(glue(op_cmovq,REGNAME),_T1_T0),IFERRET_LOGTHING)(void)
{
  if (T0) {
        REG = T1;
  }
    FORCE_RET();
}
#endif

/* NOTE: T0 high order bits are ignored */
void OPPROTO glue(glue(glue(op_movw,REGNAME),_T0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVW_R_T0,REGNUM);
    REG = (REG & ~0xffff) | (T0 & 0xffff);
}

/* NOTE: T0 high order bits are ignored */
void OPPROTO glue(glue(glue(op_movw,REGNAME),_T1),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVW_R_T1,REGNUM);
    REG = (REG & ~0xffff) | (T1 & 0xffff);
}

/* NOTE: A0 high order bits are ignored */
void OPPROTO glue(glue(glue(op_movw,REGNAME),_A0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVW_R_A0,REGNUM);
    REG = (REG & ~0xffff) | (A0 & 0xffff);
}

/* NOTE: T0 high order bits are ignored */
void OPPROTO glue(glue(glue(op_movb,REGNAME),_T0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVB_R_T0,REGNUM);
    REG = (REG & ~0xff) | (T0 & 0xff);
}

/* NOTE: T0 high order bits are ignored */
void OPPROTO glue(glue(glue(op_movh,REGNAME),_T0),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVH_R_T0,REGNUM);
    REG = (REG & ~0xff00) | ((T0 & 0xff) << 8);
}

/* NOTE: T1 high order bits are ignored */
void OPPROTO glue(glue(glue(op_movb,REGNAME),_T1),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVB_R_T1,REGNUM);
    REG = (REG & ~0xff) | (T1 & 0xff);
}

/* NOTE: T1 high order bits are ignored */
void OPPROTO glue(glue(glue(op_movh,REGNAME),_T1),IFERRET_LOGTHING)(void)
{
  iferret_log_info_flow_op_write_1(IFLO_OPREG_TEMPL_MOVH_R_T1,REGNUM);
    REG = (REG & ~0xff00) | ((T1 & 0xff) << 8);
}

#undef REGNAME
#undef REGNUM
