/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/saav9/work03-simulacion-OV7670-Grupo3/hw/src/buffer_ram_dp.v";
static int ng1[] = {1, 0};
static int ng2[] = {19200, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {778921326, 0, 1835100005, 0, 1919102825, 0, 115, 0};
static unsigned int ng5[] = {32767U, 0U};



static void Always_41_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t42[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    int t53;
    char *t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;

LAB0:    t1 = (t0 + 3864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4680);
    *((int *)t2) = 1;
    t3 = (t0 + 3896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t28 = (t0 + 1752U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB15;

LAB14:    t32 = (t28 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t29) > *((unsigned int *)t28))
        goto LAB17;

LAB16:    *((unsigned int *)t30) = 1;

LAB17:    t34 = (t30 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    t4 = (t0 + 2952);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2952);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 1752U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t29, 15, 2);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t53 = (!(t9));
    t31 = (t30 + 4);
    t10 = *((unsigned int *)t31);
    t56 = (!(t10));
    t57 = (t53 && t56);
    if (t57 == 1)
        goto LAB24;

LAB25:
LAB21:    goto LAB12;

LAB15:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(43, ng0);
    t40 = (t0 + 1912U);
    t41 = *((char **)t40);
    t40 = (t0 + 2952);
    t44 = (t0 + 2952);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 2952);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 1752U);
    t51 = *((char **)t50);
    xsi_vlog_generic_convert_array_indices(t42, t43, t46, t49, 2, 1, t51, 15, 2);
    t50 = (t42 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (!(t52));
    t54 = (t43 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (!(t55));
    t57 = (t53 && t56);
    if (t57 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    t58 = *((unsigned int *)t42);
    t59 = *((unsigned int *)t43);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_wait_assign_value(t40, t41, 0, *((unsigned int *)t43), t61, 0LL);
    goto LAB23;

LAB24:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t60 = (t11 - t12);
    t61 = (t60 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t30), t61, 0LL);
    goto LAB25;

}

static void Always_49_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4696);
    *((int *)t2) = 1;
    t3 = (t0 + 4144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2952);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2952);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 2392U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 15, 2);
    t14 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 8, 0LL);
    goto LAB2;

}

static void Initial_54_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2952);
    xsi_vlogfile_readmemh(t1, 104, t2, 0, 0, 0, 0);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2952);
    t5 = (t0 + 2952);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2952);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 15, 2);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

}


extern void work_m_01111100697046049681_0418314598_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_49_1,(void *)Initial_54_2};
	xsi_register_didat("work_m_01111100697046049681_0418314598", "isim/test_cam_TB_isim_beh.exe.sim/work/m_01111100697046049681_0418314598.didat");
	xsi_register_executes(pe);
}
