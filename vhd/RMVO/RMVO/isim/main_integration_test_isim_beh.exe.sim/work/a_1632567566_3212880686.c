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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/John/Desktop/ENSIMAG/VHDL/RMVO/data_memory.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1632567566_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3720);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 65535, 1, t9);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t7 = (t0 + 3880);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 32U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1512U);
    t7 = *((char **)t3);
    t3 = (t0 + 1352U);
    t8 = *((char **)t3);
    t9 = *((int *)t8);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0U + t12);
    t3 = (t0 + 3816);
    t14 = (t3 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_delta(t3, t13, 32U, 0LL);
    goto LAB6;

}

static void work_a_1632567566_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(28, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3736);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1632567566_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1632567566_3212880686_p_0,(void *)work_a_1632567566_3212880686_p_1};
	xsi_register_didat("work_a_1632567566_3212880686", "isim/main_integration_test_isim_beh.exe.sim/work/a_1632567566_3212880686.didat");
	xsi_register_executes(pe);
}
