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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_0569666882;
char *WORK_P_1857352752;
char *WORK_P_3004263874;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_0569666882_init();
    work_p_1857352752_init();
    work_p_3004263874_init();
    work_a_1632567566_3212880686_init();
    work_a_1774854872_3212880686_init();
    work_a_2176492238_2372691052_init();


    xsi_register_tops("work_a_2176492238_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_0569666882 = xsi_get_engine_memory("work_p_0569666882");
    WORK_P_1857352752 = xsi_get_engine_memory("work_p_1857352752");
    WORK_P_3004263874 = xsi_get_engine_memory("work_p_3004263874");

    return xsi_run_simulation(argc, argv);

}
