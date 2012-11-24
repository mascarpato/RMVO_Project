library IEEE;
use IEEE.STD_LOGIC_1164.all;
use work.device.all;

package config is
	constant BOOLVERDADE		:	boolean	:=	iu_config.testboolean;
	constant BOOLFALSO		:	boolean	:=	iu_config.testboolean2;
	constant INTEIRO5			:	integer	:=	iu_config.testinteger;
	constant DMEMWIDTH		:	integer	:=	iu_config.data_memory_width;
end config;

package body config is
end config;