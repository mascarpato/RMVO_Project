library IEEE;
use IEEE.STD_LOGIC_1164.all;
use work.target.all;

package device is

constant iu_config : iu_config_type := (
		testboolean => true,
		testboolean2 => false,
		testinteger => 5,
		data_memory_width => 32);
end device;

package body device is
 
end device;

